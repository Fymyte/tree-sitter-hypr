/// <reference types="tree-sitter-cli/dsl" />

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

module.exports = grammar({
  name: "hypr",

  extras: ($) => [/\s/, $.comment],

  rules: {
    config_file: ($) =>
      repeat(
        choice(
          $._newline,
          $.variable_section,
          $.command
        )
      ),

    comment: ($) => seq("#", /[^\n]*/, $._newline),

    int: (_$) => /[+-]?\d+/,
    _immediate_int: (_$) => token.immediate(/[+-]?\d+/),
    float: (_$) => /[+-]?\d+(?:\.\d*)?|[+-]?\.\d+/,
    _immediate_float: (_$) => token.immediate(/[+-]?\d+(?:\.\d*)?|[+-]?\.\d+/),
    vec2: ($) => seq($.float, $.float),
    mod: (_$) => choice(...MODS_LIST),
    mods: ($) => sep1($.mod, /[^,]*/),
    bool: ($) => choice($._bool_literal, $._bool_integer),
    _bool_literal: (_$) => choice("true", "false", "yes", "no", "on", "off"),
    _bool_integer: (_$) => choice("0", "1"),

    color: ($) => choice($.color_rgb, $.color_rgba, $.color_hex),
    color_rgb: ($) =>
      seq(
        "rgb",
        token.immediate("("),
        repeatn($._hex_comp, 3),
        token.immediate(")")
      ),
    color_rgba: ($) =>
      seq(
        "rgba",
        token.immediate("("),
        repeatn($._hex_comp, 4),
        token.immediate(")")
      ),
    color_hex: ($) => seq("0x", repeatn($._hex_comp, 4)),
    _hex_comp: (_$) => token.immediate(/[a-fA-F0-9]{2}/),

    gradient: ($) => seq(repeat1($.color), optional($.degree)),
    degree: ($) => seq($.int, field("unit", token.immediate("deg"))),

    str: (_$) => /\S+/,
    word: (_$) => /[a-zA-Z0-9-_]+/,

    variable_reference: (_$) => seq("$", /\w+/),

    _newline: (_$) => "\n",

    ...require("./rules/variables"),
    ...require("./rules/commands"),
  },
});

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function repeatn(rule, n) {
  return seq(...Array(n).fill(rule));
}
