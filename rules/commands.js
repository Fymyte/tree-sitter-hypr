module.exports = {
  command: ($) =>
    choice(
      $.command_exec,
      $.command_exec_once,
      $.command_source,
      $.command_layerrule
    ),

  shell_command: (_$) => /(?:[^#\n]*(?:##)?)+/,
  command_exec: ($) => command("exec", seq($.shell_command, $._newline)),
  command_exec_once: ($) =>
    command("exec-once", seq($.shell_command, $._newline)),

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
    command("layerrule", arglist($.layer_rule, $.layer_identifier)),
};

function command(name, next) {
  return seq(field("name", name), "=", field("arguments", next));
}

function arglist(...args) {
  return seq(args.at(0), ...args.slice(1).flatMap((arg) => [",", arg]));
}
