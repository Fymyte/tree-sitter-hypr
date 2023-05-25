const GENERAL_SECTION_VARIABLES = {
  sensitivity: "float",
  border_size: "int",
  no_border_on_floating: "bool",
  gaps_in: "int",
  gaps_out: "int",
  "col.inactive_border": "gradient",
  "col.active_border": "gradient",
  "col.group_border": "gradient",
  "col.group_border_active": "gradient",
  cursor_inactive_timeout: "int",
  layout: "str",
  no_cursor_warps: "bool",
  no_focus_fallback: "bool",
  apply_sens_to_raw: "bool",
  resize_on_border: "bool",
  extend_border_grab_area: "int",
  hover_icon_on_border: "bool",
};

const DECORATION_SECTION_VARIABLES = {
  rounding: "int",
  multisample_edges: "bool",
  active_opacity: "float",
  inactive_opacity: "float",
  fullscreen_opacity: "float",
  blur: "bool",
  blur_size: "int",
  blur_passes: "int",
  blur_ignore_opacity: "bool",
  blur_new_optimizations: "bool",
  blur_xray: "bool",
  drop_shadow: "bool",
  shadow_range: "int",
  shadow_render_power: "int",
  shadow_ignore_window: "bool",
  "col.shadow": "color",
  "col.shadow_inactive": "color",
  shadow_offset: "vec2",
  shadow_scale: "float",
  dim_inactive: "bool",
  dim_strength: "float",
  dim_special: "float",
  dim_around: "float",
  screen_shader: "str",
};

module.exports = {
  variable_section: ($) =>
    choice(
      make_section($, "general", "_general_section_var"),
      make_section($, "decoration", "_decoration_section_var")
    ),

  _general_section_var: ($) => dict_to_section($, GENERAL_SECTION_VARIABLES),
  _decoration_section_var: ($) =>
    dict_to_section($, DECORATION_SECTION_VARIABLES),
  // general_section: ($) =>
  //   seq(
  //     "general",
  //     "{",
  //     $._newline,
  //     repeat(alias($._general_section_var, $.section_variable)),
  //     "}"
  //   ),

  // decoration_section: $ => seq(
  //   "decoration",
  //   "{"
  //   $._newline,

  // )
};

function make_section($, name, variables) {
  return seq(
    field("name", name),
    "{",
    $._newline,
    repeat(alias($[variables], $.section_variable)),
    "}"
  );
}

function dict_to_section($, dict) {
  return choice(
    $._newline,
    ...Object.entries(dict).map(([name, type]) =>
      seq(
        field("name", name),
        "=",
        choice($[type], $.variable_reference),
        $._newline
      )
    )
  );
}
