const {
  node_with_immediate,
  immediate,
  arglist,
  specifier,
} = require("./utils.js");

module.exports = {
  command: ($) =>
    seq(
      choice(
        $.command_exec,
        $.command_exec_once,
        $.command_source,
        $.command_layerrule,
        $.command_env,
        $.command_envd,
        $.command_monitor,
        $.command_bind,
        $.command_unbind
      ),
      $._newline
    ),

  shell_command: (_$) => /(?:[^#\n]*(?:##)?)+/,
  command_exec: ($) => command("exec", $.shell_command),
  command_exec_once: ($) => command("exec-once", $.shell_command),

  command_source: ($) => command("source", $.str),

  address_specifier: ($) =>
    specifier(
      "address",
      seq(
        token.immediate("0x"),
        field("address", immediate($, "hex"))
      )
    ),

  layer_rule: (_$) => choice("blur", "unset"),
  layer_identifier: ($) =>
    choice($.address_specifier, alias($.word, $.layer_namespace)),
  command_layerrule: ($) =>
    command(
      "layerrule",
      arglist(
        field("rule", $.layer_rule),
        field("identifier", $.layer_identifier)
      )
    ),

  command_env: ($) =>
    command("env", arglist(field("name", $.word), field("value", $.str))),
  command_envd: ($) =>
    command("envd", arglist(field("name", $.word), field("value", $.str))),

  monitor_desc: (_$) =>
    seq(
      "desc",
      token.immediate(":"),
      field("description", token.immediate(/[^,]+/))
    ),
  _monitor_name: ($) => choice($.word, $.monitor_desc),
  resolution: ($) =>
    seq(
      field("width", $.int),
      $.by,
      field("height", immediate($, "int")),
      optional(seq($.at, field("refresh_rate", immediate($, "int"))))
    ),
  position: ($) =>
    seq(field("x_offset", $.int), $.by, field("y_offset", immediate($, "int"))),
  auto_resolution: (_$) => choice("preferred", "highres", "highrr"),
  _monitor_disable: ($) => arglist(field("name", $._monitor_name), $.disable),

  mirror: ($) => arglist("mirror", field("monitor", $._monitor_name)),
  bitdepth: ($) => arglist("bitdepth", field("bitdepth", $.int)),
  transform: ($) => arglist("transform", field("transform", $.int)),

  _monitor_config_optional: ($) =>
    seq(",", choice($.mirror, $.bitdepth, $.transform)),
  _monitor_config: ($) =>
    seq(
      arglist(
        optional(field("name", $._monitor_name)),
        field("resolution", choice($.resolution, $.auto_resolution)),
        field("position", choice($.position, $.auto)),
        field("scale", choice($.float, $.auto))
      ),
      repeat($._monitor_config_optional)
    ),
  command_monitor: ($) =>
    command("monitor", choice($._monitor_disable, $._monitor_config)),

  ...require("./assets/xkb_key_names.js"),
  keycode: ($) =>
    seq("code", token.immediate(":"), immediate($, 'int')),
  mousecode: ($) =>
    seq("mouse", token.immediate(":"), immediate($, 'int')),
  key: ($) => choice($.keycode, $.mousecode, $.symbol),

  bind_flag: (_$) => choice(...["l", "r", "e"].map(token.immediate)),
  _bind_flags: ($) => repeat1($.bind_flag),
  _mouse_bind: ($) =>
    command(
      seq(
        "bind",
        optional($._bind_flags),
        alias(token.immediate("m"), $.bind_flag),
        optional($._bind_flags)
      ),
      arglist(optional($.mods), $.key, $._mouse_dispatcher)
    ),
  _regular_bind: ($) =>
    command(
      seq("bind", optional($._bind_flags)),
      arglist(optional($.mods), $.key, $.dispatcher),
    ),
  command_bind: ($) => choice($._mouse_bind, $._regular_bind),

  command_unbind: ($) => command("unbind", arglist(optional($.mods), $.key)),

  by: (_$) => token.immediate("x"),
  at: (_$) => token.immediate("@"),
  auto: (_$) => "auto",
  disable: (_$) => "disable",
  current: (_$) => "current",
  exact: (_$) => "exact",
  previous: (_$) => "previous",
  empty: (_$) => "empty",

  ...require("./dispatchers"),
  ...require("./window_rules"),
};

function command(name, ...next) {
  return seq(field("name", name), "=", ...next);
}
