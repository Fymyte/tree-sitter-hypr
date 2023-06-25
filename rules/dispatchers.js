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

  _dispatcher_exec: ($) =>
    dispatcher(
      "exec",
      seq(optional(seq("[", sep1($.rule, ";"))), $.shell_command)
    ),
  _dispatcher_execr: ($) => dispatcher("execr", $.shell_command),
  _dispatcher_pass: ($) => dispatcher("pass", $.window_identifier),
  _dispatcher_killactive: (_$) => dispatcher("killactive"),
  _dispatcher_closewindow: ($) => dispatcher("closewindow", $.window_identifier),
  _dispatcher_workspace: ($) => dispatcher("workspace", $.workspace),
  _dispatcher_movetoworkspace: ($) => dispatcher("movetoworkspace", $._workspace_window),
  _dispatcher_movetoworkspacesilent: ($) =>
    dispatcher("movetoworkspacesilent", $._workspace_window),
  _dispatcher_togglefloating: ($) =>
    dispatcher(
      "togglefloating",
      optional(choice("active", $.window_identifier))
    ),
  _dispatcher_fullscreen: ($) => dispatcher("fullscreen", alias(choice("0", "1"), $.int)),
  _dispatcher_fakefullscreen: (_$) => dispatcher("fakefullscreen"),
  _dispatcher_dpms: ($) =>
    dispatcher(
      "dpms",
      seq(alias(choice("on", "off"), $.bool), optional($.monitor))
    ),
  _dispatcher_pin: ($) =>
    dispatcher("pin", optional(choice("active", $.window_identifier))),
  _dispatcher_movefocus: ($) => dispatcher("movefocus", $.direction),
  _dispatcher_movewindow: ($) =>
    dispatcher("movewindow", choice($.direction, seq("mon:", $.monitor))),
  _dispatcher_swapwindow: ($) => dispatcher("swapwindow", $.direction),
  _dispatcher_centerwindow: (_$) => dispatcher("centerwindow"),
  _dispatcher_resizeactive: ($) => dispatcher("resizeactive", $.resizeparams),
  _dispatcher_moveactive: ($) => dispatcher("moveactive", $.resizeparams),
  _dispatcher_resizewindowpixel: ($) =>
    dispatcher("resizewindowpixel", $.resizeparams, $.window_identifier),
  _dispatcher_movewindowpixel: ($) =>
    dispatcher("movewindowpixel", $.resizeparams, $.window_identifier),
  _dispatcher_cyclenext: ($) => dispatcher("cyclenext", $.prev),
  _dispatcher_swapnext: ($) => dispatcher("swapnext", $.prev),
  _dispatcher_focuswindow: ($) => dispatcher("focuswindow", $.window_identifier),
  _dispatcher_focusmonitor: ($) => dispatcher("focusmonitor", $.monitor),
  _dispatcher_splitratio: ($) => dispatcher("splitratio", $.floatvalue),
  _dispatcher_toggleopaque: (_$) => dispatcher("toggleopaque"),
  _dispatcher_movecursortocorner: ($) =>
    dispatcher("movecursortocorner", alias(choice("0", "1", "2", "3"), $.int)),
  _dispatcher_movecursor: ($) => dispatcher("movecursor", $.int, $.int),
  _dispatcher_workspaceopt: ($) => dispatcher("workspaceopt", $.workspaceopt),
  _dispatcher_renameworkspace: ($) =>
    dispatcher("renameworkspace", seq($._object_id, $.word)),
  _dispatcher_exit: (_$) => dispatcher("exit"),
  _dispatcher_forcerendererreload: (_$) => dispatcher("forcerendererreload"),
  _dispatcher_movecurrentworkspacetomonitor: ($) =>
    dispatcher("movecurrentworkspacetomonitor", $.monitor),
  _dispatcher_moveworkspacetomonitor: ($) =>
    dispatcher("moveworkspacetomonitor", seq($.workspace, $.monitor)),
  _dispatcher_swapactiveworkspaces: ($) =>
    dispatcher("swapactiveworkspaces", seq($.monitor, $.monitor)),
  _dispatcher_bringactivetotop: (_$) => dispatcher("bringactivetotop"),
  _dispatcher_togglespecialworkspace: ($) =>
    dispatcher("togglespecialworkspace", optional($.word)),
  _dispatcher_focusurgentorlast: (_$) => dispatcher("focusurgentorlast"),
  _dispatcher_togglegroup: (_$) => dispatcher("togglegroup"),
  _dispatcher_changegroupactive: (_$) => dispatcher("changegroupactive", choice("b", "f")),
  _dispatcher_focuscurrentorlast: (_$) => dispatcher("focuscurrentorlast"),
  _dispatcher_lockgroups: ($) => dispatcher("lockgroups", $.lock_option),
  _dispatcher_lockactivegroup: ($) => dispatcher("lockactivegroup", $.lock_option),
  _dispatcher_moveintogroup: ($) => dispatcher("moveintogroup", $.direction),
  _dispatcher_moveoutofgroup: (_$) => dispatcher("moveoutofgroup"),
  _dispatcher_global: ($) => dispatcher("global", $.str),

  _dispatcher_submap: ($) => dispatcher("submap", $.word),

  dispatcher: ($) =>
    choice(
      $._dispatcher_exec,
      $._dispatcher_execr,
      $._dispatcher_pass,
      $._dispatcher_killactive,
      $._dispatcher_closewindow,
      $._dispatcher_workspace,
      $._dispatcher_movetoworkspace,
      $._dispatcher_movetoworkspacesilent,
      $._dispatcher_togglefloating,
      $._dispatcher_fullscreen,
      $._dispatcher_fakefullscreen,
      $._dispatcher_dpms,
      $._dispatcher_pin,
      $._dispatcher_movefocus,
      $._dispatcher_movewindow,
      $._dispatcher_swapwindow,
      $._dispatcher_centerwindow,
      $._dispatcher_resizeactive,
      $._dispatcher_moveactive,
      $._dispatcher_resizewindowpixel,
      $._dispatcher_movewindowpixel,
      $._dispatcher_cyclenext,
      $._dispatcher_swapnext,
      $._dispatcher_focuswindow,
      $._dispatcher_focusmonitor,
      $._dispatcher_splitratio,
      $._dispatcher_toggleopaque,
      $._dispatcher_movecursortocorner,
      $._dispatcher_movecursor,
      $._dispatcher_workspaceopt,
      $._dispatcher_renameworkspace,
      $._dispatcher_exit,
      $._dispatcher_forcerendererreload,
      $._dispatcher_movecurrentworkspacetomonitor,
      $._dispatcher_moveworkspacetomonitor,
      $._dispatcher_swapactiveworkspaces,
      $._dispatcher_bringactivetotop,
      $._dispatcher_togglespecialworkspace,
      $._dispatcher_focusurgentorlast,
      $._dispatcher_togglegroup,
      $._dispatcher_changegroupactive,
      $._dispatcher_focuscurrentorlast,
      $._dispatcher_lockgroups,
      $._dispatcher_moveintogroup,
      $._dispatcher_moveoutofgroup,
      $._dispatcher_global,

      $._dispatcher_submap,
    ),
};

function dispatcher(name, ...args) {
  return arglist(field("name", name), ...args);
}
