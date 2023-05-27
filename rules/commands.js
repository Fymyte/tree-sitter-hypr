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
        $.command_monitor
      ),
      $._newline
    ),

  shell_command: (_$) => /(?:[^#\n]*(?:##)?)+/,
  command_exec: ($) => command("exec", $.shell_command),
  command_exec_once: ($) => command("exec-once", $.shell_command),

  command_source: ($) => command("source", $.str),

  layer_rule: (_$) => choice("blur", "unset"),
  layer_address: (_$) =>
    seq(
      "address",
      token.immediate(":"),
      token.immediate("0x"),
      field("address", token.immediate(/[a-fA-F0-9]*/))
    ),
  layer_identifier: ($) =>
    choice($.layer_address, alias($.word, $.layer_namespace)),
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
      field("height", alias($._immediate_int, $.int)),
      optional(seq($.at, field("refresh_rate", alias($._immediate_int, $.int))))
    ),
  position: ($) =>
    seq(
      field("x_offset", $.int),
      $.by,
      field("y_offset", alias($._immediate_int, $.int))
    ),
  auto_resolution: (_$) => choice("preferred", "highres", "highrr"),
  _monitor_disable: ($) => arglist(field("name", $._monitor_name), $.disable),

  mirror: ($) => arglist("mirror", field("mirror", $._monitor_name)),
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

  by: (_$) => token.immediate("x"),
  at: (_$) => token.immediate("@"),
  auto: (_$) => "auto",
  disable: (_$) => "disable",
};

function command(name, next) {
  return seq(field("name", name), "=", next);
}

function arglist(...args) {
  return seq(args.at(0), ...args.slice(1).flatMap((arg) => [",", arg]));
}
