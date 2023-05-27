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

const ANIMATIONS_SECTION_VARIABLES = {
  enabled: "bool",
};

const INPUT_SECTION_VARIABLES = {
  kb_model: "str",
  kb_layout: "str",
  kb_variant: "str",
  kb_options: "str",
  kb_rules: "str",
  kb_file: "str",
  numlock_by_default: "bool",
  repeat_rate: "int",
  repeat_delay: "int",
  sensitivity: "float",
  accel_profile: "str",
  force_no_accel: "bool",
  left_handed: "bool",
  scroll_method: "str",
  scroll_button: "int",
  natural_scroll: "bool",
  follow_mouse: "int",
  mouse_refocus: "bool",
  float_switch_override_focus: "int",
};

const INPUT_TOUCHPAD_SECTION_VARIABLES = {
  disable_while_typing: "bool",
  natural_scroll: "bool",
  scroll_factor: "float",
  middle_button_emulation: "bool",
  tap_button_map: "str",
  clickfinger_behavior: "bool",
  "tap-to-click": "bool",
  drag_lock: "bool",
  "tap-and-drag": "bool",
};

const INPUT_TOUCHDEVICE_SECTION_VARIABLES = {
  transform: "int",
  output: "str",
};

const GESTURES_SECTION_VARIABLES = {
  workspace_swipe: "bool",
  workspace_swipe_fingers: "int",
  workspace_swipe_distance: "int",
  workspace_swipe_invert: "bool",
  workspace_swipe_min_speed_to_force: "int",
  workspace_swipe_cancel_ratio: "float",
  workspace_swipe_create_new: "bool",
  workspace_swipe_forever: "bool",
  workspace_swipe_numbered: "bool",
};

const MISC_SECTION_VARIABLES = {
  disable_hyprland_logo: "bool",
  disable_splash_rendering: "bool",
  vfr: "bool",
  vrr: "int",
  mouse_move_enables_dpms: "bool",
  key_press_enables_dpms: "bool",
  always_follow_on_dnd: "bool",
  layers_hog_keyboard_focus: "bool",
  animate_manual_resizes: "bool",
  animate_mouse_windowdragging: "bool",
  disable_autoreload: "bool",
  enable_swallow: "bool",
  swallow_regex: "str",
  swallow_exception_regex: "str",
  focus_on_activate: "bool",
  no_direct_scanout: "bool",
  hide_cursor_on_touch: "bool",
  mouse_move_focuses_monitor: "bool",
  suppress_portal_warnings: "bool",
  render_ahead_of_time: "bool",
  render_ahead_safezone: "int",
  cursor_zoom_factor: "float",
  cursor_zoom_rigid: "bool",
  allow_session_lock_restore: "bool",
  render_titles_in_groupbar: "bool",
  groupbar_titles_font_size: "int",
  groupbar_gradients: "bool",
};

const BINDS_SECTION_VARIABLES = {
  pass_mouse_when_bound: "bool",
  scroll_event_delay: "int",
  workspace_back_and_forth: "bool",
  allow_workspace_cycles: "bool",
  focus_preferred_method: "int",
};

const DEBUG_SECTION_VARIABLES = {
  overlay: "bool",
  damage_blink: "bool",
  disable_logs: "bool",
  disable_time: "bool",
  damage_tracking: "int",
  enable_stdout_logs: "bool",
  manual_crash: "int",
};

module.exports = {
  variable_section: ($) =>
    choice(
      make_section($, "general", $._general_section_var),
      make_section($, "decoration", $._decoration_section_var),
      make_section($, "animation", $._animation_section_var),
      make_section(
        $,
        "input",
        $._input_section_var,
        alias($._input_variable_section, $.variable_section)
      ),
      make_section($, "gestures", $._gestures_section_var),
      make_section($, "misc", $._misc_section_var),
      make_section($, "binds", $._binds_section_var),
      make_section($, "debug", $._debug_section_var),
      make_section(
        $,
        seq("device", token.immediate(":"), token.immediate(/[a-zA-Z0-9-_]+/)),
        $._input_section_var,
        alias($._input_variable_section, $.variable_section)
      )
    ),

  _general_section_var: ($) => dict_to_section($, GENERAL_SECTION_VARIABLES),

  _decoration_section_var: ($) =>
    dict_to_section($, DECORATION_SECTION_VARIABLES),

  _animation_section_var: ($) =>
    dict_to_section($, ANIMATIONS_SECTION_VARIABLES),

  _touchpad_section_var: ($) =>
    dict_to_section($, INPUT_TOUCHPAD_SECTION_VARIABLES),
  _touchdevice_section_var: ($) =>
    dict_to_section($, INPUT_TOUCHDEVICE_SECTION_VARIABLES),
  _input_variable_section: ($) =>
    choice(
      make_section($, "touchpad", $._touchpad_section_var),
      make_section($, "touchdevice", $._touchdevice_section_var)
    ),
  _input_section_var: ($) => dict_to_section($, INPUT_SECTION_VARIABLES),

  _gestures_section_var: ($) => dict_to_section($, GESTURES_SECTION_VARIABLES),

  _misc_section_var: ($) => dict_to_section($, MISC_SECTION_VARIABLES),

  _binds_section_var: ($) => dict_to_section($, BINDS_SECTION_VARIABLES),

  _debug_section_var: ($) => dict_to_section($, DEBUG_SECTION_VARIABLES),
};

function make_section($, name, variables, ...additional_choices) {
  // variables = "_" + name + "_section_var";
  return seq(
    field("name", name),
    "{",
    $._newline,
    repeat(
      choice(
        $._newline,
        alias(variables, $.section_variable),
        ...additional_choices
      )
    ),
    "}"
  );
}

function dict_to_section($, dict) {
  return choice(
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
