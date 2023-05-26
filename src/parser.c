#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 200
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 204
#define ALIAS_COUNT 0
#define TOKEN_COUNT 167
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_POUND = 1,
  aux_sym_comment_token1 = 2,
  sym_int = 3,
  sym_float = 4,
  anon_sym_SHIFT = 5,
  anon_sym_CAPS = 6,
  anon_sym_CTRL = 7,
  anon_sym_CONTROL = 8,
  anon_sym_ALT = 9,
  anon_sym_MOD2 = 10,
  anon_sym_MOD3 = 11,
  anon_sym_SUPER = 12,
  anon_sym_WIN = 13,
  anon_sym_LOGO = 14,
  anon_sym_MOD4 = 15,
  anon_sym_MOD5 = 16,
  anon_sym_true = 17,
  anon_sym_false = 18,
  anon_sym_yes = 19,
  anon_sym_no = 20,
  anon_sym_on = 21,
  anon_sym_off = 22,
  anon_sym_0 = 23,
  anon_sym_1 = 24,
  anon_sym_rgb = 25,
  anon_sym_LPAREN = 26,
  anon_sym_RPAREN = 27,
  anon_sym_rgba = 28,
  anon_sym_0x = 29,
  sym__hex_comp = 30,
  anon_sym_deg = 31,
  sym_str = 32,
  anon_sym_DOLLAR = 33,
  aux_sym_variable_reference_token1 = 34,
  sym__newline = 35,
  anon_sym_general = 36,
  anon_sym_LBRACE = 37,
  anon_sym_RBRACE = 38,
  anon_sym_decoration = 39,
  anon_sym_animation = 40,
  anon_sym_input = 41,
  anon_sym_gestures = 42,
  anon_sym_misc = 43,
  anon_sym_binds = 44,
  anon_sym_debug = 45,
  anon_sym_sensitivity = 46,
  anon_sym_EQ = 47,
  anon_sym_border_size = 48,
  anon_sym_no_border_on_floating = 49,
  anon_sym_gaps_in = 50,
  anon_sym_gaps_out = 51,
  anon_sym_col_DOTinactive_border = 52,
  anon_sym_col_DOTactive_border = 53,
  anon_sym_col_DOTgroup_border = 54,
  anon_sym_col_DOTgroup_border_active = 55,
  anon_sym_cursor_inactive_timeout = 56,
  anon_sym_layout = 57,
  anon_sym_no_cursor_warps = 58,
  anon_sym_no_focus_fallback = 59,
  anon_sym_apply_sens_to_raw = 60,
  anon_sym_resize_on_border = 61,
  anon_sym_extend_border_grab_area = 62,
  anon_sym_hover_icon_on_border = 63,
  anon_sym_rounding = 64,
  anon_sym_multisample_edges = 65,
  anon_sym_active_opacity = 66,
  anon_sym_inactive_opacity = 67,
  anon_sym_fullscreen_opacity = 68,
  anon_sym_blur = 69,
  anon_sym_blur_size = 70,
  anon_sym_blur_passes = 71,
  anon_sym_blur_ignore_opacity = 72,
  anon_sym_blur_new_optimizations = 73,
  anon_sym_blur_xray = 74,
  anon_sym_drop_shadow = 75,
  anon_sym_shadow_range = 76,
  anon_sym_shadow_render_power = 77,
  anon_sym_shadow_ignore_window = 78,
  anon_sym_col_DOTshadow = 79,
  anon_sym_col_DOTshadow_inactive = 80,
  anon_sym_shadow_offset = 81,
  anon_sym_shadow_scale = 82,
  anon_sym_dim_inactive = 83,
  anon_sym_dim_strength = 84,
  anon_sym_dim_special = 85,
  anon_sym_dim_around = 86,
  anon_sym_screen_shader = 87,
  anon_sym_enabled = 88,
  anon_sym_disable_while_typing = 89,
  anon_sym_natural_scroll = 90,
  anon_sym_scroll_factor = 91,
  anon_sym_middle_button_emulation = 92,
  anon_sym_tap_button_map = 93,
  anon_sym_clickfinger_behavior = 94,
  anon_sym_tap_DASHto_DASHclick = 95,
  anon_sym_drag_lock = 96,
  anon_sym_tap_DASHand_DASHdrag = 97,
  anon_sym_transform = 98,
  anon_sym_output = 99,
  anon_sym_touchpad = 100,
  anon_sym_touchdevice = 101,
  anon_sym_kb_model = 102,
  anon_sym_kb_layout = 103,
  anon_sym_kb_variant = 104,
  anon_sym_kb_options = 105,
  anon_sym_kb_rules = 106,
  anon_sym_kb_file = 107,
  anon_sym_numlock_by_default = 108,
  anon_sym_repeat_rate = 109,
  anon_sym_repeat_delay = 110,
  anon_sym_accel_profile = 111,
  anon_sym_force_no_accel = 112,
  anon_sym_left_handed = 113,
  anon_sym_scroll_method = 114,
  anon_sym_scroll_button = 115,
  anon_sym_follow_mouse = 116,
  anon_sym_mouse_refocus = 117,
  anon_sym_float_switch_override_focus = 118,
  anon_sym_workspace_swipe = 119,
  anon_sym_workspace_swipe_fingers = 120,
  anon_sym_workspace_swipe_distance = 121,
  anon_sym_workspace_swipe_invert = 122,
  anon_sym_workspace_swipe_min_speed_to_force = 123,
  anon_sym_workspace_swipe_cancel_ratio = 124,
  anon_sym_workspace_swipe_create_new = 125,
  anon_sym_workspace_swipe_forever = 126,
  anon_sym_workspace_swipe_numbered = 127,
  anon_sym_disable_hyprland_logo = 128,
  anon_sym_disable_splash_rendering = 129,
  anon_sym_vfr = 130,
  anon_sym_vrr = 131,
  anon_sym_mouse_move_enables_dpms = 132,
  anon_sym_key_press_enables_dpms = 133,
  anon_sym_always_follow_on_dnd = 134,
  anon_sym_layers_hog_keyboard_focus = 135,
  anon_sym_animate_manual_resizes = 136,
  anon_sym_animate_mouse_windowdragging = 137,
  anon_sym_disable_autoreload = 138,
  anon_sym_enable_swallow = 139,
  anon_sym_swallow_regex = 140,
  anon_sym_swallow_exception_regex = 141,
  anon_sym_focus_on_activate = 142,
  anon_sym_no_direct_scanout = 143,
  anon_sym_hide_cursor_on_touch = 144,
  anon_sym_mouse_move_focuses_monitor = 145,
  anon_sym_suppress_portal_warnings = 146,
  anon_sym_render_ahead_of_time = 147,
  anon_sym_render_ahead_safezone = 148,
  anon_sym_cursor_zoom_factor = 149,
  anon_sym_cursor_zoom_rigid = 150,
  anon_sym_allow_session_lock_restore = 151,
  anon_sym_render_titles_in_groupbar = 152,
  anon_sym_groupbar_titles_font_size = 153,
  anon_sym_groupbar_gradients = 154,
  anon_sym_pass_mouse_when_bound = 155,
  anon_sym_scroll_event_delay = 156,
  anon_sym_workspace_back_and_forth = 157,
  anon_sym_allow_workspace_cycles = 158,
  anon_sym_focus_preferred_method = 159,
  anon_sym_overlay = 160,
  anon_sym_damage_blink = 161,
  anon_sym_disable_logs = 162,
  anon_sym_disable_time = 163,
  anon_sym_damage_tracking = 164,
  anon_sym_enable_stdout_logs = 165,
  anon_sym_manual_crash = 166,
  sym_config_file = 167,
  sym_comment = 168,
  sym_vec2 = 169,
  sym_bool = 170,
  sym__bool_literal = 171,
  sym__bool_integer = 172,
  sym_color = 173,
  sym_color_rgb = 174,
  sym_color_rgba = 175,
  sym_color_hex = 176,
  sym_gradient = 177,
  sym_degree = 178,
  sym_variable_reference = 179,
  sym_variable_section = 180,
  sym__general_section_var = 181,
  sym__decoration_section_var = 182,
  sym__animation_section_var = 183,
  sym__touchpad_section_var = 184,
  sym__touchdevice_section_var = 185,
  sym__input_variable_section = 186,
  sym__input_section_var = 187,
  sym__gestures_section_var = 188,
  sym__misc_section_var = 189,
  sym__binds_section_var = 190,
  sym__debug_section_var = 191,
  aux_sym_config_file_repeat1 = 192,
  aux_sym_gradient_repeat1 = 193,
  aux_sym_variable_section_repeat1 = 194,
  aux_sym_variable_section_repeat2 = 195,
  aux_sym_variable_section_repeat3 = 196,
  aux_sym_variable_section_repeat4 = 197,
  aux_sym_variable_section_repeat5 = 198,
  aux_sym_variable_section_repeat6 = 199,
  aux_sym_variable_section_repeat7 = 200,
  aux_sym_variable_section_repeat8 = 201,
  aux_sym__input_variable_section_repeat1 = 202,
  aux_sym__input_variable_section_repeat2 = 203,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_int] = "int",
  [sym_float] = "float",
  [anon_sym_SHIFT] = "SHIFT",
  [anon_sym_CAPS] = "CAPS",
  [anon_sym_CTRL] = "CTRL",
  [anon_sym_CONTROL] = "CONTROL",
  [anon_sym_ALT] = "ALT",
  [anon_sym_MOD2] = "MOD2",
  [anon_sym_MOD3] = "MOD3",
  [anon_sym_SUPER] = "SUPER",
  [anon_sym_WIN] = "WIN",
  [anon_sym_LOGO] = "LOGO",
  [anon_sym_MOD4] = "MOD4",
  [anon_sym_MOD5] = "MOD5",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [anon_sym_on] = "on",
  [anon_sym_off] = "off",
  [anon_sym_0] = "0",
  [anon_sym_1] = "1",
  [anon_sym_rgb] = "rgb",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_rgba] = "rgba",
  [anon_sym_0x] = "0x",
  [sym__hex_comp] = "_hex_comp",
  [anon_sym_deg] = "deg",
  [sym_str] = "str",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_variable_reference_token1] = "variable_reference_token1",
  [sym__newline] = "_newline",
  [anon_sym_general] = "general",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_decoration] = "decoration",
  [anon_sym_animation] = "animation",
  [anon_sym_input] = "input",
  [anon_sym_gestures] = "gestures",
  [anon_sym_misc] = "misc",
  [anon_sym_binds] = "binds",
  [anon_sym_debug] = "debug",
  [anon_sym_sensitivity] = "sensitivity",
  [anon_sym_EQ] = "=",
  [anon_sym_border_size] = "border_size",
  [anon_sym_no_border_on_floating] = "no_border_on_floating",
  [anon_sym_gaps_in] = "gaps_in",
  [anon_sym_gaps_out] = "gaps_out",
  [anon_sym_col_DOTinactive_border] = "col.inactive_border",
  [anon_sym_col_DOTactive_border] = "col.active_border",
  [anon_sym_col_DOTgroup_border] = "col.group_border",
  [anon_sym_col_DOTgroup_border_active] = "col.group_border_active",
  [anon_sym_cursor_inactive_timeout] = "cursor_inactive_timeout",
  [anon_sym_layout] = "layout",
  [anon_sym_no_cursor_warps] = "no_cursor_warps",
  [anon_sym_no_focus_fallback] = "no_focus_fallback",
  [anon_sym_apply_sens_to_raw] = "apply_sens_to_raw",
  [anon_sym_resize_on_border] = "resize_on_border",
  [anon_sym_extend_border_grab_area] = "extend_border_grab_area",
  [anon_sym_hover_icon_on_border] = "hover_icon_on_border",
  [anon_sym_rounding] = "rounding",
  [anon_sym_multisample_edges] = "multisample_edges",
  [anon_sym_active_opacity] = "active_opacity",
  [anon_sym_inactive_opacity] = "inactive_opacity",
  [anon_sym_fullscreen_opacity] = "fullscreen_opacity",
  [anon_sym_blur] = "blur",
  [anon_sym_blur_size] = "blur_size",
  [anon_sym_blur_passes] = "blur_passes",
  [anon_sym_blur_ignore_opacity] = "blur_ignore_opacity",
  [anon_sym_blur_new_optimizations] = "blur_new_optimizations",
  [anon_sym_blur_xray] = "blur_xray",
  [anon_sym_drop_shadow] = "drop_shadow",
  [anon_sym_shadow_range] = "shadow_range",
  [anon_sym_shadow_render_power] = "shadow_render_power",
  [anon_sym_shadow_ignore_window] = "shadow_ignore_window",
  [anon_sym_col_DOTshadow] = "col.shadow",
  [anon_sym_col_DOTshadow_inactive] = "col.shadow_inactive",
  [anon_sym_shadow_offset] = "shadow_offset",
  [anon_sym_shadow_scale] = "shadow_scale",
  [anon_sym_dim_inactive] = "dim_inactive",
  [anon_sym_dim_strength] = "dim_strength",
  [anon_sym_dim_special] = "dim_special",
  [anon_sym_dim_around] = "dim_around",
  [anon_sym_screen_shader] = "screen_shader",
  [anon_sym_enabled] = "enabled",
  [anon_sym_disable_while_typing] = "disable_while_typing",
  [anon_sym_natural_scroll] = "natural_scroll",
  [anon_sym_scroll_factor] = "scroll_factor",
  [anon_sym_middle_button_emulation] = "middle_button_emulation",
  [anon_sym_tap_button_map] = "tap_button_map",
  [anon_sym_clickfinger_behavior] = "clickfinger_behavior",
  [anon_sym_tap_DASHto_DASHclick] = "tap-to-click",
  [anon_sym_drag_lock] = "drag_lock",
  [anon_sym_tap_DASHand_DASHdrag] = "tap-and-drag",
  [anon_sym_transform] = "transform",
  [anon_sym_output] = "output",
  [anon_sym_touchpad] = "touchpad",
  [anon_sym_touchdevice] = "touchdevice",
  [anon_sym_kb_model] = "kb_model",
  [anon_sym_kb_layout] = "kb_layout",
  [anon_sym_kb_variant] = "kb_variant",
  [anon_sym_kb_options] = "kb_options",
  [anon_sym_kb_rules] = "kb_rules",
  [anon_sym_kb_file] = "kb_file",
  [anon_sym_numlock_by_default] = "numlock_by_default",
  [anon_sym_repeat_rate] = "repeat_rate",
  [anon_sym_repeat_delay] = "repeat_delay",
  [anon_sym_accel_profile] = "accel_profile",
  [anon_sym_force_no_accel] = "force_no_accel",
  [anon_sym_left_handed] = "left_handed",
  [anon_sym_scroll_method] = "scroll_method",
  [anon_sym_scroll_button] = "scroll_button",
  [anon_sym_follow_mouse] = "follow_mouse",
  [anon_sym_mouse_refocus] = "mouse_refocus",
  [anon_sym_float_switch_override_focus] = "float_switch_override_focus",
  [anon_sym_workspace_swipe] = "workspace_swipe",
  [anon_sym_workspace_swipe_fingers] = "workspace_swipe_fingers",
  [anon_sym_workspace_swipe_distance] = "workspace_swipe_distance",
  [anon_sym_workspace_swipe_invert] = "workspace_swipe_invert",
  [anon_sym_workspace_swipe_min_speed_to_force] = "workspace_swipe_min_speed_to_force",
  [anon_sym_workspace_swipe_cancel_ratio] = "workspace_swipe_cancel_ratio",
  [anon_sym_workspace_swipe_create_new] = "workspace_swipe_create_new",
  [anon_sym_workspace_swipe_forever] = "workspace_swipe_forever",
  [anon_sym_workspace_swipe_numbered] = "workspace_swipe_numbered",
  [anon_sym_disable_hyprland_logo] = "disable_hyprland_logo",
  [anon_sym_disable_splash_rendering] = "disable_splash_rendering",
  [anon_sym_vfr] = "vfr",
  [anon_sym_vrr] = "vrr",
  [anon_sym_mouse_move_enables_dpms] = "mouse_move_enables_dpms",
  [anon_sym_key_press_enables_dpms] = "key_press_enables_dpms",
  [anon_sym_always_follow_on_dnd] = "always_follow_on_dnd",
  [anon_sym_layers_hog_keyboard_focus] = "layers_hog_keyboard_focus",
  [anon_sym_animate_manual_resizes] = "animate_manual_resizes",
  [anon_sym_animate_mouse_windowdragging] = "animate_mouse_windowdragging",
  [anon_sym_disable_autoreload] = "disable_autoreload",
  [anon_sym_enable_swallow] = "enable_swallow",
  [anon_sym_swallow_regex] = "swallow_regex",
  [anon_sym_swallow_exception_regex] = "swallow_exception_regex",
  [anon_sym_focus_on_activate] = "focus_on_activate",
  [anon_sym_no_direct_scanout] = "no_direct_scanout",
  [anon_sym_hide_cursor_on_touch] = "hide_cursor_on_touch",
  [anon_sym_mouse_move_focuses_monitor] = "mouse_move_focuses_monitor",
  [anon_sym_suppress_portal_warnings] = "suppress_portal_warnings",
  [anon_sym_render_ahead_of_time] = "render_ahead_of_time",
  [anon_sym_render_ahead_safezone] = "render_ahead_safezone",
  [anon_sym_cursor_zoom_factor] = "cursor_zoom_factor",
  [anon_sym_cursor_zoom_rigid] = "cursor_zoom_rigid",
  [anon_sym_allow_session_lock_restore] = "allow_session_lock_restore",
  [anon_sym_render_titles_in_groupbar] = "render_titles_in_groupbar",
  [anon_sym_groupbar_titles_font_size] = "groupbar_titles_font_size",
  [anon_sym_groupbar_gradients] = "groupbar_gradients",
  [anon_sym_pass_mouse_when_bound] = "pass_mouse_when_bound",
  [anon_sym_scroll_event_delay] = "scroll_event_delay",
  [anon_sym_workspace_back_and_forth] = "workspace_back_and_forth",
  [anon_sym_allow_workspace_cycles] = "allow_workspace_cycles",
  [anon_sym_focus_preferred_method] = "focus_preferred_method",
  [anon_sym_overlay] = "overlay",
  [anon_sym_damage_blink] = "damage_blink",
  [anon_sym_disable_logs] = "disable_logs",
  [anon_sym_disable_time] = "disable_time",
  [anon_sym_damage_tracking] = "damage_tracking",
  [anon_sym_enable_stdout_logs] = "enable_stdout_logs",
  [anon_sym_manual_crash] = "manual_crash",
  [sym_config_file] = "config_file",
  [sym_comment] = "comment",
  [sym_vec2] = "vec2",
  [sym_bool] = "bool",
  [sym__bool_literal] = "_bool_literal",
  [sym__bool_integer] = "_bool_integer",
  [sym_color] = "color",
  [sym_color_rgb] = "color_rgb",
  [sym_color_rgba] = "color_rgba",
  [sym_color_hex] = "color_hex",
  [sym_gradient] = "gradient",
  [sym_degree] = "degree",
  [sym_variable_reference] = "variable_reference",
  [sym_variable_section] = "variable_section",
  [sym__general_section_var] = "section_variable",
  [sym__decoration_section_var] = "section_variable",
  [sym__animation_section_var] = "section_variable",
  [sym__touchpad_section_var] = "section_variable",
  [sym__touchdevice_section_var] = "section_variable",
  [sym__input_variable_section] = "variable_section",
  [sym__input_section_var] = "section_variable",
  [sym__gestures_section_var] = "section_variable",
  [sym__misc_section_var] = "section_variable",
  [sym__binds_section_var] = "section_variable",
  [sym__debug_section_var] = "section_variable",
  [aux_sym_config_file_repeat1] = "config_file_repeat1",
  [aux_sym_gradient_repeat1] = "gradient_repeat1",
  [aux_sym_variable_section_repeat1] = "variable_section_repeat1",
  [aux_sym_variable_section_repeat2] = "variable_section_repeat2",
  [aux_sym_variable_section_repeat3] = "variable_section_repeat3",
  [aux_sym_variable_section_repeat4] = "variable_section_repeat4",
  [aux_sym_variable_section_repeat5] = "variable_section_repeat5",
  [aux_sym_variable_section_repeat6] = "variable_section_repeat6",
  [aux_sym_variable_section_repeat7] = "variable_section_repeat7",
  [aux_sym_variable_section_repeat8] = "variable_section_repeat8",
  [aux_sym__input_variable_section_repeat1] = "_input_variable_section_repeat1",
  [aux_sym__input_variable_section_repeat2] = "_input_variable_section_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_int] = sym_int,
  [sym_float] = sym_float,
  [anon_sym_SHIFT] = anon_sym_SHIFT,
  [anon_sym_CAPS] = anon_sym_CAPS,
  [anon_sym_CTRL] = anon_sym_CTRL,
  [anon_sym_CONTROL] = anon_sym_CONTROL,
  [anon_sym_ALT] = anon_sym_ALT,
  [anon_sym_MOD2] = anon_sym_MOD2,
  [anon_sym_MOD3] = anon_sym_MOD3,
  [anon_sym_SUPER] = anon_sym_SUPER,
  [anon_sym_WIN] = anon_sym_WIN,
  [anon_sym_LOGO] = anon_sym_LOGO,
  [anon_sym_MOD4] = anon_sym_MOD4,
  [anon_sym_MOD5] = anon_sym_MOD5,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_off] = anon_sym_off,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_rgb] = anon_sym_rgb,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_rgba] = anon_sym_rgba,
  [anon_sym_0x] = anon_sym_0x,
  [sym__hex_comp] = sym__hex_comp,
  [anon_sym_deg] = anon_sym_deg,
  [sym_str] = sym_str,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_variable_reference_token1] = aux_sym_variable_reference_token1,
  [sym__newline] = sym__newline,
  [anon_sym_general] = anon_sym_general,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_decoration] = anon_sym_decoration,
  [anon_sym_animation] = anon_sym_animation,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_gestures] = anon_sym_gestures,
  [anon_sym_misc] = anon_sym_misc,
  [anon_sym_binds] = anon_sym_binds,
  [anon_sym_debug] = anon_sym_debug,
  [anon_sym_sensitivity] = anon_sym_sensitivity,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_border_size] = anon_sym_border_size,
  [anon_sym_no_border_on_floating] = anon_sym_no_border_on_floating,
  [anon_sym_gaps_in] = anon_sym_gaps_in,
  [anon_sym_gaps_out] = anon_sym_gaps_out,
  [anon_sym_col_DOTinactive_border] = anon_sym_col_DOTinactive_border,
  [anon_sym_col_DOTactive_border] = anon_sym_col_DOTactive_border,
  [anon_sym_col_DOTgroup_border] = anon_sym_col_DOTgroup_border,
  [anon_sym_col_DOTgroup_border_active] = anon_sym_col_DOTgroup_border_active,
  [anon_sym_cursor_inactive_timeout] = anon_sym_cursor_inactive_timeout,
  [anon_sym_layout] = anon_sym_layout,
  [anon_sym_no_cursor_warps] = anon_sym_no_cursor_warps,
  [anon_sym_no_focus_fallback] = anon_sym_no_focus_fallback,
  [anon_sym_apply_sens_to_raw] = anon_sym_apply_sens_to_raw,
  [anon_sym_resize_on_border] = anon_sym_resize_on_border,
  [anon_sym_extend_border_grab_area] = anon_sym_extend_border_grab_area,
  [anon_sym_hover_icon_on_border] = anon_sym_hover_icon_on_border,
  [anon_sym_rounding] = anon_sym_rounding,
  [anon_sym_multisample_edges] = anon_sym_multisample_edges,
  [anon_sym_active_opacity] = anon_sym_active_opacity,
  [anon_sym_inactive_opacity] = anon_sym_inactive_opacity,
  [anon_sym_fullscreen_opacity] = anon_sym_fullscreen_opacity,
  [anon_sym_blur] = anon_sym_blur,
  [anon_sym_blur_size] = anon_sym_blur_size,
  [anon_sym_blur_passes] = anon_sym_blur_passes,
  [anon_sym_blur_ignore_opacity] = anon_sym_blur_ignore_opacity,
  [anon_sym_blur_new_optimizations] = anon_sym_blur_new_optimizations,
  [anon_sym_blur_xray] = anon_sym_blur_xray,
  [anon_sym_drop_shadow] = anon_sym_drop_shadow,
  [anon_sym_shadow_range] = anon_sym_shadow_range,
  [anon_sym_shadow_render_power] = anon_sym_shadow_render_power,
  [anon_sym_shadow_ignore_window] = anon_sym_shadow_ignore_window,
  [anon_sym_col_DOTshadow] = anon_sym_col_DOTshadow,
  [anon_sym_col_DOTshadow_inactive] = anon_sym_col_DOTshadow_inactive,
  [anon_sym_shadow_offset] = anon_sym_shadow_offset,
  [anon_sym_shadow_scale] = anon_sym_shadow_scale,
  [anon_sym_dim_inactive] = anon_sym_dim_inactive,
  [anon_sym_dim_strength] = anon_sym_dim_strength,
  [anon_sym_dim_special] = anon_sym_dim_special,
  [anon_sym_dim_around] = anon_sym_dim_around,
  [anon_sym_screen_shader] = anon_sym_screen_shader,
  [anon_sym_enabled] = anon_sym_enabled,
  [anon_sym_disable_while_typing] = anon_sym_disable_while_typing,
  [anon_sym_natural_scroll] = anon_sym_natural_scroll,
  [anon_sym_scroll_factor] = anon_sym_scroll_factor,
  [anon_sym_middle_button_emulation] = anon_sym_middle_button_emulation,
  [anon_sym_tap_button_map] = anon_sym_tap_button_map,
  [anon_sym_clickfinger_behavior] = anon_sym_clickfinger_behavior,
  [anon_sym_tap_DASHto_DASHclick] = anon_sym_tap_DASHto_DASHclick,
  [anon_sym_drag_lock] = anon_sym_drag_lock,
  [anon_sym_tap_DASHand_DASHdrag] = anon_sym_tap_DASHand_DASHdrag,
  [anon_sym_transform] = anon_sym_transform,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_touchpad] = anon_sym_touchpad,
  [anon_sym_touchdevice] = anon_sym_touchdevice,
  [anon_sym_kb_model] = anon_sym_kb_model,
  [anon_sym_kb_layout] = anon_sym_kb_layout,
  [anon_sym_kb_variant] = anon_sym_kb_variant,
  [anon_sym_kb_options] = anon_sym_kb_options,
  [anon_sym_kb_rules] = anon_sym_kb_rules,
  [anon_sym_kb_file] = anon_sym_kb_file,
  [anon_sym_numlock_by_default] = anon_sym_numlock_by_default,
  [anon_sym_repeat_rate] = anon_sym_repeat_rate,
  [anon_sym_repeat_delay] = anon_sym_repeat_delay,
  [anon_sym_accel_profile] = anon_sym_accel_profile,
  [anon_sym_force_no_accel] = anon_sym_force_no_accel,
  [anon_sym_left_handed] = anon_sym_left_handed,
  [anon_sym_scroll_method] = anon_sym_scroll_method,
  [anon_sym_scroll_button] = anon_sym_scroll_button,
  [anon_sym_follow_mouse] = anon_sym_follow_mouse,
  [anon_sym_mouse_refocus] = anon_sym_mouse_refocus,
  [anon_sym_float_switch_override_focus] = anon_sym_float_switch_override_focus,
  [anon_sym_workspace_swipe] = anon_sym_workspace_swipe,
  [anon_sym_workspace_swipe_fingers] = anon_sym_workspace_swipe_fingers,
  [anon_sym_workspace_swipe_distance] = anon_sym_workspace_swipe_distance,
  [anon_sym_workspace_swipe_invert] = anon_sym_workspace_swipe_invert,
  [anon_sym_workspace_swipe_min_speed_to_force] = anon_sym_workspace_swipe_min_speed_to_force,
  [anon_sym_workspace_swipe_cancel_ratio] = anon_sym_workspace_swipe_cancel_ratio,
  [anon_sym_workspace_swipe_create_new] = anon_sym_workspace_swipe_create_new,
  [anon_sym_workspace_swipe_forever] = anon_sym_workspace_swipe_forever,
  [anon_sym_workspace_swipe_numbered] = anon_sym_workspace_swipe_numbered,
  [anon_sym_disable_hyprland_logo] = anon_sym_disable_hyprland_logo,
  [anon_sym_disable_splash_rendering] = anon_sym_disable_splash_rendering,
  [anon_sym_vfr] = anon_sym_vfr,
  [anon_sym_vrr] = anon_sym_vrr,
  [anon_sym_mouse_move_enables_dpms] = anon_sym_mouse_move_enables_dpms,
  [anon_sym_key_press_enables_dpms] = anon_sym_key_press_enables_dpms,
  [anon_sym_always_follow_on_dnd] = anon_sym_always_follow_on_dnd,
  [anon_sym_layers_hog_keyboard_focus] = anon_sym_layers_hog_keyboard_focus,
  [anon_sym_animate_manual_resizes] = anon_sym_animate_manual_resizes,
  [anon_sym_animate_mouse_windowdragging] = anon_sym_animate_mouse_windowdragging,
  [anon_sym_disable_autoreload] = anon_sym_disable_autoreload,
  [anon_sym_enable_swallow] = anon_sym_enable_swallow,
  [anon_sym_swallow_regex] = anon_sym_swallow_regex,
  [anon_sym_swallow_exception_regex] = anon_sym_swallow_exception_regex,
  [anon_sym_focus_on_activate] = anon_sym_focus_on_activate,
  [anon_sym_no_direct_scanout] = anon_sym_no_direct_scanout,
  [anon_sym_hide_cursor_on_touch] = anon_sym_hide_cursor_on_touch,
  [anon_sym_mouse_move_focuses_monitor] = anon_sym_mouse_move_focuses_monitor,
  [anon_sym_suppress_portal_warnings] = anon_sym_suppress_portal_warnings,
  [anon_sym_render_ahead_of_time] = anon_sym_render_ahead_of_time,
  [anon_sym_render_ahead_safezone] = anon_sym_render_ahead_safezone,
  [anon_sym_cursor_zoom_factor] = anon_sym_cursor_zoom_factor,
  [anon_sym_cursor_zoom_rigid] = anon_sym_cursor_zoom_rigid,
  [anon_sym_allow_session_lock_restore] = anon_sym_allow_session_lock_restore,
  [anon_sym_render_titles_in_groupbar] = anon_sym_render_titles_in_groupbar,
  [anon_sym_groupbar_titles_font_size] = anon_sym_groupbar_titles_font_size,
  [anon_sym_groupbar_gradients] = anon_sym_groupbar_gradients,
  [anon_sym_pass_mouse_when_bound] = anon_sym_pass_mouse_when_bound,
  [anon_sym_scroll_event_delay] = anon_sym_scroll_event_delay,
  [anon_sym_workspace_back_and_forth] = anon_sym_workspace_back_and_forth,
  [anon_sym_allow_workspace_cycles] = anon_sym_allow_workspace_cycles,
  [anon_sym_focus_preferred_method] = anon_sym_focus_preferred_method,
  [anon_sym_overlay] = anon_sym_overlay,
  [anon_sym_damage_blink] = anon_sym_damage_blink,
  [anon_sym_disable_logs] = anon_sym_disable_logs,
  [anon_sym_disable_time] = anon_sym_disable_time,
  [anon_sym_damage_tracking] = anon_sym_damage_tracking,
  [anon_sym_enable_stdout_logs] = anon_sym_enable_stdout_logs,
  [anon_sym_manual_crash] = anon_sym_manual_crash,
  [sym_config_file] = sym_config_file,
  [sym_comment] = sym_comment,
  [sym_vec2] = sym_vec2,
  [sym_bool] = sym_bool,
  [sym__bool_literal] = sym__bool_literal,
  [sym__bool_integer] = sym__bool_integer,
  [sym_color] = sym_color,
  [sym_color_rgb] = sym_color_rgb,
  [sym_color_rgba] = sym_color_rgba,
  [sym_color_hex] = sym_color_hex,
  [sym_gradient] = sym_gradient,
  [sym_degree] = sym_degree,
  [sym_variable_reference] = sym_variable_reference,
  [sym_variable_section] = sym_variable_section,
  [sym__general_section_var] = sym__general_section_var,
  [sym__decoration_section_var] = sym__general_section_var,
  [sym__animation_section_var] = sym__general_section_var,
  [sym__touchpad_section_var] = sym__general_section_var,
  [sym__touchdevice_section_var] = sym__general_section_var,
  [sym__input_variable_section] = sym_variable_section,
  [sym__input_section_var] = sym__general_section_var,
  [sym__gestures_section_var] = sym__general_section_var,
  [sym__misc_section_var] = sym__general_section_var,
  [sym__binds_section_var] = sym__general_section_var,
  [sym__debug_section_var] = sym__general_section_var,
  [aux_sym_config_file_repeat1] = aux_sym_config_file_repeat1,
  [aux_sym_gradient_repeat1] = aux_sym_gradient_repeat1,
  [aux_sym_variable_section_repeat1] = aux_sym_variable_section_repeat1,
  [aux_sym_variable_section_repeat2] = aux_sym_variable_section_repeat2,
  [aux_sym_variable_section_repeat3] = aux_sym_variable_section_repeat3,
  [aux_sym_variable_section_repeat4] = aux_sym_variable_section_repeat4,
  [aux_sym_variable_section_repeat5] = aux_sym_variable_section_repeat5,
  [aux_sym_variable_section_repeat6] = aux_sym_variable_section_repeat6,
  [aux_sym_variable_section_repeat7] = aux_sym_variable_section_repeat7,
  [aux_sym_variable_section_repeat8] = aux_sym_variable_section_repeat8,
  [aux_sym__input_variable_section_repeat1] = aux_sym__input_variable_section_repeat1,
  [aux_sym__input_variable_section_repeat2] = aux_sym__input_variable_section_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SHIFT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CAPS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CTRL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONTROL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOD2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOD3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUPER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOGO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOD4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOD5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_off] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgba] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [sym__hex_comp] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_deg] = {
    .visible = true,
    .named = false,
  },
  [sym_str] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_reference_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_general] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decoration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_animation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gestures] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_misc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_binds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sensitivity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_border_on_floating] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gaps_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gaps_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_col_DOTinactive_border] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_col_DOTactive_border] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_col_DOTgroup_border] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_col_DOTgroup_border_active] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cursor_inactive_timeout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_layout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_cursor_warps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_focus_fallback] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_apply_sens_to_raw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resize_on_border] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extend_border_grab_area] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hover_icon_on_border] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rounding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multisample_edges] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_active_opacity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inactive_opacity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fullscreen_opacity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blur] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blur_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blur_passes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blur_ignore_opacity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blur_new_optimizations] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blur_xray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drop_shadow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shadow_range] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shadow_render_power] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shadow_ignore_window] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_col_DOTshadow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_col_DOTshadow_inactive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shadow_offset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shadow_scale] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dim_inactive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dim_strength] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dim_special] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dim_around] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_screen_shader] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enabled] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_while_typing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_natural_scroll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scroll_factor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_middle_button_emulation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tap_button_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clickfinger_behavior] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tap_DASHto_DASHclick] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drag_lock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tap_DASHand_DASHdrag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transform] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_touchpad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_touchdevice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kb_model] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kb_layout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kb_variant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kb_options] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kb_rules] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kb_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_numlock_by_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeat_rate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeat_delay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_accel_profile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_force_no_accel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_left_handed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scroll_method] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scroll_button] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_follow_mouse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mouse_refocus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float_switch_override_focus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workspace_swipe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workspace_swipe_fingers] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workspace_swipe_distance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workspace_swipe_invert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workspace_swipe_min_speed_to_force] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workspace_swipe_cancel_ratio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workspace_swipe_create_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workspace_swipe_forever] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workspace_swipe_numbered] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_hyprland_logo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_splash_rendering] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vfr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vrr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mouse_move_enables_dpms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_key_press_enables_dpms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_always_follow_on_dnd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_layers_hog_keyboard_focus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_animate_manual_resizes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_animate_mouse_windowdragging] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_autoreload] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enable_swallow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swallow_regex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swallow_exception_regex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_focus_on_activate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_direct_scanout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hide_cursor_on_touch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mouse_move_focuses_monitor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_suppress_portal_warnings] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_render_ahead_of_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_render_ahead_safezone] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cursor_zoom_factor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cursor_zoom_rigid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow_session_lock_restore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_render_titles_in_groupbar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_groupbar_titles_font_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_groupbar_gradients] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pass_mouse_when_bound] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scroll_event_delay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workspace_back_and_forth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow_workspace_cycles] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_focus_preferred_method] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_overlay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_damage_blink] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_logs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_damage_tracking] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enable_stdout_logs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_manual_crash] = {
    .visible = true,
    .named = false,
  },
  [sym_config_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_vec2] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym__bool_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__bool_integer] = {
    .visible = false,
    .named = true,
  },
  [sym_color] = {
    .visible = true,
    .named = true,
  },
  [sym_color_rgb] = {
    .visible = true,
    .named = true,
  },
  [sym_color_rgba] = {
    .visible = true,
    .named = true,
  },
  [sym_color_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_gradient] = {
    .visible = true,
    .named = true,
  },
  [sym_degree] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_section] = {
    .visible = true,
    .named = true,
  },
  [sym__general_section_var] = {
    .visible = true,
    .named = true,
  },
  [sym__decoration_section_var] = {
    .visible = true,
    .named = true,
  },
  [sym__animation_section_var] = {
    .visible = true,
    .named = true,
  },
  [sym__touchpad_section_var] = {
    .visible = true,
    .named = true,
  },
  [sym__touchdevice_section_var] = {
    .visible = true,
    .named = true,
  },
  [sym__input_variable_section] = {
    .visible = true,
    .named = true,
  },
  [sym__input_section_var] = {
    .visible = true,
    .named = true,
  },
  [sym__gestures_section_var] = {
    .visible = true,
    .named = true,
  },
  [sym__misc_section_var] = {
    .visible = true,
    .named = true,
  },
  [sym__binds_section_var] = {
    .visible = true,
    .named = true,
  },
  [sym__debug_section_var] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_config_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gradient_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_section_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_section_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_section_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_section_repeat5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_section_repeat6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_section_repeat7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_section_repeat8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__input_variable_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__input_variable_section_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
  field_unit = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_unit] = "unit",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 0, .inherited = true},
  [2] =
    {field_unit, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1387);
      if (lookahead == '#') ADVANCE(1388);
      if (lookahead == '$') ADVANCE(1438);
      if (lookahead == '(') ADVANCE(1425);
      if (lookahead == ')') ADVANCE(1426);
      if (lookahead == '.') ADVANCE(1382);
      if (lookahead == '0') ADVANCE(1419);
      if (lookahead == '1') ADVANCE(1422);
      if (lookahead == '=') ADVANCE(1453);
      if (lookahead == 'A') ADVANCE(26);
      if (lookahead == 'C') ADVANCE(16);
      if (lookahead == 'L') ADVANCE(31);
      if (lookahead == 'M') ADVANCE(32);
      if (lookahead == 'S') ADVANCE(22);
      if (lookahead == 'W') ADVANCE(24);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'b') ADVANCE(632);
      if (lookahead == 'c') ADVANCE(726);
      if (lookahead == 'd') ADVANCE(158);
      if (lookahead == 'e') ADVANCE(810);
      if (lookahead == 'f') ADVANCE(159);
      if (lookahead == 'g') ADVANCE(163);
      if (lookahead == 'h') ADVANCE(628);
      if (lookahead == 'i') ADVANCE(803);
      if (lookahead == 'k') ADVANCE(267);
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead == 'm') ADVANCE(169);
      if (lookahead == 'n') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(555);
      if (lookahead == 'p') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(409);
      if (lookahead == 's') ADVANCE(302);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == 'v') ADVANCE(556);
      if (lookahead == 'w') ADVANCE(891);
      if (lookahead == 'y') ADVANCE(435);
      if (lookahead == '{') ADVANCE(1443);
      if (lookahead == '}') ADVANCE(1444);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('B' <= lookahead && lookahead <= 'F')) ADVANCE(1384);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1386)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1393);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(1388);
      if (lookahead == '$') ADVANCE(1438);
      if (lookahead == '.') ADVANCE(1382);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1397);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(1388);
      if (lookahead == '$') ADVANCE(1438);
      if (lookahead == '0') ADVANCE(1395);
      if (lookahead == 'r') ADVANCE(578);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(1383);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1396);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(1388);
      if (lookahead == '$') ADVANCE(1438);
      if (lookahead == '0') ADVANCE(1418);
      if (lookahead == '1') ADVANCE(1421);
      if (lookahead == 'd') ADVANCE(466);
      if (lookahead == 'f') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(887);
      if (lookahead == 'o') ADVANCE(554);
      if (lookahead == 't') ADVANCE(1048);
      if (lookahead == 'y') ADVANCE(435);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(1388);
      if (lookahead == '$') ADVANCE(1438);
      if (lookahead == '0') ADVANCE(1418);
      if (lookahead == '1') ADVANCE(1421);
      if (lookahead == 'f') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(887);
      if (lookahead == 'o') ADVANCE(554);
      if (lookahead == 't') ADVANCE(1048);
      if (lookahead == 'y') ADVANCE(435);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(1388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1440);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(1388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(1388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1384);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(1389);
      if (lookahead == '$') ADVANCE(1439);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(1437);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '_') ADVANCE(278);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(393);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(314);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(1382);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1394);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(1382);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1397);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(264);
      END_STATE();
    case 15:
      if (lookahead == '2') ADVANCE(1404);
      if (lookahead == '3') ADVANCE(1405);
      if (lookahead == '4') ADVANCE(1409);
      if (lookahead == '5') ADVANCE(1410);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(1431);
      if (lookahead == 'O') ADVANCE(30);
      if (lookahead == 'T') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1429);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(35);
      if (lookahead == 'O') ADVANCE(30);
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'F') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 'G') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'H') ADVANCE(23);
      if (lookahead == 'U') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'I') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'L') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'L') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1429);
      END_STATE();
    case 27:
      if (lookahead == 'L') ADVANCE(1401);
      END_STATE();
    case 28:
      if (lookahead == 'L') ADVANCE(1402);
      END_STATE();
    case 29:
      if (lookahead == 'N') ADVANCE(1407);
      END_STATE();
    case 30:
      if (lookahead == 'N') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == 'O') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'O') ADVANCE(18);
      END_STATE();
    case 33:
      if (lookahead == 'O') ADVANCE(1408);
      END_STATE();
    case 34:
      if (lookahead == 'O') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'P') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'P') ADVANCE(19);
      END_STATE();
    case 37:
      if (lookahead == 'R') ADVANCE(1406);
      END_STATE();
    case 38:
      if (lookahead == 'R') ADVANCE(27);
      END_STATE();
    case 39:
      if (lookahead == 'R') ADVANCE(34);
      END_STATE();
    case 40:
      if (lookahead == 'S') ADVANCE(1400);
      END_STATE();
    case 41:
      if (lookahead == 'T') ADVANCE(1403);
      END_STATE();
    case 42:
      if (lookahead == 'T') ADVANCE(1399);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(39);
      END_STATE();
    case 44:
      if (lookahead == '_') ADVANCE(558);
      END_STATE();
    case 45:
      if (lookahead == '_') ADVANCE(277);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(249);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(1189);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(903);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(789);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(704);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(271);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(386);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(287);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(701);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(246);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(415);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(592);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(282);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(548);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(905);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(639);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(577);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(177);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(787);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(616);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(561);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(782);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(288);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(1346);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(275);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(1344);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(824);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(272);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(352);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(713);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(572);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(286);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(935);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(571);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(643);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(1013);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(1187);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(597);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(1141);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(1177);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(1005);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(1121);
      if (lookahead == 'd') ADVANCE(1494);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(311);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(398);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(373);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(1233);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(194);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(1151);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(1215);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(464);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(757);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(1243);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(741);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(1172);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(455);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(447);
      END_STATE();
    case 102:
      if (lookahead == '_') ADVANCE(615);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(800);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(313);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(1001);
      END_STATE();
    case 106:
      if (lookahead == '_') ADVANCE(802);
      END_STATE();
    case 107:
      if (lookahead == '_') ADVANCE(1179);
      END_STATE();
    case 108:
      if (lookahead == '_') ADVANCE(904);
      END_STATE();
    case 109:
      if (lookahead == '_') ADVANCE(937);
      END_STATE();
    case 110:
      if (lookahead == '_') ADVANCE(1176);
      END_STATE();
    case 111:
      if (lookahead == '_') ADVANCE(603);
      END_STATE();
    case 112:
      if (lookahead == '_') ADVANCE(961);
      END_STATE();
    case 113:
      if (lookahead == '_') ADVANCE(385);
      END_STATE();
    case 114:
      if (lookahead == '_') ADVANCE(843);
      END_STATE();
    case 115:
      if (lookahead == '_') ADVANCE(791);
      END_STATE();
    case 116:
      if (lookahead == '_') ADVANCE(1341);
      END_STATE();
    case 117:
      if (lookahead == '_') ADVANCE(1153);
      END_STATE();
    case 118:
      if (lookahead == '_') ADVANCE(567);
      END_STATE();
    case 119:
      if (lookahead == '_') ADVANCE(690);
      END_STATE();
    case 120:
      if (lookahead == '_') ADVANCE(380);
      END_STATE();
    case 121:
      if (lookahead == '_') ADVANCE(211);
      END_STATE();
    case 122:
      if (lookahead == '_') ADVANCE(1072);
      END_STATE();
    case 123:
      if (lookahead == '_') ADVANCE(395);
      END_STATE();
    case 124:
      if (lookahead == '_') ADVANCE(1061);
      END_STATE();
    case 125:
      if (lookahead == '_') ADVANCE(1103);
      END_STATE();
    case 126:
      if (lookahead == '_') ADVANCE(569);
      END_STATE();
    case 127:
      if (lookahead == '_') ADVANCE(1347);
      END_STATE();
    case 128:
      if (lookahead == '_') ADVANCE(773);
      END_STATE();
    case 129:
      if (lookahead == '_') ADVANCE(1180);
      END_STATE();
    case 130:
      if (lookahead == '_') ADVANCE(1238);
      END_STATE();
    case 131:
      if (lookahead == '_') ADVANCE(1239);
      END_STATE();
    case 132:
      if (lookahead == '_') ADVANCE(247);
      END_STATE();
    case 133:
      if (lookahead == '_') ADVANCE(236);
      END_STATE();
    case 134:
      if (lookahead == '_') ADVANCE(1350);
      END_STATE();
    case 135:
      if (lookahead == '_') ADVANCE(570);
      END_STATE();
    case 136:
      if (lookahead == '_') ADVANCE(777);
      END_STATE();
    case 137:
      if (lookahead == '_') ADVANCE(1240);
      END_STATE();
    case 138:
      if (lookahead == '_') ADVANCE(1099);
      END_STATE();
    case 139:
      if (lookahead == '_') ADVANCE(951);
      END_STATE();
    case 140:
      if (lookahead == '_') ADVANCE(1100);
      END_STATE();
    case 141:
      if (lookahead == '_') ADVANCE(956);
      END_STATE();
    case 142:
      if (lookahead == '_') ADVANCE(959);
      END_STATE();
    case 143:
      if (lookahead == '_') ADVANCE(801);
      END_STATE();
    case 144:
      if (lookahead == '_') ADVANCE(1017);
      END_STATE();
    case 145:
      if (lookahead == '_') ADVANCE(1106);
      END_STATE();
    case 146:
      if (lookahead == '_') ADVANCE(978);
      END_STATE();
    case 147:
      if (lookahead == '_') ADVANCE(575);
      END_STATE();
    case 148:
      if (lookahead == '_') ADVANCE(980);
      END_STATE();
    case 149:
      if (lookahead == '_') ADVANCE(576);
      END_STATE();
    case 150:
      if (lookahead == '_') ADVANCE(982);
      END_STATE();
    case 151:
      if (lookahead == '_') ADVANCE(289);
      END_STATE();
    case 152:
      if (lookahead == '_') ADVANCE(290);
      END_STATE();
    case 153:
      if (lookahead == '_') ADVANCE(291);
      END_STATE();
    case 154:
      if (lookahead == '_') ADVANCE(292);
      END_STATE();
    case 155:
      if (lookahead == '_') ADVANCE(293);
      END_STATE();
    case 156:
      if (lookahead == '_') ADVANCE(294);
      END_STATE();
    case 157:
      if (lookahead == '_') ADVANCE(989);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(1435);
      if (lookahead == 'e') ADVANCE(1432);
      if (lookahead == 'i') ADVANCE(783);
      if (lookahead == 'r') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1429);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(1434);
      if (lookahead == 'l') ADVANCE(892);
      if (lookahead == 'o') ADVANCE(321);
      if (lookahead == 'u') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1429);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(1168);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(994);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(1468);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(995);
      if (lookahead == 'e') ADVANCE(846);
      if (lookahead == 'r') ADVANCE(890);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(1229);
      if (lookahead == 'o') ADVANCE(1415);
      if (lookahead == 'u') ADVANCE(785);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(1229);
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(785);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(1356);
      if (lookahead == 'e') ADVANCE(557);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(604);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(820);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == 'o') ADVANCE(1295);
      if (lookahead == 'u') ADVANCE(729);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(1374);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'p') ADVANCE(1275);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(990);
      if (lookahead == 'o') ADVANCE(1272);
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(990);
      if (lookahead == 'o') ADVANCE(1272);
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(387);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(1373);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(798);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(619);
      if (lookahead == 't') ADVANCE(652);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(1357);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(1358);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(728);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(728);
      if (lookahead == 'l') ADVANCE(892);
      if (lookahead == 'o') ADVANCE(321);
      if (lookahead == 'u') ADVANCE(730);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(1194);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(1335);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(354);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(1360);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(582);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(1294);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(851);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(991);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(563);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(1046);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(330);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(736);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(827);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(719);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(1364);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(763);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(590);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(847);
      if (lookahead == 'e') ADVANCE(871);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(359);
      END_STATE();
    case 203:
      if (lookahead == 'a') ADVANCE(721);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(1147);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(747);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(866);
      END_STATE();
    case 207:
      if (lookahead == 'a') ADVANCE(1170);
      END_STATE();
    case 208:
      if (lookahead == 'a') ADVANCE(1081);
      END_STATE();
    case 209:
      if (lookahead == 'a') ADVANCE(865);
      if (lookahead == 'r') ADVANCE(542);
      END_STATE();
    case 210:
      if (lookahead == 'a') ADVANCE(1060);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(1088);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(1039);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(1095);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(1225);
      END_STATE();
    case 215:
      if (lookahead == 'a') ADVANCE(772);
      END_STATE();
    case 216:
      if (lookahead == 'a') ADVANCE(784);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == 'i') ADVANCE(783);
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 217:
      if (lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 218:
      if (lookahead == 'a') ADVANCE(821);
      END_STATE();
    case 219:
      if (lookahead == 'a') ADVANCE(821);
      if (lookahead == 'u') ADVANCE(410);
      END_STATE();
    case 220:
      if (lookahead == 'a') ADVANCE(1232);
      END_STATE();
    case 221:
      if (lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 222:
      if (lookahead == 'a') ADVANCE(381);
      END_STATE();
    case 223:
      if (lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 224:
      if (lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 225:
      if (lookahead == 'a') ADVANCE(1228);
      END_STATE();
    case 226:
      if (lookahead == 'a') ADVANCE(1156);
      END_STATE();
    case 227:
      if (lookahead == 'a') ADVANCE(1317);
      END_STATE();
    case 228:
      if (lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 229:
      if (lookahead == 'a') ADVANCE(342);
      END_STATE();
    case 230:
      if (lookahead == 'a') ADVANCE(1224);
      END_STATE();
    case 231:
      if (lookahead == 'a') ADVANCE(749);
      END_STATE();
    case 232:
      if (lookahead == 'a') ADVANCE(1250);
      END_STATE();
    case 233:
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 234:
      if (lookahead == 'a') ADVANCE(818);
      if (lookahead == 't') ADVANCE(884);
      END_STATE();
    case 235:
      if (lookahead == 'a') ADVANCE(738);
      END_STATE();
    case 236:
      if (lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 237:
      if (lookahead == 'a') ADVANCE(1220);
      END_STATE();
    case 238:
      if (lookahead == 'a') ADVANCE(1063);
      END_STATE();
    case 239:
      if (lookahead == 'a') ADVANCE(774);
      END_STATE();
    case 240:
      if (lookahead == 'a') ADVANCE(740);
      END_STATE();
    case 241:
      if (lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 242:
      if (lookahead == 'a') ADVANCE(828);
      END_STATE();
    case 243:
      if (lookahead == 'a') ADVANCE(1244);
      END_STATE();
    case 244:
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 245:
      if (lookahead == 'a') ADVANCE(1234);
      END_STATE();
    case 246:
      if (lookahead == 'a') ADVANCE(1286);
      if (lookahead == 'h') ADVANCE(1372);
      if (lookahead == 'l') ADVANCE(896);
      if (lookahead == 's') ADVANCE(1003);
      if (lookahead == 't') ADVANCE(640);
      if (lookahead == 'w') ADVANCE(625);
      END_STATE();
    case 247:
      if (lookahead == 'a') ADVANCE(853);
      END_STATE();
    case 248:
      if (lookahead == 'a') ADVANCE(339);
      END_STATE();
    case 249:
      if (lookahead == 'a') ADVANCE(1085);
      if (lookahead == 'i') ADVANCE(875);
      if (lookahead == 's') ADVANCE(998);
      END_STATE();
    case 250:
      if (lookahead == 'a') ADVANCE(855);
      END_STATE();
    case 251:
      if (lookahead == 'a') ADVANCE(328);
      END_STATE();
    case 252:
      if (lookahead == 'a') ADVANCE(340);
      END_STATE();
    case 253:
      if (lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 254:
      if (lookahead == 'a') ADVANCE(336);
      END_STATE();
    case 255:
      if (lookahead == 'a') ADVANCE(397);
      END_STATE();
    case 256:
      if (lookahead == 'a') ADVANCE(341);
      END_STATE();
    case 257:
      if (lookahead == 'a') ADVANCE(1265);
      END_STATE();
    case 258:
      if (lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 259:
      if (lookahead == 'a') ADVANCE(347);
      END_STATE();
    case 260:
      if (lookahead == 'a') ADVANCE(1262);
      END_STATE();
    case 261:
      if (lookahead == 'a') ADVANCE(346);
      END_STATE();
    case 262:
      if (lookahead == 'a') ADVANCE(348);
      END_STATE();
    case 263:
      if (lookahead == 'a') ADVANCE(874);
      if (lookahead == 'o') ADVANCE(1309);
      END_STATE();
    case 264:
      if (lookahead == 'a') ADVANCE(350);
      if (lookahead == 'g') ADVANCE(1082);
      if (lookahead == 'i') ADVANCE(825);
      if (lookahead == 's') ADVANCE(624);
      END_STATE();
    case 265:
      if (lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 266:
      if (lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 267:
      if (lookahead == 'b') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(1366);
      END_STATE();
    case 268:
      if (lookahead == 'b') ADVANCE(1424);
      END_STATE();
    case 269:
      if (lookahead == 'b') ADVANCE(1271);
      if (lookahead == 'c') ADVANCE(897);
      END_STATE();
    case 270:
      if (lookahead == 'b') ADVANCE(733);
      END_STATE();
    case 271:
      if (lookahead == 'b') ADVANCE(755);
      if (lookahead == 't') ADVANCE(1056);
      END_STATE();
    case 272:
      if (lookahead == 'b') ADVANCE(521);
      END_STATE();
    case 273:
      if (lookahead == 'b') ADVANCE(121);
      END_STATE();
    case 274:
      if (lookahead == 'b') ADVANCE(238);
      END_STATE();
    case 275:
      if (lookahead == 'b') ADVANCE(1370);
      END_STATE();
    case 276:
      if (lookahead == 'b') ADVANCE(921);
      END_STATE();
    case 277:
      if (lookahead == 'b') ADVANCE(973);
      if (lookahead == 'c') ADVANCE(1310);
      if (lookahead == 'd') ADVANCE(650);
      if (lookahead == 'f') ADVANCE(895);
      END_STATE();
    case 278:
      if (lookahead == 'b') ADVANCE(1280);
      END_STATE();
    case 279:
      if (lookahead == 'b') ADVANCE(212);
      END_STATE();
    case 280:
      if (lookahead == 'b') ADVANCE(530);
      END_STATE();
    case 281:
      if (lookahead == 'b') ADVANCE(767);
      END_STATE();
    case 282:
      if (lookahead == 'b') ADVANCE(241);
      if (lookahead == 's') ADVANCE(1340);
      END_STATE();
    case 283:
      if (lookahead == 'b') ADVANCE(244);
      END_STATE();
    case 284:
      if (lookahead == 'b') ADVANCE(778);
      END_STATE();
    case 285:
      if (lookahead == 'b') ADVANCE(779);
      END_STATE();
    case 286:
      if (lookahead == 'b') ADVANCE(967);
      END_STATE();
    case 287:
      if (lookahead == 'b') ADVANCE(1311);
      if (lookahead == 'e') ADVANCE(1316);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(461);
      END_STATE();
    case 288:
      if (lookahead == 'b') ADVANCE(979);
      END_STATE();
    case 289:
      if (lookahead == 'b') ADVANCE(1313);
      END_STATE();
    case 290:
      if (lookahead == 'b') ADVANCE(981);
      END_STATE();
    case 291:
      if (lookahead == 'b') ADVANCE(983);
      END_STATE();
    case 292:
      if (lookahead == 'b') ADVANCE(984);
      END_STATE();
    case 293:
      if (lookahead == 'b') ADVANCE(985);
      END_STATE();
    case 294:
      if (lookahead == 'b') ADVANCE(986);
      END_STATE();
    case 295:
      if (lookahead == 'c') ADVANCE(1433);
      if (lookahead == 'l') ADVANCE(727);
      if (lookahead == 'n') ADVANCE(634);
      if (lookahead == 'p') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1429);
      END_STATE();
    case 296:
      if (lookahead == 'c') ADVANCE(301);
      if (lookahead == 'l') ADVANCE(727);
      if (lookahead == 'n') ADVANCE(634);
      if (lookahead == 'p') ADVANCE(992);
      END_STATE();
    case 297:
      if (lookahead == 'c') ADVANCE(1449);
      END_STATE();
    case 298:
      if (lookahead == 'c') ADVANCE(610);
      END_STATE();
    case 299:
      if (lookahead == 'c') ADVANCE(209);
      if (lookahead == 'd') ADVANCE(664);
      if (lookahead == 'f') ADVANCE(693);
      if (lookahead == 'i') ADVANCE(868);
      if (lookahead == 'm') ADVANCE(673);
      if (lookahead == 'n') ADVANCE(1281);
      END_STATE();
    case 300:
      if (lookahead == 'c') ADVANCE(710);
      END_STATE();
    case 301:
      if (lookahead == 'c') ADVANCE(444);
      if (lookahead == 't') ADVANCE(670);
      END_STATE();
    case 302:
      if (lookahead == 'c') ADVANCE(1041);
      if (lookahead == 'e') ADVANCE(816);
      if (lookahead == 'h') ADVANCE(174);
      if (lookahead == 'u') ADVANCE(996);
      if (lookahead == 'w') ADVANCE(215);
      END_STATE();
    case 303:
      if (lookahead == 'c') ADVANCE(712);
      END_STATE();
    case 304:
      if (lookahead == 'c') ADVANCE(706);
      END_STATE();
    case 305:
      if (lookahead == 'c') ADVANCE(1268);
      END_STATE();
    case 306:
      if (lookahead == 'c') ADVANCE(715);
      END_STATE();
    case 307:
      if (lookahead == 'c') ADVANCE(622);
      END_STATE();
    case 308:
      if (lookahead == 'c') ADVANCE(708);
      END_STATE();
    case 309:
      if (lookahead == 'c') ADVANCE(709);
      END_STATE();
    case 310:
      if (lookahead == 'c') ADVANCE(613);
      END_STATE();
    case 311:
      if (lookahead == 'c') ADVANCE(1371);
      END_STATE();
    case 312:
      if (lookahead == 'c') ADVANCE(682);
      END_STATE();
    case 313:
      if (lookahead == 'c') ADVANCE(1077);
      END_STATE();
    case 314:
      if (lookahead == 'c') ADVANCE(752);
      END_STATE();
    case 315:
      if (lookahead == 'c') ADVANCE(1102);
      END_STATE();
    case 316:
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 317:
      if (lookahead == 'c') ADVANCE(418);
      END_STATE();
    case 318:
      if (lookahead == 'c') ADVANCE(539);
      END_STATE();
    case 319:
      if (lookahead == 'c') ADVANCE(431);
      END_STATE();
    case 320:
      if (lookahead == 'c') ADVANCE(434);
      END_STATE();
    case 321:
      if (lookahead == 'c') ADVANCE(1297);
      if (lookahead == 'l') ADVANCE(753);
      if (lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 322:
      if (lookahead == 'c') ADVANCE(714);
      END_STATE();
    case 323:
      if (lookahead == 'c') ADVANCE(453);
      END_STATE();
    case 324:
      if (lookahead == 'c') ADVANCE(1053);
      END_STATE();
    case 325:
      if (lookahead == 'c') ADVANCE(658);
      END_STATE();
    case 326:
      if (lookahead == 'c') ADVANCE(1287);
      END_STATE();
    case 327:
      if (lookahead == 'c') ADVANCE(716);
      END_STATE();
    case 328:
      if (lookahead == 'c') ADVANCE(660);
      END_STATE();
    case 329:
      if (lookahead == 'c') ADVANCE(1306);
      END_STATE();
    case 330:
      if (lookahead == 'c') ADVANCE(331);
      END_STATE();
    case 331:
      if (lookahead == 'c') ADVANCE(472);
      END_STATE();
    case 332:
      if (lookahead == 'c') ADVANCE(662);
      END_STATE();
    case 333:
      if (lookahead == 'c') ADVANCE(1291);
      END_STATE();
    case 334:
      if (lookahead == 'c') ADVANCE(1223);
      END_STATE();
    case 335:
      if (lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 336:
      if (lookahead == 'c') ADVANCE(666);
      END_STATE();
    case 337:
      if (lookahead == 'c') ADVANCE(1292);
      END_STATE();
    case 338:
      if (lookahead == 'c') ADVANCE(526);
      END_STATE();
    case 339:
      if (lookahead == 'c') ADVANCE(490);
      END_STATE();
    case 340:
      if (lookahead == 'c') ADVANCE(506);
      END_STATE();
    case 341:
      if (lookahead == 'c') ADVANCE(1251);
      END_STATE();
    case 342:
      if (lookahead == 'c') ADVANCE(1246);
      END_STATE();
    case 343:
      if (lookahead == 'c') ADVANCE(1301);
      END_STATE();
    case 344:
      if (lookahead == 'c') ADVANCE(1241);
      END_STATE();
    case 345:
      if (lookahead == 'c') ADVANCE(944);
      END_STATE();
    case 346:
      if (lookahead == 'c') ADVANCE(1256);
      END_STATE();
    case 347:
      if (lookahead == 'c') ADVANCE(1247);
      END_STATE();
    case 348:
      if (lookahead == 'c') ADVANCE(1261);
      END_STATE();
    case 349:
      if (lookahead == 'c') ADVANCE(768);
      END_STATE();
    case 350:
      if (lookahead == 'c') ADVANCE(1264);
      END_STATE();
    case 351:
      if (lookahead == 'c') ADVANCE(1267);
      END_STATE();
    case 352:
      if (lookahead == 'c') ADVANCE(1312);
      END_STATE();
    case 353:
      if (lookahead == 'c') ADVANCE(1269);
      END_STATE();
    case 354:
      if (lookahead == 'd') ADVANCE(1506);
      END_STATE();
    case 355:
      if (lookahead == 'd') ADVANCE(1492);
      END_STATE();
    case 356:
      if (lookahead == 'd') ADVANCE(1519);
      END_STATE();
    case 357:
      if (lookahead == 'd') ADVANCE(1520);
      END_STATE();
    case 358:
      if (lookahead == 'd') ADVANCE(1556);
      END_STATE();
    case 359:
      if (lookahead == 'd') ADVANCE(1544);
      END_STATE();
    case 360:
      if (lookahead == 'd') ADVANCE(1540);
      END_STATE();
    case 361:
      if (lookahead == 'd') ADVANCE(1561);
      END_STATE();
    case 362:
      if (lookahead == 'd') ADVANCE(1565);
      END_STATE();
    case 363:
      if (lookahead == 'd') ADVANCE(1533);
      END_STATE();
    case 364:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 365:
      if (lookahead == 'd') ADVANCE(369);
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 366:
      if (lookahead == 'd') ADVANCE(440);
      END_STATE();
    case 367:
      if (lookahead == 'd') ADVANCE(1120);
      END_STATE();
    case 368:
      if (lookahead == 'd') ADVANCE(641);
      END_STATE();
    case 369:
      if (lookahead == 'd') ADVANCE(765);
      END_STATE();
    case 370:
      if (lookahead == 'd') ADVANCE(606);
      END_STATE();
    case 371:
      if (lookahead == 'd') ADVANCE(503);
      if (lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 372:
      if (lookahead == 'd') ADVANCE(888);
      END_STATE();
    case 373:
      if (lookahead == 'd') ADVANCE(999);
      END_STATE();
    case 374:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 375:
      if (lookahead == 'd') ADVANCE(889);
      END_STATE();
    case 376:
      if (lookahead == 'd') ADVANCE(452);
      END_STATE();
    case 377:
      if (lookahead == 'd') ADVANCE(669);
      END_STATE();
    case 378:
      if (lookahead == 'd') ADVANCE(900);
      END_STATE();
    case 379:
      if (lookahead == 'd') ADVANCE(902);
      END_STATE();
    case 380:
      if (lookahead == 'd') ADVANCE(449);
      END_STATE();
    case 381:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 382:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 383:
      if (lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 384:
      if (lookahead == 'd') ADVANCE(460);
      END_STATE();
    case 385:
      if (lookahead == 'd') ADVANCE(1009);
      END_STATE();
    case 386:
      if (lookahead == 'd') ADVANCE(508);
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 387:
      if (lookahead == 'd') ADVANCE(940);
      END_STATE();
    case 388:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 389:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 390:
      if (lookahead == 'd') ADVANCE(450);
      END_STATE();
    case 391:
      if (lookahead == 'd') ADVANCE(517);
      END_STATE();
    case 392:
      if (lookahead == 'd') ADVANCE(901);
      END_STATE();
    case 393:
      if (lookahead == 'd') ADVANCE(1058);
      END_STATE();
    case 394:
      if (lookahead == 'd') ADVANCE(525);
      END_STATE();
    case 395:
      if (lookahead == 'd') ADVANCE(522);
      END_STATE();
    case 396:
      if (lookahead == 'd') ADVANCE(1066);
      END_STATE();
    case 397:
      if (lookahead == 'd') ADVANCE(474);
      END_STATE();
    case 398:
      if (lookahead == 'd') ADVANCE(833);
      END_STATE();
    case 399:
      if (lookahead == 'd') ADVANCE(477);
      END_STATE();
    case 400:
      if (lookahead == 'd') ADVANCE(479);
      END_STATE();
    case 401:
      if (lookahead == 'd') ADVANCE(481);
      END_STATE();
    case 402:
      if (lookahead == 'd') ADVANCE(482);
      END_STATE();
    case 403:
      if (lookahead == 'd') ADVANCE(487);
      END_STATE();
    case 404:
      if (lookahead == 'd') ADVANCE(491);
      END_STATE();
    case 405:
      if (lookahead == 'd') ADVANCE(550);
      END_STATE();
    case 406:
      if (lookahead == 'd') ADVANCE(492);
      END_STATE();
    case 407:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 408:
      if (lookahead == 'd') ADVANCE(529);
      END_STATE();
    case 409:
      if (lookahead == 'e') ADVANCE(864);
      if (lookahead == 'g') ADVANCE(268);
      if (lookahead == 'o') ADVANCE(1293);
      END_STATE();
    case 410:
      if (lookahead == 'e') ADVANCE(1411);
      END_STATE();
    case 411:
      if (lookahead == 'e') ADVANCE(1412);
      END_STATE();
    case 412:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 413:
      if (lookahead == 'e') ADVANCE(1513);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(1476);
      END_STATE();
    case 415:
      if (lookahead == 'e') ADVANCE(1355);
      if (lookahead == 'r') ADVANCE(513);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(1454);
      END_STATE();
    case 417:
      if (lookahead == 'e') ADVANCE(1515);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(1507);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(1489);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(1569);
      END_STATE();
    case 421:
      if (lookahead == 'e') ADVANCE(1522);
      END_STATE();
    case 422:
      if (lookahead == 'e') ADVANCE(1482);
      END_STATE();
    case 423:
      if (lookahead == 'e') ADVANCE(1488);
      END_STATE();
    case 424:
      if (lookahead == 'e') ADVANCE(1517);
      END_STATE();
    case 425:
      if (lookahead == 'e') ADVANCE(1525);
      END_STATE();
    case 426:
      if (lookahead == 'e') ADVANCE(1548);
      END_STATE();
    case 427:
      if (lookahead == 'e') ADVANCE(1486);
      END_STATE();
    case 428:
      if (lookahead == 'e') ADVANCE(1553);
      END_STATE();
    case 429:
      if (lookahead == 'e') ADVANCE(1554);
      END_STATE();
    case 430:
      if (lookahead == 'e') ADVANCE(1461);
      END_STATE();
    case 431:
      if (lookahead == 'e') ADVANCE(1527);
      END_STATE();
    case 432:
      if (lookahead == 'e') ADVANCE(1559);
      END_STATE();
    case 433:
      if (lookahead == 'e') ADVANCE(1557);
      END_STATE();
    case 434:
      if (lookahead == 'e') ADVANCE(1529);
      END_STATE();
    case 435:
      if (lookahead == 'e') ADVANCE(1119);
      END_STATE();
    case 436:
      if (lookahead == 'e') ADVANCE(1353);
      END_STATE();
    case 437:
      if (lookahead == 'e') ADVANCE(1379);
      END_STATE();
    case 438:
      if (lookahead == 'e') ADVANCE(1354);
      END_STATE();
    case 439:
      if (lookahead == 'e') ADVANCE(861);
      END_STATE();
    case 440:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 441:
      if (lookahead == 'e') ADVANCE(568);
      END_STATE();
    case 442:
      if (lookahead == 'e') ADVANCE(1045);
      END_STATE();
    case 443:
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead == 'o') ADVANCE(756);
      END_STATE();
    case 444:
      if (lookahead == 'e') ADVANCE(771);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 446:
      if (lookahead == 'e') ADVANCE(1049);
      END_STATE();
    case 447:
      if (lookahead == 'e') ADVANCE(799);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(1367);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(562);
      END_STATE();
    case 450:
      if (lookahead == 'e') ADVANCE(1087);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(1337);
      END_STATE();
    case 452:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 453:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(819);
      END_STATE();
    case 455:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 456:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(1122);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(1123);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(720);
      END_STATE();
    case 461:
      if (lookahead == 'e') ADVANCE(1230);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 463:
      if (lookahead == 'e') ADVANCE(852);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(869);
      END_STATE();
    case 465:
      if (lookahead == 'e') ADVANCE(1125);
      END_STATE();
    case 466:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 467:
      if (lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 468:
      if (lookahead == 'e') ADVANCE(1091);
      END_STATE();
    case 469:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 470:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 471:
      if (lookahead == 'e') ADVANCE(1200);
      END_STATE();
    case 472:
      if (lookahead == 'e') ADVANCE(722);
      END_STATE();
    case 473:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 474:
      if (lookahead == 'e') ADVANCE(1028);
      END_STATE();
    case 475:
      if (lookahead == 'e') ADVANCE(751);
      END_STATE();
    case 476:
      if (lookahead == 'e') ADVANCE(1129);
      END_STATE();
    case 477:
      if (lookahead == 'e') ADVANCE(1086);
      END_STATE();
    case 478:
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(906);
      END_STATE();
    case 479:
      if (lookahead == 'e') ADVANCE(1030);
      END_STATE();
    case 480:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 481:
      if (lookahead == 'e') ADVANCE(1031);
      END_STATE();
    case 482:
      if (lookahead == 'e') ADVANCE(1032);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(1190);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(1064);
      END_STATE();
    case 485:
      if (lookahead == 'e') ADVANCE(1132);
      END_STATE();
    case 486:
      if (lookahead == 'e') ADVANCE(1133);
      END_STATE();
    case 487:
      if (lookahead == 'e') ADVANCE(1034);
      END_STATE();
    case 488:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 489:
      if (lookahead == 'e') ADVANCE(1035);
      END_STATE();
    case 490:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 491:
      if (lookahead == 'e') ADVANCE(1037);
      END_STATE();
    case 492:
      if (lookahead == 'e') ADVANCE(1098);
      END_STATE();
    case 493:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 494:
      if (lookahead == 'e') ADVANCE(1038);
      END_STATE();
    case 495:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 496:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 497:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 498:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 499:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 500:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 501:
      if (lookahead == 'e') ADVANCE(1155);
      END_STATE();
    case 502:
      if (lookahead == 'e') ADVANCE(1094);
      if (lookahead == 'o') ADVANCE(1277);
      END_STATE();
    case 503:
      if (lookahead == 'e') ADVANCE(1315);
      END_STATE();
    case 504:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 505:
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 506:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 507:
      if (lookahead == 'e') ADVANCE(1083);
      END_STATE();
    case 508:
      if (lookahead == 'e') ADVANCE(739);
      END_STATE();
    case 509:
      if (lookahead == 'e') ADVANCE(835);
      END_STATE();
    case 510:
      if (lookahead == 'e') ADVANCE(1065);
      END_STATE();
    case 511:
      if (lookahead == 'e') ADVANCE(815);
      END_STATE();
    case 512:
      if (lookahead == 'e') ADVANCE(1069);
      END_STATE();
    case 513:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 514:
      if (lookahead == 'e') ADVANCE(860);
      END_STATE();
    case 515:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 516:
      if (lookahead == 'e') ADVANCE(1158);
      END_STATE();
    case 517:
      if (lookahead == 'e') ADVANCE(1057);
      END_STATE();
    case 518:
      if (lookahead == 'e') ADVANCE(878);
      END_STATE();
    case 519:
      if (lookahead == 'e') ADVANCE(1169);
      END_STATE();
    case 520:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 521:
      if (lookahead == 'e') ADVANCE(621);
      END_STATE();
    case 522:
      if (lookahead == 'e') ADVANCE(746);
      END_STATE();
    case 523:
      if (lookahead == 'e') ADVANCE(1345);
      END_STATE();
    case 524:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 525:
      if (lookahead == 'e') ADVANCE(1113);
      END_STATE();
    case 526:
      if (lookahead == 'e') ADVANCE(758);
      END_STATE();
    case 527:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 528:
      if (lookahead == 'e') ADVANCE(1071);
      END_STATE();
    case 529:
      if (lookahead == 'e') ADVANCE(1074);
      END_STATE();
    case 530:
      if (lookahead == 'e') ADVANCE(1075);
      END_STATE();
    case 531:
      if (lookahead == 'e') ADVANCE(1165);
      END_STATE();
    case 532:
      if (lookahead == 'e') ADVANCE(844);
      END_STATE();
    case 533:
      if (lookahead == 'e') ADVANCE(1173);
      END_STATE();
    case 534:
      if (lookahead == 'e') ADVANCE(1166);
      END_STATE();
    case 535:
      if (lookahead == 'e') ADVANCE(1174);
      END_STATE();
    case 536:
      if (lookahead == 'e') ADVANCE(1171);
      END_STATE();
    case 537:
      if (lookahead == 'e') ADVANCE(1183);
      END_STATE();
    case 538:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 539:
      if (lookahead == 'e') ADVANCE(1016);
      END_STATE();
    case 540:
      if (lookahead == 'e') ADVANCE(1237);
      END_STATE();
    case 541:
      if (lookahead == 'e') ADVANCE(527);
      END_STATE();
    case 542:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 543:
      if (lookahead == 'e') ADVANCE(957);
      END_STATE();
    case 544:
      if (lookahead == 'e') ADVANCE(1328);
      END_STATE();
    case 545:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 546:
      if (lookahead == 'e') ADVANCE(872);
      END_STATE();
    case 547:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 548:
      if (lookahead == 'e') ADVANCE(876);
      if (lookahead == 'f') ADVANCE(968);
      END_STATE();
    case 549:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 550:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 551:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 552:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 553:
      if (lookahead == 'f') ADVANCE(1417);
      END_STATE();
    case 554:
      if (lookahead == 'f') ADVANCE(553);
      if (lookahead == 'n') ADVANCE(1416);
      END_STATE();
    case 555:
      if (lookahead == 'f') ADVANCE(553);
      if (lookahead == 'n') ADVANCE(1416);
      if (lookahead == 'u') ADVANCE(1207);
      if (lookahead == 'v') ADVANCE(442);
      END_STATE();
    case 556:
      if (lookahead == 'f') ADVANCE(1024);
      if (lookahead == 'r') ADVANCE(1025);
      END_STATE();
    case 557:
      if (lookahead == 'f') ADVANCE(1209);
      END_STATE();
    case 558:
      if (lookahead == 'f') ADVANCE(648);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 'm') ADVANCE(938);
      if (lookahead == 'o') ADVANCE(1008);
      if (lookahead == 'r') ADVANCE(1283);
      if (lookahead == 'v') ADVANCE(193);
      END_STATE();
    case 559:
      if (lookahead == 'f') ADVANCE(566);
      END_STATE();
    case 560:
      if (lookahead == 'f') ADVANCE(645);
      END_STATE();
    case 561:
      if (lookahead == 'f') ADVANCE(977);
      END_STATE();
    case 562:
      if (lookahead == 'f') ADVANCE(189);
      END_STATE();
    case 563:
      if (lookahead == 'f') ADVANCE(437);
      END_STATE();
    case 564:
      if (lookahead == 'f') ADVANCE(674);
      END_STATE();
    case 565:
      if (lookahead == 'f') ADVANCE(910);
      END_STATE();
    case 566:
      if (lookahead == 'f') ADVANCE(1160);
      END_STATE();
    case 567:
      if (lookahead == 'f') ADVANCE(965);
      END_STATE();
    case 568:
      if (lookahead == 'f') ADVANCE(468);
      END_STATE();
    case 569:
      if (lookahead == 'f') ADVANCE(941);
      END_STATE();
    case 570:
      if (lookahead == 'f') ADVANCE(927);
      END_STATE();
    case 571:
      if (lookahead == 'f') ADVANCE(761);
      END_STATE();
    case 572:
      if (lookahead == 'f') ADVANCE(240);
      END_STATE();
    case 573:
      if (lookahead == 'f') ADVANCE(964);
      END_STATE();
    case 574:
      if (lookahead == 'f') ADVANCE(137);
      END_STATE();
    case 575:
      if (lookahead == 'f') ADVANCE(971);
      END_STATE();
    case 576:
      if (lookahead == 'f') ADVANCE(972);
      END_STATE();
    case 577:
      if (lookahead == 'f') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(644);
      END_STATE();
    case 578:
      if (lookahead == 'g') ADVANCE(268);
      END_STATE();
    case 579:
      if (lookahead == 'g') ADVANCE(1436);
      END_STATE();
    case 580:
      if (lookahead == 'g') ADVANCE(1451);
      END_STATE();
    case 581:
      if (lookahead == 'g') ADVANCE(1470);
      END_STATE();
    case 582:
      if (lookahead == 'g') ADVANCE(1503);
      END_STATE();
    case 583:
      if (lookahead == 'g') ADVANCE(1570);
      END_STATE();
    case 584:
      if (lookahead == 'g') ADVANCE(1495);
      END_STATE();
    case 585:
      if (lookahead == 'g') ADVANCE(1455);
      END_STATE();
    case 586:
      if (lookahead == 'g') ADVANCE(1535);
      END_STATE();
    case 587:
      if (lookahead == 'g') ADVANCE(1543);
      END_STATE();
    case 588:
      if (lookahead == 'g') ADVANCE(128);
      END_STATE();
    case 589:
      if (lookahead == 'g') ADVANCE(858);
      END_STATE();
    case 590:
      if (lookahead == 'g') ADVANCE(607);
      END_STATE();
    case 591:
      if (lookahead == 'g') ADVANCE(1208);
      END_STATE();
    case 592:
      if (lookahead == 'g') ADVANCE(1097);
      if (lookahead == 't') ADVANCE(700);
      END_STATE();
    case 593:
      if (lookahead == 'g') ADVANCE(1126);
      END_STATE();
    case 594:
      if (lookahead == 'g') ADVANCE(653);
      END_STATE();
    case 595:
      if (lookahead == 'g') ADVANCE(885);
      END_STATE();
    case 596:
      if (lookahead == 'g') ADVANCE(1130);
      END_STATE();
    case 597:
      if (lookahead == 'g') ADVANCE(1080);
      END_STATE();
    case 598:
      if (lookahead == 'g') ADVANCE(422);
      END_STATE();
    case 599:
      if (lookahead == 'g') ADVANCE(436);
      END_STATE();
    case 600:
      if (lookahead == 'g') ADVANCE(1138);
      END_STATE();
    case 601:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 602:
      if (lookahead == 'g') ADVANCE(438);
      END_STATE();
    case 603:
      if (lookahead == 'g') ADVANCE(1116);
      END_STATE();
    case 604:
      if (lookahead == 'g') ADVANCE(462);
      END_STATE();
    case 605:
      if (lookahead == 'g') ADVANCE(528);
      END_STATE();
    case 606:
      if (lookahead == 'g') ADVANCE(476);
      END_STATE();
    case 607:
      if (lookahead == 'g') ADVANCE(668);
      END_STATE();
    case 608:
      if (lookahead == 'g') ADVANCE(512);
      END_STATE();
    case 609:
      if (lookahead == 'g') ADVANCE(867);
      END_STATE();
    case 610:
      if (lookahead == 'h') ADVANCE(371);
      END_STATE();
    case 611:
      if (lookahead == 'h') ADVANCE(1490);
      END_STATE();
    case 612:
      if (lookahead == 'h') ADVANCE(1572);
      END_STATE();
    case 613:
      if (lookahead == 'h') ADVANCE(1550);
      END_STATE();
    case 614:
      if (lookahead == 'h') ADVANCE(1563);
      END_STATE();
    case 615:
      if (lookahead == 'h') ADVANCE(190);
      END_STATE();
    case 616:
      if (lookahead == 'h') ADVANCE(930);
      END_STATE();
    case 617:
      if (lookahead == 'h') ADVANCE(907);
      END_STATE();
    case 618:
      if (lookahead == 'h') ADVANCE(255);
      END_STATE();
    case 619:
      if (lookahead == 'h') ADVANCE(524);
      END_STATE();
    case 620:
      if (lookahead == 'h') ADVANCE(915);
      END_STATE();
    case 621:
      if (lookahead == 'h') ADVANCE(227);
      END_STATE();
    case 622:
      if (lookahead == 'h') ADVANCE(112);
      END_STATE();
    case 623:
      if (lookahead == 'h') ADVANCE(122);
      END_STATE();
    case 624:
      if (lookahead == 'h') ADVANCE(183);
      END_STATE();
    case 625:
      if (lookahead == 'h') ADVANCE(696);
      END_STATE();
    case 626:
      if (lookahead == 'h') ADVANCE(223);
      END_STATE();
    case 627:
      if (lookahead == 'h') ADVANCE(532);
      END_STATE();
    case 628:
      if (lookahead == 'i') ADVANCE(366);
      if (lookahead == 'o') ADVANCE(1321);
      END_STATE();
    case 629:
      if (lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 630:
      if (lookahead == 'i') ADVANCE(1378);
      END_STATE();
    case 631:
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(1274);
      if (lookahead == 'o') ADVANCE(1079);
      END_STATE();
    case 632:
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(1274);
      if (lookahead == 'o') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1429);
      END_STATE();
    case 633:
      if (lookahead == 'i') ADVANCE(1314);
      END_STATE();
    case 634:
      if (lookahead == 'i') ADVANCE(786);
      END_STATE();
    case 635:
      if (lookahead == 'i') ADVANCE(1381);
      END_STATE();
    case 636:
      if (lookahead == 'i') ADVANCE(1329);
      END_STATE();
    case 637:
      if (lookahead == 'i') ADVANCE(589);
      if (lookahead == 'n') ADVANCE(523);
      if (lookahead == 'p') ADVANCE(226);
      if (lookahead == 's') ADVANCE(671);
      if (lookahead == 'x') ADVANCE(1052);
      END_STATE();
    case 638:
      if (lookahead == 'i') ADVANCE(1380);
      END_STATE();
    case 639:
      if (lookahead == 'i') ADVANCE(804);
      if (lookahead == 'o') ADVANCE(1282);
      END_STATE();
    case 640:
      if (lookahead == 'i') ADVANCE(792);
      END_STATE();
    case 641:
      if (lookahead == 'i') ADVANCE(813);
      END_STATE();
    case 642:
      if (lookahead == 'i') ADVANCE(790);
      END_STATE();
    case 643:
      if (lookahead == 'i') ADVANCE(345);
      END_STATE();
    case 644:
      if (lookahead == 'i') ADVANCE(594);
      END_STATE();
    case 645:
      if (lookahead == 'i') ADVANCE(817);
      END_STATE();
    case 646:
      if (lookahead == 'i') ADVANCE(1152);
      END_STATE();
    case 647:
      if (lookahead == 'i') ADVANCE(943);
      END_STATE();
    case 648:
      if (lookahead == 'i') ADVANCE(735);
      END_STATE();
    case 649:
      if (lookahead == 'i') ADVANCE(1007);
      END_STATE();
    case 650:
      if (lookahead == 'i') ADVANCE(1047);
      END_STATE();
    case 651:
      if (lookahead == 'i') ADVANCE(1218);
      END_STATE();
    case 652:
      if (lookahead == 'i') ADVANCE(1253);
      END_STATE();
    case 653:
      if (lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 654:
      if (lookahead == 'i') ADVANCE(814);
      END_STATE();
    case 655:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 656:
      if (lookahead == 'i') ADVANCE(1210);
      END_STATE();
    case 657:
      if (lookahead == 'i') ADVANCE(823);
      END_STATE();
    case 658:
      if (lookahead == 'i') ADVANCE(1211);
      END_STATE();
    case 659:
      if (lookahead == 'i') ADVANCE(826);
      END_STATE();
    case 660:
      if (lookahead == 'i') ADVANCE(1217);
      END_STATE();
    case 661:
      if (lookahead == 'i') ADVANCE(829);
      END_STATE();
    case 662:
      if (lookahead == 'i') ADVANCE(1221);
      END_STATE();
    case 663:
      if (lookahead == 'i') ADVANCE(886);
      END_STATE();
    case 664:
      if (lookahead == 'i') ADVANCE(1161);
      END_STATE();
    case 665:
      if (lookahead == 'i') ADVANCE(850);
      END_STATE();
    case 666:
      if (lookahead == 'i') ADVANCE(1222);
      END_STATE();
    case 667:
      if (lookahead == 'i') ADVANCE(830);
      END_STATE();
    case 668:
      if (lookahead == 'i') ADVANCE(832);
      END_STATE();
    case 669:
      if (lookahead == 'i') ADVANCE(509);
      END_STATE();
    case 670:
      if (lookahead == 'i') ADVANCE(1322);
      END_STATE();
    case 671:
      if (lookahead == 'i') ADVANCE(1375);
      END_STATE();
    case 672:
      if (lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 673:
      if (lookahead == 'i') ADVANCE(856);
      END_STATE();
    case 674:
      if (lookahead == 'i') ADVANCE(748);
      END_STATE();
    case 675:
      if (lookahead == 'i') ADVANCE(1376);
      END_STATE();
    case 676:
      if (lookahead == 'i') ADVANCE(1219);
      END_STATE();
    case 677:
      if (lookahead == 'i') ADVANCE(796);
      END_STATE();
    case 678:
      if (lookahead == 'i') ADVANCE(909);
      END_STATE();
    case 679:
      if (lookahead == 'i') ADVANCE(1318);
      END_STATE();
    case 680:
      if (lookahead == 'i') ADVANCE(1377);
      END_STATE();
    case 681:
      if (lookahead == 'i') ADVANCE(797);
      END_STATE();
    case 682:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 683:
      if (lookahead == 'i') ADVANCE(913);
      END_STATE();
    case 684:
      if (lookahead == 'i') ADVANCE(1319);
      END_STATE();
    case 685:
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 686:
      if (lookahead == 'i') ADVANCE(1320);
      END_STATE();
    case 687:
      if (lookahead == 'i') ADVANCE(849);
      END_STATE();
    case 688:
      if (lookahead == 'i') ADVANCE(854);
      END_STATE();
    case 689:
      if (lookahead == 'i') ADVANCE(923);
      END_STATE();
    case 690:
      if (lookahead == 'i') ADVANCE(848);
      END_STATE();
    case 691:
      if (lookahead == 'i') ADVANCE(925);
      END_STATE();
    case 692:
      if (lookahead == 'i') ADVANCE(405);
      END_STATE();
    case 693:
      if (lookahead == 'i') ADVANCE(862);
      if (lookahead == 'o') ADVANCE(1073);
      END_STATE();
    case 694:
      if (lookahead == 'i') ADVANCE(945);
      END_STATE();
    case 695:
      if (lookahead == 'i') ADVANCE(1323);
      END_STATE();
    case 696:
      if (lookahead == 'i') ADVANCE(770);
      END_STATE();
    case 697:
      if (lookahead == 'i') ADVANCE(1326);
      END_STATE();
    case 698:
      if (lookahead == 'i') ADVANCE(1249);
      END_STATE();
    case 699:
      if (lookahead == 'i') ADVANCE(960);
      END_STATE();
    case 700:
      if (lookahead == 'i') ADVANCE(1258);
      END_STATE();
    case 701:
      if (lookahead == 'i') ADVANCE(609);
      if (lookahead == 'o') ADVANCE(559);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == 's') ADVANCE(335);
      END_STATE();
    case 702:
      if (lookahead == 'i') ADVANCE(877);
      END_STATE();
    case 703:
      if (lookahead == 'i') ADVANCE(1330);
      END_STATE();
    case 704:
      if (lookahead == 'i') ADVANCE(879);
      if (lookahead == 'z') ADVANCE(911);
      END_STATE();
    case 705:
      if (lookahead == 'i') ADVANCE(1331);
      END_STATE();
    case 706:
      if (lookahead == 'k') ADVANCE(1502);
      END_STATE();
    case 707:
      if (lookahead == 'k') ADVANCE(1567);
      END_STATE();
    case 708:
      if (lookahead == 'k') ADVANCE(1501);
      END_STATE();
    case 709:
      if (lookahead == 'k') ADVANCE(1465);
      END_STATE();
    case 710:
      if (lookahead == 'k') ADVANCE(560);
      END_STATE();
    case 711:
      if (lookahead == 'k') ADVANCE(1149);
      END_STATE();
    case 712:
      if (lookahead == 'k') ADVANCE(70);
      END_STATE();
    case 713:
      if (lookahead == 'k') ADVANCE(448);
      END_STATE();
    case 714:
      if (lookahead == 'k') ADVANCE(132);
      END_STATE();
    case 715:
      if (lookahead == 'k') ADVANCE(657);
      END_STATE();
    case 716:
      if (lookahead == 'k') ADVANCE(140);
      END_STATE();
    case 717:
      if (lookahead == 'k') ADVANCE(1192);
      END_STATE();
    case 718:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 719:
      if (lookahead == 'l') ADVANCE(1442);
      END_STATE();
    case 720:
      if (lookahead == 'l') ADVANCE(1508);
      END_STATE();
    case 721:
      if (lookahead == 'l') ADVANCE(1491);
      END_STATE();
    case 722:
      if (lookahead == 'l') ADVANCE(1518);
      END_STATE();
    case 723:
      if (lookahead == 'l') ADVANCE(1496);
      END_STATE();
    case 724:
      if (lookahead == 'l') ADVANCE(892);
      if (lookahead == 'o') ADVANCE(321);
      if (lookahead == 'u') ADVANCE(730);
      END_STATE();
    case 725:
      if (lookahead == 'l') ADVANCE(629);
      if (lookahead == 'o') ADVANCE(718);
      if (lookahead == 'u') ADVANCE(1042);
      END_STATE();
    case 726:
      if (lookahead == 'l') ADVANCE(629);
      if (lookahead == 'o') ADVANCE(718);
      if (lookahead == 'u') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1429);
      END_STATE();
    case 727:
      if (lookahead == 'l') ADVANCE(883);
      if (lookahead == 'w') ADVANCE(170);
      END_STATE();
    case 728:
      if (lookahead == 'l') ADVANCE(1145);
      END_STATE();
    case 729:
      if (lookahead == 'l') ADVANCE(1206);
      END_STATE();
    case 730:
      if (lookahead == 'l') ADVANCE(732);
      END_STATE();
    case 731:
      if (lookahead == 'l') ADVANCE(929);
      END_STATE();
    case 732:
      if (lookahead == 'l') ADVANCE(1144);
      END_STATE();
    case 733:
      if (lookahead == 'l') ADVANCE(412);
      END_STATE();
    case 734:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 735:
      if (lookahead == 'l') ADVANCE(413);
      END_STATE();
    case 736:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 737:
      if (lookahead == 'l') ADVANCE(894);
      END_STATE();
    case 738:
      if (lookahead == 'l') ADVANCE(737);
      END_STATE();
    case 739:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 740:
      if (lookahead == 'l') ADVANCE(754);
      END_STATE();
    case 741:
      if (lookahead == 'l') ADVANCE(908);
      END_STATE();
    case 742:
      if (lookahead == 'l') ADVANCE(723);
      END_STATE();
    case 743:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 744:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 745:
      if (lookahead == 'l') ADVANCE(1202);
      END_STATE();
    case 746:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 747:
      if (lookahead == 'l') ADVANCE(423);
      END_STATE();
    case 748:
      if (lookahead == 'l') ADVANCE(424);
      END_STATE();
    case 749:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 750:
      if (lookahead == 'l') ADVANCE(1368);
      END_STATE();
    case 751:
      if (lookahead == 'l') ADVANCE(952);
      END_STATE();
    case 752:
      if (lookahead == 'l') ADVANCE(685);
      END_STATE();
    case 753:
      if (lookahead == 'l') ADVANCE(931);
      END_STATE();
    case 754:
      if (lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 755:
      if (lookahead == 'l') ADVANCE(654);
      END_STATE();
    case 756:
      if (lookahead == 'l') ADVANCE(743);
      END_STATE();
    case 757:
      if (lookahead == 'l') ADVANCE(934);
      END_STATE();
    case 758:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 759:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 760:
      if (lookahead == 'l') ADVANCE(459);
      END_STATE();
    case 761:
      if (lookahead == 'l') ADVANCE(969);
      END_STATE();
    case 762:
      if (lookahead == 'l') ADVANCE(942);
      END_STATE();
    case 763:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 764:
      if (lookahead == 'l') ADVANCE(947);
      END_STATE();
    case 765:
      if (lookahead == 'l') ADVANCE(469);
      END_STATE();
    case 766:
      if (lookahead == 'l') ADVANCE(531);
      END_STATE();
    case 767:
      if (lookahead == 'l') ADVANCE(480);
      END_STATE();
    case 768:
      if (lookahead == 'l') ADVANCE(485);
      END_STATE();
    case 769:
      if (lookahead == 'l') ADVANCE(496);
      END_STATE();
    case 770:
      if (lookahead == 'l') ADVANCE(498);
      END_STATE();
    case 771:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 772:
      if (lookahead == 'l') ADVANCE(762);
      END_STATE();
    case 773:
      if (lookahead == 'l') ADVANCE(939);
      END_STATE();
    case 774:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 775:
      if (lookahead == 'l') ADVANCE(533);
      END_STATE();
    case 776:
      if (lookahead == 'l') ADVANCE(764);
      END_STATE();
    case 777:
      if (lookahead == 'l') ADVANCE(954);
      END_STATE();
    case 778:
      if (lookahead == 'l') ADVANCE(534);
      END_STATE();
    case 779:
      if (lookahead == 'l') ADVANCE(535);
      END_STATE();
    case 780:
      if (lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 781:
      if (lookahead == 'm') ADVANCE(1504);
      END_STATE();
    case 782:
      if (lookahead == 'm') ADVANCE(263);
      END_STATE();
    case 783:
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 784:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 785:
      if (lookahead == 'm') ADVANCE(731);
      END_STATE();
    case 786:
      if (lookahead == 'm') ADVANCE(182);
      END_STATE();
    case 787:
      if (lookahead == 'm') ADVANCE(974);
      END_STATE();
    case 788:
      if (lookahead == 'm') ADVANCE(280);
      END_STATE();
    case 789:
      if (lookahead == 'm') ADVANCE(970);
      if (lookahead == 'r') ADVANCE(505);
      END_STATE();
    case 790:
      if (lookahead == 'm') ADVANCE(635);
      END_STATE();
    case 791:
      if (lookahead == 'm') ADVANCE(191);
      END_STATE();
    case 792:
      if (lookahead == 'm') ADVANCE(420);
      END_STATE();
    case 793:
      if (lookahead == 'm') ADVANCE(1135);
      END_STATE();
    case 794:
      if (lookahead == 'm') ADVANCE(1136);
      END_STATE();
    case 795:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 796:
      if (lookahead == 'm') ADVANCE(543);
      END_STATE();
    case 797:
      if (lookahead == 'm') ADVANCE(428);
      END_STATE();
    case 798:
      if (lookahead == 'm') ADVANCE(1018);
      END_STATE();
    case 799:
      if (lookahead == 'm') ADVANCE(1288);
      END_STATE();
    case 800:
      if (lookahead == 'm') ADVANCE(920);
      END_STATE();
    case 801:
      if (lookahead == 'm') ADVANCE(962);
      END_STATE();
    case 802:
      if (lookahead == 'm') ADVANCE(540);
      END_STATE();
    case 803:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 804:
      if (lookahead == 'n') ADVANCE(1456);
      END_STATE();
    case 805:
      if (lookahead == 'n') ADVANCE(1446);
      END_STATE();
    case 806:
      if (lookahead == 'n') ADVANCE(1445);
      END_STATE();
    case 807:
      if (lookahead == 'n') ADVANCE(1521);
      END_STATE();
    case 808:
      if (lookahead == 'n') ADVANCE(1498);
      END_STATE();
    case 809:
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead == 'x') ADVANCE(1205);
      END_STATE();
    case 810:
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead == 'x') ADVANCE(1205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1429);
      END_STATE();
    case 811:
      if (lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 812:
      if (lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 813:
      if (lookahead == 'n') ADVANCE(581);
      END_STATE();
    case 814:
      if (lookahead == 'n') ADVANCE(707);
      END_STATE();
    case 815:
      if (lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 816:
      if (lookahead == 'n') ADVANCE(1146);
      END_STATE();
    case 817:
      if (lookahead == 'n') ADVANCE(605);
      END_STATE();
    case 818:
      if (lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 819:
      if (lookahead == 'n') ADVANCE(591);
      END_STATE();
    case 820:
      if (lookahead == 'n') ADVANCE(1279);
      END_STATE();
    case 821:
      if (lookahead == 'n') ADVANCE(1142);
      END_STATE();
    case 822:
      if (lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 823:
      if (lookahead == 'n') ADVANCE(583);
      END_STATE();
    case 824:
      if (lookahead == 'n') ADVANCE(922);
      END_STATE();
    case 825:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 826:
      if (lookahead == 'n') ADVANCE(584);
      END_STATE();
    case 827:
      if (lookahead == 'n') ADVANCE(1199);
      END_STATE();
    case 828:
      if (lookahead == 'n') ADVANCE(388);
      END_STATE();
    case 829:
      if (lookahead == 'n') ADVANCE(585);
      END_STATE();
    case 830:
      if (lookahead == 'n') ADVANCE(586);
      END_STATE();
    case 831:
      if (lookahead == 'n') ADVANCE(1124);
      END_STATE();
    case 832:
      if (lookahead == 'n') ADVANCE(587);
      END_STATE();
    case 833:
      if (lookahead == 'n') ADVANCE(360);
      END_STATE();
    case 834:
      if (lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 835:
      if (lookahead == 'n') ADVANCE(1226);
      END_STATE();
    case 836:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 837:
      if (lookahead == 'n') ADVANCE(1134);
      END_STATE();
    case 838:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 839:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 840:
      if (lookahead == 'n') ADVANCE(429);
      END_STATE();
    case 841:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 842:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 843:
      if (lookahead == 'n') ADVANCE(451);
      END_STATE();
    case 844:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 845:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 846:
      if (lookahead == 'n') ADVANCE(507);
      if (lookahead == 's') ADVANCE(1236);
      END_STATE();
    case 847:
      if (lookahead == 'n') ADVANCE(598);
      END_STATE();
    case 848:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 849:
      if (lookahead == 'n') ADVANCE(378);
      END_STATE();
    case 850:
      if (lookahead == 'n') ADVANCE(600);
      END_STATE();
    case 851:
      if (lookahead == 'n') ADVANCE(376);
      END_STATE();
    case 852:
      if (lookahead == 'n') ADVANCE(1254);
      END_STATE();
    case 853:
      if (lookahead == 'n') ADVANCE(383);
      END_STATE();
    case 854:
      if (lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 855:
      if (lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 856:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 857:
      if (lookahead == 'n') ADVANCE(698);
      END_STATE();
    case 858:
      if (lookahead == 'n') ADVANCE(912);
      END_STATE();
    case 859:
      if (lookahead == 'n') ADVANCE(665);
      END_STATE();
    case 860:
      if (lookahead == 'n') ADVANCE(1164);
      END_STATE();
    case 861:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 862:
      if (lookahead == 'n') ADVANCE(608);
      END_STATE();
    case 863:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 864:
      if (lookahead == 'n') ADVANCE(391);
      if (lookahead == 'p') ADVANCE(538);
      if (lookahead == 's') ADVANCE(630);
      END_STATE();
    case 865:
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 866:
      if (lookahead == 'n') ADVANCE(955);
      END_STATE();
    case 867:
      if (lookahead == 'n') ADVANCE(966);
      END_STATE();
    case 868:
      if (lookahead == 'n') ADVANCE(1327);
      END_STATE();
    case 869:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 870:
      if (lookahead == 'n') ADVANCE(1255);
      END_STATE();
    case 871:
      if (lookahead == 'n') ADVANCE(399);
      END_STATE();
    case 872:
      if (lookahead == 'n') ADVANCE(406);
      END_STATE();
    case 873:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 874:
      if (lookahead == 'n') ADVANCE(1304);
      END_STATE();
    case 875:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 876:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 877:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 878:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 879:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 880:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 881:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 882:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 883:
      if (lookahead == 'o') ADVANCE(1338);
      END_STATE();
    case 884:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 885:
      if (lookahead == 'o') ADVANCE(1534);
      END_STATE();
    case 886:
      if (lookahead == 'o') ADVANCE(1530);
      END_STATE();
    case 887:
      if (lookahead == 'o') ADVANCE(1414);
      END_STATE();
    case 888:
      if (lookahead == 'o') ADVANCE(1332);
      END_STATE();
    case 889:
      if (lookahead == 'o') ADVANCE(1333);
      END_STATE();
    case 890:
      if (lookahead == 'o') ADVANCE(1276);
      END_STATE();
    case 891:
      if (lookahead == 'o') ADVANCE(1026);
      END_STATE();
    case 892:
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 893:
      if (lookahead == 'o') ADVANCE(795);
      END_STATE();
    case 894:
      if (lookahead == 'o') ADVANCE(1334);
      END_STATE();
    case 895:
      if (lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 896:
      if (lookahead == 'o') ADVANCE(593);
      END_STATE();
    case 897:
      if (lookahead == 'o') ADVANCE(1044);
      END_STATE();
    case 898:
      if (lookahead == 'o') ADVANCE(1348);
      END_STATE();
    case 899:
      if (lookahead == 'o') ADVANCE(1296);
      END_STATE();
    case 900:
      if (lookahead == 'o') ADVANCE(1349);
      END_STATE();
    case 901:
      if (lookahead == 'o') ADVANCE(1300);
      END_STATE();
    case 902:
      if (lookahead == 'o') ADVANCE(1336);
      END_STATE();
    case 903:
      if (lookahead == 'o') ADVANCE(836);
      if (lookahead == 'p') ADVANCE(1055);
      END_STATE();
    case 904:
      if (lookahead == 'o') ADVANCE(1004);
      END_STATE();
    case 905:
      if (lookahead == 'o') ADVANCE(574);
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 906:
      if (lookahead == 'o') ADVANCE(805);
      END_STATE();
    case 907:
      if (lookahead == 'o') ADVANCE(357);
      END_STATE();
    case 908:
      if (lookahead == 'o') ADVANCE(595);
      END_STATE();
    case 909:
      if (lookahead == 'o') ADVANCE(806);
      END_STATE();
    case 910:
      if (lookahead == 'o') ADVANCE(1043);
      END_STATE();
    case 911:
      if (lookahead == 'o') ADVANCE(893);
      END_STATE();
    case 912:
      if (lookahead == 'o') ADVANCE(1117);
      END_STATE();
    case 913:
      if (lookahead == 'o') ADVANCE(873);
      END_STATE();
    case 914:
      if (lookahead == 'o') ADVANCE(807);
      END_STATE();
    case 915:
      if (lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 916:
      if (lookahead == 'o') ADVANCE(1059);
      END_STATE();
    case 917:
      if (lookahead == 'o') ADVANCE(1093);
      END_STATE();
    case 918:
      if (lookahead == 'o') ADVANCE(1029);
      END_STATE();
    case 919:
      if (lookahead == 'o') ADVANCE(840);
      END_STATE();
    case 920:
      if (lookahead == 'o') ADVANCE(857);
      END_STATE();
    case 921:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 922:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 923:
      if (lookahead == 'o') ADVANCE(808);
      END_STATE();
    case 924:
      if (lookahead == 'o') ADVANCE(1033);
      END_STATE();
    case 925:
      if (lookahead == 'o') ADVANCE(1036);
      END_STATE();
    case 926:
      if (lookahead == 'o') ADVANCE(1040);
      END_STATE();
    case 927:
      if (lookahead == 'o') ADVANCE(1096);
      END_STATE();
    case 928:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 929:
      if (lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 930:
      if (lookahead == 'o') ADVANCE(601);
      END_STATE();
    case 931:
      if (lookahead == 'o') ADVANCE(1351);
      END_STATE();
    case 932:
      if (lookahead == 'o') ADVANCE(564);
      END_STATE();
    case 933:
      if (lookahead == 'o') ADVANCE(1285);
      END_STATE();
    case 934:
      if (lookahead == 'o') ADVANCE(596);
      END_STATE();
    case 935:
      if (lookahead == 'o') ADVANCE(1002);
      END_STATE();
    case 936:
      if (lookahead == 'o') ADVANCE(1054);
      END_STATE();
    case 937:
      if (lookahead == 'o') ADVANCE(880);
      END_STATE();
    case 938:
      if (lookahead == 'o') ADVANCE(384);
      END_STATE();
    case 939:
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 940:
      if (lookahead == 'o') ADVANCE(1342);
      END_STATE();
    case 941:
      if (lookahead == 'o') ADVANCE(1067);
      END_STATE();
    case 942:
      if (lookahead == 'o') ADVANCE(1343);
      END_STATE();
    case 943:
      if (lookahead == 'o') ADVANCE(831);
      END_STATE();
    case 944:
      if (lookahead == 'o') ADVANCE(882);
      END_STATE();
    case 945:
      if (lookahead == 'o') ADVANCE(837);
      END_STATE();
    case 946:
      if (lookahead == 'o') ADVANCE(838);
      END_STATE();
    case 947:
      if (lookahead == 'o') ADVANCE(1352);
      END_STATE();
    case 948:
      if (lookahead == 'o') ADVANCE(742);
      END_STATE();
    case 949:
      if (lookahead == 'o') ADVANCE(1284);
      END_STATE();
    case 950:
      if (lookahead == 'o') ADVANCE(1068);
      END_STATE();
    case 951:
      if (lookahead == 'o') ADVANCE(839);
      END_STATE();
    case 952:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 953:
      if (lookahead == 'o') ADVANCE(841);
      END_STATE();
    case 954:
      if (lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 955:
      if (lookahead == 'o') ADVANCE(1289);
      END_STATE();
    case 956:
      if (lookahead == 'o') ADVANCE(842);
      END_STATE();
    case 957:
      if (lookahead == 'o') ADVANCE(1290);
      END_STATE();
    case 958:
      if (lookahead == 'o') ADVANCE(1076);
      END_STATE();
    case 959:
      if (lookahead == 'o') ADVANCE(845);
      END_STATE();
    case 960:
      if (lookahead == 'o') ADVANCE(863);
      END_STATE();
    case 961:
      if (lookahead == 'o') ADVANCE(1325);
      END_STATE();
    case 962:
      if (lookahead == 'o') ADVANCE(1298);
      END_STATE();
    case 963:
      if (lookahead == 'o') ADVANCE(1299);
      END_STATE();
    case 964:
      if (lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 965:
      if (lookahead == 'o') ADVANCE(870);
      END_STATE();
    case 966:
      if (lookahead == 'o') ADVANCE(1114);
      END_STATE();
    case 967:
      if (lookahead == 'o') ADVANCE(1302);
      END_STATE();
    case 968:
      if (lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 969:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 970:
      if (lookahead == 'o') ADVANCE(1324);
      END_STATE();
    case 971:
      if (lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 972:
      if (lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 973:
      if (lookahead == 'o') ADVANCE(1105);
      END_STATE();
    case 974:
      if (lookahead == 'o') ADVANCE(1307);
      END_STATE();
    case 975:
      if (lookahead == 'o') ADVANCE(1303);
      END_STATE();
    case 976:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 977:
      if (lookahead == 'o') ADVANCE(776);
      END_STATE();
    case 978:
      if (lookahead == 'o') ADVANCE(1020);
      END_STATE();
    case 979:
      if (lookahead == 'o') ADVANCE(1107);
      END_STATE();
    case 980:
      if (lookahead == 'o') ADVANCE(1021);
      END_STATE();
    case 981:
      if (lookahead == 'o') ADVANCE(1108);
      END_STATE();
    case 982:
      if (lookahead == 'o') ADVANCE(1022);
      END_STATE();
    case 983:
      if (lookahead == 'o') ADVANCE(1109);
      END_STATE();
    case 984:
      if (lookahead == 'o') ADVANCE(1110);
      END_STATE();
    case 985:
      if (lookahead == 'o') ADVANCE(1111);
      END_STATE();
    case 986:
      if (lookahead == 'o') ADVANCE(1112);
      END_STATE();
    case 987:
      if (lookahead == 'o') ADVANCE(1115);
      END_STATE();
    case 988:
      if (lookahead == 'o') ADVANCE(1118);
      END_STATE();
    case 989:
      if (lookahead == 'o') ADVANCE(881);
      END_STATE();
    case 990:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 991:
      if (lookahead == 'p') ADVANCE(1499);
      END_STATE();
    case 992:
      if (lookahead == 'p') ADVANCE(750);
      END_STATE();
    case 993:
      if (lookahead == 'p') ADVANCE(274);
      END_STATE();
    case 994:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 995:
      if (lookahead == 'p') ADVANCE(1143);
      END_STATE();
    case 996:
      if (lookahead == 'p') ADVANCE(997);
      END_STATE();
    case 997:
      if (lookahead == 'p') ADVANCE(1078);
      END_STATE();
    case 998:
      if (lookahead == 'p') ADVANCE(445);
      if (lookahead == 't') ADVANCE(1051);
      END_STATE();
    case 999:
      if (lookahead == 'p') ADVANCE(793);
      END_STATE();
    case 1000:
      if (lookahead == 'p') ADVANCE(248);
      END_STATE();
    case 1001:
      if (lookahead == 'p') ADVANCE(1050);
      END_STATE();
    case 1002:
      if (lookahead == 'p') ADVANCE(224);
      END_STATE();
    case 1003:
      if (lookahead == 'p') ADVANCE(759);
      END_STATE();
    case 1004:
      if (lookahead == 'p') ADVANCE(1235);
      END_STATE();
    case 1005:
      if (lookahead == 'p') ADVANCE(898);
      END_STATE();
    case 1006:
      if (lookahead == 'p') ADVANCE(1128);
      END_STATE();
    case 1007:
      if (lookahead == 'p') ADVANCE(425);
      END_STATE();
    case 1008:
      if (lookahead == 'p') ADVANCE(1213);
      END_STATE();
    case 1009:
      if (lookahead == 'p') ADVANCE(794);
      END_STATE();
    case 1010:
      if (lookahead == 'p') ADVANCE(541);
      END_STATE();
    case 1011:
      if (lookahead == 'p') ADVANCE(1278);
      END_STATE();
    case 1012:
      if (lookahead == 'p') ADVANCE(659);
      END_STATE();
    case 1013:
      if (lookahead == 'p') ADVANCE(916);
      END_STATE();
    case 1014:
      if (lookahead == 'p') ADVANCE(279);
      END_STATE();
    case 1015:
      if (lookahead == 'p') ADVANCE(1090);
      END_STATE();
    case 1016:
      if (lookahead == 'p') ADVANCE(1259);
      END_STATE();
    case 1017:
      if (lookahead == 'p') ADVANCE(1092);
      END_STATE();
    case 1018:
      if (lookahead == 'p') ADVANCE(769);
      END_STATE();
    case 1019:
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 1020:
      if (lookahead == 'p') ADVANCE(251);
      END_STATE();
    case 1021:
      if (lookahead == 'p') ADVANCE(253);
      END_STATE();
    case 1022:
      if (lookahead == 'p') ADVANCE(254);
      END_STATE();
    case 1023:
      if (lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 1024:
      if (lookahead == 'r') ADVANCE(1536);
      END_STATE();
    case 1025:
      if (lookahead == 'r') ADVANCE(1537);
      END_STATE();
    case 1026:
      if (lookahead == 'r') ADVANCE(711);
      END_STATE();
    case 1027:
      if (lookahead == 'r') ADVANCE(1475);
      END_STATE();
    case 1028:
      if (lookahead == 'r') ADVANCE(1493);
      END_STATE();
    case 1029:
      if (lookahead == 'r') ADVANCE(1497);
      END_STATE();
    case 1030:
      if (lookahead == 'r') ADVANCE(1460);
      END_STATE();
    case 1031:
      if (lookahead == 'r') ADVANCE(1467);
      END_STATE();
    case 1032:
      if (lookahead == 'r') ADVANCE(1459);
      END_STATE();
    case 1033:
      if (lookahead == 'r') ADVANCE(1555);
      END_STATE();
    case 1034:
      if (lookahead == 'r') ADVANCE(1458);
      END_STATE();
    case 1035:
      if (lookahead == 'r') ADVANCE(1483);
      END_STATE();
    case 1036:
      if (lookahead == 'r') ADVANCE(1500);
      END_STATE();
    case 1037:
      if (lookahead == 'r') ADVANCE(1469);
      END_STATE();
    case 1038:
      if (lookahead == 'r') ADVANCE(1532);
      END_STATE();
    case 1039:
      if (lookahead == 'r') ADVANCE(1558);
      END_STATE();
    case 1040:
      if (lookahead == 'r') ADVANCE(1551);
      END_STATE();
    case 1041:
      if (lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 1042:
      if (lookahead == 'r') ADVANCE(1175);
      END_STATE();
    case 1043:
      if (lookahead == 'r') ADVANCE(781);
      END_STATE();
    case 1044:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 1045:
      if (lookahead == 'r') ADVANCE(734);
      END_STATE();
    case 1046:
      if (lookahead == 'r') ADVANCE(655);
      END_STATE();
    case 1047:
      if (lookahead == 'r') ADVANCE(504);
      END_STATE();
    case 1048:
      if (lookahead == 'r') ADVANCE(1273);
      END_STATE();
    case 1049:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 1050:
      if (lookahead == 'r') ADVANCE(932);
      END_STATE();
    case 1051:
      if (lookahead == 'r') ADVANCE(454);
      END_STATE();
    case 1052:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 1053:
      if (lookahead == 'r') ADVANCE(467);
      END_STATE();
    case 1054:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 1055:
      if (lookahead == 'r') ADVANCE(441);
      END_STATE();
    case 1056:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 1057:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 1058:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 1059:
      if (lookahead == 'r') ADVANCE(1257);
      END_STATE();
    case 1060:
      if (lookahead == 'r') ADVANCE(859);
      END_STATE();
    case 1061:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 1062:
      if (lookahead == 'r') ADVANCE(692);
      END_STATE();
    case 1063:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 1064:
      if (lookahead == 'r') ADVANCE(1062);
      END_STATE();
    case 1065:
      if (lookahead == 'r') ADVANCE(1203);
      END_STATE();
    case 1066:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 1067:
      if (lookahead == 'r') ADVANCE(1212);
      END_STATE();
    case 1068:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 1069:
      if (lookahead == 'r') ADVANCE(1137);
      END_STATE();
    case 1070:
      if (lookahead == 'r') ADVANCE(515);
      END_STATE();
    case 1071:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 1072:
      if (lookahead == 'r') ADVANCE(546);
      END_STATE();
    case 1073:
      if (lookahead == 'r') ADVANCE(544);
      END_STATE();
    case 1074:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 1075:
      if (lookahead == 'r') ADVANCE(470);
      END_STATE();
    case 1076:
      if (lookahead == 'r') ADVANCE(433);
      END_STATE();
    case 1077:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 1078:
      if (lookahead == 'r') ADVANCE(501);
      END_STATE();
    case 1079:
      if (lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 1080:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 1081:
      if (lookahead == 'r') ADVANCE(1006);
      END_STATE();
    case 1082:
      if (lookahead == 'r') ADVANCE(899);
      END_STATE();
    case 1083:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 1084:
      if (lookahead == 'r') ADVANCE(458);
      END_STATE();
    case 1085:
      if (lookahead == 'r') ADVANCE(963);
      END_STATE();
    case 1086:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 1087:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 1088:
      if (lookahead == 'r') ADVANCE(488);
      END_STATE();
    case 1089:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 1090:
      if (lookahead == 'r') ADVANCE(744);
      END_STATE();
    case 1091:
      if (lookahead == 'r') ADVANCE(1070);
      END_STATE();
    case 1092:
      if (lookahead == 'r') ADVANCE(537);
      END_STATE();
    case 1093:
      if (lookahead == 'r') ADVANCE(475);
      END_STATE();
    case 1094:
      if (lookahead == 'r') ADVANCE(1157);
      END_STATE();
    case 1095:
      if (lookahead == 'r') ADVANCE(389);
      END_STATE();
    case 1096:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 1097:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 1098:
      if (lookahead == 'r') ADVANCE(667);
      END_STATE();
    case 1099:
      if (lookahead == 'r') ADVANCE(516);
      END_STATE();
    case 1100:
      if (lookahead == 'r') ADVANCE(483);
      END_STATE();
    case 1101:
      if (lookahead == 'r') ADVANCE(1181);
      END_STATE();
    case 1102:
      if (lookahead == 'r') ADVANCE(948);
      END_STATE();
    case 1103:
      if (lookahead == 'r') ADVANCE(520);
      END_STATE();
    case 1104:
      if (lookahead == 'r') ADVANCE(1184);
      END_STATE();
    case 1105:
      if (lookahead == 'r') ADVANCE(394);
      END_STATE();
    case 1106:
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 1107:
      if (lookahead == 'r') ADVANCE(408);
      END_STATE();
    case 1108:
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 1109:
      if (lookahead == 'r') ADVANCE(401);
      END_STATE();
    case 1110:
      if (lookahead == 'r') ADVANCE(402);
      END_STATE();
    case 1111:
      if (lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 1112:
      if (lookahead == 'r') ADVANCE(404);
      END_STATE();
    case 1113:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 1114:
      if (lookahead == 'r') ADVANCE(545);
      END_STATE();
    case 1115:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 1116:
      if (lookahead == 'r') ADVANCE(975);
      END_STATE();
    case 1117:
      if (lookahead == 'r') ADVANCE(549);
      END_STATE();
    case 1118:
      if (lookahead == 'r') ADVANCE(717);
      END_STATE();
    case 1119:
      if (lookahead == 's') ADVANCE(1413);
      END_STATE();
    case 1120:
      if (lookahead == 's') ADVANCE(1450);
      END_STATE();
    case 1121:
      if (lookahead == 's') ADVANCE(1214);
      END_STATE();
    case 1122:
      if (lookahead == 's') ADVANCE(1448);
      END_STATE();
    case 1123:
      if (lookahead == 's') ADVANCE(1512);
      END_STATE();
    case 1124:
      if (lookahead == 's') ADVANCE(1511);
      END_STATE();
    case 1125:
      if (lookahead == 's') ADVANCE(1477);
      END_STATE();
    case 1126:
      if (lookahead == 's') ADVANCE(1568);
      END_STATE();
    case 1127:
      if (lookahead == 's') ADVANCE(1523);
      END_STATE();
    case 1128:
      if (lookahead == 's') ADVANCE(1464);
      END_STATE();
    case 1129:
      if (lookahead == 's') ADVANCE(1471);
      END_STATE();
    case 1130:
      if (lookahead == 's') ADVANCE(1571);
      END_STATE();
    case 1131:
      if (lookahead == 's') ADVANCE(1560);
      END_STATE();
    case 1132:
      if (lookahead == 's') ADVANCE(1564);
      END_STATE();
    case 1133:
      if (lookahead == 's') ADVANCE(1542);
      END_STATE();
    case 1134:
      if (lookahead == 's') ADVANCE(1479);
      END_STATE();
    case 1135:
      if (lookahead == 's') ADVANCE(1539);
      END_STATE();
    case 1136:
      if (lookahead == 's') ADVANCE(1538);
      END_STATE();
    case 1137:
      if (lookahead == 's') ADVANCE(1526);
      END_STATE();
    case 1138:
      if (lookahead == 's') ADVANCE(1552);
      END_STATE();
    case 1139:
      if (lookahead == 's') ADVANCE(1541);
      END_STATE();
    case 1140:
      if (lookahead == 's') ADVANCE(1524);
      END_STATE();
    case 1141:
      if (lookahead == 's') ADVANCE(1339);
      END_STATE();
    case 1142:
      if (lookahead == 's') ADVANCE(565);
      END_STATE();
    case 1143:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 1144:
      if (lookahead == 's') ADVANCE(324);
      END_STATE();
    case 1145:
      if (lookahead == 's') ADVANCE(411);
      END_STATE();
    case 1146:
      if (lookahead == 's') ADVANCE(676);
      END_STATE();
    case 1147:
      if (lookahead == 's') ADVANCE(612);
      END_STATE();
    case 1148:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 1149:
      if (lookahead == 's') ADVANCE(1000);
      END_STATE();
    case 1150:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 1151:
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 1152:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 1153:
      if (lookahead == 's') ADVANCE(514);
      END_STATE();
    case 1154:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 1155:
      if (lookahead == 's') ADVANCE(1167);
      END_STATE();
    case 1156:
      if (lookahead == 's') ADVANCE(1182);
      END_STATE();
    case 1157:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 1158:
      if (lookahead == 's') ADVANCE(638);
      END_STATE();
    case 1159:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 1160:
      if (lookahead == 's') ADVANCE(471);
      END_STATE();
    case 1161:
      if (lookahead == 's') ADVANCE(1227);
      END_STATE();
    case 1162:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 1163:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 1164:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 1165:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 1166:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 1167:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 1168:
      if (lookahead == 's') ADVANCE(1148);
      END_STATE();
    case 1169:
      if (lookahead == 's') ADVANCE(1188);
      END_STATE();
    case 1170:
      if (lookahead == 's') ADVANCE(623);
      END_STATE();
    case 1171:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 1172:
      if (lookahead == 's') ADVANCE(1010);
      END_STATE();
    case 1173:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 1174:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 1175:
      if (lookahead == 's') ADVANCE(936);
      END_STATE();
    case 1176:
      if (lookahead == 's') ADVANCE(618);
      END_STATE();
    case 1177:
      if (lookahead == 's') ADVANCE(675);
      END_STATE();
    case 1178:
      if (lookahead == 's') ADVANCE(456);
      END_STATE();
    case 1179:
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 1180:
      if (lookahead == 's') ADVANCE(680);
      END_STATE();
    case 1181:
      if (lookahead == 's') ADVANCE(950);
      END_STATE();
    case 1182:
      if (lookahead == 's') ADVANCE(465);
      END_STATE();
    case 1183:
      if (lookahead == 's') ADVANCE(1163);
      END_STATE();
    case 1184:
      if (lookahead == 's') ADVANCE(987);
      END_STATE();
    case 1185:
      if (lookahead == 's') ADVANCE(495);
      END_STATE();
    case 1186:
      if (lookahead == 's') ADVANCE(497);
      END_STATE();
    case 1187:
      if (lookahead == 's') ADVANCE(626);
      END_STATE();
    case 1188:
      if (lookahead == 's') ADVANCE(683);
      END_STATE();
    case 1189:
      if (lookahead == 's') ADVANCE(519);
      if (lookahead == 'w') ADVANCE(988);
      END_STATE();
    case 1190:
      if (lookahead == 's') ADVANCE(1248);
      END_STATE();
    case 1191:
      if (lookahead == 's') ADVANCE(536);
      END_STATE();
    case 1192:
      if (lookahead == 's') ADVANCE(1019);
      END_STATE();
    case 1193:
      if (lookahead == 't') ADVANCE(1447);
      END_STATE();
    case 1194:
      if (lookahead == 't') ADVANCE(478);
      END_STATE();
    case 1195:
      if (lookahead == 't') ADVANCE(1463);
      END_STATE();
    case 1196:
      if (lookahead == 't') ADVANCE(1505);
      END_STATE();
    case 1197:
      if (lookahead == 't') ADVANCE(1457);
      END_STATE();
    case 1198:
      if (lookahead == 't') ADVANCE(1509);
      END_STATE();
    case 1199:
      if (lookahead == 't') ADVANCE(1510);
      END_STATE();
    case 1200:
      if (lookahead == 't') ADVANCE(1487);
      END_STATE();
    case 1201:
      if (lookahead == 't') ADVANCE(1549);
      END_STATE();
    case 1202:
      if (lookahead == 't') ADVANCE(1514);
      END_STATE();
    case 1203:
      if (lookahead == 't') ADVANCE(1528);
      END_STATE();
    case 1204:
      if (lookahead == 't') ADVANCE(1462);
      END_STATE();
    case 1205:
      if (lookahead == 't') ADVANCE(511);
      END_STATE();
    case 1206:
      if (lookahead == 't') ADVANCE(646);
      END_STATE();
    case 1207:
      if (lookahead == 't') ADVANCE(1011);
      END_STATE();
    case 1208:
      if (lookahead == 't') ADVANCE(611);
      END_STATE();
    case 1209:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 1210:
      if (lookahead == 't') ADVANCE(1359);
      END_STATE();
    case 1211:
      if (lookahead == 't') ADVANCE(1361);
      END_STATE();
    case 1212:
      if (lookahead == 't') ADVANCE(614);
      END_STATE();
    case 1213:
      if (lookahead == 't') ADVANCE(647);
      END_STATE();
    case 1214:
      if (lookahead == 't') ADVANCE(392);
      if (lookahead == 'w') ADVANCE(235);
      END_STATE();
    case 1215:
      if (lookahead == 't') ADVANCE(1369);
      END_STATE();
    case 1216:
      if (lookahead == 't') ADVANCE(1260);
      END_STATE();
    case 1217:
      if (lookahead == 't') ADVANCE(1362);
      END_STATE();
    case 1218:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 1219:
      if (lookahead == 't') ADVANCE(633);
      END_STATE();
    case 1220:
      if (lookahead == 't') ADVANCE(678);
      END_STATE();
    case 1221:
      if (lookahead == 't') ADVANCE(1363);
      END_STATE();
    case 1222:
      if (lookahead == 't') ADVANCE(1365);
      END_STATE();
    case 1223:
      if (lookahead == 't') ADVANCE(636);
      END_STATE();
    case 1224:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 1225:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 1226:
      if (lookahead == 't') ADVANCE(1131);
      END_STATE();
    case 1227:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 1228:
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 1229:
      if (lookahead == 't') ADVANCE(1308);
      END_STATE();
    case 1230:
      if (lookahead == 't') ADVANCE(617);
      END_STATE();
    case 1231:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 1232:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 1233:
      if (lookahead == 't') ADVANCE(928);
      END_STATE();
    case 1234:
      if (lookahead == 't') ADVANCE(663);
      END_STATE();
    case 1235:
      if (lookahead == 't') ADVANCE(642);
      END_STATE();
    case 1236:
      if (lookahead == 't') ADVANCE(1305);
      END_STATE();
    case 1237:
      if (lookahead == 't') ADVANCE(620);
      END_STATE();
    case 1238:
      if (lookahead == 't') ADVANCE(976);
      END_STATE();
    case 1239:
      if (lookahead == 't') ADVANCE(677);
      END_STATE();
    case 1240:
      if (lookahead == 't') ADVANCE(681);
      END_STATE();
    case 1241:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 1242:
      if (lookahead == 't') ADVANCE(914);
      END_STATE();
    case 1243:
      if (lookahead == 't') ADVANCE(933);
      END_STATE();
    case 1244:
      if (lookahead == 't') ADVANCE(661);
      END_STATE();
    case 1245:
      if (lookahead == 't') ADVANCE(917);
      END_STATE();
    case 1246:
      if (lookahead == 't') ADVANCE(918);
      END_STATE();
    case 1247:
      if (lookahead == 't') ADVANCE(924);
      END_STATE();
    case 1248:
      if (lookahead == 't') ADVANCE(958);
      END_STATE();
    case 1249:
      if (lookahead == 't') ADVANCE(926);
      END_STATE();
    case 1250:
      if (lookahead == 't') ADVANCE(500);
      END_STATE();
    case 1251:
      if (lookahead == 't') ADVANCE(679);
      END_STATE();
    case 1252:
      if (lookahead == 't') ADVANCE(1242);
      END_STATE();
    case 1253:
      if (lookahead == 't') ADVANCE(766);
      END_STATE();
    case 1254:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 1255:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 1256:
      if (lookahead == 't') ADVANCE(684);
      END_STATE();
    case 1257:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 1258:
      if (lookahead == 't') ADVANCE(775);
      END_STATE();
    case 1259:
      if (lookahead == 't') ADVANCE(699);
      END_STATE();
    case 1260:
      if (lookahead == 't') ADVANCE(946);
      END_STATE();
    case 1261:
      if (lookahead == 't') ADVANCE(686);
      END_STATE();
    case 1262:
      if (lookahead == 't') ADVANCE(689);
      END_STATE();
    case 1263:
      if (lookahead == 't') ADVANCE(953);
      END_STATE();
    case 1264:
      if (lookahead == 't') ADVANCE(695);
      END_STATE();
    case 1265:
      if (lookahead == 't') ADVANCE(694);
      END_STATE();
    case 1266:
      if (lookahead == 't') ADVANCE(1263);
      END_STATE();
    case 1267:
      if (lookahead == 't') ADVANCE(697);
      END_STATE();
    case 1268:
      if (lookahead == 't') ADVANCE(703);
      END_STATE();
    case 1269:
      if (lookahead == 't') ADVANCE(705);
      END_STATE();
    case 1270:
      if (lookahead == 'u') ADVANCE(1207);
      if (lookahead == 'v') ADVANCE(442);
      END_STATE();
    case 1271:
      if (lookahead == 'u') ADVANCE(580);
      END_STATE();
    case 1272:
      if (lookahead == 'u') ADVANCE(298);
      END_STATE();
    case 1273:
      if (lookahead == 'u') ADVANCE(410);
      END_STATE();
    case 1274:
      if (lookahead == 'u') ADVANCE(1027);
      END_STATE();
    case 1275:
      if (lookahead == 'u') ADVANCE(1193);
      END_STATE();
    case 1276:
      if (lookahead == 'u') ADVANCE(993);
      END_STATE();
    case 1277:
      if (lookahead == 'u') ADVANCE(1195);
      END_STATE();
    case 1278:
      if (lookahead == 'u') ADVANCE(1196);
      END_STATE();
    case 1279:
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 1280:
      if (lookahead == 'u') ADVANCE(1216);
      END_STATE();
    case 1281:
      if (lookahead == 'u') ADVANCE(788);
      END_STATE();
    case 1282:
      if (lookahead == 'u') ADVANCE(1197);
      END_STATE();
    case 1283:
      if (lookahead == 'u') ADVANCE(760);
      END_STATE();
    case 1284:
      if (lookahead == 'u') ADVANCE(1198);
      END_STATE();
    case 1285:
      if (lookahead == 'u') ADVANCE(310);
      END_STATE();
    case 1286:
      if (lookahead == 'u') ADVANCE(1245);
      END_STATE();
    case 1287:
      if (lookahead == 'u') ADVANCE(1127);
      END_STATE();
    case 1288:
      if (lookahead == 'u') ADVANCE(780);
      END_STATE();
    case 1289:
      if (lookahead == 'u') ADVANCE(1201);
      END_STATE();
    case 1290:
      if (lookahead == 'u') ADVANCE(1204);
      END_STATE();
    case 1291:
      if (lookahead == 'u') ADVANCE(1139);
      END_STATE();
    case 1292:
      if (lookahead == 'u') ADVANCE(1140);
      END_STATE();
    case 1293:
      if (lookahead == 'u') ADVANCE(812);
      END_STATE();
    case 1294:
      if (lookahead == 'u') ADVANCE(745);
      END_STATE();
    case 1295:
      if (lookahead == 'u') ADVANCE(1178);
      END_STATE();
    case 1296:
      if (lookahead == 'u') ADVANCE(1023);
      END_STATE();
    case 1297:
      if (lookahead == 'u') ADVANCE(1150);
      END_STATE();
    case 1298:
      if (lookahead == 'u') ADVANCE(1159);
      END_STATE();
    case 1299:
      if (lookahead == 'u') ADVANCE(822);
      END_STATE();
    case 1300:
      if (lookahead == 'u') ADVANCE(1231);
      END_STATE();
    case 1301:
      if (lookahead == 'u') ADVANCE(1162);
      END_STATE();
    case 1302:
      if (lookahead == 'u') ADVANCE(834);
      END_STATE();
    case 1303:
      if (lookahead == 'u') ADVANCE(1014);
      END_STATE();
    case 1304:
      if (lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 1305:
      if (lookahead == 'u') ADVANCE(1084);
      END_STATE();
    case 1306:
      if (lookahead == 'u') ADVANCE(1191);
      END_STATE();
    case 1307:
      if (lookahead == 'u') ADVANCE(1185);
      END_STATE();
    case 1308:
      if (lookahead == 'u') ADVANCE(1089);
      END_STATE();
    case 1309:
      if (lookahead == 'u') ADVANCE(1186);
      END_STATE();
    case 1310:
      if (lookahead == 'u') ADVANCE(1101);
      END_STATE();
    case 1311:
      if (lookahead == 'u') ADVANCE(1252);
      END_STATE();
    case 1312:
      if (lookahead == 'u') ADVANCE(1104);
      END_STATE();
    case 1313:
      if (lookahead == 'u') ADVANCE(1266);
      END_STATE();
    case 1314:
      if (lookahead == 'v') ADVANCE(656);
      END_STATE();
    case 1315:
      if (lookahead == 'v') ADVANCE(672);
      END_STATE();
    case 1316:
      if (lookahead == 'v') ADVANCE(463);
      END_STATE();
    case 1317:
      if (lookahead == 'v') ADVANCE(691);
      END_STATE();
    case 1318:
      if (lookahead == 'v') ADVANCE(419);
      END_STATE();
    case 1319:
      if (lookahead == 'v') ADVANCE(427);
      END_STATE();
    case 1320:
      if (lookahead == 'v') ADVANCE(430);
      END_STATE();
    case 1321:
      if (lookahead == 'v') ADVANCE(446);
      END_STATE();
    case 1322:
      if (lookahead == 'v') ADVANCE(457);
      END_STATE();
    case 1323:
      if (lookahead == 'v') ADVANCE(551);
      END_STATE();
    case 1324:
      if (lookahead == 'v') ADVANCE(493);
      END_STATE();
    case 1325:
      if (lookahead == 'v') ADVANCE(484);
      END_STATE();
    case 1326:
      if (lookahead == 'v') ADVANCE(499);
      END_STATE();
    case 1327:
      if (lookahead == 'v') ADVANCE(510);
      END_STATE();
    case 1328:
      if (lookahead == 'v') ADVANCE(494);
      END_STATE();
    case 1329:
      if (lookahead == 'v') ADVANCE(225);
      END_STATE();
    case 1330:
      if (lookahead == 'v') ADVANCE(547);
      END_STATE();
    case 1331:
      if (lookahead == 'v') ADVANCE(552);
      END_STATE();
    case 1332:
      if (lookahead == 'w') ADVANCE(1485);
      END_STATE();
    case 1333:
      if (lookahead == 'w') ADVANCE(1481);
      END_STATE();
    case 1334:
      if (lookahead == 'w') ADVANCE(1545);
      END_STATE();
    case 1335:
      if (lookahead == 'w') ADVANCE(1466);
      END_STATE();
    case 1336:
      if (lookahead == 'w') ADVANCE(1484);
      END_STATE();
    case 1337:
      if (lookahead == 'w') ADVANCE(1531);
      END_STATE();
    case 1338:
      if (lookahead == 'w') ADVANCE(47);
      END_STATE();
    case 1339:
      if (lookahead == 'w') ADVANCE(651);
      END_STATE();
    case 1340:
      if (lookahead == 'w') ADVANCE(649);
      END_STATE();
    case 1341:
      if (lookahead == 'w') ADVANCE(687);
      END_STATE();
    case 1342:
      if (lookahead == 'w') ADVANCE(54);
      END_STATE();
    case 1343:
      if (lookahead == 'w') ADVANCE(56);
      END_STATE();
    case 1344:
      if (lookahead == 'w') ADVANCE(627);
      END_STATE();
    case 1345:
      if (lookahead == 'w') ADVANCE(108);
      END_STATE();
    case 1346:
      if (lookahead == 'w') ADVANCE(208);
      END_STATE();
    case 1347:
      if (lookahead == 'w') ADVANCE(210);
      END_STATE();
    case 1348:
      if (lookahead == 'w') ADVANCE(489);
      END_STATE();
    case 1349:
      if (lookahead == 'w') ADVANCE(396);
      END_STATE();
    case 1350:
      if (lookahead == 'w') ADVANCE(688);
      END_STATE();
    case 1351:
      if (lookahead == 'w') ADVANCE(143);
      END_STATE();
    case 1352:
      if (lookahead == 'w') ADVANCE(142);
      END_STATE();
    case 1353:
      if (lookahead == 'x') ADVANCE(1546);
      END_STATE();
    case 1354:
      if (lookahead == 'x') ADVANCE(1547);
      END_STATE();
    case 1355:
      if (lookahead == 'x') ADVANCE(318);
      END_STATE();
    case 1356:
      if (lookahead == 'y') ADVANCE(502);
      END_STATE();
    case 1357:
      if (lookahead == 'y') ADVANCE(1566);
      END_STATE();
    case 1358:
      if (lookahead == 'y') ADVANCE(1480);
      END_STATE();
    case 1359:
      if (lookahead == 'y') ADVANCE(1452);
      END_STATE();
    case 1360:
      if (lookahead == 'y') ADVANCE(1516);
      END_STATE();
    case 1361:
      if (lookahead == 'y') ADVANCE(1472);
      END_STATE();
    case 1362:
      if (lookahead == 'y') ADVANCE(1473);
      END_STATE();
    case 1363:
      if (lookahead == 'y') ADVANCE(1474);
      END_STATE();
    case 1364:
      if (lookahead == 'y') ADVANCE(1562);
      END_STATE();
    case 1365:
      if (lookahead == 'y') ADVANCE(1478);
      END_STATE();
    case 1366:
      if (lookahead == 'y') ADVANCE(144);
      END_STATE();
    case 1367:
      if (lookahead == 'y') ADVANCE(276);
      END_STATE();
    case 1368:
      if (lookahead == 'y') ADVANCE(117);
      END_STATE();
    case 1369:
      if (lookahead == 'y') ADVANCE(1012);
      END_STATE();
    case 1370:
      if (lookahead == 'y') ADVANCE(120);
      END_STATE();
    case 1371:
      if (lookahead == 'y') ADVANCE(349);
      END_STATE();
    case 1372:
      if (lookahead == 'y') ADVANCE(1015);
      END_STATE();
    case 1373:
      if (lookahead == 'y') ADVANCE(949);
      END_STATE();
    case 1374:
      if (lookahead == 'y') ADVANCE(1154);
      END_STATE();
    case 1375:
      if (lookahead == 'z') ADVANCE(414);
      END_STATE();
    case 1376:
      if (lookahead == 'z') ADVANCE(416);
      END_STATE();
    case 1377:
      if (lookahead == 'z') ADVANCE(432);
      END_STATE();
    case 1378:
      if (lookahead == 'z') ADVANCE(473);
      END_STATE();
    case 1379:
      if (lookahead == 'z') ADVANCE(919);
      END_STATE();
    case 1380:
      if (lookahead == 'z') ADVANCE(486);
      END_STATE();
    case 1381:
      if (lookahead == 'z') ADVANCE(257);
      END_STATE();
    case 1382:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1398);
      END_STATE();
    case 1383:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1396);
      END_STATE();
    case 1384:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1429);
      END_STATE();
    case 1385:
      if (eof) ADVANCE(1387);
      if (lookahead == '\n') ADVANCE(1441);
      if (lookahead == '#') ADVANCE(1388);
      if (lookahead == '0') ADVANCE(1395);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'b') ADVANCE(631);
      if (lookahead == 'c') ADVANCE(725);
      if (lookahead == 'd') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(809);
      if (lookahead == 'f') ADVANCE(724);
      if (lookahead == 'g') ADVANCE(163);
      if (lookahead == 'h') ADVANCE(628);
      if (lookahead == 'i') ADVANCE(803);
      if (lookahead == 'k') ADVANCE(267);
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead == 'm') ADVANCE(169);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(1270);
      if (lookahead == 'p') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(409);
      if (lookahead == 's') ADVANCE(302);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == 'v') ADVANCE(556);
      if (lookahead == 'w') ADVANCE(891);
      if (lookahead == '}') ADVANCE(1444);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(1383);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1385)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1396);
      END_STATE();
    case 1386:
      if (eof) ADVANCE(1387);
      if (lookahead == '#') ADVANCE(1388);
      if (lookahead == '$') ADVANCE(1438);
      if (lookahead == '.') ADVANCE(1382);
      if (lookahead == '0') ADVANCE(1420);
      if (lookahead == '1') ADVANCE(1423);
      if (lookahead == '=') ADVANCE(1453);
      if (lookahead == 'A') ADVANCE(25);
      if (lookahead == 'C') ADVANCE(17);
      if (lookahead == 'L') ADVANCE(31);
      if (lookahead == 'M') ADVANCE(32);
      if (lookahead == 'S') ADVANCE(22);
      if (lookahead == 'W') ADVANCE(24);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'b') ADVANCE(631);
      if (lookahead == 'c') ADVANCE(725);
      if (lookahead == 'd') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(809);
      if (lookahead == 'f') ADVANCE(181);
      if (lookahead == 'g') ADVANCE(163);
      if (lookahead == 'h') ADVANCE(628);
      if (lookahead == 'i') ADVANCE(803);
      if (lookahead == 'k') ADVANCE(267);
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead == 'm') ADVANCE(169);
      if (lookahead == 'n') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(555);
      if (lookahead == 'p') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(409);
      if (lookahead == 's') ADVANCE(302);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == 'v') ADVANCE(556);
      if (lookahead == 'w') ADVANCE(891);
      if (lookahead == 'y') ADVANCE(435);
      if (lookahead == '{') ADVANCE(1443);
      if (lookahead == '}') ADVANCE(1444);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1386)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1394);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1437);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1392);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(1390);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1391);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1392);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1392);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(1398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1430);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1429);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(1398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1394);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'x') ADVANCE(1428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1396);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1396);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(1398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1397);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1398);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(anon_sym_SHIFT);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(anon_sym_CAPS);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(anon_sym_CTRL);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(anon_sym_CONTROL);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(anon_sym_ALT);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(anon_sym_MOD2);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(anon_sym_MOD3);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(anon_sym_SUPER);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(anon_sym_WIN);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(anon_sym_LOGO);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(anon_sym_MOD4);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(anon_sym_MOD5);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '_') ADVANCE(277);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(1398);
      if (lookahead == 'x') ADVANCE(1428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1430);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1429);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(1398);
      if (lookahead == 'x') ADVANCE(1428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1394);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(1398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1430);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1429);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(1398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1394);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_rgb);
      if (lookahead == 'a') ADVANCE(1427);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(anon_sym_rgba);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(sym__hex_comp);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == '.') ADVANCE(1398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1394);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'P') ADVANCE(40);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'b') ADVANCE(1271);
      if (lookahead == 'c') ADVANCE(897);
      if (lookahead == 'g') ADVANCE(1436);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'c') ADVANCE(444);
      if (lookahead == 't') ADVANCE(670);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'l') ADVANCE(1145);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(anon_sym_deg);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(sym_str);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1437);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1437);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(aux_sym_variable_reference_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1440);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(1441);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(anon_sym_general);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(anon_sym_animation);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(anon_sym_gestures);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(anon_sym_misc);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(anon_sym_binds);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_sensitivity);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_border_size);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_no_border_on_floating);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_gaps_in);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_gaps_out);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(anon_sym_col_DOTinactive_border);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(anon_sym_col_DOTactive_border);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(anon_sym_col_DOTgroup_border);
      if (lookahead == '_') ADVANCE(262);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(anon_sym_col_DOTgroup_border_active);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(anon_sym_cursor_inactive_timeout);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(anon_sym_no_cursor_warps);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(anon_sym_no_focus_fallback);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(anon_sym_apply_sens_to_raw);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(anon_sym_resize_on_border);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(anon_sym_extend_border_grab_area);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(anon_sym_hover_icon_on_border);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(anon_sym_rounding);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(anon_sym_multisample_edges);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(anon_sym_active_opacity);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(anon_sym_inactive_opacity);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(anon_sym_fullscreen_opacity);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(anon_sym_blur);
      if (lookahead == '_') ADVANCE(637);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(anon_sym_blur_size);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(anon_sym_blur_passes);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(anon_sym_blur_ignore_opacity);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(anon_sym_blur_new_optimizations);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(anon_sym_blur_xray);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(anon_sym_drop_shadow);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(anon_sym_shadow_range);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(anon_sym_shadow_render_power);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(anon_sym_shadow_ignore_window);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(anon_sym_col_DOTshadow);
      if (lookahead == '_') ADVANCE(702);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(anon_sym_col_DOTshadow_inactive);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(anon_sym_shadow_offset);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(anon_sym_shadow_scale);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(anon_sym_dim_inactive);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(anon_sym_dim_strength);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(anon_sym_dim_special);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(anon_sym_dim_around);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(anon_sym_screen_shader);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(anon_sym_enabled);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(anon_sym_disable_while_typing);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(anon_sym_natural_scroll);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(anon_sym_scroll_factor);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(anon_sym_middle_button_emulation);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(anon_sym_tap_button_map);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(anon_sym_clickfinger_behavior);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(anon_sym_tap_DASHto_DASHclick);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(anon_sym_drag_lock);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(anon_sym_tap_DASHand_DASHdrag);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(anon_sym_transform);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(anon_sym_touchpad);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(anon_sym_touchdevice);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(anon_sym_kb_model);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(anon_sym_kb_layout);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(anon_sym_kb_variant);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(anon_sym_kb_options);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(anon_sym_kb_rules);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(anon_sym_kb_file);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(anon_sym_numlock_by_default);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(anon_sym_repeat_rate);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(anon_sym_repeat_delay);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(anon_sym_accel_profile);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(anon_sym_force_no_accel);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(anon_sym_left_handed);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(anon_sym_scroll_method);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(anon_sym_scroll_button);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(anon_sym_follow_mouse);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(anon_sym_mouse_refocus);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(anon_sym_float_switch_override_focus);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(anon_sym_workspace_swipe);
      if (lookahead == '_') ADVANCE(299);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_fingers);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_distance);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_invert);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_min_speed_to_force);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_cancel_ratio);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_create_new);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_forever);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_numbered);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(anon_sym_disable_hyprland_logo);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(anon_sym_disable_splash_rendering);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(anon_sym_vfr);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(anon_sym_vrr);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(anon_sym_mouse_move_enables_dpms);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(anon_sym_key_press_enables_dpms);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(anon_sym_always_follow_on_dnd);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(anon_sym_layers_hog_keyboard_focus);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(anon_sym_animate_manual_resizes);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(anon_sym_animate_mouse_windowdragging);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(anon_sym_disable_autoreload);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(anon_sym_enable_swallow);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(anon_sym_swallow_regex);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(anon_sym_swallow_exception_regex);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(anon_sym_focus_on_activate);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(anon_sym_no_direct_scanout);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(anon_sym_hide_cursor_on_touch);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(anon_sym_mouse_move_focuses_monitor);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(anon_sym_suppress_portal_warnings);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(anon_sym_render_ahead_of_time);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(anon_sym_render_ahead_safezone);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(anon_sym_cursor_zoom_factor);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(anon_sym_cursor_zoom_rigid);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(anon_sym_allow_session_lock_restore);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(anon_sym_render_titles_in_groupbar);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(anon_sym_groupbar_titles_font_size);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(anon_sym_groupbar_gradients);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(anon_sym_pass_mouse_when_bound);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(anon_sym_scroll_event_delay);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(anon_sym_workspace_back_and_forth);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(anon_sym_allow_workspace_cycles);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(anon_sym_focus_preferred_method);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(anon_sym_overlay);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(anon_sym_damage_blink);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(anon_sym_disable_logs);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(anon_sym_disable_time);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(anon_sym_damage_tracking);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(anon_sym_enable_stdout_logs);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(anon_sym_manual_crash);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1385},
  [2] = {.lex_state = 1385},
  [3] = {.lex_state = 1385},
  [4] = {.lex_state = 1385},
  [5] = {.lex_state = 1385},
  [6] = {.lex_state = 1385},
  [7] = {.lex_state = 1385},
  [8] = {.lex_state = 1385},
  [9] = {.lex_state = 1385},
  [10] = {.lex_state = 1385},
  [11] = {.lex_state = 1385},
  [12] = {.lex_state = 1385},
  [13] = {.lex_state = 1385},
  [14] = {.lex_state = 1385},
  [15] = {.lex_state = 1385},
  [16] = {.lex_state = 1385},
  [17] = {.lex_state = 1385},
  [18] = {.lex_state = 1385},
  [19] = {.lex_state = 1385},
  [20] = {.lex_state = 1385},
  [21] = {.lex_state = 1385},
  [22] = {.lex_state = 1385},
  [23] = {.lex_state = 1385},
  [24] = {.lex_state = 1385},
  [25] = {.lex_state = 1385},
  [26] = {.lex_state = 1385},
  [27] = {.lex_state = 1385},
  [28] = {.lex_state = 1385},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 1385},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 1385},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 1385},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 1385},
  [40] = {.lex_state = 1385},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 1385},
  [44] = {.lex_state = 1385},
  [45] = {.lex_state = 1385},
  [46] = {.lex_state = 1385},
  [47] = {.lex_state = 1385},
  [48] = {.lex_state = 1385},
  [49] = {.lex_state = 1385},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 1385},
  [52] = {.lex_state = 1385},
  [53] = {.lex_state = 1385},
  [54] = {.lex_state = 1385},
  [55] = {.lex_state = 1385},
  [56] = {.lex_state = 1385},
  [57] = {.lex_state = 1385},
  [58] = {.lex_state = 1385},
  [59] = {.lex_state = 1385},
  [60] = {.lex_state = 1385},
  [61] = {.lex_state = 1385},
  [62] = {.lex_state = 1385},
  [63] = {.lex_state = 1385},
  [64] = {.lex_state = 1385},
  [65] = {.lex_state = 1385},
  [66] = {.lex_state = 1385},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 1385},
  [69] = {.lex_state = 1385},
  [70] = {.lex_state = 1385},
  [71] = {.lex_state = 1385},
  [72] = {.lex_state = 1385},
  [73] = {.lex_state = 1385},
  [74] = {.lex_state = 1385},
  [75] = {.lex_state = 1385},
  [76] = {.lex_state = 1385},
  [77] = {.lex_state = 1385},
  [78] = {.lex_state = 1385},
  [79] = {.lex_state = 1385},
  [80] = {.lex_state = 1385},
  [81] = {.lex_state = 1385},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1385},
  [84] = {.lex_state = 1385},
  [85] = {.lex_state = 1385},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 1385},
  [92] = {.lex_state = 1385},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1385},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 1391},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 1385},
  [118] = {.lex_state = 1385},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 1385},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 1385},
  [129] = {.lex_state = 1385},
  [130] = {.lex_state = 1385},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 1385},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1385},
  [140] = {.lex_state = 1385},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 1385},
  [144] = {.lex_state = 1385},
  [145] = {.lex_state = 1385},
  [146] = {.lex_state = 1385},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 1385},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 1385},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 1385},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 1385},
  [159] = {.lex_state = 1385},
  [160] = {.lex_state = 1385},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 1385},
  [165] = {.lex_state = 1385},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 1385},
  [171] = {.lex_state = 1385},
  [172] = {.lex_state = 1385},
  [173] = {.lex_state = 1385},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 1385},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 1385},
  [191] = {.lex_state = 1385},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_int] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_SHIFT] = ACTIONS(1),
    [anon_sym_CAPS] = ACTIONS(1),
    [anon_sym_CTRL] = ACTIONS(1),
    [anon_sym_CONTROL] = ACTIONS(1),
    [anon_sym_ALT] = ACTIONS(1),
    [anon_sym_MOD2] = ACTIONS(1),
    [anon_sym_MOD3] = ACTIONS(1),
    [anon_sym_SUPER] = ACTIONS(1),
    [anon_sym_WIN] = ACTIONS(1),
    [anon_sym_LOGO] = ACTIONS(1),
    [anon_sym_MOD4] = ACTIONS(1),
    [anon_sym_MOD5] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_rgb] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_rgba] = ACTIONS(1),
    [anon_sym_0x] = ACTIONS(1),
    [sym__hex_comp] = ACTIONS(1),
    [anon_sym_deg] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_general] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_decoration] = ACTIONS(1),
    [anon_sym_animation] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_gestures] = ACTIONS(1),
    [anon_sym_misc] = ACTIONS(1),
    [anon_sym_binds] = ACTIONS(1),
    [anon_sym_debug] = ACTIONS(1),
    [anon_sym_sensitivity] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_border_size] = ACTIONS(1),
    [anon_sym_no_border_on_floating] = ACTIONS(1),
    [anon_sym_gaps_in] = ACTIONS(1),
    [anon_sym_gaps_out] = ACTIONS(1),
    [anon_sym_col_DOTinactive_border] = ACTIONS(1),
    [anon_sym_col_DOTactive_border] = ACTIONS(1),
    [anon_sym_col_DOTgroup_border] = ACTIONS(1),
    [anon_sym_col_DOTgroup_border_active] = ACTIONS(1),
    [anon_sym_cursor_inactive_timeout] = ACTIONS(1),
    [anon_sym_layout] = ACTIONS(1),
    [anon_sym_no_cursor_warps] = ACTIONS(1),
    [anon_sym_no_focus_fallback] = ACTIONS(1),
    [anon_sym_apply_sens_to_raw] = ACTIONS(1),
    [anon_sym_resize_on_border] = ACTIONS(1),
    [anon_sym_extend_border_grab_area] = ACTIONS(1),
    [anon_sym_hover_icon_on_border] = ACTIONS(1),
    [anon_sym_rounding] = ACTIONS(1),
    [anon_sym_multisample_edges] = ACTIONS(1),
    [anon_sym_active_opacity] = ACTIONS(1),
    [anon_sym_inactive_opacity] = ACTIONS(1),
    [anon_sym_fullscreen_opacity] = ACTIONS(1),
    [anon_sym_blur] = ACTIONS(1),
    [anon_sym_blur_size] = ACTIONS(1),
    [anon_sym_blur_passes] = ACTIONS(1),
    [anon_sym_blur_ignore_opacity] = ACTIONS(1),
    [anon_sym_blur_new_optimizations] = ACTIONS(1),
    [anon_sym_blur_xray] = ACTIONS(1),
    [anon_sym_drop_shadow] = ACTIONS(1),
    [anon_sym_shadow_range] = ACTIONS(1),
    [anon_sym_shadow_render_power] = ACTIONS(1),
    [anon_sym_shadow_ignore_window] = ACTIONS(1),
    [anon_sym_col_DOTshadow] = ACTIONS(1),
    [anon_sym_col_DOTshadow_inactive] = ACTIONS(1),
    [anon_sym_shadow_offset] = ACTIONS(1),
    [anon_sym_shadow_scale] = ACTIONS(1),
    [anon_sym_dim_inactive] = ACTIONS(1),
    [anon_sym_dim_strength] = ACTIONS(1),
    [anon_sym_dim_special] = ACTIONS(1),
    [anon_sym_dim_around] = ACTIONS(1),
    [anon_sym_screen_shader] = ACTIONS(1),
    [anon_sym_enabled] = ACTIONS(1),
    [anon_sym_disable_while_typing] = ACTIONS(1),
    [anon_sym_natural_scroll] = ACTIONS(1),
    [anon_sym_scroll_factor] = ACTIONS(1),
    [anon_sym_middle_button_emulation] = ACTIONS(1),
    [anon_sym_tap_button_map] = ACTIONS(1),
    [anon_sym_clickfinger_behavior] = ACTIONS(1),
    [anon_sym_tap_DASHto_DASHclick] = ACTIONS(1),
    [anon_sym_drag_lock] = ACTIONS(1),
    [anon_sym_tap_DASHand_DASHdrag] = ACTIONS(1),
    [anon_sym_transform] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_touchpad] = ACTIONS(1),
    [anon_sym_touchdevice] = ACTIONS(1),
    [anon_sym_kb_model] = ACTIONS(1),
    [anon_sym_kb_layout] = ACTIONS(1),
    [anon_sym_kb_variant] = ACTIONS(1),
    [anon_sym_kb_options] = ACTIONS(1),
    [anon_sym_kb_rules] = ACTIONS(1),
    [anon_sym_kb_file] = ACTIONS(1),
    [anon_sym_numlock_by_default] = ACTIONS(1),
    [anon_sym_repeat_rate] = ACTIONS(1),
    [anon_sym_repeat_delay] = ACTIONS(1),
    [anon_sym_accel_profile] = ACTIONS(1),
    [anon_sym_force_no_accel] = ACTIONS(1),
    [anon_sym_left_handed] = ACTIONS(1),
    [anon_sym_scroll_method] = ACTIONS(1),
    [anon_sym_scroll_button] = ACTIONS(1),
    [anon_sym_follow_mouse] = ACTIONS(1),
    [anon_sym_mouse_refocus] = ACTIONS(1),
    [anon_sym_float_switch_override_focus] = ACTIONS(1),
    [anon_sym_workspace_swipe] = ACTIONS(1),
    [anon_sym_workspace_swipe_fingers] = ACTIONS(1),
    [anon_sym_workspace_swipe_distance] = ACTIONS(1),
    [anon_sym_workspace_swipe_invert] = ACTIONS(1),
    [anon_sym_workspace_swipe_min_speed_to_force] = ACTIONS(1),
    [anon_sym_workspace_swipe_cancel_ratio] = ACTIONS(1),
    [anon_sym_workspace_swipe_create_new] = ACTIONS(1),
    [anon_sym_workspace_swipe_forever] = ACTIONS(1),
    [anon_sym_workspace_swipe_numbered] = ACTIONS(1),
    [anon_sym_disable_hyprland_logo] = ACTIONS(1),
    [anon_sym_disable_splash_rendering] = ACTIONS(1),
    [anon_sym_vfr] = ACTIONS(1),
    [anon_sym_vrr] = ACTIONS(1),
    [anon_sym_mouse_move_enables_dpms] = ACTIONS(1),
    [anon_sym_key_press_enables_dpms] = ACTIONS(1),
    [anon_sym_always_follow_on_dnd] = ACTIONS(1),
    [anon_sym_layers_hog_keyboard_focus] = ACTIONS(1),
    [anon_sym_animate_manual_resizes] = ACTIONS(1),
    [anon_sym_animate_mouse_windowdragging] = ACTIONS(1),
    [anon_sym_disable_autoreload] = ACTIONS(1),
    [anon_sym_enable_swallow] = ACTIONS(1),
    [anon_sym_swallow_regex] = ACTIONS(1),
    [anon_sym_swallow_exception_regex] = ACTIONS(1),
    [anon_sym_focus_on_activate] = ACTIONS(1),
    [anon_sym_no_direct_scanout] = ACTIONS(1),
    [anon_sym_hide_cursor_on_touch] = ACTIONS(1),
    [anon_sym_mouse_move_focuses_monitor] = ACTIONS(1),
    [anon_sym_suppress_portal_warnings] = ACTIONS(1),
    [anon_sym_render_ahead_of_time] = ACTIONS(1),
    [anon_sym_render_ahead_safezone] = ACTIONS(1),
    [anon_sym_cursor_zoom_factor] = ACTIONS(1),
    [anon_sym_cursor_zoom_rigid] = ACTIONS(1),
    [anon_sym_allow_session_lock_restore] = ACTIONS(1),
    [anon_sym_render_titles_in_groupbar] = ACTIONS(1),
    [anon_sym_groupbar_titles_font_size] = ACTIONS(1),
    [anon_sym_groupbar_gradients] = ACTIONS(1),
    [anon_sym_pass_mouse_when_bound] = ACTIONS(1),
    [anon_sym_scroll_event_delay] = ACTIONS(1),
    [anon_sym_workspace_back_and_forth] = ACTIONS(1),
    [anon_sym_allow_workspace_cycles] = ACTIONS(1),
    [anon_sym_focus_preferred_method] = ACTIONS(1),
    [anon_sym_overlay] = ACTIONS(1),
    [anon_sym_damage_blink] = ACTIONS(1),
    [anon_sym_disable_logs] = ACTIONS(1),
    [anon_sym_disable_time] = ACTIONS(1),
    [anon_sym_damage_tracking] = ACTIONS(1),
    [anon_sym_enable_stdout_logs] = ACTIONS(1),
    [anon_sym_manual_crash] = ACTIONS(1),
  },
  [1] = {
    [sym_config_file] = STATE(174),
    [sym_comment] = STATE(1),
    [sym_variable_section] = STATE(59),
    [aux_sym_config_file_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [sym__newline] = ACTIONS(9),
    [anon_sym_general] = ACTIONS(11),
    [anon_sym_decoration] = ACTIONS(13),
    [anon_sym_animation] = ACTIONS(15),
    [anon_sym_input] = ACTIONS(17),
    [anon_sym_gestures] = ACTIONS(19),
    [anon_sym_misc] = ACTIONS(21),
    [anon_sym_binds] = ACTIONS(23),
    [anon_sym_debug] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__newline,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(37), 1,
      anon_sym_cursor_zoom_factor,
    STATE(2), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_variable_section_repeat6,
    STATE(5), 1,
      sym__misc_section_var,
    ACTIONS(35), 2,
      anon_sym_swallow_regex,
      anon_sym_swallow_exception_regex,
    ACTIONS(33), 3,
      anon_sym_vrr,
      anon_sym_render_ahead_safezone,
      anon_sym_groupbar_titles_font_size,
    ACTIONS(31), 21,
      anon_sym_disable_hyprland_logo,
      anon_sym_disable_splash_rendering,
      anon_sym_vfr,
      anon_sym_mouse_move_enables_dpms,
      anon_sym_key_press_enables_dpms,
      anon_sym_always_follow_on_dnd,
      anon_sym_layers_hog_keyboard_focus,
      anon_sym_animate_manual_resizes,
      anon_sym_animate_mouse_windowdragging,
      anon_sym_disable_autoreload,
      anon_sym_enable_swallow,
      anon_sym_focus_on_activate,
      anon_sym_no_direct_scanout,
      anon_sym_hide_cursor_on_touch,
      anon_sym_mouse_move_focuses_monitor,
      anon_sym_suppress_portal_warnings,
      anon_sym_render_ahead_of_time,
      anon_sym_cursor_zoom_rigid,
      anon_sym_allow_session_lock_restore,
      anon_sym_render_titles_in_groupbar,
      anon_sym_groupbar_gradients,
  [54] = 10,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__newline,
    ACTIONS(37), 1,
      anon_sym_cursor_zoom_factor,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_variable_section_repeat6,
    STATE(3), 1,
      sym_comment,
    STATE(5), 1,
      sym__misc_section_var,
    ACTIONS(35), 2,
      anon_sym_swallow_regex,
      anon_sym_swallow_exception_regex,
    ACTIONS(33), 3,
      anon_sym_vrr,
      anon_sym_render_ahead_safezone,
      anon_sym_groupbar_titles_font_size,
    ACTIONS(31), 21,
      anon_sym_disable_hyprland_logo,
      anon_sym_disable_splash_rendering,
      anon_sym_vfr,
      anon_sym_mouse_move_enables_dpms,
      anon_sym_key_press_enables_dpms,
      anon_sym_always_follow_on_dnd,
      anon_sym_layers_hog_keyboard_focus,
      anon_sym_animate_manual_resizes,
      anon_sym_animate_mouse_windowdragging,
      anon_sym_disable_autoreload,
      anon_sym_enable_swallow,
      anon_sym_focus_on_activate,
      anon_sym_no_direct_scanout,
      anon_sym_hide_cursor_on_touch,
      anon_sym_mouse_move_focuses_monitor,
      anon_sym_suppress_portal_warnings,
      anon_sym_render_ahead_of_time,
      anon_sym_cursor_zoom_rigid,
      anon_sym_allow_session_lock_restore,
      anon_sym_render_titles_in_groupbar,
      anon_sym_groupbar_gradients,
  [108] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      sym__newline,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      anon_sym_cursor_zoom_factor,
    STATE(5), 1,
      sym__misc_section_var,
    ACTIONS(52), 2,
      anon_sym_swallow_regex,
      anon_sym_swallow_exception_regex,
    STATE(4), 2,
      sym_comment,
      aux_sym_variable_section_repeat6,
    ACTIONS(49), 3,
      anon_sym_vrr,
      anon_sym_render_ahead_safezone,
      anon_sym_groupbar_titles_font_size,
    ACTIONS(46), 21,
      anon_sym_disable_hyprland_logo,
      anon_sym_disable_splash_rendering,
      anon_sym_vfr,
      anon_sym_mouse_move_enables_dpms,
      anon_sym_key_press_enables_dpms,
      anon_sym_always_follow_on_dnd,
      anon_sym_layers_hog_keyboard_focus,
      anon_sym_animate_manual_resizes,
      anon_sym_animate_mouse_windowdragging,
      anon_sym_disable_autoreload,
      anon_sym_enable_swallow,
      anon_sym_focus_on_activate,
      anon_sym_no_direct_scanout,
      anon_sym_hide_cursor_on_touch,
      anon_sym_mouse_move_focuses_monitor,
      anon_sym_suppress_portal_warnings,
      anon_sym_render_ahead_of_time,
      anon_sym_cursor_zoom_rigid,
      anon_sym_allow_session_lock_restore,
      anon_sym_render_titles_in_groupbar,
      anon_sym_groupbar_gradients,
  [160] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(58), 1,
      sym__newline,
    STATE(5), 1,
      sym_comment,
    ACTIONS(60), 28,
      anon_sym_RBRACE,
      anon_sym_disable_hyprland_logo,
      anon_sym_disable_splash_rendering,
      anon_sym_vfr,
      anon_sym_vrr,
      anon_sym_mouse_move_enables_dpms,
      anon_sym_key_press_enables_dpms,
      anon_sym_always_follow_on_dnd,
      anon_sym_layers_hog_keyboard_focus,
      anon_sym_animate_manual_resizes,
      anon_sym_animate_mouse_windowdragging,
      anon_sym_disable_autoreload,
      anon_sym_enable_swallow,
      anon_sym_swallow_regex,
      anon_sym_swallow_exception_regex,
      anon_sym_focus_on_activate,
      anon_sym_no_direct_scanout,
      anon_sym_hide_cursor_on_touch,
      anon_sym_mouse_move_focuses_monitor,
      anon_sym_suppress_portal_warnings,
      anon_sym_render_ahead_of_time,
      anon_sym_render_ahead_safezone,
      anon_sym_cursor_zoom_factor,
      anon_sym_cursor_zoom_rigid,
      anon_sym_allow_session_lock_restore,
      anon_sym_render_titles_in_groupbar,
      anon_sym_groupbar_titles_font_size,
      anon_sym_groupbar_gradients,
  [200] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(62), 1,
      sym__newline,
    STATE(6), 1,
      sym_comment,
    ACTIONS(64), 28,
      anon_sym_RBRACE,
      anon_sym_disable_hyprland_logo,
      anon_sym_disable_splash_rendering,
      anon_sym_vfr,
      anon_sym_vrr,
      anon_sym_mouse_move_enables_dpms,
      anon_sym_key_press_enables_dpms,
      anon_sym_always_follow_on_dnd,
      anon_sym_layers_hog_keyboard_focus,
      anon_sym_animate_manual_resizes,
      anon_sym_animate_mouse_windowdragging,
      anon_sym_disable_autoreload,
      anon_sym_enable_swallow,
      anon_sym_swallow_regex,
      anon_sym_swallow_exception_regex,
      anon_sym_focus_on_activate,
      anon_sym_no_direct_scanout,
      anon_sym_hide_cursor_on_touch,
      anon_sym_mouse_move_focuses_monitor,
      anon_sym_suppress_portal_warnings,
      anon_sym_render_ahead_of_time,
      anon_sym_render_ahead_safezone,
      anon_sym_cursor_zoom_factor,
      anon_sym_cursor_zoom_rigid,
      anon_sym_allow_session_lock_restore,
      anon_sym_render_titles_in_groupbar,
      anon_sym_groupbar_titles_font_size,
      anon_sym_groupbar_gradients,
  [240] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(66), 1,
      sym__newline,
    STATE(7), 1,
      sym_comment,
    ACTIONS(68), 28,
      anon_sym_RBRACE,
      anon_sym_disable_hyprland_logo,
      anon_sym_disable_splash_rendering,
      anon_sym_vfr,
      anon_sym_vrr,
      anon_sym_mouse_move_enables_dpms,
      anon_sym_key_press_enables_dpms,
      anon_sym_always_follow_on_dnd,
      anon_sym_layers_hog_keyboard_focus,
      anon_sym_animate_manual_resizes,
      anon_sym_animate_mouse_windowdragging,
      anon_sym_disable_autoreload,
      anon_sym_enable_swallow,
      anon_sym_swallow_regex,
      anon_sym_swallow_exception_regex,
      anon_sym_focus_on_activate,
      anon_sym_no_direct_scanout,
      anon_sym_hide_cursor_on_touch,
      anon_sym_mouse_move_focuses_monitor,
      anon_sym_suppress_portal_warnings,
      anon_sym_render_ahead_of_time,
      anon_sym_render_ahead_safezone,
      anon_sym_cursor_zoom_factor,
      anon_sym_cursor_zoom_rigid,
      anon_sym_allow_session_lock_restore,
      anon_sym_render_titles_in_groupbar,
      anon_sym_groupbar_titles_font_size,
      anon_sym_groupbar_gradients,
  [280] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(70), 1,
      sym__newline,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(87), 1,
      anon_sym_shadow_offset,
    ACTIONS(90), 1,
      anon_sym_screen_shader,
    STATE(13), 1,
      sym__decoration_section_var,
    ACTIONS(84), 2,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
    STATE(8), 2,
      sym_comment,
      aux_sym_variable_section_repeat2,
    ACTIONS(75), 5,
      anon_sym_rounding,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
    ACTIONS(81), 7,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_shadow_scale,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
    ACTIONS(78), 8,
      anon_sym_multisample_edges,
      anon_sym_blur,
      anon_sym_blur_ignore_opacity,
      anon_sym_blur_new_optimizations,
      anon_sym_blur_xray,
      anon_sym_drop_shadow,
      anon_sym_shadow_ignore_window,
      anon_sym_dim_inactive,
  [333] = 12,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 1,
      sym__newline,
    ACTIONS(103), 1,
      anon_sym_shadow_offset,
    ACTIONS(105), 1,
      anon_sym_screen_shader,
    STATE(9), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_variable_section_repeat2,
    STATE(13), 1,
      sym__decoration_section_var,
    ACTIONS(101), 2,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
    ACTIONS(95), 5,
      anon_sym_rounding,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
    ACTIONS(99), 7,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_shadow_scale,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
    ACTIONS(97), 8,
      anon_sym_multisample_edges,
      anon_sym_blur,
      anon_sym_blur_ignore_opacity,
      anon_sym_blur_new_optimizations,
      anon_sym_blur_xray,
      anon_sym_drop_shadow,
      anon_sym_shadow_ignore_window,
      anon_sym_dim_inactive,
  [388] = 12,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 1,
      sym__newline,
    ACTIONS(103), 1,
      anon_sym_shadow_offset,
    ACTIONS(105), 1,
      anon_sym_screen_shader,
    STATE(8), 1,
      aux_sym_variable_section_repeat2,
    STATE(10), 1,
      sym_comment,
    STATE(13), 1,
      sym__decoration_section_var,
    ACTIONS(101), 2,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
    ACTIONS(95), 5,
      anon_sym_rounding,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
    ACTIONS(99), 7,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_shadow_scale,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
    ACTIONS(97), 8,
      anon_sym_multisample_edges,
      anon_sym_blur,
      anon_sym_blur_ignore_opacity,
      anon_sym_blur_new_optimizations,
      anon_sym_blur_xray,
      anon_sym_drop_shadow,
      anon_sym_shadow_ignore_window,
      anon_sym_dim_inactive,
  [443] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      sym__newline,
    STATE(11), 1,
      sym_comment,
    ACTIONS(109), 25,
      anon_sym_RBRACE,
      anon_sym_rounding,
      anon_sym_multisample_edges,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_blur,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_blur_ignore_opacity,
      anon_sym_blur_new_optimizations,
      anon_sym_blur_xray,
      anon_sym_drop_shadow,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
      anon_sym_shadow_ignore_window,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
      anon_sym_shadow_offset,
      anon_sym_shadow_scale,
      anon_sym_dim_inactive,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
      anon_sym_screen_shader,
  [480] = 12,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      sym__newline,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    ACTIONS(116), 1,
      anon_sym_sensitivity,
    ACTIONS(122), 1,
      anon_sym_touchpad,
    ACTIONS(125), 1,
      anon_sym_touchdevice,
    STATE(17), 1,
      sym__input_variable_section,
    STATE(20), 1,
      sym__input_section_var,
    STATE(12), 2,
      sym_comment,
      aux_sym_variable_section_repeat4,
    ACTIONS(119), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(131), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(128), 8,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_accel_profile,
      anon_sym_scroll_method,
  [533] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(134), 1,
      sym__newline,
    STATE(13), 1,
      sym_comment,
    ACTIONS(136), 25,
      anon_sym_RBRACE,
      anon_sym_rounding,
      anon_sym_multisample_edges,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_blur,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_blur_ignore_opacity,
      anon_sym_blur_new_optimizations,
      anon_sym_blur_xray,
      anon_sym_drop_shadow,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
      anon_sym_shadow_ignore_window,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
      anon_sym_shadow_offset,
      anon_sym_shadow_scale,
      anon_sym_dim_inactive,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
      anon_sym_screen_shader,
  [570] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(138), 1,
      sym__newline,
    STATE(14), 1,
      sym_comment,
    ACTIONS(140), 25,
      anon_sym_RBRACE,
      anon_sym_rounding,
      anon_sym_multisample_edges,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_blur,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_blur_ignore_opacity,
      anon_sym_blur_new_optimizations,
      anon_sym_blur_xray,
      anon_sym_drop_shadow,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
      anon_sym_shadow_ignore_window,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
      anon_sym_shadow_offset,
      anon_sym_shadow_scale,
      anon_sym_dim_inactive,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
      anon_sym_screen_shader,
  [607] = 13,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(142), 1,
      sym__newline,
    ACTIONS(144), 1,
      anon_sym_sensitivity,
    ACTIONS(148), 1,
      anon_sym_touchpad,
    ACTIONS(150), 1,
      anon_sym_touchdevice,
    STATE(12), 1,
      aux_sym_variable_section_repeat4,
    STATE(15), 1,
      sym_comment,
    STATE(17), 1,
      sym__input_variable_section,
    STATE(20), 1,
      sym__input_section_var,
    ACTIONS(146), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(154), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(152), 8,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_accel_profile,
      anon_sym_scroll_method,
  [662] = 13,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(142), 1,
      sym__newline,
    ACTIONS(144), 1,
      anon_sym_sensitivity,
    ACTIONS(148), 1,
      anon_sym_touchpad,
    ACTIONS(150), 1,
      anon_sym_touchdevice,
    STATE(15), 1,
      aux_sym_variable_section_repeat4,
    STATE(16), 1,
      sym_comment,
    STATE(17), 1,
      sym__input_variable_section,
    STATE(20), 1,
      sym__input_section_var,
    ACTIONS(146), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(154), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(152), 8,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_accel_profile,
      anon_sym_scroll_method,
  [717] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(156), 1,
      sym__newline,
    STATE(17), 1,
      sym_comment,
    ACTIONS(158), 22,
      anon_sym_RBRACE,
      anon_sym_sensitivity,
      anon_sym_natural_scroll,
      anon_sym_touchpad,
      anon_sym_touchdevice,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_numlock_by_default,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_accel_profile,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_scroll_method,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_mouse_refocus,
      anon_sym_float_switch_override_focus,
  [751] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(160), 1,
      sym__newline,
    STATE(18), 1,
      sym_comment,
    ACTIONS(162), 22,
      anon_sym_RBRACE,
      anon_sym_sensitivity,
      anon_sym_natural_scroll,
      anon_sym_touchpad,
      anon_sym_touchdevice,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_numlock_by_default,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_accel_profile,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_scroll_method,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_mouse_refocus,
      anon_sym_float_switch_override_focus,
  [785] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(164), 1,
      sym__newline,
    STATE(19), 1,
      sym_comment,
    ACTIONS(166), 22,
      anon_sym_RBRACE,
      anon_sym_sensitivity,
      anon_sym_natural_scroll,
      anon_sym_touchpad,
      anon_sym_touchdevice,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_numlock_by_default,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_accel_profile,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_scroll_method,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_mouse_refocus,
      anon_sym_float_switch_override_focus,
  [819] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(156), 1,
      sym__newline,
    STATE(20), 1,
      sym_comment,
    ACTIONS(158), 22,
      anon_sym_RBRACE,
      anon_sym_sensitivity,
      anon_sym_natural_scroll,
      anon_sym_touchpad,
      anon_sym_touchdevice,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_numlock_by_default,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_accel_profile,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_scroll_method,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_mouse_refocus,
      anon_sym_float_switch_override_focus,
  [853] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(168), 1,
      sym__newline,
    STATE(21), 1,
      sym_comment,
    ACTIONS(170), 22,
      anon_sym_RBRACE,
      anon_sym_sensitivity,
      anon_sym_natural_scroll,
      anon_sym_touchpad,
      anon_sym_touchdevice,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_numlock_by_default,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_accel_profile,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_scroll_method,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_mouse_refocus,
      anon_sym_float_switch_override_focus,
  [887] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(172), 1,
      sym__newline,
    STATE(22), 1,
      sym_comment,
    ACTIONS(174), 22,
      anon_sym_RBRACE,
      anon_sym_sensitivity,
      anon_sym_natural_scroll,
      anon_sym_touchpad,
      anon_sym_touchdevice,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_numlock_by_default,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_accel_profile,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_scroll_method,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_mouse_refocus,
      anon_sym_float_switch_override_focus,
  [921] = 10,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(176), 1,
      sym__newline,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    ACTIONS(181), 1,
      anon_sym_sensitivity,
    ACTIONS(193), 1,
      anon_sym_layout,
    STATE(26), 1,
      sym__general_section_var,
    STATE(23), 2,
      sym_comment,
      aux_sym_variable_section_repeat1,
    ACTIONS(190), 4,
      anon_sym_col_DOTinactive_border,
      anon_sym_col_DOTactive_border,
      anon_sym_col_DOTgroup_border,
      anon_sym_col_DOTgroup_border_active,
    ACTIONS(184), 5,
      anon_sym_border_size,
      anon_sym_gaps_in,
      anon_sym_gaps_out,
      anon_sym_cursor_inactive_timeout,
      anon_sym_extend_border_grab_area,
    ACTIONS(187), 6,
      anon_sym_no_border_on_floating,
      anon_sym_no_cursor_warps,
      anon_sym_no_focus_fallback,
      anon_sym_apply_sens_to_raw,
      anon_sym_resize_on_border,
      anon_sym_hover_icon_on_border,
  [965] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(196), 1,
      sym__newline,
    ACTIONS(198), 1,
      anon_sym_sensitivity,
    ACTIONS(206), 1,
      anon_sym_layout,
    STATE(23), 1,
      aux_sym_variable_section_repeat1,
    STATE(24), 1,
      sym_comment,
    STATE(26), 1,
      sym__general_section_var,
    ACTIONS(204), 4,
      anon_sym_col_DOTinactive_border,
      anon_sym_col_DOTactive_border,
      anon_sym_col_DOTgroup_border,
      anon_sym_col_DOTgroup_border_active,
    ACTIONS(200), 5,
      anon_sym_border_size,
      anon_sym_gaps_in,
      anon_sym_gaps_out,
      anon_sym_cursor_inactive_timeout,
      anon_sym_extend_border_grab_area,
    ACTIONS(202), 6,
      anon_sym_no_border_on_floating,
      anon_sym_no_cursor_warps,
      anon_sym_no_focus_fallback,
      anon_sym_apply_sens_to_raw,
      anon_sym_resize_on_border,
      anon_sym_hover_icon_on_border,
  [1011] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(196), 1,
      sym__newline,
    ACTIONS(198), 1,
      anon_sym_sensitivity,
    ACTIONS(206), 1,
      anon_sym_layout,
    STATE(24), 1,
      aux_sym_variable_section_repeat1,
    STATE(25), 1,
      sym_comment,
    STATE(26), 1,
      sym__general_section_var,
    ACTIONS(204), 4,
      anon_sym_col_DOTinactive_border,
      anon_sym_col_DOTactive_border,
      anon_sym_col_DOTgroup_border,
      anon_sym_col_DOTgroup_border_active,
    ACTIONS(200), 5,
      anon_sym_border_size,
      anon_sym_gaps_in,
      anon_sym_gaps_out,
      anon_sym_cursor_inactive_timeout,
      anon_sym_extend_border_grab_area,
    ACTIONS(202), 6,
      anon_sym_no_border_on_floating,
      anon_sym_no_cursor_warps,
      anon_sym_no_focus_fallback,
      anon_sym_apply_sens_to_raw,
      anon_sym_resize_on_border,
      anon_sym_hover_icon_on_border,
  [1057] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      sym__newline,
    STATE(26), 1,
      sym_comment,
    ACTIONS(210), 18,
      anon_sym_RBRACE,
      anon_sym_sensitivity,
      anon_sym_border_size,
      anon_sym_no_border_on_floating,
      anon_sym_gaps_in,
      anon_sym_gaps_out,
      anon_sym_col_DOTinactive_border,
      anon_sym_col_DOTactive_border,
      anon_sym_col_DOTgroup_border,
      anon_sym_col_DOTgroup_border_active,
      anon_sym_cursor_inactive_timeout,
      anon_sym_layout,
      anon_sym_no_cursor_warps,
      anon_sym_no_focus_fallback,
      anon_sym_apply_sens_to_raw,
      anon_sym_resize_on_border,
      anon_sym_extend_border_grab_area,
      anon_sym_hover_icon_on_border,
  [1087] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(212), 1,
      sym__newline,
    STATE(27), 1,
      sym_comment,
    ACTIONS(214), 18,
      anon_sym_RBRACE,
      anon_sym_sensitivity,
      anon_sym_border_size,
      anon_sym_no_border_on_floating,
      anon_sym_gaps_in,
      anon_sym_gaps_out,
      anon_sym_col_DOTinactive_border,
      anon_sym_col_DOTactive_border,
      anon_sym_col_DOTgroup_border,
      anon_sym_col_DOTgroup_border_active,
      anon_sym_cursor_inactive_timeout,
      anon_sym_layout,
      anon_sym_no_cursor_warps,
      anon_sym_no_focus_fallback,
      anon_sym_apply_sens_to_raw,
      anon_sym_resize_on_border,
      anon_sym_extend_border_grab_area,
      anon_sym_hover_icon_on_border,
  [1117] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(216), 1,
      sym__newline,
    STATE(28), 1,
      sym_comment,
    ACTIONS(218), 18,
      anon_sym_RBRACE,
      anon_sym_sensitivity,
      anon_sym_border_size,
      anon_sym_no_border_on_floating,
      anon_sym_gaps_in,
      anon_sym_gaps_out,
      anon_sym_col_DOTinactive_border,
      anon_sym_col_DOTactive_border,
      anon_sym_col_DOTgroup_border,
      anon_sym_col_DOTgroup_border_active,
      anon_sym_cursor_inactive_timeout,
      anon_sym_layout,
      anon_sym_no_cursor_warps,
      anon_sym_no_focus_fallback,
      anon_sym_apply_sens_to_raw,
      anon_sym_resize_on_border,
      anon_sym_extend_border_grab_area,
      anon_sym_hover_icon_on_border,
  [1147] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    STATE(29), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(130), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(145), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(220), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1177] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    STATE(30), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(130), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(140), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(220), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1207] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    STATE(31), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(130), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(143), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(220), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1237] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(226), 1,
      sym__newline,
    ACTIONS(232), 1,
      anon_sym_workspace_swipe_cancel_ratio,
    STATE(32), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_variable_section_repeat5,
    STATE(51), 1,
      sym__gestures_section_var,
    ACTIONS(230), 3,
      anon_sym_workspace_swipe_fingers,
      anon_sym_workspace_swipe_distance,
      anon_sym_workspace_swipe_min_speed_to_force,
    ACTIONS(228), 5,
      anon_sym_workspace_swipe,
      anon_sym_workspace_swipe_invert,
      anon_sym_workspace_swipe_create_new,
      anon_sym_workspace_swipe_forever,
      anon_sym_workspace_swipe_numbered,
  [1271] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(126), 2,
      sym_bool,
      sym_variable_reference,
    STATE(130), 2,
      sym__bool_literal,
      sym__bool_integer,
    ACTIONS(220), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1301] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(234), 1,
      sym__newline,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    ACTIONS(245), 1,
      anon_sym_workspace_swipe_cancel_ratio,
    STATE(51), 1,
      sym__gestures_section_var,
    STATE(34), 2,
      sym_comment,
      aux_sym_variable_section_repeat5,
    ACTIONS(242), 3,
      anon_sym_workspace_swipe_fingers,
      anon_sym_workspace_swipe_distance,
      anon_sym_workspace_swipe_min_speed_to_force,
    ACTIONS(239), 5,
      anon_sym_workspace_swipe,
      anon_sym_workspace_swipe_invert,
      anon_sym_workspace_swipe_create_new,
      anon_sym_workspace_swipe_forever,
      anon_sym_workspace_swipe_numbered,
  [1333] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    STATE(35), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(130), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(137), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(220), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1363] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    STATE(36), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(130), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(144), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(220), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1393] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(248), 1,
      sym__newline,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    ACTIONS(254), 1,
      anon_sym_scroll_factor,
    ACTIONS(256), 1,
      anon_sym_tap_button_map,
    STATE(37), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym__input_variable_section_repeat1,
    STATE(49), 1,
      sym__touchpad_section_var,
    ACTIONS(252), 7,
      anon_sym_disable_while_typing,
      anon_sym_natural_scroll,
      anon_sym_middle_button_emulation,
      anon_sym_clickfinger_behavior,
      anon_sym_tap_DASHto_DASHclick,
      anon_sym_drag_lock,
      anon_sym_tap_DASHand_DASHdrag,
  [1427] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    STATE(38), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(130), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(190), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(220), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1457] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(226), 1,
      sym__newline,
    ACTIONS(232), 1,
      anon_sym_workspace_swipe_cancel_ratio,
    STATE(34), 1,
      aux_sym_variable_section_repeat5,
    STATE(39), 1,
      sym_comment,
    STATE(51), 1,
      sym__gestures_section_var,
    ACTIONS(230), 3,
      anon_sym_workspace_swipe_fingers,
      anon_sym_workspace_swipe_distance,
      anon_sym_workspace_swipe_min_speed_to_force,
    ACTIONS(228), 5,
      anon_sym_workspace_swipe,
      anon_sym_workspace_swipe_invert,
      anon_sym_workspace_swipe_create_new,
      anon_sym_workspace_swipe_forever,
      anon_sym_workspace_swipe_numbered,
  [1491] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(248), 1,
      sym__newline,
    ACTIONS(254), 1,
      anon_sym_scroll_factor,
    ACTIONS(256), 1,
      anon_sym_tap_button_map,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym__input_variable_section_repeat1,
    STATE(49), 1,
      sym__touchpad_section_var,
    ACTIONS(252), 7,
      anon_sym_disable_while_typing,
      anon_sym_natural_scroll,
      anon_sym_middle_button_emulation,
      anon_sym_clickfinger_behavior,
      anon_sym_tap_DASHto_DASHclick,
      anon_sym_drag_lock,
      anon_sym_tap_DASHand_DASHdrag,
  [1525] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(130), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(139), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(220), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1555] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    STATE(42), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(130), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(146), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(220), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1585] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(260), 1,
      sym__newline,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    ACTIONS(268), 1,
      anon_sym_scroll_factor,
    ACTIONS(271), 1,
      anon_sym_tap_button_map,
    STATE(49), 1,
      sym__touchpad_section_var,
    STATE(43), 2,
      sym_comment,
      aux_sym__input_variable_section_repeat1,
    ACTIONS(265), 7,
      anon_sym_disable_while_typing,
      anon_sym_natural_scroll,
      anon_sym_middle_button_emulation,
      anon_sym_clickfinger_behavior,
      anon_sym_tap_DASHto_DASHclick,
      anon_sym_drag_lock,
      anon_sym_tap_DASHand_DASHdrag,
  [1617] = 13,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(279), 1,
      anon_sym_general,
    ACTIONS(282), 1,
      anon_sym_decoration,
    ACTIONS(285), 1,
      anon_sym_animation,
    ACTIONS(288), 1,
      anon_sym_input,
    ACTIONS(291), 1,
      anon_sym_gestures,
    ACTIONS(294), 1,
      anon_sym_misc,
    ACTIONS(297), 1,
      anon_sym_binds,
    ACTIONS(300), 1,
      anon_sym_debug,
    STATE(59), 1,
      sym_variable_section,
    STATE(44), 2,
      sym_comment,
      aux_sym_config_file_repeat1,
  [1658] = 14,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym__newline,
    ACTIONS(11), 1,
      anon_sym_general,
    ACTIONS(13), 1,
      anon_sym_decoration,
    ACTIONS(15), 1,
      anon_sym_animation,
    ACTIONS(17), 1,
      anon_sym_input,
    ACTIONS(19), 1,
      anon_sym_gestures,
    ACTIONS(21), 1,
      anon_sym_misc,
    ACTIONS(23), 1,
      anon_sym_binds,
    ACTIONS(25), 1,
      anon_sym_debug,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      aux_sym_config_file_repeat1,
    STATE(45), 1,
      sym_comment,
    STATE(59), 1,
      sym_variable_section,
  [1701] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(305), 1,
      sym__newline,
    STATE(46), 1,
      sym_comment,
    ACTIONS(307), 10,
      anon_sym_RBRACE,
      anon_sym_disable_while_typing,
      anon_sym_natural_scroll,
      anon_sym_scroll_factor,
      anon_sym_middle_button_emulation,
      anon_sym_tap_button_map,
      anon_sym_clickfinger_behavior,
      anon_sym_tap_DASHto_DASHclick,
      anon_sym_drag_lock,
      anon_sym_tap_DASHand_DASHdrag,
  [1723] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(309), 1,
      sym__newline,
    STATE(47), 1,
      sym_comment,
    ACTIONS(311), 10,
      anon_sym_RBRACE,
      anon_sym_workspace_swipe,
      anon_sym_workspace_swipe_fingers,
      anon_sym_workspace_swipe_distance,
      anon_sym_workspace_swipe_invert,
      anon_sym_workspace_swipe_min_speed_to_force,
      anon_sym_workspace_swipe_cancel_ratio,
      anon_sym_workspace_swipe_create_new,
      anon_sym_workspace_swipe_forever,
      anon_sym_workspace_swipe_numbered,
  [1745] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(313), 1,
      sym__newline,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym__debug_section_var,
    ACTIONS(321), 2,
      anon_sym_damage_tracking,
      anon_sym_manual_crash,
    STATE(48), 2,
      sym_comment,
      aux_sym_variable_section_repeat8,
    ACTIONS(318), 5,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_enable_stdout_logs,
  [1773] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(324), 1,
      sym__newline,
    STATE(49), 1,
      sym_comment,
    ACTIONS(326), 10,
      anon_sym_RBRACE,
      anon_sym_disable_while_typing,
      anon_sym_natural_scroll,
      anon_sym_scroll_factor,
      anon_sym_middle_button_emulation,
      anon_sym_tap_button_map,
      anon_sym_clickfinger_behavior,
      anon_sym_tap_DASHto_DASHclick,
      anon_sym_drag_lock,
      anon_sym_tap_DASHand_DASHdrag,
  [1795] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    ACTIONS(328), 1,
      anon_sym_rgb,
    ACTIONS(330), 1,
      anon_sym_rgba,
    ACTIONS(332), 1,
      anon_sym_0x,
    STATE(50), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_gradient_repeat1,
    STATE(74), 1,
      sym_color,
    STATE(126), 2,
      sym_gradient,
      sym_variable_reference,
    STATE(77), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [1829] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(334), 1,
      sym__newline,
    STATE(51), 1,
      sym_comment,
    ACTIONS(336), 10,
      anon_sym_RBRACE,
      anon_sym_workspace_swipe,
      anon_sym_workspace_swipe_fingers,
      anon_sym_workspace_swipe_distance,
      anon_sym_workspace_swipe_invert,
      anon_sym_workspace_swipe_min_speed_to_force,
      anon_sym_workspace_swipe_cancel_ratio,
      anon_sym_workspace_swipe_create_new,
      anon_sym_workspace_swipe_forever,
      anon_sym_workspace_swipe_numbered,
  [1851] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(328), 1,
      anon_sym_rgb,
    ACTIONS(338), 1,
      sym_int,
    ACTIONS(340), 1,
      anon_sym_rgba,
    ACTIONS(342), 1,
      anon_sym_0x,
    ACTIONS(344), 1,
      sym__newline,
    STATE(52), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_gradient_repeat1,
    STATE(74), 1,
      sym_color,
    STATE(153), 1,
      sym_degree,
    STATE(77), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [1887] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(346), 1,
      sym__newline,
    STATE(48), 1,
      aux_sym_variable_section_repeat8,
    STATE(53), 1,
      sym_comment,
    STATE(65), 1,
      sym__debug_section_var,
    ACTIONS(350), 2,
      anon_sym_damage_tracking,
      anon_sym_manual_crash,
    ACTIONS(348), 5,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_enable_stdout_logs,
  [1917] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(346), 1,
      sym__newline,
    STATE(53), 1,
      aux_sym_variable_section_repeat8,
    STATE(54), 1,
      sym_comment,
    STATE(65), 1,
      sym__debug_section_var,
    ACTIONS(350), 2,
      anon_sym_damage_tracking,
      anon_sym_manual_crash,
    ACTIONS(348), 5,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_enable_stdout_logs,
  [1947] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(352), 1,
      sym__newline,
    STATE(55), 1,
      sym_comment,
    ACTIONS(354), 10,
      anon_sym_RBRACE,
      anon_sym_workspace_swipe,
      anon_sym_workspace_swipe_fingers,
      anon_sym_workspace_swipe_distance,
      anon_sym_workspace_swipe_invert,
      anon_sym_workspace_swipe_min_speed_to_force,
      anon_sym_workspace_swipe_cancel_ratio,
      anon_sym_workspace_swipe_create_new,
      anon_sym_workspace_swipe_forever,
      anon_sym_workspace_swipe_numbered,
  [1969] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(356), 1,
      sym__newline,
    STATE(56), 1,
      sym_comment,
    ACTIONS(358), 10,
      anon_sym_RBRACE,
      anon_sym_disable_while_typing,
      anon_sym_natural_scroll,
      anon_sym_scroll_factor,
      anon_sym_middle_button_emulation,
      anon_sym_tap_button_map,
      anon_sym_clickfinger_behavior,
      anon_sym_tap_DASHto_DASHclick,
      anon_sym_drag_lock,
      anon_sym_tap_DASHand_DASHdrag,
  [1991] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(57), 1,
      sym_comment,
    ACTIONS(360), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(362), 8,
      anon_sym_general,
      anon_sym_decoration,
      anon_sym_animation,
      anon_sym_input,
      anon_sym_gestures,
      anon_sym_misc,
      anon_sym_binds,
      anon_sym_debug,
  [2012] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(364), 1,
      sym_int,
    ACTIONS(366), 1,
      anon_sym_rgb,
    ACTIONS(369), 1,
      anon_sym_rgba,
    ACTIONS(372), 1,
      anon_sym_0x,
    ACTIONS(375), 1,
      sym__newline,
    STATE(74), 1,
      sym_color,
    STATE(58), 2,
      sym_comment,
      aux_sym_gradient_repeat1,
    STATE(77), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [2043] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(59), 1,
      sym_comment,
    ACTIONS(377), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(379), 8,
      anon_sym_general,
      anon_sym_decoration,
      anon_sym_animation,
      anon_sym_input,
      anon_sym_gestures,
      anon_sym_misc,
      anon_sym_binds,
      anon_sym_debug,
  [2064] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(60), 1,
      sym_comment,
    ACTIONS(381), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(383), 8,
      anon_sym_general,
      anon_sym_decoration,
      anon_sym_animation,
      anon_sym_input,
      anon_sym_gestures,
      anon_sym_misc,
      anon_sym_binds,
      anon_sym_debug,
  [2085] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(385), 1,
      sym__newline,
    STATE(61), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym_variable_section_repeat7,
    STATE(70), 1,
      sym__binds_section_var,
    ACTIONS(389), 2,
      anon_sym_scroll_event_delay,
      anon_sym_focus_preferred_method,
    ACTIONS(387), 3,
      anon_sym_pass_mouse_when_bound,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
  [2113] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(391), 1,
      sym__newline,
    STATE(62), 1,
      sym_comment,
    ACTIONS(393), 8,
      anon_sym_RBRACE,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_damage_tracking,
      anon_sym_enable_stdout_logs,
      anon_sym_manual_crash,
  [2133] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(395), 1,
      sym__newline,
    STATE(63), 1,
      sym_comment,
    ACTIONS(397), 8,
      anon_sym_RBRACE,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_damage_tracking,
      anon_sym_enable_stdout_logs,
      anon_sym_manual_crash,
  [2153] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(399), 1,
      sym__newline,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym__binds_section_var,
    ACTIONS(407), 2,
      anon_sym_scroll_event_delay,
      anon_sym_focus_preferred_method,
    STATE(64), 2,
      sym_comment,
      aux_sym_variable_section_repeat7,
    ACTIONS(404), 3,
      anon_sym_pass_mouse_when_bound,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
  [2179] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(410), 1,
      sym__newline,
    STATE(65), 1,
      sym_comment,
    ACTIONS(412), 8,
      anon_sym_RBRACE,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_damage_tracking,
      anon_sym_enable_stdout_logs,
      anon_sym_manual_crash,
  [2199] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(385), 1,
      sym__newline,
    STATE(64), 1,
      aux_sym_variable_section_repeat7,
    STATE(66), 1,
      sym_comment,
    STATE(70), 1,
      sym__binds_section_var,
    ACTIONS(389), 2,
      anon_sym_scroll_event_delay,
      anon_sym_focus_preferred_method,
    ACTIONS(387), 3,
      anon_sym_pass_mouse_when_bound,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
  [2227] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    ACTIONS(328), 1,
      anon_sym_rgb,
    ACTIONS(330), 1,
      anon_sym_rgba,
    ACTIONS(332), 1,
      anon_sym_0x,
    STATE(67), 1,
      sym_comment,
    STATE(137), 2,
      sym_color,
      sym_variable_reference,
    STATE(77), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [2255] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(414), 1,
      sym__newline,
    STATE(68), 1,
      sym_comment,
    ACTIONS(416), 6,
      anon_sym_RBRACE,
      anon_sym_pass_mouse_when_bound,
      anon_sym_scroll_event_delay,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
      anon_sym_focus_preferred_method,
  [2273] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(418), 1,
      sym__newline,
    STATE(69), 1,
      sym_comment,
    ACTIONS(420), 6,
      anon_sym_RBRACE,
      anon_sym_pass_mouse_when_bound,
      anon_sym_scroll_event_delay,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
      anon_sym_focus_preferred_method,
  [2291] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(422), 1,
      sym__newline,
    STATE(70), 1,
      sym_comment,
    ACTIONS(424), 6,
      anon_sym_RBRACE,
      anon_sym_pass_mouse_when_bound,
      anon_sym_scroll_event_delay,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
      anon_sym_focus_preferred_method,
  [2309] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    ACTIONS(426), 1,
      sym__newline,
    ACTIONS(428), 1,
      anon_sym_transform,
    ACTIONS(430), 1,
      anon_sym_output,
    STATE(71), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym__input_variable_section_repeat2,
    STATE(83), 1,
      sym__touchdevice_section_var,
  [2334] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(432), 1,
      sym__newline,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    ACTIONS(437), 1,
      anon_sym_transform,
    ACTIONS(440), 1,
      anon_sym_output,
    STATE(83), 1,
      sym__touchdevice_section_var,
    STATE(72), 2,
      sym_comment,
      aux_sym__input_variable_section_repeat2,
  [2357] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    ACTIONS(426), 1,
      sym__newline,
    ACTIONS(428), 1,
      anon_sym_transform,
    ACTIONS(430), 1,
      anon_sym_output,
    STATE(71), 1,
      aux_sym__input_variable_section_repeat2,
    STATE(73), 1,
      sym_comment,
    STATE(83), 1,
      sym__touchdevice_section_var,
  [2382] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(445), 1,
      sym__newline,
    STATE(74), 1,
      sym_comment,
    ACTIONS(443), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [2398] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      sym__newline,
    STATE(75), 1,
      sym_comment,
    ACTIONS(447), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [2414] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(453), 1,
      sym__newline,
    STATE(76), 1,
      sym_comment,
    ACTIONS(451), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [2430] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(457), 1,
      sym__newline,
    STATE(77), 1,
      sym_comment,
    ACTIONS(455), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [2446] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(459), 1,
      sym__newline,
    ACTIONS(461), 1,
      anon_sym_enabled,
    STATE(78), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_variable_section_repeat3,
    STATE(102), 1,
      sym__animation_section_var,
  [2468] = 6,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(463), 1,
      sym__newline,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
    ACTIONS(468), 1,
      anon_sym_enabled,
    STATE(102), 1,
      sym__animation_section_var,
    STATE(79), 2,
      sym_comment,
      aux_sym_variable_section_repeat3,
  [2488] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(473), 1,
      sym__newline,
    STATE(80), 1,
      sym_comment,
    ACTIONS(471), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [2504] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(459), 1,
      sym__newline,
    ACTIONS(461), 1,
      anon_sym_enabled,
    STATE(78), 1,
      aux_sym_variable_section_repeat3,
    STATE(81), 1,
      sym_comment,
    STATE(102), 1,
      sym__animation_section_var,
  [2526] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    ACTIONS(475), 1,
      sym_float,
    STATE(82), 1,
      sym_comment,
    STATE(137), 2,
      sym_vec2,
      sym_variable_reference,
  [2543] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(477), 1,
      sym__newline,
    STATE(83), 1,
      sym_comment,
    ACTIONS(479), 3,
      anon_sym_RBRACE,
      anon_sym_transform,
      anon_sym_output,
  [2558] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(481), 1,
      sym__newline,
    STATE(84), 1,
      sym_comment,
    ACTIONS(483), 3,
      anon_sym_RBRACE,
      anon_sym_transform,
      anon_sym_output,
  [2573] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(485), 1,
      sym__newline,
    STATE(85), 1,
      sym_comment,
    ACTIONS(487), 3,
      anon_sym_RBRACE,
      anon_sym_transform,
      anon_sym_output,
  [2588] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    ACTIONS(489), 1,
      sym_float,
    STATE(86), 1,
      sym_comment,
    STATE(126), 1,
      sym_variable_reference,
  [2604] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(491), 1,
      sym_str,
    ACTIONS(493), 1,
      anon_sym_DOLLAR,
    STATE(87), 1,
      sym_comment,
    STATE(126), 1,
      sym_variable_reference,
  [2620] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    ACTIONS(495), 1,
      sym_float,
    STATE(88), 1,
      sym_comment,
    STATE(190), 1,
      sym_variable_reference,
  [2636] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(493), 1,
      anon_sym_DOLLAR,
    ACTIONS(497), 1,
      sym_str,
    STATE(89), 1,
      sym_comment,
    STATE(191), 1,
      sym_variable_reference,
  [2652] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    ACTIONS(499), 1,
      sym_int,
    STATE(90), 1,
      sym_comment,
    STATE(191), 1,
      sym_variable_reference,
  [2668] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(501), 1,
      sym__newline,
    STATE(91), 1,
      sym_comment,
    ACTIONS(503), 2,
      anon_sym_RBRACE,
      anon_sym_enabled,
  [2682] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(505), 1,
      sym__newline,
    STATE(92), 1,
      sym_comment,
    ACTIONS(507), 2,
      anon_sym_RBRACE,
      anon_sym_enabled,
  [2696] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    ACTIONS(509), 1,
      sym_int,
    STATE(93), 1,
      sym_comment,
    STATE(146), 1,
      sym_variable_reference,
  [2712] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    ACTIONS(511), 1,
      sym_int,
    STATE(94), 1,
      sym_comment,
    STATE(143), 1,
      sym_variable_reference,
  [2728] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    ACTIONS(513), 1,
      sym_int,
    STATE(95), 1,
      sym_comment,
    STATE(140), 1,
      sym_variable_reference,
  [2744] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    ACTIONS(489), 1,
      sym_int,
    STATE(96), 1,
      sym_comment,
    STATE(126), 1,
      sym_variable_reference,
  [2760] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(493), 1,
      anon_sym_DOLLAR,
    ACTIONS(515), 1,
      sym_str,
    STATE(97), 1,
      sym_comment,
    STATE(190), 1,
      sym_variable_reference,
  [2776] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    ACTIONS(517), 1,
      sym_int,
    STATE(98), 1,
      sym_comment,
    STATE(137), 1,
      sym_variable_reference,
  [2792] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    ACTIONS(517), 1,
      sym_float,
    STATE(99), 1,
      sym_comment,
    STATE(137), 1,
      sym_variable_reference,
  [2808] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(493), 1,
      anon_sym_DOLLAR,
    ACTIONS(519), 1,
      sym_str,
    STATE(100), 1,
      sym_comment,
    STATE(137), 1,
      sym_variable_reference,
  [2824] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    ACTIONS(511), 1,
      sym_float,
    STATE(101), 1,
      sym_comment,
    STATE(143), 1,
      sym_variable_reference,
  [2840] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(521), 1,
      sym__newline,
    STATE(102), 1,
      sym_comment,
    ACTIONS(523), 2,
      anon_sym_RBRACE,
      anon_sym_enabled,
  [2854] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    ACTIONS(525), 1,
      sym_int,
    STATE(103), 1,
      sym_comment,
    STATE(145), 1,
      sym_variable_reference,
  [2870] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    ACTIONS(513), 1,
      sym_float,
    STATE(104), 1,
      sym_comment,
    STATE(140), 1,
      sym_variable_reference,
  [2886] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    ACTIONS(527), 1,
      sym_int,
    STATE(105), 1,
      sym_comment,
    STATE(144), 1,
      sym_variable_reference,
  [2902] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(493), 1,
      anon_sym_DOLLAR,
    ACTIONS(529), 1,
      sym_str,
    STATE(106), 1,
      sym_comment,
    STATE(144), 1,
      sym_variable_reference,
  [2918] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    ACTIONS(527), 1,
      sym_float,
    STATE(107), 1,
      sym_comment,
    STATE(144), 1,
      sym_variable_reference,
  [2934] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(493), 1,
      anon_sym_DOLLAR,
    ACTIONS(531), 1,
      sym_str,
    STATE(108), 1,
      sym_comment,
    STATE(140), 1,
      sym_variable_reference,
  [2950] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(533), 1,
      anon_sym_EQ,
    STATE(109), 1,
      sym_comment,
  [2960] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(535), 1,
      anon_sym_EQ,
    STATE(110), 1,
      sym_comment,
  [2970] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(537), 1,
      anon_sym_EQ,
    STATE(111), 1,
      sym_comment,
  [2980] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(539), 1,
      anon_sym_EQ,
    STATE(112), 1,
      sym_comment,
  [2990] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(541), 1,
      aux_sym_comment_token1,
    STATE(113), 1,
      sym_comment,
  [3000] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(543), 1,
      anon_sym_EQ,
    STATE(114), 1,
      sym_comment,
  [3010] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(545), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      sym_comment,
  [3020] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(547), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_comment,
  [3030] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(549), 1,
      sym__newline,
    STATE(117), 1,
      sym_comment,
  [3040] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(551), 1,
      sym__newline,
    STATE(118), 1,
      sym_comment,
  [3050] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(553), 1,
      anon_sym_EQ,
    STATE(119), 1,
      sym_comment,
  [3060] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(555), 1,
      anon_sym_EQ,
    STATE(120), 1,
      sym_comment,
  [3070] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(557), 1,
      anon_sym_EQ,
    STATE(121), 1,
      sym_comment,
  [3080] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(559), 1,
      anon_sym_EQ,
    STATE(122), 1,
      sym_comment,
  [3090] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      anon_sym_EQ,
    STATE(123), 1,
      sym_comment,
  [3100] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(563), 1,
      anon_sym_EQ,
    STATE(124), 1,
      sym_comment,
  [3110] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(565), 1,
      anon_sym_EQ,
    STATE(125), 1,
      sym_comment,
  [3120] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(567), 1,
      sym__newline,
    STATE(126), 1,
      sym_comment,
  [3130] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(569), 1,
      aux_sym_variable_reference_token1,
    STATE(127), 1,
      sym_comment,
  [3140] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(571), 1,
      sym__newline,
    STATE(128), 1,
      sym_comment,
  [3150] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(573), 1,
      sym__newline,
    STATE(129), 1,
      sym_comment,
  [3160] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(575), 1,
      sym__newline,
    STATE(130), 1,
      sym_comment,
  [3170] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_comment,
  [3180] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    STATE(132), 1,
      sym_comment,
  [3190] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym__hex_comp,
    STATE(133), 1,
      sym_comment,
  [3200] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(583), 1,
      anon_sym_EQ,
    STATE(134), 1,
      sym_comment,
  [3210] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(585), 1,
      anon_sym_EQ,
    STATE(135), 1,
      sym_comment,
  [3220] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(587), 1,
      anon_sym_EQ,
    STATE(136), 1,
      sym_comment,
  [3230] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(589), 1,
      sym__newline,
    STATE(137), 1,
      sym_comment,
  [3240] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(591), 1,
      sym_float,
    STATE(138), 1,
      sym_comment,
  [3250] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(593), 1,
      sym__newline,
    STATE(139), 1,
      sym_comment,
  [3260] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(595), 1,
      sym__newline,
    STATE(140), 1,
      sym_comment,
  [3270] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(597), 1,
      anon_sym_EQ,
    STATE(141), 1,
      sym_comment,
  [3280] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(599), 1,
      anon_sym_EQ,
    STATE(142), 1,
      sym_comment,
  [3290] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(601), 1,
      sym__newline,
    STATE(143), 1,
      sym_comment,
  [3300] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(603), 1,
      sym__newline,
    STATE(144), 1,
      sym_comment,
  [3310] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(605), 1,
      sym__newline,
    STATE(145), 1,
      sym_comment,
  [3320] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(607), 1,
      sym__newline,
    STATE(146), 1,
      sym_comment,
  [3330] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(609), 1,
      anon_sym_EQ,
    STATE(147), 1,
      sym_comment,
  [3340] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(611), 1,
      sym__newline,
    STATE(148), 1,
      sym_comment,
  [3350] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(613), 1,
      sym__hex_comp,
    STATE(149), 1,
      sym_comment,
  [3360] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(615), 1,
      sym__hex_comp,
    STATE(150), 1,
      sym_comment,
  [3370] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(617), 1,
      sym__hex_comp,
    STATE(151), 1,
      sym_comment,
  [3380] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(619), 1,
      anon_sym_deg,
    STATE(152), 1,
      sym_comment,
  [3390] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(621), 1,
      sym__newline,
    STATE(153), 1,
      sym_comment,
  [3400] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(623), 1,
      anon_sym_EQ,
    STATE(154), 1,
      sym_comment,
  [3410] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(625), 1,
      anon_sym_LBRACE,
    STATE(155), 1,
      sym_comment,
  [3420] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(627), 1,
      sym__newline,
    STATE(156), 1,
      sym_comment,
  [3430] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(629), 1,
      anon_sym_EQ,
    STATE(157), 1,
      sym_comment,
  [3440] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(631), 1,
      sym__newline,
    STATE(158), 1,
      sym_comment,
  [3450] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(633), 1,
      sym__newline,
    STATE(159), 1,
      sym_comment,
  [3460] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(635), 1,
      sym__newline,
    STATE(160), 1,
      sym_comment,
  [3470] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(637), 1,
      anon_sym_EQ,
    STATE(161), 1,
      sym_comment,
  [3480] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(639), 1,
      anon_sym_EQ,
    STATE(162), 1,
      sym_comment,
  [3490] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(641), 1,
      anon_sym_EQ,
    STATE(163), 1,
      sym_comment,
  [3500] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(643), 1,
      sym__newline,
    STATE(164), 1,
      sym_comment,
  [3510] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(645), 1,
      sym__newline,
    STATE(165), 1,
      sym_comment,
  [3520] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(647), 1,
      anon_sym_EQ,
    STATE(166), 1,
      sym_comment,
  [3530] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(649), 1,
      anon_sym_EQ,
    STATE(167), 1,
      sym_comment,
  [3540] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(651), 1,
      anon_sym_EQ,
    STATE(168), 1,
      sym_comment,
  [3550] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(653), 1,
      anon_sym_EQ,
    STATE(169), 1,
      sym_comment,
  [3560] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(655), 1,
      sym__newline,
    STATE(170), 1,
      sym_comment,
  [3570] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(657), 1,
      sym__newline,
    STATE(171), 1,
      sym_comment,
  [3580] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(659), 1,
      sym__newline,
    STATE(172), 1,
      sym_comment,
  [3590] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(661), 1,
      sym__newline,
    STATE(173), 1,
      sym_comment,
  [3600] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(663), 1,
      ts_builtin_sym_end,
    STATE(174), 1,
      sym_comment,
  [3610] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(665), 1,
      sym__hex_comp,
    STATE(175), 1,
      sym_comment,
  [3620] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(667), 1,
      sym__hex_comp,
    STATE(176), 1,
      sym_comment,
  [3630] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(669), 1,
      sym__hex_comp,
    STATE(177), 1,
      sym_comment,
  [3640] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(671), 1,
      sym__newline,
    STATE(178), 1,
      sym_comment,
  [3650] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(673), 1,
      anon_sym_LBRACE,
    STATE(179), 1,
      sym_comment,
  [3660] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(675), 1,
      anon_sym_EQ,
    STATE(180), 1,
      sym_comment,
  [3670] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(677), 1,
      anon_sym_EQ,
    STATE(181), 1,
      sym_comment,
  [3680] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(679), 1,
      anon_sym_LBRACE,
    STATE(182), 1,
      sym_comment,
  [3690] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(681), 1,
      anon_sym_LBRACE,
    STATE(183), 1,
      sym_comment,
  [3700] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(683), 1,
      anon_sym_EQ,
    STATE(184), 1,
      sym_comment,
  [3710] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(685), 1,
      anon_sym_EQ,
    STATE(185), 1,
      sym_comment,
  [3720] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(687), 1,
      anon_sym_LBRACE,
    STATE(186), 1,
      sym_comment,
  [3730] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(689), 1,
      sym__hex_comp,
    STATE(187), 1,
      sym_comment,
  [3740] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(691), 1,
      sym__hex_comp,
    STATE(188), 1,
      sym_comment,
  [3750] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(693), 1,
      sym__hex_comp,
    STATE(189), 1,
      sym_comment,
  [3760] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(695), 1,
      sym__newline,
    STATE(190), 1,
      sym_comment,
  [3770] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(697), 1,
      sym__newline,
    STATE(191), 1,
      sym_comment,
  [3780] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      sym_comment,
  [3790] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(701), 1,
      sym__hex_comp,
    STATE(193), 1,
      sym_comment,
  [3800] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(703), 1,
      anon_sym_LBRACE,
    STATE(194), 1,
      sym_comment,
  [3810] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(705), 1,
      anon_sym_LBRACE,
    STATE(195), 1,
      sym_comment,
  [3820] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(707), 1,
      anon_sym_EQ,
    STATE(196), 1,
      sym_comment,
  [3830] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(709), 1,
      anon_sym_LBRACE,
    STATE(197), 1,
      sym_comment,
  [3840] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      sym_comment,
  [3850] = 1,
    ACTIONS(713), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 160,
  [SMALL_STATE(6)] = 200,
  [SMALL_STATE(7)] = 240,
  [SMALL_STATE(8)] = 280,
  [SMALL_STATE(9)] = 333,
  [SMALL_STATE(10)] = 388,
  [SMALL_STATE(11)] = 443,
  [SMALL_STATE(12)] = 480,
  [SMALL_STATE(13)] = 533,
  [SMALL_STATE(14)] = 570,
  [SMALL_STATE(15)] = 607,
  [SMALL_STATE(16)] = 662,
  [SMALL_STATE(17)] = 717,
  [SMALL_STATE(18)] = 751,
  [SMALL_STATE(19)] = 785,
  [SMALL_STATE(20)] = 819,
  [SMALL_STATE(21)] = 853,
  [SMALL_STATE(22)] = 887,
  [SMALL_STATE(23)] = 921,
  [SMALL_STATE(24)] = 965,
  [SMALL_STATE(25)] = 1011,
  [SMALL_STATE(26)] = 1057,
  [SMALL_STATE(27)] = 1087,
  [SMALL_STATE(28)] = 1117,
  [SMALL_STATE(29)] = 1147,
  [SMALL_STATE(30)] = 1177,
  [SMALL_STATE(31)] = 1207,
  [SMALL_STATE(32)] = 1237,
  [SMALL_STATE(33)] = 1271,
  [SMALL_STATE(34)] = 1301,
  [SMALL_STATE(35)] = 1333,
  [SMALL_STATE(36)] = 1363,
  [SMALL_STATE(37)] = 1393,
  [SMALL_STATE(38)] = 1427,
  [SMALL_STATE(39)] = 1457,
  [SMALL_STATE(40)] = 1491,
  [SMALL_STATE(41)] = 1525,
  [SMALL_STATE(42)] = 1555,
  [SMALL_STATE(43)] = 1585,
  [SMALL_STATE(44)] = 1617,
  [SMALL_STATE(45)] = 1658,
  [SMALL_STATE(46)] = 1701,
  [SMALL_STATE(47)] = 1723,
  [SMALL_STATE(48)] = 1745,
  [SMALL_STATE(49)] = 1773,
  [SMALL_STATE(50)] = 1795,
  [SMALL_STATE(51)] = 1829,
  [SMALL_STATE(52)] = 1851,
  [SMALL_STATE(53)] = 1887,
  [SMALL_STATE(54)] = 1917,
  [SMALL_STATE(55)] = 1947,
  [SMALL_STATE(56)] = 1969,
  [SMALL_STATE(57)] = 1991,
  [SMALL_STATE(58)] = 2012,
  [SMALL_STATE(59)] = 2043,
  [SMALL_STATE(60)] = 2064,
  [SMALL_STATE(61)] = 2085,
  [SMALL_STATE(62)] = 2113,
  [SMALL_STATE(63)] = 2133,
  [SMALL_STATE(64)] = 2153,
  [SMALL_STATE(65)] = 2179,
  [SMALL_STATE(66)] = 2199,
  [SMALL_STATE(67)] = 2227,
  [SMALL_STATE(68)] = 2255,
  [SMALL_STATE(69)] = 2273,
  [SMALL_STATE(70)] = 2291,
  [SMALL_STATE(71)] = 2309,
  [SMALL_STATE(72)] = 2334,
  [SMALL_STATE(73)] = 2357,
  [SMALL_STATE(74)] = 2382,
  [SMALL_STATE(75)] = 2398,
  [SMALL_STATE(76)] = 2414,
  [SMALL_STATE(77)] = 2430,
  [SMALL_STATE(78)] = 2446,
  [SMALL_STATE(79)] = 2468,
  [SMALL_STATE(80)] = 2488,
  [SMALL_STATE(81)] = 2504,
  [SMALL_STATE(82)] = 2526,
  [SMALL_STATE(83)] = 2543,
  [SMALL_STATE(84)] = 2558,
  [SMALL_STATE(85)] = 2573,
  [SMALL_STATE(86)] = 2588,
  [SMALL_STATE(87)] = 2604,
  [SMALL_STATE(88)] = 2620,
  [SMALL_STATE(89)] = 2636,
  [SMALL_STATE(90)] = 2652,
  [SMALL_STATE(91)] = 2668,
  [SMALL_STATE(92)] = 2682,
  [SMALL_STATE(93)] = 2696,
  [SMALL_STATE(94)] = 2712,
  [SMALL_STATE(95)] = 2728,
  [SMALL_STATE(96)] = 2744,
  [SMALL_STATE(97)] = 2760,
  [SMALL_STATE(98)] = 2776,
  [SMALL_STATE(99)] = 2792,
  [SMALL_STATE(100)] = 2808,
  [SMALL_STATE(101)] = 2824,
  [SMALL_STATE(102)] = 2840,
  [SMALL_STATE(103)] = 2854,
  [SMALL_STATE(104)] = 2870,
  [SMALL_STATE(105)] = 2886,
  [SMALL_STATE(106)] = 2902,
  [SMALL_STATE(107)] = 2918,
  [SMALL_STATE(108)] = 2934,
  [SMALL_STATE(109)] = 2950,
  [SMALL_STATE(110)] = 2960,
  [SMALL_STATE(111)] = 2970,
  [SMALL_STATE(112)] = 2980,
  [SMALL_STATE(113)] = 2990,
  [SMALL_STATE(114)] = 3000,
  [SMALL_STATE(115)] = 3010,
  [SMALL_STATE(116)] = 3020,
  [SMALL_STATE(117)] = 3030,
  [SMALL_STATE(118)] = 3040,
  [SMALL_STATE(119)] = 3050,
  [SMALL_STATE(120)] = 3060,
  [SMALL_STATE(121)] = 3070,
  [SMALL_STATE(122)] = 3080,
  [SMALL_STATE(123)] = 3090,
  [SMALL_STATE(124)] = 3100,
  [SMALL_STATE(125)] = 3110,
  [SMALL_STATE(126)] = 3120,
  [SMALL_STATE(127)] = 3130,
  [SMALL_STATE(128)] = 3140,
  [SMALL_STATE(129)] = 3150,
  [SMALL_STATE(130)] = 3160,
  [SMALL_STATE(131)] = 3170,
  [SMALL_STATE(132)] = 3180,
  [SMALL_STATE(133)] = 3190,
  [SMALL_STATE(134)] = 3200,
  [SMALL_STATE(135)] = 3210,
  [SMALL_STATE(136)] = 3220,
  [SMALL_STATE(137)] = 3230,
  [SMALL_STATE(138)] = 3240,
  [SMALL_STATE(139)] = 3250,
  [SMALL_STATE(140)] = 3260,
  [SMALL_STATE(141)] = 3270,
  [SMALL_STATE(142)] = 3280,
  [SMALL_STATE(143)] = 3290,
  [SMALL_STATE(144)] = 3300,
  [SMALL_STATE(145)] = 3310,
  [SMALL_STATE(146)] = 3320,
  [SMALL_STATE(147)] = 3330,
  [SMALL_STATE(148)] = 3340,
  [SMALL_STATE(149)] = 3350,
  [SMALL_STATE(150)] = 3360,
  [SMALL_STATE(151)] = 3370,
  [SMALL_STATE(152)] = 3380,
  [SMALL_STATE(153)] = 3390,
  [SMALL_STATE(154)] = 3400,
  [SMALL_STATE(155)] = 3410,
  [SMALL_STATE(156)] = 3420,
  [SMALL_STATE(157)] = 3430,
  [SMALL_STATE(158)] = 3440,
  [SMALL_STATE(159)] = 3450,
  [SMALL_STATE(160)] = 3460,
  [SMALL_STATE(161)] = 3470,
  [SMALL_STATE(162)] = 3480,
  [SMALL_STATE(163)] = 3490,
  [SMALL_STATE(164)] = 3500,
  [SMALL_STATE(165)] = 3510,
  [SMALL_STATE(166)] = 3520,
  [SMALL_STATE(167)] = 3530,
  [SMALL_STATE(168)] = 3540,
  [SMALL_STATE(169)] = 3550,
  [SMALL_STATE(170)] = 3560,
  [SMALL_STATE(171)] = 3570,
  [SMALL_STATE(172)] = 3580,
  [SMALL_STATE(173)] = 3590,
  [SMALL_STATE(174)] = 3600,
  [SMALL_STATE(175)] = 3610,
  [SMALL_STATE(176)] = 3620,
  [SMALL_STATE(177)] = 3630,
  [SMALL_STATE(178)] = 3640,
  [SMALL_STATE(179)] = 3650,
  [SMALL_STATE(180)] = 3660,
  [SMALL_STATE(181)] = 3670,
  [SMALL_STATE(182)] = 3680,
  [SMALL_STATE(183)] = 3690,
  [SMALL_STATE(184)] = 3700,
  [SMALL_STATE(185)] = 3710,
  [SMALL_STATE(186)] = 3720,
  [SMALL_STATE(187)] = 3730,
  [SMALL_STATE(188)] = 3740,
  [SMALL_STATE(189)] = 3750,
  [SMALL_STATE(190)] = 3760,
  [SMALL_STATE(191)] = 3770,
  [SMALL_STATE(192)] = 3780,
  [SMALL_STATE(193)] = 3790,
  [SMALL_STATE(194)] = 3800,
  [SMALL_STATE(195)] = 3810,
  [SMALL_STATE(196)] = 3820,
  [SMALL_STATE(197)] = 3830,
  [SMALL_STATE(198)] = 3840,
  [SMALL_STATE(199)] = 3850,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(6),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(184),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(181),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(180),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(169),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat6, 1, .production_id = 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 1, .production_id = 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat6, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__misc_section_var, 4, .production_id = 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__misc_section_var, 4, .production_id = 1),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(11),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(135),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(134),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(125),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(124),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(123),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(122),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat2, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 1),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(18),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(120),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(119),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(116),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(115),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(114),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(141),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat2, 1, .production_id = 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 1, .production_id = 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_section_var, 4, .production_id = 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_section_var, 4, .production_id = 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat4, 1, .production_id = 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 1, .production_id = 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat4, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_variable_section, 5, .production_id = 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_variable_section, 5, .production_id = 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_variable_section, 4, .production_id = 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_variable_section, 4, .production_id = 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_section_var, 4, .production_id = 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_section_var, 4, .production_id = 1),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(27),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(110),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(147),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(142),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(109),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(136),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat1, 1, .production_id = 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 1, .production_id = 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat1, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__general_section_var, 4, .production_id = 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__general_section_var, 4, .production_id = 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat5, 2), SHIFT_REPEAT(47),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 2),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 2), SHIFT_REPEAT(157),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 2), SHIFT_REPEAT(196),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 2), SHIFT_REPEAT(185),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat1, 2), SHIFT_REPEAT(46),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 2),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 2), SHIFT_REPEAT(161),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 2), SHIFT_REPEAT(162),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 2), SHIFT_REPEAT(163),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(59),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(155),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(197),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(195),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(194),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(186),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(183),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(182),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(179),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat1, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat5, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 1),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat8, 2), SHIFT_REPEAT(62),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 2),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 2), SHIFT_REPEAT(111),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 2), SHIFT_REPEAT(112),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat1, 1, .production_id = 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 1, .production_id = 2),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat5, 1, .production_id = 2),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 1, .production_id = 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gradient, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gestures_section_var, 4, .production_id = 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gestures_section_var, 4, .production_id = 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__touchpad_section_var, 4, .production_id = 1),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__touchpad_section_var, 4, .production_id = 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_section, 5, .production_id = 1),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_section, 5, .production_id = 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(131),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(132),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(133),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_section, 4, .production_id = 1),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_section, 4, .production_id = 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat8, 1),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug_section_var, 4, .production_id = 1),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__debug_section_var, 4, .production_id = 1),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat7, 2), SHIFT_REPEAT(68),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 2),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 2), SHIFT_REPEAT(166),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 2), SHIFT_REPEAT(154),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat8, 1, .production_id = 2),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 1, .production_id = 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat7, 1),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binds_section_var, 4, .production_id = 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binds_section_var, 4, .production_id = 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat7, 1, .production_id = 2),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 1, .production_id = 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat2, 2), SHIFT_REPEAT(85),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 2),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 2), SHIFT_REPEAT(167),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 2), SHIFT_REPEAT(168),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 1),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_rgba, 7),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_rgba, 7),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_hex, 5),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_hex, 5),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat3, 2), SHIFT_REPEAT(92),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat3, 2),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat3, 2), SHIFT_REPEAT(121),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_rgb, 6),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_rgb, 6),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat2, 1, .production_id = 2),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 1, .production_id = 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__touchdevice_section_var, 4, .production_id = 1),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__touchdevice_section_var, 4, .production_id = 1),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat2, 1),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 1),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__animation_section_var, 4, .production_id = 1),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__animation_section_var, 4, .production_id = 1),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat3, 1),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat3, 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat3, 1, .production_id = 2),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat3, 1, .production_id = 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_literal, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_integer, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_reference, 2),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gradient, 2),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec2, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [663] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_degree, 2, .production_id = 3),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hypr(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
