const { repeatn, specifier, immediate } = require("./utils");

module.exports = {
  _move_arg: ($) => choice($.int, $.percent, $._negative_percent),
  _size_arg: ($) => choice($.int, $.percent),

  unset: (_$) => "unset",
  silent: (_$) => "silent",
  override: (_$) => "override",

  opacity: ($) => seq($.float, optional($.override)),
  _opacity_arg: ($) =>
    choice(
      $.opacity,
      seq(field("active", $.opacity), field("inactive", $.opacity))
    ),

  _color_arg: ($) =>
    choice($.color, seq(field("active", $.color), field("inactive", $.color))),

  inhibit_mode: (_$) => choice("none", "always", "focus", "fullscreen"),

  _rule_float: (_$) => rule("float"),
  _rule_tile: (_$) => rule("tile"),
  _rule_fullscreen: (_$) => rule("fullscreen"),
  _rule_fakefullscreen: (_$) => rule("fakefullscreen"),
  _rule_maximize: (_$) => rule("maximize"),
  _rule_nofullscreenrequest: (_$) => rule("nofullscreenrequest"),
  _rule_move: ($) =>
    rule(
      "move",
      choice(repeatn($._move_arg, 2), seq("cursor", repeatn($._size_arg, 2)))
    ),
  _rule_size: ($) => rule("size", repeatn($._size_arg, 2)),
  _rule_minsize: ($) => rule("minsize", repeatn($._size_arg, 2)),
  _rule_maxsize: ($) => rule("maxsize", repeatn($._size_arg, 2)),
  _rule_center: (_$) => rule("center"),
  _rule_pseudo: (_$) => rule("pseudo"),
  _rule_monitor: ($) => rule("monitor", choice($._object_id, $._monitor_name)),
  _rule_workspace: ($) =>
    rule("workspace", choice($.unset, seq($.workspace, optional($.silent)))),
  _rule_opacity: ($) => rule("opacity", $._opacity_arg),
  _rule_opaque: (_$) => rule("opaque"),
  _rule_forcergbx: (_$) => rule("forcergbx"),
  _rule_animation: ($) => rule("animation", $._animation_window),
  _rule_rounding: ($) => rule("rounding", $.int),
  _rule_noblur: (_$) => rule("noblur"),
  _rule_nofocus: (_$) => rule("nofocus"),
  _rule_noinitialfocus: (_$) => rule("noinitialfocus"),
  _rule_noborder: (_$) => rule("noborder"),
  _rule_nodim: (_$) => rule("nodim"),
  _rule_noshadow: (_$) => rule("noshadow"),
  _rule_forceinput: (_$) => rule("forceinput"),
  _rule_windowdance: (_$) => rule("windowdance"),
  _rule_pin: (_$) => rule("pin"),
  _rule_noanim: (_$) => rule("noanim"),
  _rule_bordercolor: ($) => rule("bordercolor", $._color_arg),
  _rule_idleinhibit: ($) => rule("idleinhibit", $.inhibit_mode),
  _rule_unset: (_$) => rule("unset"),
  _rule_nomaxsize: (_$) => rule("nomaxsize"),
  _rule_dimaround: (_$) => rule("dimaround"),
  _rule_stayfocused: (_$) => rule("stayfocused"),
  _rule_xray: ($) => rule("xray", choice($.unset, $.bool)),

  _layerrule_blur: (_$) => rule("blur"),
  _layerrule_ignorealpha: ($) => rule("ignorealpha", $.float),
  _layerrule_ignorezero: (_$) => rule("ignorezero"),

  __rulev1_window_identifier: ($) => choice($.title_specifier, $.regex),
  _rulev1_window_identifier: ($) =>
    alias($.__rulev1_window_identifier, $.window_identifier),

  class_specifier: ($) => specifier("class", immediate($, "regex")),
  xwayland_specifier: ($) => specifier("xwayland", immediate($, "bool")),
  floating_specifier: ($) => specifier("floating", immediate($, "bool")),
  fullscreen_specifier: ($) => specifier("fullscreen", immediate($, "bool")),
  pinned_specifier: ($) => specifier("pinned", immediate($, "bool")),
  __rulev2_window_identifier: ($) =>
    choice(
      $.title_specifier,
      $.class_specifier,
      $.xwayland_specifier,
      $.floating_specifier,
      $.fullscreen_specifier,
      $.pinned_specifier
    ),
  _rulev2_window_identifier: ($) =>
    alias($.__rulev2_window_identifier, $.window_identifier),

  rule: ($) =>
    choice(
      $._rule_float,
      $._rule_tile,
      $._rule_fullscreen,
      $._rule_fakefullscreen,
      $._rule_maximize,
      $._rule_nofullscreenrequest,
      $._rule_move,
      $._rule_size,
      $._rule_minsize,
      $._rule_maxsize,
      $._rule_center,
      $._rule_pseudo,
      $._rule_monitor,
      $._rule_workspace,
      $._rule_opacity,
      $._rule_opaque,
      $._rule_forcergbx,
      $._rule_animation,
      $._rule_rounding,
      $._rule_noblur,
      $._rule_nofocus,
      $._rule_noinitialfocus,
      $._rule_noborder,
      $._rule_nodim,
      $._rule_noshadow,
      $._rule_forceinput,
      $._rule_windowdance,
      $._rule_pin,
      $._rule_noanim,
      $._rule_bordercolor,
      $._rule_idleinhibit,
      $._rule_unset,
      $._rule_nomaxsize,
      $._rule_dimaround,
      $._rule_stayfocused,
      $._rule_xray
    ),

  layer_identifier: ($) =>
    choice($.address_specifier, alias($.word, $.layer_namespace)),

  layer_rule: ($) =>
    choice(
      $._layerrule_blur,
      $._rule_noanim,
      $._layerrule_ignorealpha,
      $._layerrule_ignorezero,
      $._rule_xray,
      $._rule_unset
    ),
};

function rule(name, ...args) {
  if (args.length) return seq(name, ...args);
  else return name;
}
