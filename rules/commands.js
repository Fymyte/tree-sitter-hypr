module.exports = {
  command: ($) =>
    choice(
      $.command_exec,
      $.command_exec_once,
      $.command_source,
      $.command_layerrule,
      $.command_env,
      $.command_envd,
      $.command_monitor
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
      field("rule", $.layer_rule),
      field("identifier", $.layer_identifier)
    ),

  command_env: ($) =>
    command("env", field("name", $.word), field("value", $.str)),
  command_envd: ($) =>
    command("envd", field("name", $.word), field("value", $.str)),

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
  command_monitor: ($) =>
    command(
      "monitor",
      optional(field("name", $.word)),
      field("resolution", choice($.resolution, $.auto_resolution)),
      field("position", choice($.position, $.auto)),
      field("scale", choice($.float, $.auto))
    ),

  by: (_$) => token.immediate("x"),
  at: (_$) => token.immediate("@"),
  auto: (_$) => "auto",
};

function command(name, ...next) {
  return seq(field("name", name), "=", field("arguments", arglist(...next)));
}

function arglist(...args) {
  return seq(args.at(0), ...args.slice(1).flatMap((arg) => [",", arg]));
}
