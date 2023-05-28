const {
  node_with_immediate,
  sep1,
  immediate,
  arglist,
  specifier,
  optional_specifier,
} = require("./utils.js");
const MOUSE_DISPATCHERS = ["movewindow", "resizewindow"];

module.exports = {
  title_specifier: ($) => specifier("title", immediate($, "regex")),
  pid_specifier: ($) => specifier("pid", immediate($, "int")),

  window_identifier: ($) =>
    choice($.title_specifier, $.pid_specifier, $.address_specifier, $.regex),

  direction: (_$) => choice("l", "r", "u", "d"),

  _object_id: ($) => alias(/\d+/, $.int),
  ...node_with_immediate("_relative", /[+-]\d+/, "int"),
  monitor: ($) =>
    choice(
      $.direction,
      field("id", $._object_id),
      field("name", $._monitor_name),
      $.current,
      field("relative", $._relative)
    ),
  workspace_relative_specifier: (_$) => choice("m", "r", "e"),
  workspace_relative: ($) =>
    seq($.workspace_relative_specifier, immediate($, "_relative")),
  workspace_special: ($) => optional_specifier("special", immediate($, "word")),
  workspace: ($) =>
    choice(
      field("id", $._object_id),
      field("relative_id", $._relative),
      field("relative", $.workspace_relative),
      field("name", specifier("name", $.word)),
      $.previous,
      $.empty,
      field("special", $.workspace_special)
    ),
  resizeparams: ($) => seq(optional($.exact), $.vec2),
  floatvalue: ($) => seq(optional($.exact), $.float),
  workspaceopt: (_$) => choice("allfloat", "allpseudo"),
  _workspace_window: ($) =>
    seq($.workspace, optional(seq(",", $.window_identifier))),

  prev: (_$) => "prev",

  lock_option: ($) => choice($.lock, $.unlock, $.toggle),
  lock: (_$) => "lock",
  unlock: (_$) => "unlock",
  toggle: (_$) => "toggle",

  _mouse_dispatcher: ($) => alias(choice(...MOUSE_DISPATCHERS), $.dispatcher),

  _exec: ($) =>
    dispatcher(
      "exec",
      seq(optional(seq("[", sep1($.windowrule, ";"))), $.shell_command)
    ),
  _execr: ($) => dispatcher("execr", $.shell_command),
  _pass: ($) => dispatcher("pass", $.window_identifier),
  _killactive: (_$) => dispatcher("killactive"),
  _closewindow: ($) => dispatcher("closewindow", $.window_identifier),
  _workspace: ($) => dispatcher("workspace", $.workspace),
  _movetoworkspace: ($) => dispatcher("movetoworkspace", $._workspace_window),
  _movetoworkspacesilent: ($) =>
    dispatcher("movetoworkspacesilent", $._workspace_window),
  _togglefloating: ($) =>
    dispatcher(
      "togglefloating",
      optional(choice("active", $.window_identifier))
    ),
  _fullscreen: ($) => dispatcher("fullscreen", alias(choice("0", "1"), $.int)),
  _fakefullscreen: (_$) => dispatcher("fakefullscreen"),
  _dpms: ($) =>
    dispatcher(
      "dpms",
      seq(alias(choice("on", "off"), $.bool), optional($.monitor))
    ),
  _pin: ($) =>
    dispatcher("pin", optional(choice("active", $.window_identifier))),
  _movefocus: ($) => dispatcher("movefocus", $.direction),
  _movewindow: ($) =>
    dispatcher("movewindow", choice($.direction, seq("mon:", $.monitor))),
  _swapwindow: ($) => dispatcher("swapwindow", $.direction),
  _centerwindow: (_$) => dispatcher("centerwindow"),
  _resizeactive: ($) => dispatcher("resizeactive", $.resizeparams),
  _moveactive: ($) => dispatcher("moveactive", $.resizeparams),
  _resizewindowpixel: ($) =>
    dispatcher("resizewindowpixel", $.resizeparams, $.window_identifier),
  _movewindowpixel: ($) =>
    dispatcher("movewindowpixel", $.resizeparams, $.window_identifier),
  _cyclenext: ($) => dispatcher("cyclenext", $.prev),
  _swapnext: ($) => dispatcher("swapnext", $.prev),
  _focuswindow: ($) => dispatcher("focuswindow", $.window_identifier),
  _focusmonitor: ($) => dispatcher("focusmonitor", $.monitor),
  _splitratio: ($) => dispatcher("splitratio", $.floatvalue),
  _toggleopaque: (_$) => dispatcher("toggleopaque"),
  _movecursortocorner: ($) =>
    dispatcher("movecursortocorner", alias(choice("0", "1", "2", "3"), $.int)),
  _movecursor: ($) => dispatcher("movecursor", $.int, $.int),
  _workspaceopt: ($) => dispatcher("workspaceopt", $.workspaceopt),
  _renameworkspace: ($) =>
    dispatcher("renameworkspace", seq($._object_id, $.word)),
  _exit: (_$) => dispatcher("exit"),
  _forcerendererreload: (_$) => dispatcher("forcerendererreload"),
  _movecurrentworkspacetomonitor: ($) =>
    dispatcher("movecurrentworkspacetomonitor", $.monitor),
  _moveworkspacetomonitor: ($) =>
    dispatcher("moveworkspacetomonitor", seq($.workspace, $.monitor)),
  _swapactiveworkspaces: ($) =>
    dispatcher("swapactiveworkspaces", seq($.monitor, $.monitor)),
  _bringactivetotop: (_$) => dispatcher("bringactivetotop"),
  _togglespecialworkspace: ($) =>
    dispatcher("togglespecialworkspace", optional($.word)),
  _focusurgentorlast: (_$) => dispatcher("focusurgentorlast"),
  _togglegroup: (_$) => dispatcher("togglegroup"),
  _changegroupactive: (_$) => dispatcher("changegroupactive", choice("b", "f")),
  _focuscurrentorlast: (_$) => dispatcher("focuscurrentorlast"),
  _lockgroups: ($) => dispatcher("lockgroups", $.lock_option),
  _lockactivegroup: ($) => dispatcher("lockactivegroup", $.lock_option),
  _moveintogroup: ($) => dispatcher("moveintogroup", $.direction),
  _moveoutofgroup: (_$) => dispatcher("moveoutofgroup"),
  _global: ($) => dispatcher("global", $.str),

  dispatcher: ($) =>
    choice(
      $._exec,
      $._execr,
      $._pass,
      $._killactive,
      $._closewindow,
      $._workspace,
      $._movetoworkspace,
      $._movetoworkspacesilent,
      $._togglefloating,
      $._fullscreen,
      $._fakefullscreen,
      $._dpms,
      $._pin,
      $._movefocus,
      $._movewindow,
      $._swapwindow,
      $._centerwindow,
      $._resizeactive,
      $._moveactive,
      $._resizewindowpixel,
      $._movewindowpixel,
      $._cyclenext,
      $._swapnext,
      $._focuswindow,
      $._focusmonitor,
      $._splitratio,
      $._toggleopaque,
      $._movecursortocorner,
      $._movecursor,
      $._workspaceopt,
      $._renameworkspace,
      $._exit,
      $._forcerendererreload,
      $._movecurrentworkspacetomonitor,
      $._moveworkspacetomonitor,
      $._swapactiveworkspaces,
      $._bringactivetotop,
      $._togglespecialworkspace,
      $._focusurgentorlast,
      $._togglegroup,
      $._changegroupactive,
      $._focuscurrentorlast,
      $._lockgroups,
      $._moveintogroup,
      $._moveoutofgroup,
      $._global
    ),
};

function dispatcher(name, ...args) {
  return arglist(field("name", name), ...args);
}
