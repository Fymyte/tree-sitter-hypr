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
#define STATE_COUNT 208
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 207
#define ALIAS_COUNT 0
#define TOKEN_COUNT 170
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 5

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
  anon_sym_device = 46,
  anon_sym_COLON = 47,
  aux_sym_variable_section_token1 = 48,
  anon_sym_sensitivity = 49,
  anon_sym_EQ = 50,
  anon_sym_border_size = 51,
  anon_sym_no_border_on_floating = 52,
  anon_sym_gaps_in = 53,
  anon_sym_gaps_out = 54,
  anon_sym_col_DOTinactive_border = 55,
  anon_sym_col_DOTactive_border = 56,
  anon_sym_col_DOTgroup_border = 57,
  anon_sym_col_DOTgroup_border_active = 58,
  anon_sym_cursor_inactive_timeout = 59,
  anon_sym_layout = 60,
  anon_sym_no_cursor_warps = 61,
  anon_sym_no_focus_fallback = 62,
  anon_sym_apply_sens_to_raw = 63,
  anon_sym_resize_on_border = 64,
  anon_sym_extend_border_grab_area = 65,
  anon_sym_hover_icon_on_border = 66,
  anon_sym_rounding = 67,
  anon_sym_multisample_edges = 68,
  anon_sym_active_opacity = 69,
  anon_sym_inactive_opacity = 70,
  anon_sym_fullscreen_opacity = 71,
  anon_sym_blur = 72,
  anon_sym_blur_size = 73,
  anon_sym_blur_passes = 74,
  anon_sym_blur_ignore_opacity = 75,
  anon_sym_blur_new_optimizations = 76,
  anon_sym_blur_xray = 77,
  anon_sym_drop_shadow = 78,
  anon_sym_shadow_range = 79,
  anon_sym_shadow_render_power = 80,
  anon_sym_shadow_ignore_window = 81,
  anon_sym_col_DOTshadow = 82,
  anon_sym_col_DOTshadow_inactive = 83,
  anon_sym_shadow_offset = 84,
  anon_sym_shadow_scale = 85,
  anon_sym_dim_inactive = 86,
  anon_sym_dim_strength = 87,
  anon_sym_dim_special = 88,
  anon_sym_dim_around = 89,
  anon_sym_screen_shader = 90,
  anon_sym_enabled = 91,
  anon_sym_disable_while_typing = 92,
  anon_sym_natural_scroll = 93,
  anon_sym_scroll_factor = 94,
  anon_sym_middle_button_emulation = 95,
  anon_sym_tap_button_map = 96,
  anon_sym_clickfinger_behavior = 97,
  anon_sym_tap_DASHto_DASHclick = 98,
  anon_sym_drag_lock = 99,
  anon_sym_tap_DASHand_DASHdrag = 100,
  anon_sym_transform = 101,
  anon_sym_output = 102,
  anon_sym_touchpad = 103,
  anon_sym_touchdevice = 104,
  anon_sym_kb_model = 105,
  anon_sym_kb_layout = 106,
  anon_sym_kb_variant = 107,
  anon_sym_kb_options = 108,
  anon_sym_kb_rules = 109,
  anon_sym_kb_file = 110,
  anon_sym_numlock_by_default = 111,
  anon_sym_repeat_rate = 112,
  anon_sym_repeat_delay = 113,
  anon_sym_accel_profile = 114,
  anon_sym_force_no_accel = 115,
  anon_sym_left_handed = 116,
  anon_sym_scroll_method = 117,
  anon_sym_scroll_button = 118,
  anon_sym_follow_mouse = 119,
  anon_sym_mouse_refocus = 120,
  anon_sym_float_switch_override_focus = 121,
  anon_sym_workspace_swipe = 122,
  anon_sym_workspace_swipe_fingers = 123,
  anon_sym_workspace_swipe_distance = 124,
  anon_sym_workspace_swipe_invert = 125,
  anon_sym_workspace_swipe_min_speed_to_force = 126,
  anon_sym_workspace_swipe_cancel_ratio = 127,
  anon_sym_workspace_swipe_create_new = 128,
  anon_sym_workspace_swipe_forever = 129,
  anon_sym_workspace_swipe_numbered = 130,
  anon_sym_disable_hyprland_logo = 131,
  anon_sym_disable_splash_rendering = 132,
  anon_sym_vfr = 133,
  anon_sym_vrr = 134,
  anon_sym_mouse_move_enables_dpms = 135,
  anon_sym_key_press_enables_dpms = 136,
  anon_sym_always_follow_on_dnd = 137,
  anon_sym_layers_hog_keyboard_focus = 138,
  anon_sym_animate_manual_resizes = 139,
  anon_sym_animate_mouse_windowdragging = 140,
  anon_sym_disable_autoreload = 141,
  anon_sym_enable_swallow = 142,
  anon_sym_swallow_regex = 143,
  anon_sym_swallow_exception_regex = 144,
  anon_sym_focus_on_activate = 145,
  anon_sym_no_direct_scanout = 146,
  anon_sym_hide_cursor_on_touch = 147,
  anon_sym_mouse_move_focuses_monitor = 148,
  anon_sym_suppress_portal_warnings = 149,
  anon_sym_render_ahead_of_time = 150,
  anon_sym_render_ahead_safezone = 151,
  anon_sym_cursor_zoom_factor = 152,
  anon_sym_cursor_zoom_rigid = 153,
  anon_sym_allow_session_lock_restore = 154,
  anon_sym_render_titles_in_groupbar = 155,
  anon_sym_groupbar_titles_font_size = 156,
  anon_sym_groupbar_gradients = 157,
  anon_sym_pass_mouse_when_bound = 158,
  anon_sym_scroll_event_delay = 159,
  anon_sym_workspace_back_and_forth = 160,
  anon_sym_allow_workspace_cycles = 161,
  anon_sym_focus_preferred_method = 162,
  anon_sym_overlay = 163,
  anon_sym_damage_blink = 164,
  anon_sym_disable_logs = 165,
  anon_sym_disable_time = 166,
  anon_sym_damage_tracking = 167,
  anon_sym_enable_stdout_logs = 168,
  anon_sym_manual_crash = 169,
  sym_config_file = 170,
  sym_comment = 171,
  sym_vec2 = 172,
  sym_bool = 173,
  sym__bool_literal = 174,
  sym__bool_integer = 175,
  sym_color = 176,
  sym_color_rgb = 177,
  sym_color_rgba = 178,
  sym_color_hex = 179,
  sym_gradient = 180,
  sym_degree = 181,
  sym_variable_reference = 182,
  sym_variable_section = 183,
  sym__general_section_var = 184,
  sym__decoration_section_var = 185,
  sym__animation_section_var = 186,
  sym__touchpad_section_var = 187,
  sym__touchdevice_section_var = 188,
  sym__input_variable_section = 189,
  sym__input_section_var = 190,
  sym__gestures_section_var = 191,
  sym__misc_section_var = 192,
  sym__binds_section_var = 193,
  sym__debug_section_var = 194,
  aux_sym_config_file_repeat1 = 195,
  aux_sym_gradient_repeat1 = 196,
  aux_sym_variable_section_repeat1 = 197,
  aux_sym_variable_section_repeat2 = 198,
  aux_sym_variable_section_repeat3 = 199,
  aux_sym_variable_section_repeat4 = 200,
  aux_sym_variable_section_repeat5 = 201,
  aux_sym_variable_section_repeat6 = 202,
  aux_sym_variable_section_repeat7 = 203,
  aux_sym_variable_section_repeat8 = 204,
  aux_sym__input_variable_section_repeat1 = 205,
  aux_sym__input_variable_section_repeat2 = 206,
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
  [anon_sym_device] = "device",
  [anon_sym_COLON] = ":",
  [aux_sym_variable_section_token1] = "variable_section_token1",
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
  [anon_sym_device] = anon_sym_device,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_variable_section_token1] = aux_sym_variable_section_token1,
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
  [anon_sym_device] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_section_token1] = {
    .visible = false,
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
  [3] = {.index = 2, .length = 3},
  [4] = {.index = 5, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 0, .inherited = true},
  [2] =
    {field_name, 0},
    {field_name, 1},
    {field_name, 2},
  [5] =
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
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1391);
      if (lookahead == '#') ADVANCE(1392);
      if (lookahead == '$') ADVANCE(1442);
      if (lookahead == '(') ADVANCE(1429);
      if (lookahead == ')') ADVANCE(1430);
      if (lookahead == '.') ADVANCE(1386);
      if (lookahead == '0') ADVANCE(1423);
      if (lookahead == '1') ADVANCE(1426);
      if (lookahead == ':') ADVANCE(1457);
      if (lookahead == '=') ADVANCE(1460);
      if (lookahead == 'A') ADVANCE(27);
      if (lookahead == 'C') ADVANCE(17);
      if (lookahead == 'L') ADVANCE(32);
      if (lookahead == 'M') ADVANCE(33);
      if (lookahead == 'S') ADVANCE(23);
      if (lookahead == 'W') ADVANCE(25);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'b') ADVANCE(635);
      if (lookahead == 'c') ADVANCE(730);
      if (lookahead == 'd') ADVANCE(159);
      if (lookahead == 'e') ADVANCE(814);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'g') ADVANCE(164);
      if (lookahead == 'h') ADVANCE(631);
      if (lookahead == 'i') ADVANCE(807);
      if (lookahead == 'k') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == 'm') ADVANCE(170);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(558);
      if (lookahead == 'p') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(411);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == 'v') ADVANCE(559);
      if (lookahead == 'w') ADVANCE(895);
      if (lookahead == 'y') ADVANCE(438);
      if (lookahead == '{') ADVANCE(1447);
      if (lookahead == '}') ADVANCE(1448);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('B' <= lookahead && lookahead <= 'F')) ADVANCE(1388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1390)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1397);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(1392);
      if (lookahead == '$') ADVANCE(1442);
      if (lookahead == '.') ADVANCE(1386);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1401);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(1392);
      if (lookahead == '$') ADVANCE(1442);
      if (lookahead == '0') ADVANCE(1399);
      if (lookahead == 'r') ADVANCE(581);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(1387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1400);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(1392);
      if (lookahead == '$') ADVANCE(1442);
      if (lookahead == '0') ADVANCE(1422);
      if (lookahead == '1') ADVANCE(1425);
      if (lookahead == 'd') ADVANCE(467);
      if (lookahead == 'f') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(891);
      if (lookahead == 'o') ADVANCE(557);
      if (lookahead == 't') ADVANCE(1051);
      if (lookahead == 'y') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(1392);
      if (lookahead == '$') ADVANCE(1442);
      if (lookahead == '0') ADVANCE(1422);
      if (lookahead == '1') ADVANCE(1425);
      if (lookahead == 'f') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(891);
      if (lookahead == 'o') ADVANCE(557);
      if (lookahead == 't') ADVANCE(1051);
      if (lookahead == 'y') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(1392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1444);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(1392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(1392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1388);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(1392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1458);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(1393);
      if (lookahead == '$') ADVANCE(1443);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0) ADVANCE(1441);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == '_') ADVANCE(279);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(395);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(316);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(1386);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1398);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(1386);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1401);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(265);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(1408);
      if (lookahead == '3') ADVANCE(1409);
      if (lookahead == '4') ADVANCE(1413);
      if (lookahead == '5') ADVANCE(1414);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(1435);
      if (lookahead == 'O') ADVANCE(31);
      if (lookahead == 'T') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1433);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(31);
      if (lookahead == 'T') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'F') ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead == 'G') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 'H') ADVANCE(24);
      if (lookahead == 'U') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'I') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 'L') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'L') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1433);
      END_STATE();
    case 28:
      if (lookahead == 'L') ADVANCE(1405);
      END_STATE();
    case 29:
      if (lookahead == 'L') ADVANCE(1406);
      END_STATE();
    case 30:
      if (lookahead == 'N') ADVANCE(1411);
      END_STATE();
    case 31:
      if (lookahead == 'N') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'O') ADVANCE(22);
      END_STATE();
    case 33:
      if (lookahead == 'O') ADVANCE(19);
      END_STATE();
    case 34:
      if (lookahead == 'O') ADVANCE(1412);
      END_STATE();
    case 35:
      if (lookahead == 'O') ADVANCE(29);
      END_STATE();
    case 36:
      if (lookahead == 'P') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'P') ADVANCE(20);
      END_STATE();
    case 38:
      if (lookahead == 'R') ADVANCE(1410);
      END_STATE();
    case 39:
      if (lookahead == 'R') ADVANCE(28);
      END_STATE();
    case 40:
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 41:
      if (lookahead == 'S') ADVANCE(1404);
      END_STATE();
    case 42:
      if (lookahead == 'T') ADVANCE(1407);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(1403);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(40);
      END_STATE();
    case 45:
      if (lookahead == '_') ADVANCE(561);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(278);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(253);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(1193);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(907);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(793);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(708);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(272);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(388);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(288);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(705);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(250);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(418);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(594);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(283);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(552);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(909);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(642);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(580);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(178);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(791);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(619);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(564);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(786);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(289);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(1350);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(276);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(1348);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(828);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(273);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(354);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(718);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(575);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(287);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(938);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(574);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(1017);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(1191);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(646);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(598);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(1145);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(1182);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(1009);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(1125);
      if (lookahead == 'd') ADVANCE(1501);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(313);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(400);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(375);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(1239);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(196);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(1175);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(761);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(1218);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(1248);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(468);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(694);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(1176);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(458);
      END_STATE();
    case 102:
      if (lookahead == '_') ADVANCE(450);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(618);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(804);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(315);
      END_STATE();
    case 106:
      if (lookahead == '_') ADVANCE(1005);
      END_STATE();
    case 107:
      if (lookahead == '_') ADVANCE(806);
      END_STATE();
    case 108:
      if (lookahead == '_') ADVANCE(1183);
      END_STATE();
    case 109:
      if (lookahead == '_') ADVANCE(908);
      END_STATE();
    case 110:
      if (lookahead == '_') ADVANCE(940);
      END_STATE();
    case 111:
      if (lookahead == '_') ADVANCE(1180);
      END_STATE();
    case 112:
      if (lookahead == '_') ADVANCE(607);
      END_STATE();
    case 113:
      if (lookahead == '_') ADVANCE(965);
      END_STATE();
    case 114:
      if (lookahead == '_') ADVANCE(387);
      END_STATE();
    case 115:
      if (lookahead == '_') ADVANCE(747);
      END_STATE();
    case 116:
      if (lookahead == '_') ADVANCE(849);
      END_STATE();
    case 117:
      if (lookahead == '_') ADVANCE(794);
      END_STATE();
    case 118:
      if (lookahead == '_') ADVANCE(1346);
      END_STATE();
    case 119:
      if (lookahead == '_') ADVANCE(1156);
      END_STATE();
    case 120:
      if (lookahead == '_') ADVANCE(569);
      END_STATE();
    case 121:
      if (lookahead == '_') ADVANCE(382);
      END_STATE();
    case 122:
      if (lookahead == '_') ADVANCE(211);
      END_STATE();
    case 123:
      if (lookahead == '_') ADVANCE(1077);
      END_STATE();
    case 124:
      if (lookahead == '_') ADVANCE(397);
      END_STATE();
    case 125:
      if (lookahead == '_') ADVANCE(1065);
      END_STATE();
    case 126:
      if (lookahead == '_') ADVANCE(1107);
      END_STATE();
    case 127:
      if (lookahead == '_') ADVANCE(571);
      END_STATE();
    case 128:
      if (lookahead == '_') ADVANCE(1351);
      END_STATE();
    case 129:
      if (lookahead == '_') ADVANCE(777);
      END_STATE();
    case 130:
      if (lookahead == '_') ADVANCE(1184);
      END_STATE();
    case 131:
      if (lookahead == '_') ADVANCE(1243);
      END_STATE();
    case 132:
      if (lookahead == '_') ADVANCE(1244);
      END_STATE();
    case 133:
      if (lookahead == '_') ADVANCE(251);
      END_STATE();
    case 134:
      if (lookahead == '_') ADVANCE(238);
      END_STATE();
    case 135:
      if (lookahead == '_') ADVANCE(1354);
      END_STATE();
    case 136:
      if (lookahead == '_') ADVANCE(572);
      END_STATE();
    case 137:
      if (lookahead == '_') ADVANCE(781);
      END_STATE();
    case 138:
      if (lookahead == '_') ADVANCE(1245);
      END_STATE();
    case 139:
      if (lookahead == '_') ADVANCE(1103);
      END_STATE();
    case 140:
      if (lookahead == '_') ADVANCE(955);
      END_STATE();
    case 141:
      if (lookahead == '_') ADVANCE(1104);
      END_STATE();
    case 142:
      if (lookahead == '_') ADVANCE(960);
      END_STATE();
    case 143:
      if (lookahead == '_') ADVANCE(963);
      END_STATE();
    case 144:
      if (lookahead == '_') ADVANCE(805);
      END_STATE();
    case 145:
      if (lookahead == '_') ADVANCE(1022);
      END_STATE();
    case 146:
      if (lookahead == '_') ADVANCE(1110);
      END_STATE();
    case 147:
      if (lookahead == '_') ADVANCE(971);
      END_STATE();
    case 148:
      if (lookahead == '_') ADVANCE(976);
      END_STATE();
    case 149:
      if (lookahead == '_') ADVANCE(978);
      END_STATE();
    case 150:
      if (lookahead == '_') ADVANCE(578);
      END_STATE();
    case 151:
      if (lookahead == '_') ADVANCE(579);
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
      if (lookahead == '_') ADVANCE(295);
      END_STATE();
    case 158:
      if (lookahead == '_') ADVANCE(993);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(1439);
      if (lookahead == 'e') ADVANCE(1436);
      if (lookahead == 'i') ADVANCE(787);
      if (lookahead == 'r') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1433);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(1438);
      if (lookahead == 'l') ADVANCE(896);
      if (lookahead == 'o') ADVANCE(325);
      if (lookahead == 'u') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1433);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(1171);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(591);
      if (lookahead == 'o') ADVANCE(998);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(1475);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(999);
      if (lookahead == 'e') ADVANCE(852);
      if (lookahead == 'r') ADVANCE(894);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(1235);
      if (lookahead == 'o') ADVANCE(1419);
      if (lookahead == 'u') ADVANCE(789);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(1235);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(789);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(1360);
      if (lookahead == 'e') ADVANCE(560);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(608);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(824);
      if (lookahead == 'i') ADVANCE(367);
      if (lookahead == 'o') ADVANCE(1299);
      if (lookahead == 'u') ADVANCE(733);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(1378);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == 'p') ADVANCE(1279);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(994);
      if (lookahead == 'o') ADVANCE(1276);
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(994);
      if (lookahead == 'o') ADVANCE(1276);
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(1377);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(802);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(622);
      if (lookahead == 't') ADVANCE(654);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(1361);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(1362);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(732);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(896);
      if (lookahead == 'o') ADVANCE(325);
      if (lookahead == 'u') ADVANCE(734);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(1198);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(374);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(1339);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(356);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(1364);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(585);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(1298);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(857);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(995);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(566);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(1050);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(742);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(337);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(723);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(831);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(767);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(1368);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(606);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(853);
      if (lookahead == 'e') ADVANCE(875);
      END_STATE();
    case 203:
      if (lookahead == 'a') ADVANCE(361);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(725);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(1150);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(870);
      END_STATE();
    case 207:
      if (lookahead == 'a') ADVANCE(1173);
      END_STATE();
    case 208:
      if (lookahead == 'a') ADVANCE(1086);
      END_STATE();
    case 209:
      if (lookahead == 'a') ADVANCE(861);
      if (lookahead == 'r') ADVANCE(545);
      END_STATE();
    case 210:
      if (lookahead == 'a') ADVANCE(1064);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(1093);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(1043);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(1100);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(1230);
      END_STATE();
    case 215:
      if (lookahead == 'a') ADVANCE(776);
      END_STATE();
    case 216:
      if (lookahead == 'a') ADVANCE(788);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == 'i') ADVANCE(787);
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 217:
      if (lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 218:
      if (lookahead == 'a') ADVANCE(825);
      END_STATE();
    case 219:
      if (lookahead == 'a') ADVANCE(825);
      if (lookahead == 'u') ADVANCE(412);
      END_STATE();
    case 220:
      if (lookahead == 'a') ADVANCE(1238);
      END_STATE();
    case 221:
      if (lookahead == 'a') ADVANCE(381);
      END_STATE();
    case 222:
      if (lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 223:
      if (lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 224:
      if (lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 225:
      if (lookahead == 'a') ADVANCE(1234);
      END_STATE();
    case 226:
      if (lookahead == 'a') ADVANCE(1159);
      END_STATE();
    case 227:
      if (lookahead == 'a') ADVANCE(1321);
      END_STATE();
    case 228:
      if (lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 229:
      if (lookahead == 'a') ADVANCE(344);
      END_STATE();
    case 230:
      if (lookahead == 'a') ADVANCE(1228);
      END_STATE();
    case 231:
      if (lookahead == 'a') ADVANCE(329);
      END_STATE();
    case 232:
      if (lookahead == 'a') ADVANCE(752);
      END_STATE();
    case 233:
      if (lookahead == 'a') ADVANCE(754);
      END_STATE();
    case 234:
      if (lookahead == 'a') ADVANCE(1254);
      END_STATE();
    case 235:
      if (lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 236:
      if (lookahead == 'a') ADVANCE(822);
      if (lookahead == 't') ADVANCE(888);
      END_STATE();
    case 237:
      if (lookahead == 'a') ADVANCE(741);
      END_STATE();
    case 238:
      if (lookahead == 'a') ADVANCE(338);
      END_STATE();
    case 239:
      if (lookahead == 'a') ADVANCE(1225);
      END_STATE();
    case 240:
      if (lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 241:
      if (lookahead == 'a') ADVANCE(1066);
      END_STATE();
    case 242:
      if (lookahead == 'a') ADVANCE(778);
      END_STATE();
    case 243:
      if (lookahead == 'a') ADVANCE(743);
      END_STATE();
    case 244:
      if (lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 245:
      if (lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 246:
      if (lookahead == 'a') ADVANCE(832);
      END_STATE();
    case 247:
      if (lookahead == 'a') ADVANCE(1232);
      END_STATE();
    case 248:
      if (lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 249:
      if (lookahead == 'a') ADVANCE(1233);
      END_STATE();
    case 250:
      if (lookahead == 'a') ADVANCE(1290);
      if (lookahead == 'h') ADVANCE(1376);
      if (lookahead == 'l') ADVANCE(900);
      if (lookahead == 's') ADVANCE(1007);
      if (lookahead == 't') ADVANCE(643);
      if (lookahead == 'w') ADVANCE(628);
      END_STATE();
    case 251:
      if (lookahead == 'a') ADVANCE(859);
      END_STATE();
    case 252:
      if (lookahead == 'a') ADVANCE(341);
      END_STATE();
    case 253:
      if (lookahead == 'a') ADVANCE(1090);
      if (lookahead == 'i') ADVANCE(879);
      if (lookahead == 's') ADVANCE(1003);
      END_STATE();
    case 254:
      if (lookahead == 'a') ADVANCE(864);
      END_STATE();
    case 255:
      if (lookahead == 'a') ADVANCE(1256);
      END_STATE();
    case 256:
      if (lookahead == 'a') ADVANCE(342);
      END_STATE();
    case 257:
      if (lookahead == 'a') ADVANCE(399);
      END_STATE();
    case 258:
      if (lookahead == 'a') ADVANCE(343);
      END_STATE();
    case 259:
      if (lookahead == 'a') ADVANCE(286);
      END_STATE();
    case 260:
      if (lookahead == 'a') ADVANCE(349);
      END_STATE();
    case 261:
      if (lookahead == 'a') ADVANCE(1267);
      END_STATE();
    case 262:
      if (lookahead == 'a') ADVANCE(348);
      END_STATE();
    case 263:
      if (lookahead == 'a') ADVANCE(350);
      END_STATE();
    case 264:
      if (lookahead == 'a') ADVANCE(878);
      if (lookahead == 'o') ADVANCE(1313);
      END_STATE();
    case 265:
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead == 'g') ADVANCE(1087);
      if (lookahead == 'i') ADVANCE(829);
      if (lookahead == 's') ADVANCE(627);
      END_STATE();
    case 266:
      if (lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 267:
      if (lookahead == 'a') ADVANCE(355);
      END_STATE();
    case 268:
      if (lookahead == 'b') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(1370);
      END_STATE();
    case 269:
      if (lookahead == 'b') ADVANCE(1428);
      END_STATE();
    case 270:
      if (lookahead == 'b') ADVANCE(1275);
      if (lookahead == 'c') ADVANCE(901);
      if (lookahead == 'v') ADVANCE(674);
      END_STATE();
    case 271:
      if (lookahead == 'b') ADVANCE(737);
      END_STATE();
    case 272:
      if (lookahead == 'b') ADVANCE(740);
      if (lookahead == 't') ADVANCE(1059);
      END_STATE();
    case 273:
      if (lookahead == 'b') ADVANCE(524);
      END_STATE();
    case 274:
      if (lookahead == 'b') ADVANCE(122);
      END_STATE();
    case 275:
      if (lookahead == 'b') ADVANCE(241);
      END_STATE();
    case 276:
      if (lookahead == 'b') ADVANCE(1374);
      END_STATE();
    case 277:
      if (lookahead == 'b') ADVANCE(926);
      END_STATE();
    case 278:
      if (lookahead == 'b') ADVANCE(980);
      if (lookahead == 'c') ADVANCE(1314);
      if (lookahead == 'd') ADVANCE(652);
      if (lookahead == 'f') ADVANCE(899);
      END_STATE();
    case 279:
      if (lookahead == 'b') ADVANCE(1284);
      END_STATE();
    case 280:
      if (lookahead == 'b') ADVANCE(212);
      END_STATE();
    case 281:
      if (lookahead == 'b') ADVANCE(533);
      END_STATE();
    case 282:
      if (lookahead == 'b') ADVANCE(771);
      END_STATE();
    case 283:
      if (lookahead == 'b') ADVANCE(245);
      if (lookahead == 's') ADVANCE(1344);
      END_STATE();
    case 284:
      if (lookahead == 'b') ADVANCE(248);
      END_STATE();
    case 285:
      if (lookahead == 'b') ADVANCE(782);
      END_STATE();
    case 286:
      if (lookahead == 'b') ADVANCE(783);
      END_STATE();
    case 287:
      if (lookahead == 'b') ADVANCE(972);
      END_STATE();
    case 288:
      if (lookahead == 'b') ADVANCE(1315);
      if (lookahead == 'e') ADVANCE(1319);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(464);
      END_STATE();
    case 289:
      if (lookahead == 'b') ADVANCE(985);
      END_STATE();
    case 290:
      if (lookahead == 'b') ADVANCE(1317);
      END_STATE();
    case 291:
      if (lookahead == 'b') ADVANCE(986);
      END_STATE();
    case 292:
      if (lookahead == 'b') ADVANCE(987);
      END_STATE();
    case 293:
      if (lookahead == 'b') ADVANCE(988);
      END_STATE();
    case 294:
      if (lookahead == 'b') ADVANCE(989);
      END_STATE();
    case 295:
      if (lookahead == 'b') ADVANCE(990);
      END_STATE();
    case 296:
      if (lookahead == 'c') ADVANCE(1437);
      if (lookahead == 'l') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(637);
      if (lookahead == 'p') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1433);
      END_STATE();
    case 297:
      if (lookahead == 'c') ADVANCE(302);
      if (lookahead == 'l') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(637);
      if (lookahead == 'p') ADVANCE(996);
      END_STATE();
    case 298:
      if (lookahead == 'c') ADVANCE(1453);
      END_STATE();
    case 299:
      if (lookahead == 'c') ADVANCE(613);
      END_STATE();
    case 300:
      if (lookahead == 'c') ADVANCE(209);
      if (lookahead == 'd') ADVANCE(666);
      if (lookahead == 'f') ADVANCE(697);
      if (lookahead == 'i') ADVANCE(872);
      if (lookahead == 'm') ADVANCE(675);
      if (lookahead == 'n') ADVANCE(1285);
      END_STATE();
    case 301:
      if (lookahead == 'c') ADVANCE(714);
      END_STATE();
    case 302:
      if (lookahead == 'c') ADVANCE(447);
      if (lookahead == 't') ADVANCE(672);
      END_STATE();
    case 303:
      if (lookahead == 'c') ADVANCE(1045);
      if (lookahead == 'e') ADVANCE(820);
      if (lookahead == 'h') ADVANCE(175);
      if (lookahead == 'u') ADVANCE(1000);
      if (lookahead == 'w') ADVANCE(215);
      END_STATE();
    case 304:
      if (lookahead == 'c') ADVANCE(717);
      END_STATE();
    case 305:
      if (lookahead == 'c') ADVANCE(710);
      END_STATE();
    case 306:
      if (lookahead == 'c') ADVANCE(1272);
      END_STATE();
    case 307:
      if (lookahead == 'c') ADVANCE(716);
      END_STATE();
    case 308:
      if (lookahead == 'c') ADVANCE(625);
      END_STATE();
    case 309:
      if (lookahead == 'c') ADVANCE(712);
      END_STATE();
    case 310:
      if (lookahead == 'c') ADVANCE(713);
      END_STATE();
    case 311:
      if (lookahead == 'c') ADVANCE(616);
      END_STATE();
    case 312:
      if (lookahead == 'c') ADVANCE(414);
      END_STATE();
    case 313:
      if (lookahead == 'c') ADVANCE(1375);
      END_STATE();
    case 314:
      if (lookahead == 'c') ADVANCE(686);
      END_STATE();
    case 315:
      if (lookahead == 'c') ADVANCE(1082);
      END_STATE();
    case 316:
      if (lookahead == 'c') ADVANCE(757);
      END_STATE();
    case 317:
      if (lookahead == 'c') ADVANCE(660);
      END_STATE();
    case 318:
      if (lookahead == 'c') ADVANCE(1106);
      END_STATE();
    case 319:
      if (lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 320:
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 321:
      if (lookahead == 'c') ADVANCE(421);
      END_STATE();
    case 322:
      if (lookahead == 'c') ADVANCE(542);
      END_STATE();
    case 323:
      if (lookahead == 'c') ADVANCE(434);
      END_STATE();
    case 324:
      if (lookahead == 'c') ADVANCE(437);
      END_STATE();
    case 325:
      if (lookahead == 'c') ADVANCE(1301);
      if (lookahead == 'l') ADVANCE(758);
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 326:
      if (lookahead == 'c') ADVANCE(719);
      END_STATE();
    case 327:
      if (lookahead == 'c') ADVANCE(456);
      END_STATE();
    case 328:
      if (lookahead == 'c') ADVANCE(1058);
      END_STATE();
    case 329:
      if (lookahead == 'c') ADVANCE(662);
      END_STATE();
    case 330:
      if (lookahead == 'c') ADVANCE(1291);
      END_STATE();
    case 331:
      if (lookahead == 'c') ADVANCE(720);
      END_STATE();
    case 332:
      if (lookahead == 'c') ADVANCE(664);
      END_STATE();
    case 333:
      if (lookahead == 'c') ADVANCE(1310);
      END_STATE();
    case 334:
      if (lookahead == 'c') ADVANCE(473);
      END_STATE();
    case 335:
      if (lookahead == 'c') ADVANCE(669);
      END_STATE();
    case 336:
      if (lookahead == 'c') ADVANCE(1295);
      END_STATE();
    case 337:
      if (lookahead == 'c') ADVANCE(334);
      END_STATE();
    case 338:
      if (lookahead == 'c') ADVANCE(1227);
      END_STATE();
    case 339:
      if (lookahead == 'c') ADVANCE(1296);
      END_STATE();
    case 340:
      if (lookahead == 'c') ADVANCE(529);
      END_STATE();
    case 341:
      if (lookahead == 'c') ADVANCE(493);
      END_STATE();
    case 342:
      if (lookahead == 'c') ADVANCE(508);
      END_STATE();
    case 343:
      if (lookahead == 'c') ADVANCE(1255);
      END_STATE();
    case 344:
      if (lookahead == 'c') ADVANCE(1250);
      END_STATE();
    case 345:
      if (lookahead == 'c') ADVANCE(1305);
      END_STATE();
    case 346:
      if (lookahead == 'c') ADVANCE(1246);
      END_STATE();
    case 347:
      if (lookahead == 'c') ADVANCE(948);
      END_STATE();
    case 348:
      if (lookahead == 'c') ADVANCE(1261);
      END_STATE();
    case 349:
      if (lookahead == 'c') ADVANCE(1251);
      END_STATE();
    case 350:
      if (lookahead == 'c') ADVANCE(1266);
      END_STATE();
    case 351:
      if (lookahead == 'c') ADVANCE(772);
      END_STATE();
    case 352:
      if (lookahead == 'c') ADVANCE(1269);
      END_STATE();
    case 353:
      if (lookahead == 'c') ADVANCE(1271);
      END_STATE();
    case 354:
      if (lookahead == 'c') ADVANCE(1316);
      END_STATE();
    case 355:
      if (lookahead == 'c') ADVANCE(1273);
      END_STATE();
    case 356:
      if (lookahead == 'd') ADVANCE(1513);
      END_STATE();
    case 357:
      if (lookahead == 'd') ADVANCE(1499);
      END_STATE();
    case 358:
      if (lookahead == 'd') ADVANCE(1526);
      END_STATE();
    case 359:
      if (lookahead == 'd') ADVANCE(1527);
      END_STATE();
    case 360:
      if (lookahead == 'd') ADVANCE(1563);
      END_STATE();
    case 361:
      if (lookahead == 'd') ADVANCE(1551);
      END_STATE();
    case 362:
      if (lookahead == 'd') ADVANCE(1547);
      END_STATE();
    case 363:
      if (lookahead == 'd') ADVANCE(1568);
      END_STATE();
    case 364:
      if (lookahead == 'd') ADVANCE(1572);
      END_STATE();
    case 365:
      if (lookahead == 'd') ADVANCE(1540);
      END_STATE();
    case 366:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 367:
      if (lookahead == 'd') ADVANCE(371);
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 368:
      if (lookahead == 'd') ADVANCE(443);
      END_STATE();
    case 369:
      if (lookahead == 'd') ADVANCE(1124);
      END_STATE();
    case 370:
      if (lookahead == 'd') ADVANCE(644);
      END_STATE();
    case 371:
      if (lookahead == 'd') ADVANCE(769);
      END_STATE();
    case 372:
      if (lookahead == 'd') ADVANCE(610);
      END_STATE();
    case 373:
      if (lookahead == 'd') ADVANCE(505);
      if (lookahead == 'p') ADVANCE(186);
      END_STATE();
    case 374:
      if (lookahead == 'd') ADVANCE(892);
      END_STATE();
    case 375:
      if (lookahead == 'd') ADVANCE(1002);
      END_STATE();
    case 376:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 377:
      if (lookahead == 'd') ADVANCE(893);
      END_STATE();
    case 378:
      if (lookahead == 'd') ADVANCE(455);
      END_STATE();
    case 379:
      if (lookahead == 'd') ADVANCE(904);
      END_STATE();
    case 380:
      if (lookahead == 'd') ADVANCE(906);
      END_STATE();
    case 381:
      if (lookahead == 'd') ADVANCE(671);
      END_STATE();
    case 382:
      if (lookahead == 'd') ADVANCE(452);
      END_STATE();
    case 383:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 384:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 385:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 386:
      if (lookahead == 'd') ADVANCE(462);
      END_STATE();
    case 387:
      if (lookahead == 'd') ADVANCE(1014);
      END_STATE();
    case 388:
      if (lookahead == 'd') ADVANCE(510);
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 389:
      if (lookahead == 'd') ADVANCE(944);
      END_STATE();
    case 390:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 391:
      if (lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 392:
      if (lookahead == 'd') ADVANCE(453);
      END_STATE();
    case 393:
      if (lookahead == 'd') ADVANCE(520);
      END_STATE();
    case 394:
      if (lookahead == 'd') ADVANCE(905);
      END_STATE();
    case 395:
      if (lookahead == 'd') ADVANCE(1063);
      END_STATE();
    case 396:
      if (lookahead == 'd') ADVANCE(528);
      END_STATE();
    case 397:
      if (lookahead == 'd') ADVANCE(525);
      END_STATE();
    case 398:
      if (lookahead == 'd') ADVANCE(1070);
      END_STATE();
    case 399:
      if (lookahead == 'd') ADVANCE(478);
      END_STATE();
    case 400:
      if (lookahead == 'd') ADVANCE(837);
      END_STATE();
    case 401:
      if (lookahead == 'd') ADVANCE(480);
      END_STATE();
    case 402:
      if (lookahead == 'd') ADVANCE(482);
      END_STATE();
    case 403:
      if (lookahead == 'd') ADVANCE(484);
      END_STATE();
    case 404:
      if (lookahead == 'd') ADVANCE(485);
      END_STATE();
    case 405:
      if (lookahead == 'd') ADVANCE(490);
      END_STATE();
    case 406:
      if (lookahead == 'd') ADVANCE(494);
      END_STATE();
    case 407:
      if (lookahead == 'd') ADVANCE(553);
      END_STATE();
    case 408:
      if (lookahead == 'd') ADVANCE(513);
      END_STATE();
    case 409:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 410:
      if (lookahead == 'd') ADVANCE(532);
      END_STATE();
    case 411:
      if (lookahead == 'e') ADVANCE(869);
      if (lookahead == 'g') ADVANCE(269);
      if (lookahead == 'o') ADVANCE(1297);
      END_STATE();
    case 412:
      if (lookahead == 'e') ADVANCE(1415);
      END_STATE();
    case 413:
      if (lookahead == 'e') ADVANCE(1416);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(1456);
      END_STATE();
    case 415:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(1520);
      END_STATE();
    case 417:
      if (lookahead == 'e') ADVANCE(1483);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(1359);
      if (lookahead == 'r') ADVANCE(516);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(1461);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(1522);
      END_STATE();
    case 421:
      if (lookahead == 'e') ADVANCE(1514);
      END_STATE();
    case 422:
      if (lookahead == 'e') ADVANCE(1496);
      END_STATE();
    case 423:
      if (lookahead == 'e') ADVANCE(1576);
      END_STATE();
    case 424:
      if (lookahead == 'e') ADVANCE(1529);
      END_STATE();
    case 425:
      if (lookahead == 'e') ADVANCE(1489);
      END_STATE();
    case 426:
      if (lookahead == 'e') ADVANCE(1495);
      END_STATE();
    case 427:
      if (lookahead == 'e') ADVANCE(1524);
      END_STATE();
    case 428:
      if (lookahead == 'e') ADVANCE(1532);
      END_STATE();
    case 429:
      if (lookahead == 'e') ADVANCE(1555);
      END_STATE();
    case 430:
      if (lookahead == 'e') ADVANCE(1493);
      END_STATE();
    case 431:
      if (lookahead == 'e') ADVANCE(1560);
      END_STATE();
    case 432:
      if (lookahead == 'e') ADVANCE(1561);
      END_STATE();
    case 433:
      if (lookahead == 'e') ADVANCE(1468);
      END_STATE();
    case 434:
      if (lookahead == 'e') ADVANCE(1534);
      END_STATE();
    case 435:
      if (lookahead == 'e') ADVANCE(1566);
      END_STATE();
    case 436:
      if (lookahead == 'e') ADVANCE(1564);
      END_STATE();
    case 437:
      if (lookahead == 'e') ADVANCE(1536);
      END_STATE();
    case 438:
      if (lookahead == 'e') ADVANCE(1123);
      END_STATE();
    case 439:
      if (lookahead == 'e') ADVANCE(1357);
      END_STATE();
    case 440:
      if (lookahead == 'e') ADVANCE(1383);
      END_STATE();
    case 441:
      if (lookahead == 'e') ADVANCE(1358);
      END_STATE();
    case 442:
      if (lookahead == 'e') ADVANCE(866);
      END_STATE();
    case 443:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 444:
      if (lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(1049);
      END_STATE();
    case 446:
      if (lookahead == 'e') ADVANCE(442);
      if (lookahead == 'o') ADVANCE(760);
      END_STATE();
    case 447:
      if (lookahead == 'e') ADVANCE(775);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(1052);
      END_STATE();
    case 450:
      if (lookahead == 'e') ADVANCE(803);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(1371);
      END_STATE();
    case 452:
      if (lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 453:
      if (lookahead == 'e') ADVANCE(1092);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(1341);
      END_STATE();
    case 455:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 456:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(823);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 461:
      if (lookahead == 'e') ADVANCE(1126);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(724);
      END_STATE();
    case 463:
      if (lookahead == 'e') ADVANCE(1127);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(1236);
      END_STATE();
    case 465:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 466:
      if (lookahead == 'e') ADVANCE(858);
      END_STATE();
    case 467:
      if (lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 468:
      if (lookahead == 'e') ADVANCE(873);
      END_STATE();
    case 469:
      if (lookahead == 'e') ADVANCE(1129);
      END_STATE();
    case 470:
      if (lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 471:
      if (lookahead == 'e') ADVANCE(1096);
      END_STATE();
    case 472:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 473:
      if (lookahead == 'e') ADVANCE(726);
      END_STATE();
    case 474:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 475:
      if (lookahead == 'e') ADVANCE(1204);
      END_STATE();
    case 476:
      if (lookahead == 'e') ADVANCE(756);
      END_STATE();
    case 477:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 478:
      if (lookahead == 'e') ADVANCE(1032);
      END_STATE();
    case 479:
      if (lookahead == 'e') ADVANCE(1133);
      END_STATE();
    case 480:
      if (lookahead == 'e') ADVANCE(1091);
      END_STATE();
    case 481:
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(910);
      END_STATE();
    case 482:
      if (lookahead == 'e') ADVANCE(1034);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(1035);
      END_STATE();
    case 485:
      if (lookahead == 'e') ADVANCE(1036);
      END_STATE();
    case 486:
      if (lookahead == 'e') ADVANCE(1194);
      END_STATE();
    case 487:
      if (lookahead == 'e') ADVANCE(1067);
      END_STATE();
    case 488:
      if (lookahead == 'e') ADVANCE(1136);
      END_STATE();
    case 489:
      if (lookahead == 'e') ADVANCE(1137);
      END_STATE();
    case 490:
      if (lookahead == 'e') ADVANCE(1038);
      END_STATE();
    case 491:
      if (lookahead == 'e') ADVANCE(1039);
      END_STATE();
    case 492:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 493:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 494:
      if (lookahead == 'e') ADVANCE(1041);
      END_STATE();
    case 495:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 496:
      if (lookahead == 'e') ADVANCE(1042);
      END_STATE();
    case 497:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 498:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 499:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 500:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 501:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 502:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 503:
      if (lookahead == 'e') ADVANCE(1158);
      END_STATE();
    case 504:
      if (lookahead == 'e') ADVANCE(1099);
      if (lookahead == 'o') ADVANCE(1281);
      END_STATE();
    case 505:
      if (lookahead == 'e') ADVANCE(1332);
      END_STATE();
    case 506:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 507:
      if (lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 508:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 509:
      if (lookahead == 'e') ADVANCE(1088);
      END_STATE();
    case 510:
      if (lookahead == 'e') ADVANCE(746);
      END_STATE();
    case 511:
      if (lookahead == 'e') ADVANCE(839);
      END_STATE();
    case 512:
      if (lookahead == 'e') ADVANCE(1068);
      END_STATE();
    case 513:
      if (lookahead == 'e') ADVANCE(1074);
      END_STATE();
    case 514:
      if (lookahead == 'e') ADVANCE(819);
      END_STATE();
    case 515:
      if (lookahead == 'e') ADVANCE(1073);
      END_STATE();
    case 516:
      if (lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 517:
      if (lookahead == 'e') ADVANCE(865);
      END_STATE();
    case 518:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 519:
      if (lookahead == 'e') ADVANCE(1164);
      END_STATE();
    case 520:
      if (lookahead == 'e') ADVANCE(1061);
      END_STATE();
    case 521:
      if (lookahead == 'e') ADVANCE(882);
      END_STATE();
    case 522:
      if (lookahead == 'e') ADVANCE(1172);
      END_STATE();
    case 523:
      if (lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 524:
      if (lookahead == 'e') ADVANCE(624);
      END_STATE();
    case 525:
      if (lookahead == 'e') ADVANCE(751);
      END_STATE();
    case 526:
      if (lookahead == 'e') ADVANCE(1349);
      END_STATE();
    case 527:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 528:
      if (lookahead == 'e') ADVANCE(1117);
      END_STATE();
    case 529:
      if (lookahead == 'e') ADVANCE(762);
      END_STATE();
    case 530:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 531:
      if (lookahead == 'e') ADVANCE(1076);
      END_STATE();
    case 532:
      if (lookahead == 'e') ADVANCE(1078);
      END_STATE();
    case 533:
      if (lookahead == 'e') ADVANCE(1080);
      END_STATE();
    case 534:
      if (lookahead == 'e') ADVANCE(1168);
      END_STATE();
    case 535:
      if (lookahead == 'e') ADVANCE(850);
      END_STATE();
    case 536:
      if (lookahead == 'e') ADVANCE(1177);
      END_STATE();
    case 537:
      if (lookahead == 'e') ADVANCE(1169);
      END_STATE();
    case 538:
      if (lookahead == 'e') ADVANCE(1178);
      END_STATE();
    case 539:
      if (lookahead == 'e') ADVANCE(1174);
      END_STATE();
    case 540:
      if (lookahead == 'e') ADVANCE(1187);
      END_STATE();
    case 541:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 542:
      if (lookahead == 'e') ADVANCE(1021);
      END_STATE();
    case 543:
      if (lookahead == 'e') ADVANCE(1242);
      END_STATE();
    case 544:
      if (lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 545:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 546:
      if (lookahead == 'e') ADVANCE(961);
      END_STATE();
    case 547:
      if (lookahead == 'e') ADVANCE(1331);
      END_STATE();
    case 548:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 549:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 550:
      if (lookahead == 'e') ADVANCE(876);
      END_STATE();
    case 551:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 552:
      if (lookahead == 'e') ADVANCE(880);
      if (lookahead == 'f') ADVANCE(973);
      END_STATE();
    case 553:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 554:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 555:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 556:
      if (lookahead == 'f') ADVANCE(1421);
      END_STATE();
    case 557:
      if (lookahead == 'f') ADVANCE(556);
      if (lookahead == 'n') ADVANCE(1420);
      END_STATE();
    case 558:
      if (lookahead == 'f') ADVANCE(556);
      if (lookahead == 'n') ADVANCE(1420);
      if (lookahead == 'u') ADVANCE(1210);
      if (lookahead == 'v') ADVANCE(445);
      END_STATE();
    case 559:
      if (lookahead == 'f') ADVANCE(1028);
      if (lookahead == 'r') ADVANCE(1029);
      END_STATE();
    case 560:
      if (lookahead == 'f') ADVANCE(1213);
      END_STATE();
    case 561:
      if (lookahead == 'f') ADVANCE(676);
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == 'm') ADVANCE(942);
      if (lookahead == 'o') ADVANCE(1013);
      if (lookahead == 'r') ADVANCE(1287);
      if (lookahead == 'v') ADVANCE(194);
      END_STATE();
    case 562:
      if (lookahead == 'f') ADVANCE(568);
      END_STATE();
    case 563:
      if (lookahead == 'f') ADVANCE(648);
      END_STATE();
    case 564:
      if (lookahead == 'f') ADVANCE(984);
      END_STATE();
    case 565:
      if (lookahead == 'f') ADVANCE(190);
      END_STATE();
    case 566:
      if (lookahead == 'f') ADVANCE(440);
      END_STATE();
    case 567:
      if (lookahead == 'f') ADVANCE(914);
      END_STATE();
    case 568:
      if (lookahead == 'f') ADVANCE(1163);
      END_STATE();
    case 569:
      if (lookahead == 'f') ADVANCE(969);
      END_STATE();
    case 570:
      if (lookahead == 'f') ADVANCE(471);
      END_STATE();
    case 571:
      if (lookahead == 'f') ADVANCE(945);
      END_STATE();
    case 572:
      if (lookahead == 'f') ADVANCE(930);
      END_STATE();
    case 573:
      if (lookahead == 'f') ADVANCE(685);
      END_STATE();
    case 574:
      if (lookahead == 'f') ADVANCE(765);
      END_STATE();
    case 575:
      if (lookahead == 'f') ADVANCE(243);
      END_STATE();
    case 576:
      if (lookahead == 'f') ADVANCE(968);
      END_STATE();
    case 577:
      if (lookahead == 'f') ADVANCE(138);
      END_STATE();
    case 578:
      if (lookahead == 'f') ADVANCE(977);
      END_STATE();
    case 579:
      if (lookahead == 'f') ADVANCE(979);
      END_STATE();
    case 580:
      if (lookahead == 'f') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(647);
      END_STATE();
    case 581:
      if (lookahead == 'g') ADVANCE(269);
      END_STATE();
    case 582:
      if (lookahead == 'g') ADVANCE(1440);
      END_STATE();
    case 583:
      if (lookahead == 'g') ADVANCE(1455);
      END_STATE();
    case 584:
      if (lookahead == 'g') ADVANCE(1477);
      END_STATE();
    case 585:
      if (lookahead == 'g') ADVANCE(1510);
      END_STATE();
    case 586:
      if (lookahead == 'g') ADVANCE(1577);
      END_STATE();
    case 587:
      if (lookahead == 'g') ADVANCE(1502);
      END_STATE();
    case 588:
      if (lookahead == 'g') ADVANCE(1462);
      END_STATE();
    case 589:
      if (lookahead == 'g') ADVANCE(1542);
      END_STATE();
    case 590:
      if (lookahead == 'g') ADVANCE(1550);
      END_STATE();
    case 591:
      if (lookahead == 'g') ADVANCE(129);
      END_STATE();
    case 592:
      if (lookahead == 'g') ADVANCE(863);
      END_STATE();
    case 593:
      if (lookahead == 'g') ADVANCE(1211);
      END_STATE();
    case 594:
      if (lookahead == 'g') ADVANCE(1101);
      if (lookahead == 't') ADVANCE(704);
      END_STATE();
    case 595:
      if (lookahead == 'g') ADVANCE(1130);
      END_STATE();
    case 596:
      if (lookahead == 'g') ADVANCE(889);
      END_STATE();
    case 597:
      if (lookahead == 'g') ADVANCE(1134);
      END_STATE();
    case 598:
      if (lookahead == 'g') ADVANCE(1085);
      END_STATE();
    case 599:
      if (lookahead == 'g') ADVANCE(655);
      END_STATE();
    case 600:
      if (lookahead == 'g') ADVANCE(425);
      END_STATE();
    case 601:
      if (lookahead == 'g') ADVANCE(439);
      END_STATE();
    case 602:
      if (lookahead == 'g') ADVANCE(1142);
      END_STATE();
    case 603:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 604:
      if (lookahead == 'g') ADVANCE(670);
      END_STATE();
    case 605:
      if (lookahead == 'g') ADVANCE(441);
      END_STATE();
    case 606:
      if (lookahead == 'g') ADVANCE(604);
      END_STATE();
    case 607:
      if (lookahead == 'g') ADVANCE(1121);
      END_STATE();
    case 608:
      if (lookahead == 'g') ADVANCE(465);
      END_STATE();
    case 609:
      if (lookahead == 'g') ADVANCE(531);
      END_STATE();
    case 610:
      if (lookahead == 'g') ADVANCE(479);
      END_STATE();
    case 611:
      if (lookahead == 'g') ADVANCE(515);
      END_STATE();
    case 612:
      if (lookahead == 'g') ADVANCE(871);
      END_STATE();
    case 613:
      if (lookahead == 'h') ADVANCE(373);
      END_STATE();
    case 614:
      if (lookahead == 'h') ADVANCE(1497);
      END_STATE();
    case 615:
      if (lookahead == 'h') ADVANCE(1579);
      END_STATE();
    case 616:
      if (lookahead == 'h') ADVANCE(1557);
      END_STATE();
    case 617:
      if (lookahead == 'h') ADVANCE(1570);
      END_STATE();
    case 618:
      if (lookahead == 'h') ADVANCE(191);
      END_STATE();
    case 619:
      if (lookahead == 'h') ADVANCE(933);
      END_STATE();
    case 620:
      if (lookahead == 'h') ADVANCE(911);
      END_STATE();
    case 621:
      if (lookahead == 'h') ADVANCE(257);
      END_STATE();
    case 622:
      if (lookahead == 'h') ADVANCE(527);
      END_STATE();
    case 623:
      if (lookahead == 'h') ADVANCE(919);
      END_STATE();
    case 624:
      if (lookahead == 'h') ADVANCE(227);
      END_STATE();
    case 625:
      if (lookahead == 'h') ADVANCE(113);
      END_STATE();
    case 626:
      if (lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 627:
      if (lookahead == 'h') ADVANCE(184);
      END_STATE();
    case 628:
      if (lookahead == 'h') ADVANCE(700);
      END_STATE();
    case 629:
      if (lookahead == 'h') ADVANCE(223);
      END_STATE();
    case 630:
      if (lookahead == 'h') ADVANCE(535);
      END_STATE();
    case 631:
      if (lookahead == 'i') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(1324);
      END_STATE();
    case 632:
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 633:
      if (lookahead == 'i') ADVANCE(1382);
      END_STATE();
    case 634:
      if (lookahead == 'i') ADVANCE(815);
      if (lookahead == 'l') ADVANCE(1278);
      if (lookahead == 'o') ADVANCE(1084);
      END_STATE();
    case 635:
      if (lookahead == 'i') ADVANCE(815);
      if (lookahead == 'l') ADVANCE(1278);
      if (lookahead == 'o') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1433);
      END_STATE();
    case 636:
      if (lookahead == 'i') ADVANCE(1318);
      END_STATE();
    case 637:
      if (lookahead == 'i') ADVANCE(790);
      END_STATE();
    case 638:
      if (lookahead == 'i') ADVANCE(1385);
      END_STATE();
    case 639:
      if (lookahead == 'i') ADVANCE(1333);
      END_STATE();
    case 640:
      if (lookahead == 'i') ADVANCE(592);
      if (lookahead == 'n') ADVANCE(526);
      if (lookahead == 'p') ADVANCE(226);
      if (lookahead == 's') ADVANCE(673);
      if (lookahead == 'x') ADVANCE(1055);
      END_STATE();
    case 641:
      if (lookahead == 'i') ADVANCE(1384);
      END_STATE();
    case 642:
      if (lookahead == 'i') ADVANCE(808);
      if (lookahead == 'o') ADVANCE(1286);
      END_STATE();
    case 643:
      if (lookahead == 'i') ADVANCE(796);
      END_STATE();
    case 644:
      if (lookahead == 'i') ADVANCE(817);
      END_STATE();
    case 645:
      if (lookahead == 'i') ADVANCE(795);
      END_STATE();
    case 646:
      if (lookahead == 'i') ADVANCE(347);
      END_STATE();
    case 647:
      if (lookahead == 'i') ADVANCE(599);
      END_STATE();
    case 648:
      if (lookahead == 'i') ADVANCE(821);
      END_STATE();
    case 649:
      if (lookahead == 'i') ADVANCE(1155);
      END_STATE();
    case 650:
      if (lookahead == 'i') ADVANCE(947);
      END_STATE();
    case 651:
      if (lookahead == 'i') ADVANCE(1012);
      END_STATE();
    case 652:
      if (lookahead == 'i') ADVANCE(1054);
      END_STATE();
    case 653:
      if (lookahead == 'i') ADVANCE(1222);
      END_STATE();
    case 654:
      if (lookahead == 'i') ADVANCE(1257);
      END_STATE();
    case 655:
      if (lookahead == 'i') ADVANCE(360);
      END_STATE();
    case 656:
      if (lookahead == 'i') ADVANCE(818);
      END_STATE();
    case 657:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 658:
      if (lookahead == 'i') ADVANCE(1214);
      END_STATE();
    case 659:
      if (lookahead == 'i') ADVANCE(827);
      END_STATE();
    case 660:
      if (lookahead == 'i') ADVANCE(1215);
      END_STATE();
    case 661:
      if (lookahead == 'i') ADVANCE(830);
      END_STATE();
    case 662:
      if (lookahead == 'i') ADVANCE(1221);
      END_STATE();
    case 663:
      if (lookahead == 'i') ADVANCE(833);
      END_STATE();
    case 664:
      if (lookahead == 'i') ADVANCE(1224);
      END_STATE();
    case 665:
      if (lookahead == 'i') ADVANCE(890);
      END_STATE();
    case 666:
      if (lookahead == 'i') ADVANCE(1162);
      END_STATE();
    case 667:
      if (lookahead == 'i') ADVANCE(856);
      END_STATE();
    case 668:
      if (lookahead == 'i') ADVANCE(834);
      END_STATE();
    case 669:
      if (lookahead == 'i') ADVANCE(1226);
      END_STATE();
    case 670:
      if (lookahead == 'i') ADVANCE(835);
      END_STATE();
    case 671:
      if (lookahead == 'i') ADVANCE(511);
      END_STATE();
    case 672:
      if (lookahead == 'i') ADVANCE(1325);
      END_STATE();
    case 673:
      if (lookahead == 'i') ADVANCE(1379);
      END_STATE();
    case 674:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 675:
      if (lookahead == 'i') ADVANCE(862);
      END_STATE();
    case 676:
      if (lookahead == 'i') ADVANCE(739);
      END_STATE();
    case 677:
      if (lookahead == 'i') ADVANCE(1380);
      END_STATE();
    case 678:
      if (lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 679:
      if (lookahead == 'i') ADVANCE(1223);
      END_STATE();
    case 680:
      if (lookahead == 'i') ADVANCE(800);
      END_STATE();
    case 681:
      if (lookahead == 'i') ADVANCE(913);
      END_STATE();
    case 682:
      if (lookahead == 'i') ADVANCE(1320);
      END_STATE();
    case 683:
      if (lookahead == 'i') ADVANCE(1381);
      END_STATE();
    case 684:
      if (lookahead == 'i') ADVANCE(801);
      END_STATE();
    case 685:
      if (lookahead == 'i') ADVANCE(753);
      END_STATE();
    case 686:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 687:
      if (lookahead == 'i') ADVANCE(917);
      END_STATE();
    case 688:
      if (lookahead == 'i') ADVANCE(1322);
      END_STATE();
    case 689:
      if (lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 690:
      if (lookahead == 'i') ADVANCE(1323);
      END_STATE();
    case 691:
      if (lookahead == 'i') ADVANCE(855);
      END_STATE();
    case 692:
      if (lookahead == 'i') ADVANCE(860);
      END_STATE();
    case 693:
      if (lookahead == 'i') ADVANCE(924);
      END_STATE();
    case 694:
      if (lookahead == 'i') ADVANCE(854);
      END_STATE();
    case 695:
      if (lookahead == 'i') ADVANCE(928);
      END_STATE();
    case 696:
      if (lookahead == 'i') ADVANCE(407);
      END_STATE();
    case 697:
      if (lookahead == 'i') ADVANCE(867);
      if (lookahead == 'o') ADVANCE(1079);
      END_STATE();
    case 698:
      if (lookahead == 'i') ADVANCE(949);
      END_STATE();
    case 699:
      if (lookahead == 'i') ADVANCE(1326);
      END_STATE();
    case 700:
      if (lookahead == 'i') ADVANCE(774);
      END_STATE();
    case 701:
      if (lookahead == 'i') ADVANCE(1329);
      END_STATE();
    case 702:
      if (lookahead == 'i') ADVANCE(1253);
      END_STATE();
    case 703:
      if (lookahead == 'i') ADVANCE(964);
      END_STATE();
    case 704:
      if (lookahead == 'i') ADVANCE(1263);
      END_STATE();
    case 705:
      if (lookahead == 'i') ADVANCE(612);
      if (lookahead == 'o') ADVANCE(562);
      if (lookahead == 'r') ADVANCE(202);
      if (lookahead == 's') ADVANCE(319);
      END_STATE();
    case 706:
      if (lookahead == 'i') ADVANCE(1334);
      END_STATE();
    case 707:
      if (lookahead == 'i') ADVANCE(881);
      END_STATE();
    case 708:
      if (lookahead == 'i') ADVANCE(883);
      if (lookahead == 'z') ADVANCE(915);
      END_STATE();
    case 709:
      if (lookahead == 'i') ADVANCE(1335);
      END_STATE();
    case 710:
      if (lookahead == 'k') ADVANCE(1509);
      END_STATE();
    case 711:
      if (lookahead == 'k') ADVANCE(1574);
      END_STATE();
    case 712:
      if (lookahead == 'k') ADVANCE(1508);
      END_STATE();
    case 713:
      if (lookahead == 'k') ADVANCE(1472);
      END_STATE();
    case 714:
      if (lookahead == 'k') ADVANCE(563);
      END_STATE();
    case 715:
      if (lookahead == 'k') ADVANCE(1153);
      END_STATE();
    case 716:
      if (lookahead == 'k') ADVANCE(659);
      END_STATE();
    case 717:
      if (lookahead == 'k') ADVANCE(71);
      END_STATE();
    case 718:
      if (lookahead == 'k') ADVANCE(451);
      END_STATE();
    case 719:
      if (lookahead == 'k') ADVANCE(133);
      END_STATE();
    case 720:
      if (lookahead == 'k') ADVANCE(141);
      END_STATE();
    case 721:
      if (lookahead == 'k') ADVANCE(1196);
      END_STATE();
    case 722:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 723:
      if (lookahead == 'l') ADVANCE(1446);
      END_STATE();
    case 724:
      if (lookahead == 'l') ADVANCE(1515);
      END_STATE();
    case 725:
      if (lookahead == 'l') ADVANCE(1498);
      END_STATE();
    case 726:
      if (lookahead == 'l') ADVANCE(1525);
      END_STATE();
    case 727:
      if (lookahead == 'l') ADVANCE(1503);
      END_STATE();
    case 728:
      if (lookahead == 'l') ADVANCE(896);
      if (lookahead == 'o') ADVANCE(325);
      if (lookahead == 'u') ADVANCE(734);
      END_STATE();
    case 729:
      if (lookahead == 'l') ADVANCE(632);
      if (lookahead == 'o') ADVANCE(722);
      if (lookahead == 'u') ADVANCE(1046);
      END_STATE();
    case 730:
      if (lookahead == 'l') ADVANCE(632);
      if (lookahead == 'o') ADVANCE(722);
      if (lookahead == 'u') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1433);
      END_STATE();
    case 731:
      if (lookahead == 'l') ADVANCE(887);
      if (lookahead == 'w') ADVANCE(171);
      END_STATE();
    case 732:
      if (lookahead == 'l') ADVANCE(1149);
      END_STATE();
    case 733:
      if (lookahead == 'l') ADVANCE(1212);
      END_STATE();
    case 734:
      if (lookahead == 'l') ADVANCE(736);
      END_STATE();
    case 735:
      if (lookahead == 'l') ADVANCE(932);
      END_STATE();
    case 736:
      if (lookahead == 'l') ADVANCE(1148);
      END_STATE();
    case 737:
      if (lookahead == 'l') ADVANCE(415);
      END_STATE();
    case 738:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 739:
      if (lookahead == 'l') ADVANCE(416);
      END_STATE();
    case 740:
      if (lookahead == 'l') ADVANCE(656);
      END_STATE();
    case 741:
      if (lookahead == 'l') ADVANCE(744);
      END_STATE();
    case 742:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 743:
      if (lookahead == 'l') ADVANCE(759);
      END_STATE();
    case 744:
      if (lookahead == 'l') ADVANCE(898);
      END_STATE();
    case 745:
      if (lookahead == 'l') ADVANCE(727);
      END_STATE();
    case 746:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 747:
      if (lookahead == 'l') ADVANCE(912);
      END_STATE();
    case 748:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 749:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 750:
      if (lookahead == 'l') ADVANCE(1206);
      END_STATE();
    case 751:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 752:
      if (lookahead == 'l') ADVANCE(426);
      END_STATE();
    case 753:
      if (lookahead == 'l') ADVANCE(427);
      END_STATE();
    case 754:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 755:
      if (lookahead == 'l') ADVANCE(1372);
      END_STATE();
    case 756:
      if (lookahead == 'l') ADVANCE(956);
      END_STATE();
    case 757:
      if (lookahead == 'l') ADVANCE(689);
      END_STATE();
    case 758:
      if (lookahead == 'l') ADVANCE(934);
      END_STATE();
    case 759:
      if (lookahead == 'l') ADVANCE(284);
      END_STATE();
    case 760:
      if (lookahead == 'l') ADVANCE(748);
      END_STATE();
    case 761:
      if (lookahead == 'l') ADVANCE(937);
      END_STATE();
    case 762:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 763:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 764:
      if (lookahead == 'l') ADVANCE(463);
      END_STATE();
    case 765:
      if (lookahead == 'l') ADVANCE(974);
      END_STATE();
    case 766:
      if (lookahead == 'l') ADVANCE(946);
      END_STATE();
    case 767:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 768:
      if (lookahead == 'l') ADVANCE(951);
      END_STATE();
    case 769:
      if (lookahead == 'l') ADVANCE(472);
      END_STATE();
    case 770:
      if (lookahead == 'l') ADVANCE(534);
      END_STATE();
    case 771:
      if (lookahead == 'l') ADVANCE(483);
      END_STATE();
    case 772:
      if (lookahead == 'l') ADVANCE(488);
      END_STATE();
    case 773:
      if (lookahead == 'l') ADVANCE(498);
      END_STATE();
    case 774:
      if (lookahead == 'l') ADVANCE(500);
      END_STATE();
    case 775:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 776:
      if (lookahead == 'l') ADVANCE(766);
      END_STATE();
    case 777:
      if (lookahead == 'l') ADVANCE(943);
      END_STATE();
    case 778:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 779:
      if (lookahead == 'l') ADVANCE(536);
      END_STATE();
    case 780:
      if (lookahead == 'l') ADVANCE(768);
      END_STATE();
    case 781:
      if (lookahead == 'l') ADVANCE(958);
      END_STATE();
    case 782:
      if (lookahead == 'l') ADVANCE(537);
      END_STATE();
    case 783:
      if (lookahead == 'l') ADVANCE(538);
      END_STATE();
    case 784:
      if (lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 785:
      if (lookahead == 'm') ADVANCE(1511);
      END_STATE();
    case 786:
      if (lookahead == 'm') ADVANCE(264);
      END_STATE();
    case 787:
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 788:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 789:
      if (lookahead == 'm') ADVANCE(735);
      END_STATE();
    case 790:
      if (lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 791:
      if (lookahead == 'm') ADVANCE(981);
      END_STATE();
    case 792:
      if (lookahead == 'm') ADVANCE(281);
      END_STATE();
    case 793:
      if (lookahead == 'm') ADVANCE(975);
      if (lookahead == 'r') ADVANCE(507);
      END_STATE();
    case 794:
      if (lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 795:
      if (lookahead == 'm') ADVANCE(638);
      END_STATE();
    case 796:
      if (lookahead == 'm') ADVANCE(423);
      END_STATE();
    case 797:
      if (lookahead == 'm') ADVANCE(1139);
      END_STATE();
    case 798:
      if (lookahead == 'm') ADVANCE(1140);
      END_STATE();
    case 799:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 800:
      if (lookahead == 'm') ADVANCE(546);
      END_STATE();
    case 801:
      if (lookahead == 'm') ADVANCE(431);
      END_STATE();
    case 802:
      if (lookahead == 'm') ADVANCE(1023);
      END_STATE();
    case 803:
      if (lookahead == 'm') ADVANCE(1292);
      END_STATE();
    case 804:
      if (lookahead == 'm') ADVANCE(941);
      END_STATE();
    case 805:
      if (lookahead == 'm') ADVANCE(966);
      END_STATE();
    case 806:
      if (lookahead == 'm') ADVANCE(543);
      END_STATE();
    case 807:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 808:
      if (lookahead == 'n') ADVANCE(1463);
      END_STATE();
    case 809:
      if (lookahead == 'n') ADVANCE(1450);
      END_STATE();
    case 810:
      if (lookahead == 'n') ADVANCE(1449);
      END_STATE();
    case 811:
      if (lookahead == 'n') ADVANCE(1528);
      END_STATE();
    case 812:
      if (lookahead == 'n') ADVANCE(1505);
      END_STATE();
    case 813:
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead == 'x') ADVANCE(1209);
      END_STATE();
    case 814:
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead == 'x') ADVANCE(1209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1433);
      END_STATE();
    case 815:
      if (lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 816:
      if (lookahead == 'n') ADVANCE(370);
      END_STATE();
    case 817:
      if (lookahead == 'n') ADVANCE(584);
      END_STATE();
    case 818:
      if (lookahead == 'n') ADVANCE(711);
      END_STATE();
    case 819:
      if (lookahead == 'n') ADVANCE(376);
      END_STATE();
    case 820:
      if (lookahead == 'n') ADVANCE(1151);
      END_STATE();
    case 821:
      if (lookahead == 'n') ADVANCE(609);
      END_STATE();
    case 822:
      if (lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 823:
      if (lookahead == 'n') ADVANCE(593);
      END_STATE();
    case 824:
      if (lookahead == 'n') ADVANCE(1283);
      END_STATE();
    case 825:
      if (lookahead == 'n') ADVANCE(1146);
      END_STATE();
    case 826:
      if (lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 827:
      if (lookahead == 'n') ADVANCE(586);
      END_STATE();
    case 828:
      if (lookahead == 'n') ADVANCE(925);
      END_STATE();
    case 829:
      if (lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 830:
      if (lookahead == 'n') ADVANCE(587);
      END_STATE();
    case 831:
      if (lookahead == 'n') ADVANCE(1203);
      END_STATE();
    case 832:
      if (lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 833:
      if (lookahead == 'n') ADVANCE(588);
      END_STATE();
    case 834:
      if (lookahead == 'n') ADVANCE(589);
      END_STATE();
    case 835:
      if (lookahead == 'n') ADVANCE(590);
      END_STATE();
    case 836:
      if (lookahead == 'n') ADVANCE(1128);
      END_STATE();
    case 837:
      if (lookahead == 'n') ADVANCE(362);
      END_STATE();
    case 838:
      if (lookahead == 'n') ADVANCE(363);
      END_STATE();
    case 839:
      if (lookahead == 'n') ADVANCE(1229);
      END_STATE();
    case 840:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 841:
      if (lookahead == 'n') ADVANCE(1138);
      END_STATE();
    case 842:
      if (lookahead == 'n') ADVANCE(667);
      END_STATE();
    case 843:
      if (lookahead == 'n') ADVANCE(702);
      END_STATE();
    case 844:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 845:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 846:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 847:
      if (lookahead == 'n') ADVANCE(432);
      END_STATE();
    case 848:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 849:
      if (lookahead == 'n') ADVANCE(454);
      END_STATE();
    case 850:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 851:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 852:
      if (lookahead == 'n') ADVANCE(509);
      if (lookahead == 's') ADVANCE(1241);
      END_STATE();
    case 853:
      if (lookahead == 'n') ADVANCE(600);
      END_STATE();
    case 854:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 855:
      if (lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 856:
      if (lookahead == 'n') ADVANCE(602);
      END_STATE();
    case 857:
      if (lookahead == 'n') ADVANCE(378);
      END_STATE();
    case 858:
      if (lookahead == 'n') ADVANCE(1259);
      END_STATE();
    case 859:
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 860:
      if (lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 861:
      if (lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 862:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 863:
      if (lookahead == 'n') ADVANCE(916);
      END_STATE();
    case 864:
      if (lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 865:
      if (lookahead == 'n') ADVANCE(1167);
      END_STATE();
    case 866:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 867:
      if (lookahead == 'n') ADVANCE(611);
      END_STATE();
    case 868:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 869:
      if (lookahead == 'n') ADVANCE(393);
      if (lookahead == 'p') ADVANCE(541);
      if (lookahead == 's') ADVANCE(633);
      END_STATE();
    case 870:
      if (lookahead == 'n') ADVANCE(959);
      END_STATE();
    case 871:
      if (lookahead == 'n') ADVANCE(970);
      END_STATE();
    case 872:
      if (lookahead == 'n') ADVANCE(1330);
      END_STATE();
    case 873:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 874:
      if (lookahead == 'n') ADVANCE(1260);
      END_STATE();
    case 875:
      if (lookahead == 'n') ADVANCE(401);
      END_STATE();
    case 876:
      if (lookahead == 'n') ADVANCE(408);
      END_STATE();
    case 877:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 878:
      if (lookahead == 'n') ADVANCE(1308);
      END_STATE();
    case 879:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 880:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 881:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 882:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 883:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 884:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 885:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 886:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 887:
      if (lookahead == 'o') ADVANCE(1342);
      END_STATE();
    case 888:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 889:
      if (lookahead == 'o') ADVANCE(1541);
      END_STATE();
    case 890:
      if (lookahead == 'o') ADVANCE(1537);
      END_STATE();
    case 891:
      if (lookahead == 'o') ADVANCE(1418);
      END_STATE();
    case 892:
      if (lookahead == 'o') ADVANCE(1336);
      END_STATE();
    case 893:
      if (lookahead == 'o') ADVANCE(1337);
      END_STATE();
    case 894:
      if (lookahead == 'o') ADVANCE(1280);
      END_STATE();
    case 895:
      if (lookahead == 'o') ADVANCE(1030);
      END_STATE();
    case 896:
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 897:
      if (lookahead == 'o') ADVANCE(799);
      END_STATE();
    case 898:
      if (lookahead == 'o') ADVANCE(1338);
      END_STATE();
    case 899:
      if (lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 900:
      if (lookahead == 'o') ADVANCE(595);
      END_STATE();
    case 901:
      if (lookahead == 'o') ADVANCE(1048);
      END_STATE();
    case 902:
      if (lookahead == 'o') ADVANCE(1352);
      END_STATE();
    case 903:
      if (lookahead == 'o') ADVANCE(1300);
      END_STATE();
    case 904:
      if (lookahead == 'o') ADVANCE(1353);
      END_STATE();
    case 905:
      if (lookahead == 'o') ADVANCE(1304);
      END_STATE();
    case 906:
      if (lookahead == 'o') ADVANCE(1340);
      END_STATE();
    case 907:
      if (lookahead == 'o') ADVANCE(840);
      if (lookahead == 'p') ADVANCE(1060);
      END_STATE();
    case 908:
      if (lookahead == 'o') ADVANCE(1008);
      END_STATE();
    case 909:
      if (lookahead == 'o') ADVANCE(577);
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 910:
      if (lookahead == 'o') ADVANCE(809);
      END_STATE();
    case 911:
      if (lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 912:
      if (lookahead == 'o') ADVANCE(596);
      END_STATE();
    case 913:
      if (lookahead == 'o') ADVANCE(810);
      END_STATE();
    case 914:
      if (lookahead == 'o') ADVANCE(1047);
      END_STATE();
    case 915:
      if (lookahead == 'o') ADVANCE(897);
      END_STATE();
    case 916:
      if (lookahead == 'o') ADVANCE(1120);
      END_STATE();
    case 917:
      if (lookahead == 'o') ADVANCE(877);
      END_STATE();
    case 918:
      if (lookahead == 'o') ADVANCE(811);
      END_STATE();
    case 919:
      if (lookahead == 'o') ADVANCE(364);
      END_STATE();
    case 920:
      if (lookahead == 'o') ADVANCE(1062);
      END_STATE();
    case 921:
      if (lookahead == 'o') ADVANCE(1098);
      END_STATE();
    case 922:
      if (lookahead == 'o') ADVANCE(1033);
      END_STATE();
    case 923:
      if (lookahead == 'o') ADVANCE(847);
      END_STATE();
    case 924:
      if (lookahead == 'o') ADVANCE(812);
      END_STATE();
    case 925:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 926:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 927:
      if (lookahead == 'o') ADVANCE(1037);
      END_STATE();
    case 928:
      if (lookahead == 'o') ADVANCE(1040);
      END_STATE();
    case 929:
      if (lookahead == 'o') ADVANCE(1044);
      END_STATE();
    case 930:
      if (lookahead == 'o') ADVANCE(1102);
      END_STATE();
    case 931:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 932:
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 933:
      if (lookahead == 'o') ADVANCE(603);
      END_STATE();
    case 934:
      if (lookahead == 'o') ADVANCE(1355);
      END_STATE();
    case 935:
      if (lookahead == 'o') ADVANCE(573);
      END_STATE();
    case 936:
      if (lookahead == 'o') ADVANCE(1289);
      END_STATE();
    case 937:
      if (lookahead == 'o') ADVANCE(597);
      END_STATE();
    case 938:
      if (lookahead == 'o') ADVANCE(1006);
      END_STATE();
    case 939:
      if (lookahead == 'o') ADVANCE(1057);
      END_STATE();
    case 940:
      if (lookahead == 'o') ADVANCE(884);
      END_STATE();
    case 941:
      if (lookahead == 'o') ADVANCE(843);
      END_STATE();
    case 942:
      if (lookahead == 'o') ADVANCE(386);
      END_STATE();
    case 943:
      if (lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 944:
      if (lookahead == 'o') ADVANCE(1345);
      END_STATE();
    case 945:
      if (lookahead == 'o') ADVANCE(1071);
      END_STATE();
    case 946:
      if (lookahead == 'o') ADVANCE(1347);
      END_STATE();
    case 947:
      if (lookahead == 'o') ADVANCE(836);
      END_STATE();
    case 948:
      if (lookahead == 'o') ADVANCE(886);
      END_STATE();
    case 949:
      if (lookahead == 'o') ADVANCE(841);
      END_STATE();
    case 950:
      if (lookahead == 'o') ADVANCE(844);
      END_STATE();
    case 951:
      if (lookahead == 'o') ADVANCE(1356);
      END_STATE();
    case 952:
      if (lookahead == 'o') ADVANCE(745);
      END_STATE();
    case 953:
      if (lookahead == 'o') ADVANCE(1288);
      END_STATE();
    case 954:
      if (lookahead == 'o') ADVANCE(1072);
      END_STATE();
    case 955:
      if (lookahead == 'o') ADVANCE(845);
      END_STATE();
    case 956:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 957:
      if (lookahead == 'o') ADVANCE(846);
      END_STATE();
    case 958:
      if (lookahead == 'o') ADVANCE(331);
      END_STATE();
    case 959:
      if (lookahead == 'o') ADVANCE(1293);
      END_STATE();
    case 960:
      if (lookahead == 'o') ADVANCE(848);
      END_STATE();
    case 961:
      if (lookahead == 'o') ADVANCE(1294);
      END_STATE();
    case 962:
      if (lookahead == 'o') ADVANCE(1081);
      END_STATE();
    case 963:
      if (lookahead == 'o') ADVANCE(851);
      END_STATE();
    case 964:
      if (lookahead == 'o') ADVANCE(868);
      END_STATE();
    case 965:
      if (lookahead == 'o') ADVANCE(1328);
      END_STATE();
    case 966:
      if (lookahead == 'o') ADVANCE(1302);
      END_STATE();
    case 967:
      if (lookahead == 'o') ADVANCE(1303);
      END_STATE();
    case 968:
      if (lookahead == 'o') ADVANCE(330);
      END_STATE();
    case 969:
      if (lookahead == 'o') ADVANCE(874);
      END_STATE();
    case 970:
      if (lookahead == 'o') ADVANCE(1118);
      END_STATE();
    case 971:
      if (lookahead == 'o') ADVANCE(1020);
      END_STATE();
    case 972:
      if (lookahead == 'o') ADVANCE(1306);
      END_STATE();
    case 973:
      if (lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 974:
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 975:
      if (lookahead == 'o') ADVANCE(1327);
      END_STATE();
    case 976:
      if (lookahead == 'o') ADVANCE(1024);
      END_STATE();
    case 977:
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 978:
      if (lookahead == 'o') ADVANCE(1025);
      END_STATE();
    case 979:
      if (lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 980:
      if (lookahead == 'o') ADVANCE(1109);
      END_STATE();
    case 981:
      if (lookahead == 'o') ADVANCE(1311);
      END_STATE();
    case 982:
      if (lookahead == 'o') ADVANCE(1307);
      END_STATE();
    case 983:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 984:
      if (lookahead == 'o') ADVANCE(780);
      END_STATE();
    case 985:
      if (lookahead == 'o') ADVANCE(1111);
      END_STATE();
    case 986:
      if (lookahead == 'o') ADVANCE(1112);
      END_STATE();
    case 987:
      if (lookahead == 'o') ADVANCE(1113);
      END_STATE();
    case 988:
      if (lookahead == 'o') ADVANCE(1114);
      END_STATE();
    case 989:
      if (lookahead == 'o') ADVANCE(1115);
      END_STATE();
    case 990:
      if (lookahead == 'o') ADVANCE(1116);
      END_STATE();
    case 991:
      if (lookahead == 'o') ADVANCE(1119);
      END_STATE();
    case 992:
      if (lookahead == 'o') ADVANCE(1122);
      END_STATE();
    case 993:
      if (lookahead == 'o') ADVANCE(885);
      END_STATE();
    case 994:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 995:
      if (lookahead == 'p') ADVANCE(1506);
      END_STATE();
    case 996:
      if (lookahead == 'p') ADVANCE(755);
      END_STATE();
    case 997:
      if (lookahead == 'p') ADVANCE(275);
      END_STATE();
    case 998:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 999:
      if (lookahead == 'p') ADVANCE(1147);
      END_STATE();
    case 1000:
      if (lookahead == 'p') ADVANCE(1001);
      END_STATE();
    case 1001:
      if (lookahead == 'p') ADVANCE(1083);
      END_STATE();
    case 1002:
      if (lookahead == 'p') ADVANCE(797);
      END_STATE();
    case 1003:
      if (lookahead == 'p') ADVANCE(448);
      if (lookahead == 't') ADVANCE(1056);
      END_STATE();
    case 1004:
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 1005:
      if (lookahead == 'p') ADVANCE(1053);
      END_STATE();
    case 1006:
      if (lookahead == 'p') ADVANCE(224);
      END_STATE();
    case 1007:
      if (lookahead == 'p') ADVANCE(763);
      END_STATE();
    case 1008:
      if (lookahead == 'p') ADVANCE(1240);
      END_STATE();
    case 1009:
      if (lookahead == 'p') ADVANCE(902);
      END_STATE();
    case 1010:
      if (lookahead == 'p') ADVANCE(1132);
      END_STATE();
    case 1011:
      if (lookahead == 'p') ADVANCE(661);
      END_STATE();
    case 1012:
      if (lookahead == 'p') ADVANCE(428);
      END_STATE();
    case 1013:
      if (lookahead == 'p') ADVANCE(1219);
      END_STATE();
    case 1014:
      if (lookahead == 'p') ADVANCE(798);
      END_STATE();
    case 1015:
      if (lookahead == 'p') ADVANCE(544);
      END_STATE();
    case 1016:
      if (lookahead == 'p') ADVANCE(1282);
      END_STATE();
    case 1017:
      if (lookahead == 'p') ADVANCE(920);
      END_STATE();
    case 1018:
      if (lookahead == 'p') ADVANCE(280);
      END_STATE();
    case 1019:
      if (lookahead == 'p') ADVANCE(1095);
      END_STATE();
    case 1020:
      if (lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 1021:
      if (lookahead == 'p') ADVANCE(1264);
      END_STATE();
    case 1022:
      if (lookahead == 'p') ADVANCE(1097);
      END_STATE();
    case 1023:
      if (lookahead == 'p') ADVANCE(773);
      END_STATE();
    case 1024:
      if (lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 1025:
      if (lookahead == 'p') ADVANCE(244);
      END_STATE();
    case 1026:
      if (lookahead == 'p') ADVANCE(256);
      END_STATE();
    case 1027:
      if (lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 1028:
      if (lookahead == 'r') ADVANCE(1543);
      END_STATE();
    case 1029:
      if (lookahead == 'r') ADVANCE(1544);
      END_STATE();
    case 1030:
      if (lookahead == 'r') ADVANCE(715);
      END_STATE();
    case 1031:
      if (lookahead == 'r') ADVANCE(1482);
      END_STATE();
    case 1032:
      if (lookahead == 'r') ADVANCE(1500);
      END_STATE();
    case 1033:
      if (lookahead == 'r') ADVANCE(1504);
      END_STATE();
    case 1034:
      if (lookahead == 'r') ADVANCE(1467);
      END_STATE();
    case 1035:
      if (lookahead == 'r') ADVANCE(1474);
      END_STATE();
    case 1036:
      if (lookahead == 'r') ADVANCE(1466);
      END_STATE();
    case 1037:
      if (lookahead == 'r') ADVANCE(1562);
      END_STATE();
    case 1038:
      if (lookahead == 'r') ADVANCE(1465);
      END_STATE();
    case 1039:
      if (lookahead == 'r') ADVANCE(1490);
      END_STATE();
    case 1040:
      if (lookahead == 'r') ADVANCE(1507);
      END_STATE();
    case 1041:
      if (lookahead == 'r') ADVANCE(1476);
      END_STATE();
    case 1042:
      if (lookahead == 'r') ADVANCE(1539);
      END_STATE();
    case 1043:
      if (lookahead == 'r') ADVANCE(1565);
      END_STATE();
    case 1044:
      if (lookahead == 'r') ADVANCE(1558);
      END_STATE();
    case 1045:
      if (lookahead == 'r') ADVANCE(446);
      END_STATE();
    case 1046:
      if (lookahead == 'r') ADVANCE(1179);
      END_STATE();
    case 1047:
      if (lookahead == 'r') ADVANCE(785);
      END_STATE();
    case 1048:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 1049:
      if (lookahead == 'r') ADVANCE(738);
      END_STATE();
    case 1050:
      if (lookahead == 'r') ADVANCE(657);
      END_STATE();
    case 1051:
      if (lookahead == 'r') ADVANCE(1277);
      END_STATE();
    case 1052:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 1053:
      if (lookahead == 'r') ADVANCE(935);
      END_STATE();
    case 1054:
      if (lookahead == 'r') ADVANCE(506);
      END_STATE();
    case 1055:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 1056:
      if (lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 1057:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 1058:
      if (lookahead == 'r') ADVANCE(470);
      END_STATE();
    case 1059:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 1060:
      if (lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 1061:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 1062:
      if (lookahead == 'r') ADVANCE(1262);
      END_STATE();
    case 1063:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 1064:
      if (lookahead == 'r') ADVANCE(842);
      END_STATE();
    case 1065:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 1066:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 1067:
      if (lookahead == 'r') ADVANCE(1069);
      END_STATE();
    case 1068:
      if (lookahead == 'r') ADVANCE(1207);
      END_STATE();
    case 1069:
      if (lookahead == 'r') ADVANCE(696);
      END_STATE();
    case 1070:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 1071:
      if (lookahead == 'r') ADVANCE(1216);
      END_STATE();
    case 1072:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 1073:
      if (lookahead == 'r') ADVANCE(1141);
      END_STATE();
    case 1074:
      if (lookahead == 'r') ADVANCE(668);
      END_STATE();
    case 1075:
      if (lookahead == 'r') ADVANCE(518);
      END_STATE();
    case 1076:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 1077:
      if (lookahead == 'r') ADVANCE(550);
      END_STATE();
    case 1078:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 1079:
      if (lookahead == 'r') ADVANCE(547);
      END_STATE();
    case 1080:
      if (lookahead == 'r') ADVANCE(474);
      END_STATE();
    case 1081:
      if (lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 1082:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 1083:
      if (lookahead == 'r') ADVANCE(503);
      END_STATE();
    case 1084:
      if (lookahead == 'r') ADVANCE(392);
      END_STATE();
    case 1085:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 1086:
      if (lookahead == 'r') ADVANCE(1010);
      END_STATE();
    case 1087:
      if (lookahead == 'r') ADVANCE(903);
      END_STATE();
    case 1088:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 1089:
      if (lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 1090:
      if (lookahead == 'r') ADVANCE(967);
      END_STATE();
    case 1091:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 1092:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 1093:
      if (lookahead == 'r') ADVANCE(492);
      END_STATE();
    case 1094:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 1095:
      if (lookahead == 'r') ADVANCE(749);
      END_STATE();
    case 1096:
      if (lookahead == 'r') ADVANCE(1075);
      END_STATE();
    case 1097:
      if (lookahead == 'r') ADVANCE(540);
      END_STATE();
    case 1098:
      if (lookahead == 'r') ADVANCE(476);
      END_STATE();
    case 1099:
      if (lookahead == 'r') ADVANCE(1160);
      END_STATE();
    case 1100:
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 1101:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 1102:
      if (lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 1103:
      if (lookahead == 'r') ADVANCE(519);
      END_STATE();
    case 1104:
      if (lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 1105:
      if (lookahead == 'r') ADVANCE(1185);
      END_STATE();
    case 1106:
      if (lookahead == 'r') ADVANCE(952);
      END_STATE();
    case 1107:
      if (lookahead == 'r') ADVANCE(523);
      END_STATE();
    case 1108:
      if (lookahead == 'r') ADVANCE(1188);
      END_STATE();
    case 1109:
      if (lookahead == 'r') ADVANCE(396);
      END_STATE();
    case 1110:
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 1111:
      if (lookahead == 'r') ADVANCE(410);
      END_STATE();
    case 1112:
      if (lookahead == 'r') ADVANCE(402);
      END_STATE();
    case 1113:
      if (lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 1114:
      if (lookahead == 'r') ADVANCE(404);
      END_STATE();
    case 1115:
      if (lookahead == 'r') ADVANCE(405);
      END_STATE();
    case 1116:
      if (lookahead == 'r') ADVANCE(406);
      END_STATE();
    case 1117:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 1118:
      if (lookahead == 'r') ADVANCE(549);
      END_STATE();
    case 1119:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 1120:
      if (lookahead == 'r') ADVANCE(551);
      END_STATE();
    case 1121:
      if (lookahead == 'r') ADVANCE(982);
      END_STATE();
    case 1122:
      if (lookahead == 'r') ADVANCE(721);
      END_STATE();
    case 1123:
      if (lookahead == 's') ADVANCE(1417);
      END_STATE();
    case 1124:
      if (lookahead == 's') ADVANCE(1454);
      END_STATE();
    case 1125:
      if (lookahead == 's') ADVANCE(1217);
      END_STATE();
    case 1126:
      if (lookahead == 's') ADVANCE(1452);
      END_STATE();
    case 1127:
      if (lookahead == 's') ADVANCE(1519);
      END_STATE();
    case 1128:
      if (lookahead == 's') ADVANCE(1518);
      END_STATE();
    case 1129:
      if (lookahead == 's') ADVANCE(1484);
      END_STATE();
    case 1130:
      if (lookahead == 's') ADVANCE(1575);
      END_STATE();
    case 1131:
      if (lookahead == 's') ADVANCE(1530);
      END_STATE();
    case 1132:
      if (lookahead == 's') ADVANCE(1471);
      END_STATE();
    case 1133:
      if (lookahead == 's') ADVANCE(1478);
      END_STATE();
    case 1134:
      if (lookahead == 's') ADVANCE(1578);
      END_STATE();
    case 1135:
      if (lookahead == 's') ADVANCE(1567);
      END_STATE();
    case 1136:
      if (lookahead == 's') ADVANCE(1571);
      END_STATE();
    case 1137:
      if (lookahead == 's') ADVANCE(1549);
      END_STATE();
    case 1138:
      if (lookahead == 's') ADVANCE(1486);
      END_STATE();
    case 1139:
      if (lookahead == 's') ADVANCE(1546);
      END_STATE();
    case 1140:
      if (lookahead == 's') ADVANCE(1545);
      END_STATE();
    case 1141:
      if (lookahead == 's') ADVANCE(1533);
      END_STATE();
    case 1142:
      if (lookahead == 's') ADVANCE(1559);
      END_STATE();
    case 1143:
      if (lookahead == 's') ADVANCE(1548);
      END_STATE();
    case 1144:
      if (lookahead == 's') ADVANCE(1531);
      END_STATE();
    case 1145:
      if (lookahead == 's') ADVANCE(1343);
      END_STATE();
    case 1146:
      if (lookahead == 's') ADVANCE(567);
      END_STATE();
    case 1147:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 1148:
      if (lookahead == 's') ADVANCE(328);
      END_STATE();
    case 1149:
      if (lookahead == 's') ADVANCE(413);
      END_STATE();
    case 1150:
      if (lookahead == 's') ADVANCE(615);
      END_STATE();
    case 1151:
      if (lookahead == 's') ADVANCE(679);
      END_STATE();
    case 1152:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 1153:
      if (lookahead == 's') ADVANCE(1004);
      END_STATE();
    case 1154:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 1155:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 1156:
      if (lookahead == 's') ADVANCE(517);
      END_STATE();
    case 1157:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 1158:
      if (lookahead == 's') ADVANCE(1170);
      END_STATE();
    case 1159:
      if (lookahead == 's') ADVANCE(1186);
      END_STATE();
    case 1160:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 1161:
      if (lookahead == 's') ADVANCE(424);
      END_STATE();
    case 1162:
      if (lookahead == 's') ADVANCE(1231);
      END_STATE();
    case 1163:
      if (lookahead == 's') ADVANCE(475);
      END_STATE();
    case 1164:
      if (lookahead == 's') ADVANCE(641);
      END_STATE();
    case 1165:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 1166:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 1167:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 1168:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 1169:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 1170:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 1171:
      if (lookahead == 's') ADVANCE(1152);
      END_STATE();
    case 1172:
      if (lookahead == 's') ADVANCE(1192);
      END_STATE();
    case 1173:
      if (lookahead == 's') ADVANCE(626);
      END_STATE();
    case 1174:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 1175:
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 1176:
      if (lookahead == 's') ADVANCE(1015);
      END_STATE();
    case 1177:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 1178:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 1179:
      if (lookahead == 's') ADVANCE(939);
      END_STATE();
    case 1180:
      if (lookahead == 's') ADVANCE(621);
      END_STATE();
    case 1181:
      if (lookahead == 's') ADVANCE(459);
      END_STATE();
    case 1182:
      if (lookahead == 's') ADVANCE(677);
      END_STATE();
    case 1183:
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 1184:
      if (lookahead == 's') ADVANCE(683);
      END_STATE();
    case 1185:
      if (lookahead == 's') ADVANCE(954);
      END_STATE();
    case 1186:
      if (lookahead == 's') ADVANCE(469);
      END_STATE();
    case 1187:
      if (lookahead == 's') ADVANCE(1166);
      END_STATE();
    case 1188:
      if (lookahead == 's') ADVANCE(991);
      END_STATE();
    case 1189:
      if (lookahead == 's') ADVANCE(497);
      END_STATE();
    case 1190:
      if (lookahead == 's') ADVANCE(499);
      END_STATE();
    case 1191:
      if (lookahead == 's') ADVANCE(629);
      END_STATE();
    case 1192:
      if (lookahead == 's') ADVANCE(687);
      END_STATE();
    case 1193:
      if (lookahead == 's') ADVANCE(522);
      if (lookahead == 'w') ADVANCE(992);
      END_STATE();
    case 1194:
      if (lookahead == 's') ADVANCE(1252);
      END_STATE();
    case 1195:
      if (lookahead == 's') ADVANCE(539);
      END_STATE();
    case 1196:
      if (lookahead == 's') ADVANCE(1026);
      END_STATE();
    case 1197:
      if (lookahead == 't') ADVANCE(1451);
      END_STATE();
    case 1198:
      if (lookahead == 't') ADVANCE(481);
      END_STATE();
    case 1199:
      if (lookahead == 't') ADVANCE(1470);
      END_STATE();
    case 1200:
      if (lookahead == 't') ADVANCE(1512);
      END_STATE();
    case 1201:
      if (lookahead == 't') ADVANCE(1464);
      END_STATE();
    case 1202:
      if (lookahead == 't') ADVANCE(1516);
      END_STATE();
    case 1203:
      if (lookahead == 't') ADVANCE(1517);
      END_STATE();
    case 1204:
      if (lookahead == 't') ADVANCE(1494);
      END_STATE();
    case 1205:
      if (lookahead == 't') ADVANCE(1556);
      END_STATE();
    case 1206:
      if (lookahead == 't') ADVANCE(1521);
      END_STATE();
    case 1207:
      if (lookahead == 't') ADVANCE(1535);
      END_STATE();
    case 1208:
      if (lookahead == 't') ADVANCE(1469);
      END_STATE();
    case 1209:
      if (lookahead == 't') ADVANCE(514);
      END_STATE();
    case 1210:
      if (lookahead == 't') ADVANCE(1016);
      END_STATE();
    case 1211:
      if (lookahead == 't') ADVANCE(614);
      END_STATE();
    case 1212:
      if (lookahead == 't') ADVANCE(649);
      END_STATE();
    case 1213:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 1214:
      if (lookahead == 't') ADVANCE(1363);
      END_STATE();
    case 1215:
      if (lookahead == 't') ADVANCE(1365);
      END_STATE();
    case 1216:
      if (lookahead == 't') ADVANCE(617);
      END_STATE();
    case 1217:
      if (lookahead == 't') ADVANCE(394);
      if (lookahead == 'w') ADVANCE(237);
      END_STATE();
    case 1218:
      if (lookahead == 't') ADVANCE(1373);
      END_STATE();
    case 1219:
      if (lookahead == 't') ADVANCE(650);
      END_STATE();
    case 1220:
      if (lookahead == 't') ADVANCE(1265);
      END_STATE();
    case 1221:
      if (lookahead == 't') ADVANCE(1366);
      END_STATE();
    case 1222:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 1223:
      if (lookahead == 't') ADVANCE(636);
      END_STATE();
    case 1224:
      if (lookahead == 't') ADVANCE(1367);
      END_STATE();
    case 1225:
      if (lookahead == 't') ADVANCE(681);
      END_STATE();
    case 1226:
      if (lookahead == 't') ADVANCE(1369);
      END_STATE();
    case 1227:
      if (lookahead == 't') ADVANCE(639);
      END_STATE();
    case 1228:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 1229:
      if (lookahead == 't') ADVANCE(1135);
      END_STATE();
    case 1230:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 1231:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 1232:
      if (lookahead == 't') ADVANCE(663);
      END_STATE();
    case 1233:
      if (lookahead == 't') ADVANCE(665);
      END_STATE();
    case 1234:
      if (lookahead == 't') ADVANCE(429);
      END_STATE();
    case 1235:
      if (lookahead == 't') ADVANCE(1312);
      END_STATE();
    case 1236:
      if (lookahead == 't') ADVANCE(620);
      END_STATE();
    case 1237:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 1238:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 1239:
      if (lookahead == 't') ADVANCE(931);
      END_STATE();
    case 1240:
      if (lookahead == 't') ADVANCE(645);
      END_STATE();
    case 1241:
      if (lookahead == 't') ADVANCE(1309);
      END_STATE();
    case 1242:
      if (lookahead == 't') ADVANCE(623);
      END_STATE();
    case 1243:
      if (lookahead == 't') ADVANCE(983);
      END_STATE();
    case 1244:
      if (lookahead == 't') ADVANCE(680);
      END_STATE();
    case 1245:
      if (lookahead == 't') ADVANCE(684);
      END_STATE();
    case 1246:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 1247:
      if (lookahead == 't') ADVANCE(918);
      END_STATE();
    case 1248:
      if (lookahead == 't') ADVANCE(936);
      END_STATE();
    case 1249:
      if (lookahead == 't') ADVANCE(921);
      END_STATE();
    case 1250:
      if (lookahead == 't') ADVANCE(922);
      END_STATE();
    case 1251:
      if (lookahead == 't') ADVANCE(927);
      END_STATE();
    case 1252:
      if (lookahead == 't') ADVANCE(962);
      END_STATE();
    case 1253:
      if (lookahead == 't') ADVANCE(929);
      END_STATE();
    case 1254:
      if (lookahead == 't') ADVANCE(502);
      END_STATE();
    case 1255:
      if (lookahead == 't') ADVANCE(682);
      END_STATE();
    case 1256:
      if (lookahead == 't') ADVANCE(698);
      END_STATE();
    case 1257:
      if (lookahead == 't') ADVANCE(770);
      END_STATE();
    case 1258:
      if (lookahead == 't') ADVANCE(1247);
      END_STATE();
    case 1259:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 1260:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 1261:
      if (lookahead == 't') ADVANCE(688);
      END_STATE();
    case 1262:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 1263:
      if (lookahead == 't') ADVANCE(779);
      END_STATE();
    case 1264:
      if (lookahead == 't') ADVANCE(703);
      END_STATE();
    case 1265:
      if (lookahead == 't') ADVANCE(950);
      END_STATE();
    case 1266:
      if (lookahead == 't') ADVANCE(690);
      END_STATE();
    case 1267:
      if (lookahead == 't') ADVANCE(693);
      END_STATE();
    case 1268:
      if (lookahead == 't') ADVANCE(957);
      END_STATE();
    case 1269:
      if (lookahead == 't') ADVANCE(699);
      END_STATE();
    case 1270:
      if (lookahead == 't') ADVANCE(1268);
      END_STATE();
    case 1271:
      if (lookahead == 't') ADVANCE(701);
      END_STATE();
    case 1272:
      if (lookahead == 't') ADVANCE(706);
      END_STATE();
    case 1273:
      if (lookahead == 't') ADVANCE(709);
      END_STATE();
    case 1274:
      if (lookahead == 'u') ADVANCE(1210);
      if (lookahead == 'v') ADVANCE(445);
      END_STATE();
    case 1275:
      if (lookahead == 'u') ADVANCE(583);
      END_STATE();
    case 1276:
      if (lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 1277:
      if (lookahead == 'u') ADVANCE(412);
      END_STATE();
    case 1278:
      if (lookahead == 'u') ADVANCE(1031);
      END_STATE();
    case 1279:
      if (lookahead == 'u') ADVANCE(1197);
      END_STATE();
    case 1280:
      if (lookahead == 'u') ADVANCE(997);
      END_STATE();
    case 1281:
      if (lookahead == 'u') ADVANCE(1199);
      END_STATE();
    case 1282:
      if (lookahead == 'u') ADVANCE(1200);
      END_STATE();
    case 1283:
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 1284:
      if (lookahead == 'u') ADVANCE(1220);
      END_STATE();
    case 1285:
      if (lookahead == 'u') ADVANCE(792);
      END_STATE();
    case 1286:
      if (lookahead == 'u') ADVANCE(1201);
      END_STATE();
    case 1287:
      if (lookahead == 'u') ADVANCE(764);
      END_STATE();
    case 1288:
      if (lookahead == 'u') ADVANCE(1202);
      END_STATE();
    case 1289:
      if (lookahead == 'u') ADVANCE(311);
      END_STATE();
    case 1290:
      if (lookahead == 'u') ADVANCE(1249);
      END_STATE();
    case 1291:
      if (lookahead == 'u') ADVANCE(1131);
      END_STATE();
    case 1292:
      if (lookahead == 'u') ADVANCE(784);
      END_STATE();
    case 1293:
      if (lookahead == 'u') ADVANCE(1205);
      END_STATE();
    case 1294:
      if (lookahead == 'u') ADVANCE(1208);
      END_STATE();
    case 1295:
      if (lookahead == 'u') ADVANCE(1143);
      END_STATE();
    case 1296:
      if (lookahead == 'u') ADVANCE(1144);
      END_STATE();
    case 1297:
      if (lookahead == 'u') ADVANCE(816);
      END_STATE();
    case 1298:
      if (lookahead == 'u') ADVANCE(750);
      END_STATE();
    case 1299:
      if (lookahead == 'u') ADVANCE(1181);
      END_STATE();
    case 1300:
      if (lookahead == 'u') ADVANCE(1027);
      END_STATE();
    case 1301:
      if (lookahead == 'u') ADVANCE(1154);
      END_STATE();
    case 1302:
      if (lookahead == 'u') ADVANCE(1161);
      END_STATE();
    case 1303:
      if (lookahead == 'u') ADVANCE(826);
      END_STATE();
    case 1304:
      if (lookahead == 'u') ADVANCE(1237);
      END_STATE();
    case 1305:
      if (lookahead == 'u') ADVANCE(1165);
      END_STATE();
    case 1306:
      if (lookahead == 'u') ADVANCE(838);
      END_STATE();
    case 1307:
      if (lookahead == 'u') ADVANCE(1018);
      END_STATE();
    case 1308:
      if (lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 1309:
      if (lookahead == 'u') ADVANCE(1089);
      END_STATE();
    case 1310:
      if (lookahead == 'u') ADVANCE(1195);
      END_STATE();
    case 1311:
      if (lookahead == 'u') ADVANCE(1189);
      END_STATE();
    case 1312:
      if (lookahead == 'u') ADVANCE(1094);
      END_STATE();
    case 1313:
      if (lookahead == 'u') ADVANCE(1190);
      END_STATE();
    case 1314:
      if (lookahead == 'u') ADVANCE(1105);
      END_STATE();
    case 1315:
      if (lookahead == 'u') ADVANCE(1258);
      END_STATE();
    case 1316:
      if (lookahead == 'u') ADVANCE(1108);
      END_STATE();
    case 1317:
      if (lookahead == 'u') ADVANCE(1270);
      END_STATE();
    case 1318:
      if (lookahead == 'v') ADVANCE(658);
      END_STATE();
    case 1319:
      if (lookahead == 'v') ADVANCE(466);
      END_STATE();
    case 1320:
      if (lookahead == 'v') ADVANCE(422);
      END_STATE();
    case 1321:
      if (lookahead == 'v') ADVANCE(695);
      END_STATE();
    case 1322:
      if (lookahead == 'v') ADVANCE(430);
      END_STATE();
    case 1323:
      if (lookahead == 'v') ADVANCE(433);
      END_STATE();
    case 1324:
      if (lookahead == 'v') ADVANCE(449);
      END_STATE();
    case 1325:
      if (lookahead == 'v') ADVANCE(460);
      END_STATE();
    case 1326:
      if (lookahead == 'v') ADVANCE(554);
      END_STATE();
    case 1327:
      if (lookahead == 'v') ADVANCE(495);
      END_STATE();
    case 1328:
      if (lookahead == 'v') ADVANCE(487);
      END_STATE();
    case 1329:
      if (lookahead == 'v') ADVANCE(501);
      END_STATE();
    case 1330:
      if (lookahead == 'v') ADVANCE(512);
      END_STATE();
    case 1331:
      if (lookahead == 'v') ADVANCE(496);
      END_STATE();
    case 1332:
      if (lookahead == 'v') ADVANCE(678);
      END_STATE();
    case 1333:
      if (lookahead == 'v') ADVANCE(225);
      END_STATE();
    case 1334:
      if (lookahead == 'v') ADVANCE(548);
      END_STATE();
    case 1335:
      if (lookahead == 'v') ADVANCE(555);
      END_STATE();
    case 1336:
      if (lookahead == 'w') ADVANCE(1492);
      END_STATE();
    case 1337:
      if (lookahead == 'w') ADVANCE(1488);
      END_STATE();
    case 1338:
      if (lookahead == 'w') ADVANCE(1552);
      END_STATE();
    case 1339:
      if (lookahead == 'w') ADVANCE(1473);
      END_STATE();
    case 1340:
      if (lookahead == 'w') ADVANCE(1491);
      END_STATE();
    case 1341:
      if (lookahead == 'w') ADVANCE(1538);
      END_STATE();
    case 1342:
      if (lookahead == 'w') ADVANCE(48);
      END_STATE();
    case 1343:
      if (lookahead == 'w') ADVANCE(653);
      END_STATE();
    case 1344:
      if (lookahead == 'w') ADVANCE(651);
      END_STATE();
    case 1345:
      if (lookahead == 'w') ADVANCE(55);
      END_STATE();
    case 1346:
      if (lookahead == 'w') ADVANCE(691);
      END_STATE();
    case 1347:
      if (lookahead == 'w') ADVANCE(57);
      END_STATE();
    case 1348:
      if (lookahead == 'w') ADVANCE(630);
      END_STATE();
    case 1349:
      if (lookahead == 'w') ADVANCE(109);
      END_STATE();
    case 1350:
      if (lookahead == 'w') ADVANCE(208);
      END_STATE();
    case 1351:
      if (lookahead == 'w') ADVANCE(210);
      END_STATE();
    case 1352:
      if (lookahead == 'w') ADVANCE(491);
      END_STATE();
    case 1353:
      if (lookahead == 'w') ADVANCE(398);
      END_STATE();
    case 1354:
      if (lookahead == 'w') ADVANCE(692);
      END_STATE();
    case 1355:
      if (lookahead == 'w') ADVANCE(144);
      END_STATE();
    case 1356:
      if (lookahead == 'w') ADVANCE(143);
      END_STATE();
    case 1357:
      if (lookahead == 'x') ADVANCE(1553);
      END_STATE();
    case 1358:
      if (lookahead == 'x') ADVANCE(1554);
      END_STATE();
    case 1359:
      if (lookahead == 'x') ADVANCE(322);
      END_STATE();
    case 1360:
      if (lookahead == 'y') ADVANCE(504);
      END_STATE();
    case 1361:
      if (lookahead == 'y') ADVANCE(1573);
      END_STATE();
    case 1362:
      if (lookahead == 'y') ADVANCE(1487);
      END_STATE();
    case 1363:
      if (lookahead == 'y') ADVANCE(1459);
      END_STATE();
    case 1364:
      if (lookahead == 'y') ADVANCE(1523);
      END_STATE();
    case 1365:
      if (lookahead == 'y') ADVANCE(1479);
      END_STATE();
    case 1366:
      if (lookahead == 'y') ADVANCE(1480);
      END_STATE();
    case 1367:
      if (lookahead == 'y') ADVANCE(1481);
      END_STATE();
    case 1368:
      if (lookahead == 'y') ADVANCE(1569);
      END_STATE();
    case 1369:
      if (lookahead == 'y') ADVANCE(1485);
      END_STATE();
    case 1370:
      if (lookahead == 'y') ADVANCE(145);
      END_STATE();
    case 1371:
      if (lookahead == 'y') ADVANCE(277);
      END_STATE();
    case 1372:
      if (lookahead == 'y') ADVANCE(119);
      END_STATE();
    case 1373:
      if (lookahead == 'y') ADVANCE(1011);
      END_STATE();
    case 1374:
      if (lookahead == 'y') ADVANCE(121);
      END_STATE();
    case 1375:
      if (lookahead == 'y') ADVANCE(351);
      END_STATE();
    case 1376:
      if (lookahead == 'y') ADVANCE(1019);
      END_STATE();
    case 1377:
      if (lookahead == 'y') ADVANCE(953);
      END_STATE();
    case 1378:
      if (lookahead == 'y') ADVANCE(1157);
      END_STATE();
    case 1379:
      if (lookahead == 'z') ADVANCE(417);
      END_STATE();
    case 1380:
      if (lookahead == 'z') ADVANCE(419);
      END_STATE();
    case 1381:
      if (lookahead == 'z') ADVANCE(435);
      END_STATE();
    case 1382:
      if (lookahead == 'z') ADVANCE(477);
      END_STATE();
    case 1383:
      if (lookahead == 'z') ADVANCE(923);
      END_STATE();
    case 1384:
      if (lookahead == 'z') ADVANCE(489);
      END_STATE();
    case 1385:
      if (lookahead == 'z') ADVANCE(255);
      END_STATE();
    case 1386:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1402);
      END_STATE();
    case 1387:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1400);
      END_STATE();
    case 1388:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1433);
      END_STATE();
    case 1389:
      if (eof) ADVANCE(1391);
      if (lookahead == '\n') ADVANCE(1445);
      if (lookahead == '#') ADVANCE(1392);
      if (lookahead == '0') ADVANCE(1399);
      if (lookahead == 'a') ADVANCE(297);
      if (lookahead == 'b') ADVANCE(634);
      if (lookahead == 'c') ADVANCE(729);
      if (lookahead == 'd') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(813);
      if (lookahead == 'f') ADVANCE(728);
      if (lookahead == 'g') ADVANCE(164);
      if (lookahead == 'h') ADVANCE(631);
      if (lookahead == 'i') ADVANCE(807);
      if (lookahead == 'k') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == 'm') ADVANCE(170);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(1274);
      if (lookahead == 'p') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(411);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == 'v') ADVANCE(559);
      if (lookahead == 'w') ADVANCE(895);
      if (lookahead == '}') ADVANCE(1448);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(1387);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1389)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1400);
      END_STATE();
    case 1390:
      if (eof) ADVANCE(1391);
      if (lookahead == '#') ADVANCE(1392);
      if (lookahead == '$') ADVANCE(1442);
      if (lookahead == '.') ADVANCE(1386);
      if (lookahead == '0') ADVANCE(1424);
      if (lookahead == '1') ADVANCE(1427);
      if (lookahead == '=') ADVANCE(1460);
      if (lookahead == 'A') ADVANCE(26);
      if (lookahead == 'C') ADVANCE(18);
      if (lookahead == 'L') ADVANCE(32);
      if (lookahead == 'M') ADVANCE(33);
      if (lookahead == 'S') ADVANCE(23);
      if (lookahead == 'W') ADVANCE(25);
      if (lookahead == 'a') ADVANCE(297);
      if (lookahead == 'b') ADVANCE(634);
      if (lookahead == 'c') ADVANCE(729);
      if (lookahead == 'd') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(813);
      if (lookahead == 'f') ADVANCE(182);
      if (lookahead == 'g') ADVANCE(164);
      if (lookahead == 'h') ADVANCE(631);
      if (lookahead == 'i') ADVANCE(807);
      if (lookahead == 'k') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == 'm') ADVANCE(170);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(558);
      if (lookahead == 'p') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(411);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == 'v') ADVANCE(559);
      if (lookahead == 'w') ADVANCE(895);
      if (lookahead == 'y') ADVANCE(438);
      if (lookahead == '{') ADVANCE(1447);
      if (lookahead == '}') ADVANCE(1448);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1390)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1398);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1441);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1396);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(1394);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1395);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1396);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1396);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(1402);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1434);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1433);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(1402);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1398);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'x') ADVANCE(1432);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1400);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1400);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(1402);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1401);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1402);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(anon_sym_SHIFT);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(anon_sym_CAPS);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(anon_sym_CTRL);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(anon_sym_CONTROL);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(anon_sym_ALT);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(anon_sym_MOD2);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(anon_sym_MOD3);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(anon_sym_SUPER);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(anon_sym_WIN);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(anon_sym_LOGO);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_MOD4);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_MOD5);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '_') ADVANCE(278);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(1402);
      if (lookahead == 'x') ADVANCE(1432);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1434);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1433);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(1402);
      if (lookahead == 'x') ADVANCE(1432);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1398);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(1402);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1434);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1433);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(1402);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1398);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(anon_sym_rgb);
      if (lookahead == 'a') ADVANCE(1431);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(anon_sym_rgba);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(sym__hex_comp);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == '.') ADVANCE(1402);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1398);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'P') ADVANCE(41);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'b') ADVANCE(1275);
      if (lookahead == 'c') ADVANCE(901);
      if (lookahead == 'g') ADVANCE(1440);
      if (lookahead == 'v') ADVANCE(674);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'c') ADVANCE(447);
      if (lookahead == 't') ADVANCE(672);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'l') ADVANCE(1149);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(anon_sym_deg);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(sym_str);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1441);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1441);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(aux_sym_variable_reference_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1444);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(1445);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(anon_sym_general);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(anon_sym_animation);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_gestures);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_misc);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_binds);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_device);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(aux_sym_variable_section_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1458);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(anon_sym_sensitivity);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(anon_sym_border_size);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(anon_sym_no_border_on_floating);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_gaps_in);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(anon_sym_gaps_out);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(anon_sym_col_DOTinactive_border);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(anon_sym_col_DOTactive_border);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(anon_sym_col_DOTgroup_border);
      if (lookahead == '_') ADVANCE(263);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(anon_sym_col_DOTgroup_border_active);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(anon_sym_cursor_inactive_timeout);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(anon_sym_no_cursor_warps);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(anon_sym_no_focus_fallback);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(anon_sym_apply_sens_to_raw);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(anon_sym_resize_on_border);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(anon_sym_extend_border_grab_area);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(anon_sym_hover_icon_on_border);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(anon_sym_rounding);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(anon_sym_multisample_edges);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(anon_sym_active_opacity);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(anon_sym_inactive_opacity);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(anon_sym_fullscreen_opacity);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(anon_sym_blur);
      if (lookahead == '_') ADVANCE(640);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(anon_sym_blur_size);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(anon_sym_blur_passes);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(anon_sym_blur_ignore_opacity);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(anon_sym_blur_new_optimizations);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(anon_sym_blur_xray);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(anon_sym_drop_shadow);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(anon_sym_shadow_range);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(anon_sym_shadow_render_power);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(anon_sym_shadow_ignore_window);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(anon_sym_col_DOTshadow);
      if (lookahead == '_') ADVANCE(707);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(anon_sym_col_DOTshadow_inactive);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(anon_sym_shadow_offset);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(anon_sym_shadow_scale);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(anon_sym_dim_inactive);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(anon_sym_dim_strength);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(anon_sym_dim_special);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(anon_sym_dim_around);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(anon_sym_screen_shader);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(anon_sym_enabled);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(anon_sym_disable_while_typing);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(anon_sym_natural_scroll);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(anon_sym_scroll_factor);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(anon_sym_middle_button_emulation);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(anon_sym_tap_button_map);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(anon_sym_clickfinger_behavior);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(anon_sym_tap_DASHto_DASHclick);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(anon_sym_drag_lock);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(anon_sym_tap_DASHand_DASHdrag);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(anon_sym_transform);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(anon_sym_touchpad);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(anon_sym_touchdevice);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(anon_sym_kb_model);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(anon_sym_kb_layout);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(anon_sym_kb_variant);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(anon_sym_kb_options);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(anon_sym_kb_rules);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(anon_sym_kb_file);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(anon_sym_numlock_by_default);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(anon_sym_repeat_rate);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(anon_sym_repeat_delay);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(anon_sym_accel_profile);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(anon_sym_force_no_accel);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(anon_sym_left_handed);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(anon_sym_scroll_method);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(anon_sym_scroll_button);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(anon_sym_follow_mouse);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(anon_sym_mouse_refocus);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(anon_sym_float_switch_override_focus);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(anon_sym_workspace_swipe);
      if (lookahead == '_') ADVANCE(300);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_fingers);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_distance);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_invert);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_min_speed_to_force);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_cancel_ratio);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_create_new);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_forever);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_numbered);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(anon_sym_disable_hyprland_logo);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(anon_sym_disable_splash_rendering);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(anon_sym_vfr);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(anon_sym_vrr);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(anon_sym_mouse_move_enables_dpms);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(anon_sym_key_press_enables_dpms);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(anon_sym_always_follow_on_dnd);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(anon_sym_layers_hog_keyboard_focus);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(anon_sym_animate_manual_resizes);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(anon_sym_animate_mouse_windowdragging);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(anon_sym_disable_autoreload);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(anon_sym_enable_swallow);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(anon_sym_swallow_regex);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(anon_sym_swallow_exception_regex);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(anon_sym_focus_on_activate);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(anon_sym_no_direct_scanout);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(anon_sym_hide_cursor_on_touch);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(anon_sym_mouse_move_focuses_monitor);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(anon_sym_suppress_portal_warnings);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(anon_sym_render_ahead_of_time);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(anon_sym_render_ahead_safezone);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(anon_sym_cursor_zoom_factor);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(anon_sym_cursor_zoom_rigid);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(anon_sym_allow_session_lock_restore);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(anon_sym_render_titles_in_groupbar);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(anon_sym_groupbar_titles_font_size);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(anon_sym_groupbar_gradients);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(anon_sym_pass_mouse_when_bound);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(anon_sym_scroll_event_delay);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(anon_sym_workspace_back_and_forth);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(anon_sym_allow_workspace_cycles);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(anon_sym_focus_preferred_method);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(anon_sym_overlay);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(anon_sym_damage_blink);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(anon_sym_disable_logs);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(anon_sym_disable_time);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(anon_sym_damage_tracking);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(anon_sym_enable_stdout_logs);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(anon_sym_manual_crash);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1389},
  [2] = {.lex_state = 1389},
  [3] = {.lex_state = 1389},
  [4] = {.lex_state = 1389},
  [5] = {.lex_state = 1389},
  [6] = {.lex_state = 1389},
  [7] = {.lex_state = 1389},
  [8] = {.lex_state = 1389},
  [9] = {.lex_state = 1389},
  [10] = {.lex_state = 1389},
  [11] = {.lex_state = 1389},
  [12] = {.lex_state = 1389},
  [13] = {.lex_state = 1389},
  [14] = {.lex_state = 1389},
  [15] = {.lex_state = 1389},
  [16] = {.lex_state = 1389},
  [17] = {.lex_state = 1389},
  [18] = {.lex_state = 1389},
  [19] = {.lex_state = 1389},
  [20] = {.lex_state = 1389},
  [21] = {.lex_state = 1389},
  [22] = {.lex_state = 1389},
  [23] = {.lex_state = 1389},
  [24] = {.lex_state = 1389},
  [25] = {.lex_state = 1389},
  [26] = {.lex_state = 1389},
  [27] = {.lex_state = 1389},
  [28] = {.lex_state = 1389},
  [29] = {.lex_state = 1389},
  [30] = {.lex_state = 1389},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 1389},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 1389},
  [37] = {.lex_state = 1389},
  [38] = {.lex_state = 1389},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 1389},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 1389},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 1389},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 1389},
  [48] = {.lex_state = 1389},
  [49] = {.lex_state = 1389},
  [50] = {.lex_state = 1389},
  [51] = {.lex_state = 1389},
  [52] = {.lex_state = 1389},
  [53] = {.lex_state = 1389},
  [54] = {.lex_state = 1389},
  [55] = {.lex_state = 1389},
  [56] = {.lex_state = 1389},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 1389},
  [59] = {.lex_state = 1389},
  [60] = {.lex_state = 1389},
  [61] = {.lex_state = 1389},
  [62] = {.lex_state = 1389},
  [63] = {.lex_state = 1389},
  [64] = {.lex_state = 1389},
  [65] = {.lex_state = 1389},
  [66] = {.lex_state = 1389},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 1389},
  [69] = {.lex_state = 1389},
  [70] = {.lex_state = 1389},
  [71] = {.lex_state = 1389},
  [72] = {.lex_state = 1389},
  [73] = {.lex_state = 1389},
  [74] = {.lex_state = 1389},
  [75] = {.lex_state = 1389},
  [76] = {.lex_state = 1389},
  [77] = {.lex_state = 1389},
  [78] = {.lex_state = 1389},
  [79] = {.lex_state = 1389},
  [80] = {.lex_state = 1389},
  [81] = {.lex_state = 1389},
  [82] = {.lex_state = 1389},
  [83] = {.lex_state = 1389},
  [84] = {.lex_state = 1389},
  [85] = {.lex_state = 1389},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1389},
  [88] = {.lex_state = 1389},
  [89] = {.lex_state = 1389},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 1389},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 1389},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 1389},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 1389},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 1389},
  [117] = {.lex_state = 1395},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 1389},
  [122] = {.lex_state = 1389},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 1389},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 1389},
  [134] = {.lex_state = 1389},
  [135] = {.lex_state = 1389},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 1389},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1389},
  [145] = {.lex_state = 1389},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 1389},
  [149] = {.lex_state = 1389},
  [150] = {.lex_state = 1389},
  [151] = {.lex_state = 1389},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 1389},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 1389},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 1389},
  [166] = {.lex_state = 1389},
  [167] = {.lex_state = 1389},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 1389},
  [172] = {.lex_state = 1389},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 1389},
  [178] = {.lex_state = 1389},
  [179] = {.lex_state = 1389},
  [180] = {.lex_state = 1389},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 1389},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 7},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 1389},
  [199] = {.lex_state = 1389},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {(TSStateId)(-1)},
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
    [anon_sym_device] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [sym_config_file] = STATE(181),
    [sym_comment] = STATE(1),
    [sym_variable_section] = STATE(61),
    [aux_sym_config_file_repeat1] = STATE(43),
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
    [anon_sym_device] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      sym__newline,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      anon_sym_cursor_zoom_factor,
    STATE(2), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_variable_section_repeat6,
    STATE(5), 1,
      sym__misc_section_var,
    ACTIONS(37), 2,
      anon_sym_swallow_regex,
      anon_sym_swallow_exception_regex,
    ACTIONS(35), 3,
      anon_sym_vrr,
      anon_sym_render_ahead_safezone,
      anon_sym_groupbar_titles_font_size,
    ACTIONS(33), 21,
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
    ACTIONS(29), 1,
      sym__newline,
    ACTIONS(39), 1,
      anon_sym_cursor_zoom_factor,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_variable_section_repeat6,
    STATE(3), 1,
      sym_comment,
    STATE(5), 1,
      sym__misc_section_var,
    ACTIONS(37), 2,
      anon_sym_swallow_regex,
      anon_sym_swallow_exception_regex,
    ACTIONS(35), 3,
      anon_sym_vrr,
      anon_sym_render_ahead_safezone,
      anon_sym_groupbar_titles_font_size,
    ACTIONS(33), 21,
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
    ACTIONS(43), 1,
      sym__newline,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      anon_sym_cursor_zoom_factor,
    STATE(5), 1,
      sym__misc_section_var,
    ACTIONS(54), 2,
      anon_sym_swallow_regex,
      anon_sym_swallow_exception_regex,
    STATE(4), 2,
      sym_comment,
      aux_sym_variable_section_repeat6,
    ACTIONS(51), 3,
      anon_sym_vrr,
      anon_sym_render_ahead_safezone,
      anon_sym_groupbar_titles_font_size,
    ACTIONS(48), 21,
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
    ACTIONS(60), 1,
      sym__newline,
    STATE(5), 1,
      sym_comment,
    ACTIONS(62), 28,
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
    ACTIONS(64), 1,
      sym__newline,
    STATE(6), 1,
      sym_comment,
    ACTIONS(66), 28,
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
    ACTIONS(68), 1,
      sym__newline,
    STATE(7), 1,
      sym_comment,
    ACTIONS(70), 28,
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
    ACTIONS(72), 1,
      sym__newline,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(89), 1,
      anon_sym_shadow_offset,
    ACTIONS(92), 1,
      anon_sym_screen_shader,
    STATE(13), 1,
      sym__decoration_section_var,
    ACTIONS(86), 2,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
    STATE(8), 2,
      sym_comment,
      aux_sym_variable_section_repeat2,
    ACTIONS(77), 5,
      anon_sym_rounding,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
    ACTIONS(83), 7,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_shadow_scale,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
    ACTIONS(80), 8,
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
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(95), 1,
      sym__newline,
    ACTIONS(105), 1,
      anon_sym_shadow_offset,
    ACTIONS(107), 1,
      anon_sym_screen_shader,
    STATE(9), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_variable_section_repeat2,
    STATE(13), 1,
      sym__decoration_section_var,
    ACTIONS(103), 2,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
    ACTIONS(97), 5,
      anon_sym_rounding,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
    ACTIONS(101), 7,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_shadow_scale,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
    ACTIONS(99), 8,
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
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(95), 1,
      sym__newline,
    ACTIONS(105), 1,
      anon_sym_shadow_offset,
    ACTIONS(107), 1,
      anon_sym_screen_shader,
    STATE(8), 1,
      aux_sym_variable_section_repeat2,
    STATE(10), 1,
      sym_comment,
    STATE(13), 1,
      sym__decoration_section_var,
    ACTIONS(103), 2,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
    ACTIONS(97), 5,
      anon_sym_rounding,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
    ACTIONS(101), 7,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_shadow_scale,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
    ACTIONS(99), 8,
      anon_sym_multisample_edges,
      anon_sym_blur,
      anon_sym_blur_ignore_opacity,
      anon_sym_blur_new_optimizations,
      anon_sym_blur_xray,
      anon_sym_drop_shadow,
      anon_sym_shadow_ignore_window,
      anon_sym_dim_inactive,
  [443] = 13,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 1,
      sym__newline,
    ACTIONS(111), 1,
      anon_sym_sensitivity,
    ACTIONS(115), 1,
      anon_sym_touchpad,
    ACTIONS(117), 1,
      anon_sym_touchdevice,
    STATE(11), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_variable_section_repeat4,
    STATE(20), 1,
      sym__input_variable_section,
    STATE(24), 1,
      sym__input_section_var,
    ACTIONS(113), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(121), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(119), 8,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_accel_profile,
      anon_sym_scroll_method,
  [498] = 12,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym__newline,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(128), 1,
      anon_sym_sensitivity,
    ACTIONS(134), 1,
      anon_sym_touchpad,
    ACTIONS(137), 1,
      anon_sym_touchdevice,
    STATE(20), 1,
      sym__input_variable_section,
    STATE(24), 1,
      sym__input_section_var,
    STATE(12), 2,
      sym_comment,
      aux_sym_variable_section_repeat4,
    ACTIONS(131), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(143), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(140), 8,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_accel_profile,
      anon_sym_scroll_method,
  [551] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(146), 1,
      sym__newline,
    STATE(13), 1,
      sym_comment,
    ACTIONS(148), 25,
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
  [588] = 13,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(109), 1,
      sym__newline,
    ACTIONS(111), 1,
      anon_sym_sensitivity,
    ACTIONS(115), 1,
      anon_sym_touchpad,
    ACTIONS(117), 1,
      anon_sym_touchdevice,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_variable_section_repeat4,
    STATE(20), 1,
      sym__input_variable_section,
    STATE(24), 1,
      sym__input_section_var,
    ACTIONS(113), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(121), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(119), 8,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_accel_profile,
      anon_sym_scroll_method,
  [643] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(152), 1,
      sym__newline,
    STATE(15), 1,
      sym_comment,
    ACTIONS(154), 25,
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
  [680] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(156), 1,
      sym__newline,
    STATE(16), 1,
      sym_comment,
    ACTIONS(158), 25,
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
  [717] = 13,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(109), 1,
      sym__newline,
    ACTIONS(111), 1,
      anon_sym_sensitivity,
    ACTIONS(115), 1,
      anon_sym_touchpad,
    ACTIONS(117), 1,
      anon_sym_touchdevice,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_variable_section_repeat4,
    STATE(17), 1,
      sym_comment,
    STATE(20), 1,
      sym__input_variable_section,
    STATE(24), 1,
      sym__input_section_var,
    ACTIONS(113), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(121), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(119), 8,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_accel_profile,
      anon_sym_scroll_method,
  [772] = 13,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 1,
      sym__newline,
    ACTIONS(111), 1,
      anon_sym_sensitivity,
    ACTIONS(115), 1,
      anon_sym_touchpad,
    ACTIONS(117), 1,
      anon_sym_touchdevice,
    STATE(11), 1,
      aux_sym_variable_section_repeat4,
    STATE(18), 1,
      sym_comment,
    STATE(20), 1,
      sym__input_variable_section,
    STATE(24), 1,
      sym__input_section_var,
    ACTIONS(113), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(121), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(119), 8,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_accel_profile,
      anon_sym_scroll_method,
  [827] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(162), 1,
      sym__newline,
    STATE(19), 1,
      sym_comment,
    ACTIONS(164), 22,
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
  [861] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(166), 1,
      sym__newline,
    STATE(20), 1,
      sym_comment,
    ACTIONS(168), 22,
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
  [895] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(170), 1,
      sym__newline,
    STATE(21), 1,
      sym_comment,
    ACTIONS(172), 22,
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
  [929] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(174), 1,
      sym__newline,
    STATE(22), 1,
      sym_comment,
    ACTIONS(176), 22,
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
  [963] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(178), 1,
      sym__newline,
    STATE(23), 1,
      sym_comment,
    ACTIONS(180), 22,
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
  [997] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(166), 1,
      sym__newline,
    STATE(24), 1,
      sym_comment,
    ACTIONS(168), 22,
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
  [1031] = 10,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(182), 1,
      sym__newline,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    ACTIONS(187), 1,
      anon_sym_sensitivity,
    ACTIONS(199), 1,
      anon_sym_layout,
    STATE(28), 1,
      sym__general_section_var,
    STATE(25), 2,
      sym_comment,
      aux_sym_variable_section_repeat1,
    ACTIONS(196), 4,
      anon_sym_col_DOTinactive_border,
      anon_sym_col_DOTactive_border,
      anon_sym_col_DOTgroup_border,
      anon_sym_col_DOTgroup_border_active,
    ACTIONS(190), 5,
      anon_sym_border_size,
      anon_sym_gaps_in,
      anon_sym_gaps_out,
      anon_sym_cursor_inactive_timeout,
      anon_sym_extend_border_grab_area,
    ACTIONS(193), 6,
      anon_sym_no_border_on_floating,
      anon_sym_no_cursor_warps,
      anon_sym_no_focus_fallback,
      anon_sym_apply_sens_to_raw,
      anon_sym_resize_on_border,
      anon_sym_hover_icon_on_border,
  [1075] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      sym__newline,
    ACTIONS(204), 1,
      anon_sym_sensitivity,
    ACTIONS(212), 1,
      anon_sym_layout,
    STATE(25), 1,
      aux_sym_variable_section_repeat1,
    STATE(26), 1,
      sym_comment,
    STATE(28), 1,
      sym__general_section_var,
    ACTIONS(210), 4,
      anon_sym_col_DOTinactive_border,
      anon_sym_col_DOTactive_border,
      anon_sym_col_DOTgroup_border,
      anon_sym_col_DOTgroup_border_active,
    ACTIONS(206), 5,
      anon_sym_border_size,
      anon_sym_gaps_in,
      anon_sym_gaps_out,
      anon_sym_cursor_inactive_timeout,
      anon_sym_extend_border_grab_area,
    ACTIONS(208), 6,
      anon_sym_no_border_on_floating,
      anon_sym_no_cursor_warps,
      anon_sym_no_focus_fallback,
      anon_sym_apply_sens_to_raw,
      anon_sym_resize_on_border,
      anon_sym_hover_icon_on_border,
  [1121] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      sym__newline,
    ACTIONS(204), 1,
      anon_sym_sensitivity,
    ACTIONS(212), 1,
      anon_sym_layout,
    STATE(26), 1,
      aux_sym_variable_section_repeat1,
    STATE(27), 1,
      sym_comment,
    STATE(28), 1,
      sym__general_section_var,
    ACTIONS(210), 4,
      anon_sym_col_DOTinactive_border,
      anon_sym_col_DOTactive_border,
      anon_sym_col_DOTgroup_border,
      anon_sym_col_DOTgroup_border_active,
    ACTIONS(206), 5,
      anon_sym_border_size,
      anon_sym_gaps_in,
      anon_sym_gaps_out,
      anon_sym_cursor_inactive_timeout,
      anon_sym_extend_border_grab_area,
    ACTIONS(208), 6,
      anon_sym_no_border_on_floating,
      anon_sym_no_cursor_warps,
      anon_sym_no_focus_fallback,
      anon_sym_apply_sens_to_raw,
      anon_sym_resize_on_border,
      anon_sym_hover_icon_on_border,
  [1167] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(214), 1,
      sym__newline,
    STATE(28), 1,
      sym_comment,
    ACTIONS(216), 18,
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
  [1197] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      sym__newline,
    STATE(29), 1,
      sym_comment,
    ACTIONS(220), 18,
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
  [1227] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(222), 1,
      sym__newline,
    STATE(30), 1,
      sym_comment,
    ACTIONS(224), 18,
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
  [1257] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    STATE(31), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(135), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(144), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(226), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1287] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    STATE(32), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(135), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(149), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(226), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1317] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(131), 2,
      sym_bool,
      sym_variable_reference,
    STATE(135), 2,
      sym__bool_literal,
      sym__bool_integer,
    ACTIONS(226), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1347] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(232), 1,
      sym__newline,
    ACTIONS(238), 1,
      anon_sym_workspace_swipe_cancel_ratio,
    STATE(34), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_variable_section_repeat5,
    STATE(48), 1,
      sym__gestures_section_var,
    ACTIONS(236), 3,
      anon_sym_workspace_swipe_fingers,
      anon_sym_workspace_swipe_distance,
      anon_sym_workspace_swipe_min_speed_to_force,
    ACTIONS(234), 5,
      anon_sym_workspace_swipe,
      anon_sym_workspace_swipe_invert,
      anon_sym_workspace_swipe_create_new,
      anon_sym_workspace_swipe_forever,
      anon_sym_workspace_swipe_numbered,
  [1381] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    STATE(35), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(135), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(142), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(226), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1411] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(232), 1,
      sym__newline,
    ACTIONS(238), 1,
      anon_sym_workspace_swipe_cancel_ratio,
    STATE(36), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_variable_section_repeat5,
    STATE(48), 1,
      sym__gestures_section_var,
    ACTIONS(236), 3,
      anon_sym_workspace_swipe_fingers,
      anon_sym_workspace_swipe_distance,
      anon_sym_workspace_swipe_min_speed_to_force,
    ACTIONS(234), 5,
      anon_sym_workspace_swipe,
      anon_sym_workspace_swipe_invert,
      anon_sym_workspace_swipe_create_new,
      anon_sym_workspace_swipe_forever,
      anon_sym_workspace_swipe_numbered,
  [1445] = 14,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(242), 1,
      sym__newline,
    ACTIONS(245), 1,
      anon_sym_general,
    ACTIONS(248), 1,
      anon_sym_decoration,
    ACTIONS(251), 1,
      anon_sym_animation,
    ACTIONS(254), 1,
      anon_sym_input,
    ACTIONS(257), 1,
      anon_sym_gestures,
    ACTIONS(260), 1,
      anon_sym_misc,
    ACTIONS(263), 1,
      anon_sym_binds,
    ACTIONS(266), 1,
      anon_sym_debug,
    ACTIONS(269), 1,
      anon_sym_device,
    STATE(61), 1,
      sym_variable_section,
    STATE(37), 2,
      sym_comment,
      aux_sym_config_file_repeat1,
  [1489] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(272), 1,
      sym__newline,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    ACTIONS(280), 1,
      anon_sym_scroll_factor,
    ACTIONS(283), 1,
      anon_sym_tap_button_map,
    STATE(52), 1,
      sym__touchpad_section_var,
    STATE(38), 2,
      sym_comment,
      aux_sym__input_variable_section_repeat1,
    ACTIONS(277), 7,
      anon_sym_disable_while_typing,
      anon_sym_natural_scroll,
      anon_sym_middle_button_emulation,
      anon_sym_clickfinger_behavior,
      anon_sym_tap_DASHto_DASHclick,
      anon_sym_drag_lock,
      anon_sym_tap_DASHand_DASHdrag,
  [1521] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    STATE(39), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(135), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(198), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(226), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1551] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      sym__newline,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    ACTIONS(292), 1,
      anon_sym_scroll_factor,
    ACTIONS(294), 1,
      anon_sym_tap_button_map,
    STATE(40), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym__input_variable_section_repeat1,
    STATE(52), 1,
      sym__touchpad_section_var,
    ACTIONS(290), 7,
      anon_sym_disable_while_typing,
      anon_sym_natural_scroll,
      anon_sym_middle_button_emulation,
      anon_sym_clickfinger_behavior,
      anon_sym_tap_DASHto_DASHclick,
      anon_sym_drag_lock,
      anon_sym_tap_DASHand_DASHdrag,
  [1585] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(135), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(145), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(226), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1615] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    STATE(42), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(135), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(148), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(226), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1645] = 15,
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
    ACTIONS(27), 1,
      anon_sym_device,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      aux_sym_config_file_repeat1,
    STATE(43), 1,
      sym_comment,
    STATE(61), 1,
      sym_variable_section,
  [1691] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    STATE(44), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(135), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(151), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(226), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1721] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    ACTIONS(309), 1,
      anon_sym_workspace_swipe_cancel_ratio,
    STATE(48), 1,
      sym__gestures_section_var,
    STATE(45), 2,
      sym_comment,
      aux_sym_variable_section_repeat5,
    ACTIONS(306), 3,
      anon_sym_workspace_swipe_fingers,
      anon_sym_workspace_swipe_distance,
      anon_sym_workspace_swipe_min_speed_to_force,
    ACTIONS(303), 5,
      anon_sym_workspace_swipe,
      anon_sym_workspace_swipe_invert,
      anon_sym_workspace_swipe_create_new,
      anon_sym_workspace_swipe_forever,
      anon_sym_workspace_swipe_numbered,
  [1753] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    STATE(46), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(135), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(150), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(226), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1783] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      sym__newline,
    ACTIONS(292), 1,
      anon_sym_scroll_factor,
    ACTIONS(294), 1,
      anon_sym_tap_button_map,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym__input_variable_section_repeat1,
    STATE(47), 1,
      sym_comment,
    STATE(52), 1,
      sym__touchpad_section_var,
    ACTIONS(290), 7,
      anon_sym_disable_while_typing,
      anon_sym_natural_scroll,
      anon_sym_middle_button_emulation,
      anon_sym_clickfinger_behavior,
      anon_sym_tap_DASHto_DASHclick,
      anon_sym_drag_lock,
      anon_sym_tap_DASHand_DASHdrag,
  [1817] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(314), 1,
      sym__newline,
    STATE(48), 1,
      sym_comment,
    ACTIONS(316), 10,
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
  [1839] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(318), 1,
      sym_int,
    ACTIONS(320), 1,
      anon_sym_rgb,
    ACTIONS(322), 1,
      anon_sym_rgba,
    ACTIONS(324), 1,
      anon_sym_0x,
    ACTIONS(326), 1,
      sym__newline,
    STATE(49), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym_gradient_repeat1,
    STATE(79), 1,
      sym_color,
    STATE(114), 1,
      sym_degree,
    STATE(82), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [1875] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(328), 1,
      sym__newline,
    STATE(50), 1,
      sym_comment,
    ACTIONS(330), 10,
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
  [1897] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(332), 1,
      sym__newline,
    STATE(51), 1,
      sym_comment,
    ACTIONS(334), 10,
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
  [1919] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      sym__newline,
    STATE(52), 1,
      sym_comment,
    ACTIONS(338), 10,
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
  [1941] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(340), 1,
      sym__newline,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym__debug_section_var,
    ACTIONS(348), 2,
      anon_sym_damage_tracking,
      anon_sym_manual_crash,
    STATE(53), 2,
      sym_comment,
      aux_sym_variable_section_repeat8,
    ACTIONS(345), 5,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_enable_stdout_logs,
  [1969] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(351), 1,
      sym__newline,
    STATE(53), 1,
      aux_sym_variable_section_repeat8,
    STATE(54), 1,
      sym_comment,
    STATE(69), 1,
      sym__debug_section_var,
    ACTIONS(355), 2,
      anon_sym_damage_tracking,
      anon_sym_manual_crash,
    ACTIONS(353), 5,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_enable_stdout_logs,
  [1999] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(55), 1,
      sym_comment,
    ACTIONS(357), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(359), 9,
      anon_sym_general,
      anon_sym_decoration,
      anon_sym_animation,
      anon_sym_input,
      anon_sym_gestures,
      anon_sym_misc,
      anon_sym_binds,
      anon_sym_debug,
      anon_sym_device,
  [2021] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(361), 1,
      sym__newline,
    STATE(56), 1,
      sym_comment,
    ACTIONS(363), 10,
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
  [2043] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    ACTIONS(320), 1,
      anon_sym_rgb,
    ACTIONS(365), 1,
      anon_sym_rgba,
    ACTIONS(367), 1,
      anon_sym_0x,
    STATE(49), 1,
      aux_sym_gradient_repeat1,
    STATE(57), 1,
      sym_comment,
    STATE(79), 1,
      sym_color,
    STATE(131), 2,
      sym_gradient,
      sym_variable_reference,
    STATE(82), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [2077] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(58), 1,
      sym_comment,
    ACTIONS(369), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(371), 9,
      anon_sym_general,
      anon_sym_decoration,
      anon_sym_animation,
      anon_sym_input,
      anon_sym_gestures,
      anon_sym_misc,
      anon_sym_binds,
      anon_sym_debug,
      anon_sym_device,
  [2099] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(59), 1,
      sym_comment,
    ACTIONS(373), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(375), 9,
      anon_sym_general,
      anon_sym_decoration,
      anon_sym_animation,
      anon_sym_input,
      anon_sym_gestures,
      anon_sym_misc,
      anon_sym_binds,
      anon_sym_debug,
      anon_sym_device,
  [2121] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(377), 1,
      sym__newline,
    STATE(60), 1,
      sym_comment,
    ACTIONS(379), 10,
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
  [2143] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(61), 1,
      sym_comment,
    ACTIONS(381), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(383), 9,
      anon_sym_general,
      anon_sym_decoration,
      anon_sym_animation,
      anon_sym_input,
      anon_sym_gestures,
      anon_sym_misc,
      anon_sym_binds,
      anon_sym_debug,
      anon_sym_device,
  [2165] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(351), 1,
      sym__newline,
    STATE(54), 1,
      aux_sym_variable_section_repeat8,
    STATE(62), 1,
      sym_comment,
    STATE(69), 1,
      sym__debug_section_var,
    ACTIONS(355), 2,
      anon_sym_damage_tracking,
      anon_sym_manual_crash,
    ACTIONS(353), 5,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_enable_stdout_logs,
  [2195] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(63), 1,
      sym_comment,
    ACTIONS(385), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(387), 9,
      anon_sym_general,
      anon_sym_decoration,
      anon_sym_animation,
      anon_sym_input,
      anon_sym_gestures,
      anon_sym_misc,
      anon_sym_binds,
      anon_sym_debug,
      anon_sym_device,
  [2217] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      sym_int,
    ACTIONS(391), 1,
      anon_sym_rgb,
    ACTIONS(394), 1,
      anon_sym_rgba,
    ACTIONS(397), 1,
      anon_sym_0x,
    ACTIONS(400), 1,
      sym__newline,
    STATE(79), 1,
      sym_color,
    STATE(64), 2,
      sym_comment,
      aux_sym_gradient_repeat1,
    STATE(82), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [2248] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(402), 1,
      sym__newline,
    STATE(65), 1,
      sym_comment,
    ACTIONS(404), 8,
      anon_sym_RBRACE,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_damage_tracking,
      anon_sym_enable_stdout_logs,
      anon_sym_manual_crash,
  [2268] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(406), 1,
      sym__newline,
    STATE(66), 1,
      sym_comment,
    ACTIONS(408), 8,
      anon_sym_RBRACE,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_damage_tracking,
      anon_sym_enable_stdout_logs,
      anon_sym_manual_crash,
  [2288] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    ACTIONS(320), 1,
      anon_sym_rgb,
    ACTIONS(365), 1,
      anon_sym_rgba,
    ACTIONS(367), 1,
      anon_sym_0x,
    STATE(67), 1,
      sym_comment,
    STATE(142), 2,
      sym_color,
      sym_variable_reference,
    STATE(82), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [2316] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(410), 1,
      sym__newline,
    STATE(68), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_variable_section_repeat7,
    STATE(74), 1,
      sym__binds_section_var,
    ACTIONS(414), 2,
      anon_sym_scroll_event_delay,
      anon_sym_focus_preferred_method,
    ACTIONS(412), 3,
      anon_sym_pass_mouse_when_bound,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
  [2344] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(416), 1,
      sym__newline,
    STATE(69), 1,
      sym_comment,
    ACTIONS(418), 8,
      anon_sym_RBRACE,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_damage_tracking,
      anon_sym_enable_stdout_logs,
      anon_sym_manual_crash,
  [2364] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(410), 1,
      sym__newline,
    STATE(68), 1,
      aux_sym_variable_section_repeat7,
    STATE(70), 1,
      sym_comment,
    STATE(74), 1,
      sym__binds_section_var,
    ACTIONS(414), 2,
      anon_sym_scroll_event_delay,
      anon_sym_focus_preferred_method,
    ACTIONS(412), 3,
      anon_sym_pass_mouse_when_bound,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
  [2392] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(420), 1,
      sym__newline,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      sym__binds_section_var,
    ACTIONS(428), 2,
      anon_sym_scroll_event_delay,
      anon_sym_focus_preferred_method,
    STATE(71), 2,
      sym_comment,
      aux_sym_variable_section_repeat7,
    ACTIONS(425), 3,
      anon_sym_pass_mouse_when_bound,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
  [2418] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(431), 1,
      sym__newline,
    STATE(72), 1,
      sym_comment,
    ACTIONS(433), 6,
      anon_sym_RBRACE,
      anon_sym_pass_mouse_when_bound,
      anon_sym_scroll_event_delay,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
      anon_sym_focus_preferred_method,
  [2436] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(435), 1,
      sym__newline,
    STATE(73), 1,
      sym_comment,
    ACTIONS(437), 6,
      anon_sym_RBRACE,
      anon_sym_pass_mouse_when_bound,
      anon_sym_scroll_event_delay,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
      anon_sym_focus_preferred_method,
  [2454] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(439), 1,
      sym__newline,
    STATE(74), 1,
      sym_comment,
    ACTIONS(441), 6,
      anon_sym_RBRACE,
      anon_sym_pass_mouse_when_bound,
      anon_sym_scroll_event_delay,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
      anon_sym_focus_preferred_method,
  [2472] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    ACTIONS(443), 1,
      sym__newline,
    ACTIONS(445), 1,
      anon_sym_transform,
    ACTIONS(447), 1,
      anon_sym_output,
    STATE(75), 1,
      sym_comment,
    STATE(77), 1,
      aux_sym__input_variable_section_repeat2,
    STATE(87), 1,
      sym__touchdevice_section_var,
  [2497] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      sym__newline,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
    ACTIONS(454), 1,
      anon_sym_transform,
    ACTIONS(457), 1,
      anon_sym_output,
    STATE(87), 1,
      sym__touchdevice_section_var,
    STATE(76), 2,
      sym_comment,
      aux_sym__input_variable_section_repeat2,
  [2520] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    ACTIONS(443), 1,
      sym__newline,
    ACTIONS(445), 1,
      anon_sym_transform,
    ACTIONS(447), 1,
      anon_sym_output,
    STATE(76), 1,
      aux_sym__input_variable_section_repeat2,
    STATE(77), 1,
      sym_comment,
    STATE(87), 1,
      sym__touchdevice_section_var,
  [2545] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(462), 1,
      sym__newline,
    STATE(78), 1,
      sym_comment,
    ACTIONS(460), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [2561] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(466), 1,
      sym__newline,
    STATE(79), 1,
      sym_comment,
    ACTIONS(464), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [2577] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(470), 1,
      sym__newline,
    STATE(80), 1,
      sym_comment,
    ACTIONS(468), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [2593] = 6,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(472), 1,
      sym__newline,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    ACTIONS(477), 1,
      anon_sym_enabled,
    STATE(107), 1,
      sym__animation_section_var,
    STATE(81), 2,
      sym_comment,
      aux_sym_variable_section_repeat3,
  [2613] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(482), 1,
      sym__newline,
    STATE(82), 1,
      sym_comment,
    ACTIONS(480), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [2629] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(486), 1,
      sym__newline,
    STATE(83), 1,
      sym_comment,
    ACTIONS(484), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [2645] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(488), 1,
      sym__newline,
    ACTIONS(490), 1,
      anon_sym_enabled,
    STATE(84), 1,
      sym_comment,
    STATE(85), 1,
      aux_sym_variable_section_repeat3,
    STATE(107), 1,
      sym__animation_section_var,
  [2667] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(488), 1,
      sym__newline,
    ACTIONS(490), 1,
      anon_sym_enabled,
    STATE(81), 1,
      aux_sym_variable_section_repeat3,
    STATE(85), 1,
      sym_comment,
    STATE(107), 1,
      sym__animation_section_var,
  [2689] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    ACTIONS(492), 1,
      sym_float,
    STATE(86), 1,
      sym_comment,
    STATE(142), 2,
      sym_vec2,
      sym_variable_reference,
  [2706] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(494), 1,
      sym__newline,
    STATE(87), 1,
      sym_comment,
    ACTIONS(496), 3,
      anon_sym_RBRACE,
      anon_sym_transform,
      anon_sym_output,
  [2721] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(498), 1,
      sym__newline,
    STATE(88), 1,
      sym_comment,
    ACTIONS(500), 3,
      anon_sym_RBRACE,
      anon_sym_transform,
      anon_sym_output,
  [2736] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(502), 1,
      sym__newline,
    STATE(89), 1,
      sym_comment,
    ACTIONS(504), 3,
      anon_sym_RBRACE,
      anon_sym_transform,
      anon_sym_output,
  [2751] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    ACTIONS(506), 1,
      sym_float,
    STATE(90), 1,
      sym_comment,
    STATE(131), 1,
      sym_variable_reference,
  [2767] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      sym_str,
    ACTIONS(510), 1,
      anon_sym_DOLLAR,
    STATE(91), 1,
      sym_comment,
    STATE(131), 1,
      sym_variable_reference,
  [2783] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    ACTIONS(512), 1,
      sym_float,
    STATE(92), 1,
      sym_comment,
    STATE(198), 1,
      sym_variable_reference,
  [2799] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(510), 1,
      anon_sym_DOLLAR,
    ACTIONS(514), 1,
      sym_str,
    STATE(93), 1,
      sym_comment,
    STATE(199), 1,
      sym_variable_reference,
  [2815] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    ACTIONS(516), 1,
      sym_int,
    STATE(94), 1,
      sym_comment,
    STATE(199), 1,
      sym_variable_reference,
  [2831] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(518), 1,
      sym__newline,
    STATE(95), 1,
      sym_comment,
    ACTIONS(520), 2,
      anon_sym_RBRACE,
      anon_sym_enabled,
  [2845] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      sym_int,
    STATE(96), 1,
      sym_comment,
    STATE(151), 1,
      sym_variable_reference,
  [2861] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      sym__newline,
    STATE(97), 1,
      sym_comment,
    ACTIONS(526), 2,
      anon_sym_RBRACE,
      anon_sym_enabled,
  [2875] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    ACTIONS(528), 1,
      sym_int,
    STATE(98), 1,
      sym_comment,
    STATE(148), 1,
      sym_variable_reference,
  [2891] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    ACTIONS(530), 1,
      sym_int,
    STATE(99), 1,
      sym_comment,
    STATE(145), 1,
      sym_variable_reference,
  [2907] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    ACTIONS(506), 1,
      sym_int,
    STATE(100), 1,
      sym_comment,
    STATE(131), 1,
      sym_variable_reference,
  [2923] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(510), 1,
      anon_sym_DOLLAR,
    ACTIONS(532), 1,
      sym_str,
    STATE(101), 1,
      sym_comment,
    STATE(198), 1,
      sym_variable_reference,
  [2939] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    ACTIONS(534), 1,
      sym_int,
    STATE(102), 1,
      sym_comment,
    STATE(142), 1,
      sym_variable_reference,
  [2955] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    ACTIONS(534), 1,
      sym_float,
    STATE(103), 1,
      sym_comment,
    STATE(142), 1,
      sym_variable_reference,
  [2971] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(510), 1,
      anon_sym_DOLLAR,
    ACTIONS(536), 1,
      sym_str,
    STATE(104), 1,
      sym_comment,
    STATE(142), 1,
      sym_variable_reference,
  [2987] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    ACTIONS(528), 1,
      sym_float,
    STATE(105), 1,
      sym_comment,
    STATE(148), 1,
      sym_variable_reference,
  [3003] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    ACTIONS(538), 1,
      sym_int,
    STATE(106), 1,
      sym_comment,
    STATE(150), 1,
      sym_variable_reference,
  [3019] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(540), 1,
      sym__newline,
    STATE(107), 1,
      sym_comment,
    ACTIONS(542), 2,
      anon_sym_RBRACE,
      anon_sym_enabled,
  [3033] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    ACTIONS(530), 1,
      sym_float,
    STATE(108), 1,
      sym_comment,
    STATE(145), 1,
      sym_variable_reference,
  [3049] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    ACTIONS(544), 1,
      sym_int,
    STATE(109), 1,
      sym_comment,
    STATE(149), 1,
      sym_variable_reference,
  [3065] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(510), 1,
      anon_sym_DOLLAR,
    ACTIONS(546), 1,
      sym_str,
    STATE(110), 1,
      sym_comment,
    STATE(149), 1,
      sym_variable_reference,
  [3081] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    ACTIONS(544), 1,
      sym_float,
    STATE(111), 1,
      sym_comment,
    STATE(149), 1,
      sym_variable_reference,
  [3097] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(510), 1,
      anon_sym_DOLLAR,
    ACTIONS(548), 1,
      sym_str,
    STATE(112), 1,
      sym_comment,
    STATE(145), 1,
      sym_variable_reference,
  [3113] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(550), 1,
      anon_sym_EQ,
    STATE(113), 1,
      sym_comment,
  [3123] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(552), 1,
      sym__newline,
    STATE(114), 1,
      sym_comment,
  [3133] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(554), 1,
      anon_sym_EQ,
    STATE(115), 1,
      sym_comment,
  [3143] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(556), 1,
      sym__newline,
    STATE(116), 1,
      sym_comment,
  [3153] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(558), 1,
      aux_sym_comment_token1,
    STATE(117), 1,
      sym_comment,
  [3163] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(560), 1,
      anon_sym_EQ,
    STATE(118), 1,
      sym_comment,
  [3173] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(562), 1,
      anon_sym_EQ,
    STATE(119), 1,
      sym_comment,
  [3183] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym_comment,
  [3193] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(566), 1,
      sym__newline,
    STATE(121), 1,
      sym_comment,
  [3203] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(568), 1,
      sym__newline,
    STATE(122), 1,
      sym_comment,
  [3213] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(570), 1,
      anon_sym_LBRACE,
    STATE(123), 1,
      sym_comment,
  [3223] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(572), 1,
      anon_sym_EQ,
    STATE(124), 1,
      sym_comment,
  [3233] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(574), 1,
      anon_sym_EQ,
    STATE(125), 1,
      sym_comment,
  [3243] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(576), 1,
      anon_sym_EQ,
    STATE(126), 1,
      sym_comment,
  [3253] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(578), 1,
      anon_sym_EQ,
    STATE(127), 1,
      sym_comment,
  [3263] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(580), 1,
      anon_sym_EQ,
    STATE(128), 1,
      sym_comment,
  [3273] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(582), 1,
      anon_sym_EQ,
    STATE(129), 1,
      sym_comment,
  [3283] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(584), 1,
      anon_sym_EQ,
    STATE(130), 1,
      sym_comment,
  [3293] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(586), 1,
      sym__newline,
    STATE(131), 1,
      sym_comment,
  [3303] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(588), 1,
      aux_sym_variable_reference_token1,
    STATE(132), 1,
      sym_comment,
  [3313] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      sym__newline,
    STATE(133), 1,
      sym_comment,
  [3323] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(592), 1,
      sym__newline,
    STATE(134), 1,
      sym_comment,
  [3333] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(594), 1,
      sym__newline,
    STATE(135), 1,
      sym_comment,
  [3343] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    STATE(136), 1,
      sym_comment,
  [3353] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(137), 1,
      sym_comment,
  [3363] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym__hex_comp,
    STATE(138), 1,
      sym_comment,
  [3373] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(602), 1,
      anon_sym_EQ,
    STATE(139), 1,
      sym_comment,
  [3383] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(604), 1,
      anon_sym_EQ,
    STATE(140), 1,
      sym_comment,
  [3393] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(606), 1,
      anon_sym_EQ,
    STATE(141), 1,
      sym_comment,
  [3403] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(608), 1,
      sym__newline,
    STATE(142), 1,
      sym_comment,
  [3413] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(610), 1,
      sym_float,
    STATE(143), 1,
      sym_comment,
  [3423] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(612), 1,
      sym__newline,
    STATE(144), 1,
      sym_comment,
  [3433] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(614), 1,
      sym__newline,
    STATE(145), 1,
      sym_comment,
  [3443] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(616), 1,
      anon_sym_EQ,
    STATE(146), 1,
      sym_comment,
  [3453] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(618), 1,
      anon_sym_EQ,
    STATE(147), 1,
      sym_comment,
  [3463] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(620), 1,
      sym__newline,
    STATE(148), 1,
      sym_comment,
  [3473] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(622), 1,
      sym__newline,
    STATE(149), 1,
      sym_comment,
  [3483] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(624), 1,
      sym__newline,
    STATE(150), 1,
      sym_comment,
  [3493] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(626), 1,
      sym__newline,
    STATE(151), 1,
      sym_comment,
  [3503] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(628), 1,
      anon_sym_EQ,
    STATE(152), 1,
      sym_comment,
  [3513] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(630), 1,
      anon_sym_EQ,
    STATE(153), 1,
      sym_comment,
  [3523] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(632), 1,
      anon_sym_LBRACE,
    STATE(154), 1,
      sym_comment,
  [3533] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(634), 1,
      sym__newline,
    STATE(155), 1,
      sym_comment,
  [3543] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(636), 1,
      sym__hex_comp,
    STATE(156), 1,
      sym_comment,
  [3553] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(638), 1,
      sym__hex_comp,
    STATE(157), 1,
      sym_comment,
  [3563] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      sym__hex_comp,
    STATE(158), 1,
      sym_comment,
  [3573] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(642), 1,
      anon_sym_deg,
    STATE(159), 1,
      sym_comment,
  [3583] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(644), 1,
      anon_sym_EQ,
    STATE(160), 1,
      sym_comment,
  [3593] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    STATE(161), 1,
      sym_comment,
  [3603] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(648), 1,
      aux_sym_variable_section_token1,
    STATE(162), 1,
      sym_comment,
  [3613] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(650), 1,
      sym__newline,
    STATE(163), 1,
      sym_comment,
  [3623] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(652), 1,
      anon_sym_EQ,
    STATE(164), 1,
      sym_comment,
  [3633] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(654), 1,
      sym__newline,
    STATE(165), 1,
      sym_comment,
  [3643] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(656), 1,
      sym__newline,
    STATE(166), 1,
      sym_comment,
  [3653] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(658), 1,
      sym__newline,
    STATE(167), 1,
      sym_comment,
  [3663] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(660), 1,
      anon_sym_EQ,
    STATE(168), 1,
      sym_comment,
  [3673] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(662), 1,
      anon_sym_EQ,
    STATE(169), 1,
      sym_comment,
  [3683] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(664), 1,
      anon_sym_EQ,
    STATE(170), 1,
      sym_comment,
  [3693] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(666), 1,
      sym__newline,
    STATE(171), 1,
      sym_comment,
  [3703] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(668), 1,
      sym__newline,
    STATE(172), 1,
      sym_comment,
  [3713] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(670), 1,
      anon_sym_EQ,
    STATE(173), 1,
      sym_comment,
  [3723] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(672), 1,
      anon_sym_EQ,
    STATE(174), 1,
      sym_comment,
  [3733] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(674), 1,
      anon_sym_EQ,
    STATE(175), 1,
      sym_comment,
  [3743] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(676), 1,
      anon_sym_EQ,
    STATE(176), 1,
      sym_comment,
  [3753] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(678), 1,
      sym__newline,
    STATE(177), 1,
      sym_comment,
  [3763] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(680), 1,
      sym__newline,
    STATE(178), 1,
      sym_comment,
  [3773] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(682), 1,
      sym__newline,
    STATE(179), 1,
      sym_comment,
  [3783] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(684), 1,
      sym__newline,
    STATE(180), 1,
      sym_comment,
  [3793] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(686), 1,
      ts_builtin_sym_end,
    STATE(181), 1,
      sym_comment,
  [3803] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(688), 1,
      anon_sym_COLON,
    STATE(182), 1,
      sym_comment,
  [3813] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(690), 1,
      sym__hex_comp,
    STATE(183), 1,
      sym_comment,
  [3823] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(692), 1,
      sym__hex_comp,
    STATE(184), 1,
      sym_comment,
  [3833] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(694), 1,
      sym__hex_comp,
    STATE(185), 1,
      sym_comment,
  [3843] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(696), 1,
      sym__newline,
    STATE(186), 1,
      sym_comment,
  [3853] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(698), 1,
      anon_sym_LBRACE,
    STATE(187), 1,
      sym_comment,
  [3863] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(700), 1,
      anon_sym_EQ,
    STATE(188), 1,
      sym_comment,
  [3873] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(702), 1,
      anon_sym_EQ,
    STATE(189), 1,
      sym_comment,
  [3883] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(704), 1,
      anon_sym_LBRACE,
    STATE(190), 1,
      sym_comment,
  [3893] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(706), 1,
      anon_sym_LBRACE,
    STATE(191), 1,
      sym_comment,
  [3903] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(708), 1,
      anon_sym_EQ,
    STATE(192), 1,
      sym_comment,
  [3913] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(710), 1,
      anon_sym_EQ,
    STATE(193), 1,
      sym_comment,
  [3923] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(712), 1,
      anon_sym_LBRACE,
    STATE(194), 1,
      sym_comment,
  [3933] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(714), 1,
      sym__hex_comp,
    STATE(195), 1,
      sym_comment,
  [3943] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(716), 1,
      sym__hex_comp,
    STATE(196), 1,
      sym_comment,
  [3953] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(718), 1,
      sym__hex_comp,
    STATE(197), 1,
      sym_comment,
  [3963] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(720), 1,
      sym__newline,
    STATE(198), 1,
      sym_comment,
  [3973] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(722), 1,
      sym__newline,
    STATE(199), 1,
      sym_comment,
  [3983] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      sym_comment,
  [3993] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(726), 1,
      sym__hex_comp,
    STATE(201), 1,
      sym_comment,
  [4003] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(728), 1,
      anon_sym_LBRACE,
    STATE(202), 1,
      sym_comment,
  [4013] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(730), 1,
      anon_sym_LBRACE,
    STATE(203), 1,
      sym_comment,
  [4023] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(732), 1,
      anon_sym_EQ,
    STATE(204), 1,
      sym_comment,
  [4033] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(734), 1,
      anon_sym_LBRACE,
    STATE(205), 1,
      sym_comment,
  [4043] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    STATE(206), 1,
      sym_comment,
  [4053] = 1,
    ACTIONS(738), 1,
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
  [SMALL_STATE(12)] = 498,
  [SMALL_STATE(13)] = 551,
  [SMALL_STATE(14)] = 588,
  [SMALL_STATE(15)] = 643,
  [SMALL_STATE(16)] = 680,
  [SMALL_STATE(17)] = 717,
  [SMALL_STATE(18)] = 772,
  [SMALL_STATE(19)] = 827,
  [SMALL_STATE(20)] = 861,
  [SMALL_STATE(21)] = 895,
  [SMALL_STATE(22)] = 929,
  [SMALL_STATE(23)] = 963,
  [SMALL_STATE(24)] = 997,
  [SMALL_STATE(25)] = 1031,
  [SMALL_STATE(26)] = 1075,
  [SMALL_STATE(27)] = 1121,
  [SMALL_STATE(28)] = 1167,
  [SMALL_STATE(29)] = 1197,
  [SMALL_STATE(30)] = 1227,
  [SMALL_STATE(31)] = 1257,
  [SMALL_STATE(32)] = 1287,
  [SMALL_STATE(33)] = 1317,
  [SMALL_STATE(34)] = 1347,
  [SMALL_STATE(35)] = 1381,
  [SMALL_STATE(36)] = 1411,
  [SMALL_STATE(37)] = 1445,
  [SMALL_STATE(38)] = 1489,
  [SMALL_STATE(39)] = 1521,
  [SMALL_STATE(40)] = 1551,
  [SMALL_STATE(41)] = 1585,
  [SMALL_STATE(42)] = 1615,
  [SMALL_STATE(43)] = 1645,
  [SMALL_STATE(44)] = 1691,
  [SMALL_STATE(45)] = 1721,
  [SMALL_STATE(46)] = 1753,
  [SMALL_STATE(47)] = 1783,
  [SMALL_STATE(48)] = 1817,
  [SMALL_STATE(49)] = 1839,
  [SMALL_STATE(50)] = 1875,
  [SMALL_STATE(51)] = 1897,
  [SMALL_STATE(52)] = 1919,
  [SMALL_STATE(53)] = 1941,
  [SMALL_STATE(54)] = 1969,
  [SMALL_STATE(55)] = 1999,
  [SMALL_STATE(56)] = 2021,
  [SMALL_STATE(57)] = 2043,
  [SMALL_STATE(58)] = 2077,
  [SMALL_STATE(59)] = 2099,
  [SMALL_STATE(60)] = 2121,
  [SMALL_STATE(61)] = 2143,
  [SMALL_STATE(62)] = 2165,
  [SMALL_STATE(63)] = 2195,
  [SMALL_STATE(64)] = 2217,
  [SMALL_STATE(65)] = 2248,
  [SMALL_STATE(66)] = 2268,
  [SMALL_STATE(67)] = 2288,
  [SMALL_STATE(68)] = 2316,
  [SMALL_STATE(69)] = 2344,
  [SMALL_STATE(70)] = 2364,
  [SMALL_STATE(71)] = 2392,
  [SMALL_STATE(72)] = 2418,
  [SMALL_STATE(73)] = 2436,
  [SMALL_STATE(74)] = 2454,
  [SMALL_STATE(75)] = 2472,
  [SMALL_STATE(76)] = 2497,
  [SMALL_STATE(77)] = 2520,
  [SMALL_STATE(78)] = 2545,
  [SMALL_STATE(79)] = 2561,
  [SMALL_STATE(80)] = 2577,
  [SMALL_STATE(81)] = 2593,
  [SMALL_STATE(82)] = 2613,
  [SMALL_STATE(83)] = 2629,
  [SMALL_STATE(84)] = 2645,
  [SMALL_STATE(85)] = 2667,
  [SMALL_STATE(86)] = 2689,
  [SMALL_STATE(87)] = 2706,
  [SMALL_STATE(88)] = 2721,
  [SMALL_STATE(89)] = 2736,
  [SMALL_STATE(90)] = 2751,
  [SMALL_STATE(91)] = 2767,
  [SMALL_STATE(92)] = 2783,
  [SMALL_STATE(93)] = 2799,
  [SMALL_STATE(94)] = 2815,
  [SMALL_STATE(95)] = 2831,
  [SMALL_STATE(96)] = 2845,
  [SMALL_STATE(97)] = 2861,
  [SMALL_STATE(98)] = 2875,
  [SMALL_STATE(99)] = 2891,
  [SMALL_STATE(100)] = 2907,
  [SMALL_STATE(101)] = 2923,
  [SMALL_STATE(102)] = 2939,
  [SMALL_STATE(103)] = 2955,
  [SMALL_STATE(104)] = 2971,
  [SMALL_STATE(105)] = 2987,
  [SMALL_STATE(106)] = 3003,
  [SMALL_STATE(107)] = 3019,
  [SMALL_STATE(108)] = 3033,
  [SMALL_STATE(109)] = 3049,
  [SMALL_STATE(110)] = 3065,
  [SMALL_STATE(111)] = 3081,
  [SMALL_STATE(112)] = 3097,
  [SMALL_STATE(113)] = 3113,
  [SMALL_STATE(114)] = 3123,
  [SMALL_STATE(115)] = 3133,
  [SMALL_STATE(116)] = 3143,
  [SMALL_STATE(117)] = 3153,
  [SMALL_STATE(118)] = 3163,
  [SMALL_STATE(119)] = 3173,
  [SMALL_STATE(120)] = 3183,
  [SMALL_STATE(121)] = 3193,
  [SMALL_STATE(122)] = 3203,
  [SMALL_STATE(123)] = 3213,
  [SMALL_STATE(124)] = 3223,
  [SMALL_STATE(125)] = 3233,
  [SMALL_STATE(126)] = 3243,
  [SMALL_STATE(127)] = 3253,
  [SMALL_STATE(128)] = 3263,
  [SMALL_STATE(129)] = 3273,
  [SMALL_STATE(130)] = 3283,
  [SMALL_STATE(131)] = 3293,
  [SMALL_STATE(132)] = 3303,
  [SMALL_STATE(133)] = 3313,
  [SMALL_STATE(134)] = 3323,
  [SMALL_STATE(135)] = 3333,
  [SMALL_STATE(136)] = 3343,
  [SMALL_STATE(137)] = 3353,
  [SMALL_STATE(138)] = 3363,
  [SMALL_STATE(139)] = 3373,
  [SMALL_STATE(140)] = 3383,
  [SMALL_STATE(141)] = 3393,
  [SMALL_STATE(142)] = 3403,
  [SMALL_STATE(143)] = 3413,
  [SMALL_STATE(144)] = 3423,
  [SMALL_STATE(145)] = 3433,
  [SMALL_STATE(146)] = 3443,
  [SMALL_STATE(147)] = 3453,
  [SMALL_STATE(148)] = 3463,
  [SMALL_STATE(149)] = 3473,
  [SMALL_STATE(150)] = 3483,
  [SMALL_STATE(151)] = 3493,
  [SMALL_STATE(152)] = 3503,
  [SMALL_STATE(153)] = 3513,
  [SMALL_STATE(154)] = 3523,
  [SMALL_STATE(155)] = 3533,
  [SMALL_STATE(156)] = 3543,
  [SMALL_STATE(157)] = 3553,
  [SMALL_STATE(158)] = 3563,
  [SMALL_STATE(159)] = 3573,
  [SMALL_STATE(160)] = 3583,
  [SMALL_STATE(161)] = 3593,
  [SMALL_STATE(162)] = 3603,
  [SMALL_STATE(163)] = 3613,
  [SMALL_STATE(164)] = 3623,
  [SMALL_STATE(165)] = 3633,
  [SMALL_STATE(166)] = 3643,
  [SMALL_STATE(167)] = 3653,
  [SMALL_STATE(168)] = 3663,
  [SMALL_STATE(169)] = 3673,
  [SMALL_STATE(170)] = 3683,
  [SMALL_STATE(171)] = 3693,
  [SMALL_STATE(172)] = 3703,
  [SMALL_STATE(173)] = 3713,
  [SMALL_STATE(174)] = 3723,
  [SMALL_STATE(175)] = 3733,
  [SMALL_STATE(176)] = 3743,
  [SMALL_STATE(177)] = 3753,
  [SMALL_STATE(178)] = 3763,
  [SMALL_STATE(179)] = 3773,
  [SMALL_STATE(180)] = 3783,
  [SMALL_STATE(181)] = 3793,
  [SMALL_STATE(182)] = 3803,
  [SMALL_STATE(183)] = 3813,
  [SMALL_STATE(184)] = 3823,
  [SMALL_STATE(185)] = 3833,
  [SMALL_STATE(186)] = 3843,
  [SMALL_STATE(187)] = 3853,
  [SMALL_STATE(188)] = 3863,
  [SMALL_STATE(189)] = 3873,
  [SMALL_STATE(190)] = 3883,
  [SMALL_STATE(191)] = 3893,
  [SMALL_STATE(192)] = 3903,
  [SMALL_STATE(193)] = 3913,
  [SMALL_STATE(194)] = 3923,
  [SMALL_STATE(195)] = 3933,
  [SMALL_STATE(196)] = 3943,
  [SMALL_STATE(197)] = 3953,
  [SMALL_STATE(198)] = 3963,
  [SMALL_STATE(199)] = 3973,
  [SMALL_STATE(200)] = 3983,
  [SMALL_STATE(201)] = 3993,
  [SMALL_STATE(202)] = 4003,
  [SMALL_STATE(203)] = 4013,
  [SMALL_STATE(204)] = 4023,
  [SMALL_STATE(205)] = 4033,
  [SMALL_STATE(206)] = 4043,
  [SMALL_STATE(207)] = 4053,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(6),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(193),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(192),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(189),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(188),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat6, 1, .production_id = 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 1, .production_id = 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat6, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__misc_section_var, 4, .production_id = 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__misc_section_var, 4, .production_id = 1),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(15),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(140),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(139),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(130),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(129),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(128),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(127),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(21),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(125),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(124),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(123),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(120),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(119),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(118),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat2, 1, .production_id = 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 1, .production_id = 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat2, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_section_var, 4, .production_id = 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_section_var, 4, .production_id = 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_variable_section, 5, .production_id = 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_variable_section, 5, .production_id = 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat4, 1, .production_id = 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 1, .production_id = 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat4, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_variable_section, 4, .production_id = 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_variable_section, 4, .production_id = 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_section_var, 4, .production_id = 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_section_var, 4, .production_id = 1),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(30),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(153),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(152),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(113),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(146),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(141),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat1, 1, .production_id = 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 1, .production_id = 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__general_section_var, 4, .production_id = 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__general_section_var, 4, .production_id = 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat1, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(61),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(161),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(205),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(203),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(202),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(194),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(191),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(190),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(187),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(182),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat1, 2), SHIFT_REPEAT(50),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 2),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 2), SHIFT_REPEAT(168),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 2), SHIFT_REPEAT(169),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 2), SHIFT_REPEAT(170),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat5, 2), SHIFT_REPEAT(60),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 2),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 2), SHIFT_REPEAT(147),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 2), SHIFT_REPEAT(164),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 2), SHIFT_REPEAT(204),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat5, 1, .production_id = 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 1, .production_id = 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gradient, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat1, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__touchpad_section_var, 4, .production_id = 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__touchpad_section_var, 4, .production_id = 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat1, 1, .production_id = 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 1, .production_id = 2),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat8, 2), SHIFT_REPEAT(65),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 2),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 2), SHIFT_REPEAT(160),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 2), SHIFT_REPEAT(115),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_section, 4, .production_id = 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_section, 4, .production_id = 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gestures_section_var, 4, .production_id = 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gestures_section_var, 4, .production_id = 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_section, 6, .production_id = 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_section, 6, .production_id = 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_section, 5, .production_id = 1),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_section, 5, .production_id = 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat5, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 1),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_section, 7, .production_id = 3),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_section, 7, .production_id = 3),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(136),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(137),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(138),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat8, 1),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug_section_var, 4, .production_id = 1),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__debug_section_var, 4, .production_id = 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat8, 1, .production_id = 2),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 1, .production_id = 2),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat7, 2), SHIFT_REPEAT(73),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 2),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 2), SHIFT_REPEAT(176),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 2), SHIFT_REPEAT(173),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binds_section_var, 4, .production_id = 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binds_section_var, 4, .production_id = 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat7, 1),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat7, 1, .production_id = 2),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 1, .production_id = 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat2, 2), SHIFT_REPEAT(89),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 2),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 2), SHIFT_REPEAT(174),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 2), SHIFT_REPEAT(175),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_hex, 5),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_hex, 5),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 1),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_rgb, 6),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_rgb, 6),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat3, 2), SHIFT_REPEAT(97),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat3, 2),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat3, 2), SHIFT_REPEAT(126),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_rgba, 7),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_rgba, 7),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat2, 1, .production_id = 2),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 1, .production_id = 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__touchdevice_section_var, 4, .production_id = 1),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__touchdevice_section_var, 4, .production_id = 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat2, 1),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__animation_section_var, 4, .production_id = 1),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__animation_section_var, 4, .production_id = 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat3, 1),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat3, 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat3, 1, .production_id = 2),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat3, 1, .production_id = 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gradient, 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_literal, 1),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_integer, 1),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_reference, 2),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec2, 2),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [686] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_degree, 2, .production_id = 4),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
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
