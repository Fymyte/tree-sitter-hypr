/// <reference types="tree-sitter-cli/dsl" />

const {
  node_with_immediate,
  immediate,
  sep1,
  repeatn,
} = require("./rules/utils");

const MODS_LIST = [
  "SHIFT",
  "CAPS",
  "CTRL",
  "CONTROL",
  "ALT",
  "MOD2",
  "MOD3",
  "SUPER",
  "WIN",
  "LOGO",
  "MOD4",
  "MOD5",
];

const VALID_BOOL = ["true", "false", "yes", "no", "on", "off", "0", "1"];
module.exports = grammar({
  name: "hypr",

  extras: ($) => [/\s/, $.comment],

  rules: {
    config_file: ($) =>
      repeat(choice($._newline, $.variable_section, $.command)),

    comment: (_$) => seq("#", token.immediate(/[^\n]*/)),
    _newline: (_$) => "\n",

    ...node_with_immediate("int", /[+-]?\d+/),
    ...node_with_immediate("_100", /100/),
    ...node_with_immediate("float", /[+-]?\d+(?:\.\d*)?|[+-]?\.\d+/),
    ...node_with_immediate("hex", /[a-fA-F0-9]+/),
    // The regex only starts with the first non whitespace character
    ...node_with_immediate("regex", seq(/\S/, repeat(/[^,\n]/))),
    vec2: ($) => seq($.float, $.float),
    mod: (_$) => choice(...MODS_LIST),
    // Use repeat instead of regex '*' to use tree-sitter precedence and prefere matching mod instead of getting
    // a greedy match with regex.
    mods: ($) => sep1($.mod, repeat(/[^,]/)),
    ...node_with_immediate("bool", choice(...VALID_BOOL)),
    _object_id: ($) => alias(/\d+/, $.int),

    _negative_percent_percent: ($) => seq($.int, token.immediate("%-")),
    _negative_percent: ($) =>
      seq(
        alias($._negative_percent_percent, $.percent),
        immediate($, "int")
      ),
    percent: ($) => seq($.int, token.immediate("%")),

    color: ($) => choice($.color_rgb, $.color_rgba, $.color_hex),
    color_rgb: ($) =>
      seq(
        "rgb",
        token.immediate("("),
        alias($._color_hex3, $.hex),
        token.immediate(")")
      ),
    color_rgba: ($) =>
      seq(
        "rgba",
        token.immediate("("),
        alias($._color_hex4, $.hex),
        token.immediate(")")
      ),
    color_hex: ($) => seq("0x", alias($._color_hex4, $.hex)),
    _color_hex3: ($) => repeatn($._hex_comp, 3),
    _color_hex4: ($) => repeatn($._hex_comp, 4),
    _hex_comp: (_$) => token.immediate(/[a-fA-F0-9]{2}/),

    gradient: ($) => seq(repeat1($.color), optional($.degree)),
    degree: ($) => seq($.int, field("unit", token.immediate("deg"))),

    str: (_$) => /\S+/,
    ...node_with_immediate("word", /[a-zA-Z0-9-_]+/),

    variable_reference: (_$) => seq("$", /\w+/),

    ...require("./rules/variables"),
    ...require("./rules/commands"),
    ...require("./rules/animations"),
  },
});
