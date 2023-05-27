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
#define STATE_COUNT 243
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 230
#define ALIAS_COUNT 1
#define TOKEN_COUNT 182
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 10

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
  aux_sym_word_token1 = 33,
  anon_sym_DOLLAR = 34,
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
  sym_shell_command = 170,
  anon_sym_exec = 171,
  anon_sym_exec_DASHonce = 172,
  anon_sym_source = 173,
  anon_sym_unset = 174,
  anon_sym_address = 175,
  anon_sym_0x2 = 176,
  aux_sym_layer_address_token1 = 177,
  anon_sym_layerrule = 178,
  anon_sym_COMMA = 179,
  anon_sym_env = 180,
  anon_sym_envd = 181,
  sym_config_file = 182,
  sym_comment = 183,
  sym_vec2 = 184,
  sym_bool = 185,
  sym__bool_literal = 186,
  sym__bool_integer = 187,
  sym_color = 188,
  sym_color_rgb = 189,
  sym_color_rgba = 190,
  sym_color_hex = 191,
  sym_gradient = 192,
  sym_degree = 193,
  sym_word = 194,
  sym_variable_reference = 195,
  sym_variable_section = 196,
  sym__general_section_var = 197,
  sym__decoration_section_var = 198,
  sym__animation_section_var = 199,
  sym__touchpad_section_var = 200,
  sym__touchdevice_section_var = 201,
  sym__input_variable_section = 202,
  sym__input_section_var = 203,
  sym__gestures_section_var = 204,
  sym__misc_section_var = 205,
  sym__binds_section_var = 206,
  sym__debug_section_var = 207,
  sym_command = 208,
  sym_command_exec = 209,
  sym_command_exec_once = 210,
  sym_command_source = 211,
  sym_layer_rule = 212,
  sym_layer_address = 213,
  sym_layer_identifier = 214,
  sym_command_layerrule = 215,
  sym_command_env = 216,
  sym_command_envd = 217,
  aux_sym_config_file_repeat1 = 218,
  aux_sym_gradient_repeat1 = 219,
  aux_sym_variable_section_repeat1 = 220,
  aux_sym_variable_section_repeat2 = 221,
  aux_sym_variable_section_repeat3 = 222,
  aux_sym_variable_section_repeat4 = 223,
  aux_sym_variable_section_repeat5 = 224,
  aux_sym_variable_section_repeat6 = 225,
  aux_sym_variable_section_repeat7 = 226,
  aux_sym_variable_section_repeat8 = 227,
  aux_sym__input_variable_section_repeat1 = 228,
  aux_sym__input_variable_section_repeat2 = 229,
  alias_sym_layer_namespace = 230,
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
  [aux_sym_word_token1] = "word_token1",
  [anon_sym_DOLLAR] = "$",
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
  [sym_shell_command] = "shell_command",
  [anon_sym_exec] = "exec",
  [anon_sym_exec_DASHonce] = "exec-once",
  [anon_sym_source] = "source",
  [anon_sym_unset] = "unset",
  [anon_sym_address] = "address",
  [anon_sym_0x2] = "0x",
  [aux_sym_layer_address_token1] = "layer_address_token1",
  [anon_sym_layerrule] = "layerrule",
  [anon_sym_COMMA] = ",",
  [anon_sym_env] = "env",
  [anon_sym_envd] = "envd",
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
  [sym_word] = "env_var_name",
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
  [sym_command] = "command",
  [sym_command_exec] = "command_exec",
  [sym_command_exec_once] = "command_exec_once",
  [sym_command_source] = "command_source",
  [sym_layer_rule] = "layer_rule",
  [sym_layer_address] = "layer_address",
  [sym_layer_identifier] = "layer_identifier",
  [sym_command_layerrule] = "command_layerrule",
  [sym_command_env] = "command_env",
  [sym_command_envd] = "command_envd",
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
  [alias_sym_layer_namespace] = "layer_namespace",
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
  [aux_sym_word_token1] = aux_sym_word_token1,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
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
  [sym_shell_command] = sym_shell_command,
  [anon_sym_exec] = anon_sym_exec,
  [anon_sym_exec_DASHonce] = anon_sym_exec_DASHonce,
  [anon_sym_source] = anon_sym_source,
  [anon_sym_unset] = anon_sym_unset,
  [anon_sym_address] = anon_sym_address,
  [anon_sym_0x2] = anon_sym_0x,
  [aux_sym_layer_address_token1] = aux_sym_layer_address_token1,
  [anon_sym_layerrule] = anon_sym_layerrule,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_env] = anon_sym_env,
  [anon_sym_envd] = anon_sym_envd,
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
  [sym_word] = sym_word,
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
  [sym_command] = sym_command,
  [sym_command_exec] = sym_command_exec,
  [sym_command_exec_once] = sym_command_exec_once,
  [sym_command_source] = sym_command_source,
  [sym_layer_rule] = sym_layer_rule,
  [sym_layer_address] = sym_layer_address,
  [sym_layer_identifier] = sym_layer_identifier,
  [sym_command_layerrule] = sym_command_layerrule,
  [sym_command_env] = sym_command_env,
  [sym_command_envd] = sym_command_envd,
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
  [alias_sym_layer_namespace] = alias_sym_layer_namespace,
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
  [aux_sym_word_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
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
  [sym_shell_command] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_exec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exec_DASHonce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_address] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0x2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_layer_address_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_layerrule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_env] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_envd] = {
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
  [sym_word] = {
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
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_command_exec] = {
    .visible = true,
    .named = true,
  },
  [sym_command_exec_once] = {
    .visible = true,
    .named = true,
  },
  [sym_command_source] = {
    .visible = true,
    .named = true,
  },
  [sym_layer_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_layer_address] = {
    .visible = true,
    .named = true,
  },
  [sym_layer_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_command_layerrule] = {
    .visible = true,
    .named = true,
  },
  [sym_command_env] = {
    .visible = true,
    .named = true,
  },
  [sym_command_envd] = {
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
  [alias_sym_layer_namespace] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_address = 1,
  field_argument = 2,
  field_name = 3,
  field_unit = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_address] = "address",
  [field_argument] = "argument",
  [field_name] = "name",
  [field_unit] = "unit",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 3},
  [6] = {.index = 7, .length = 4},
  [7] = {.index = 11, .length = 3},
  [8] = {.index = 14, .length = 1},
  [9] = {.index = 15, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_argument, 2},
    {field_name, 0},
  [2] =
    {field_name, 0},
  [3] =
    {field_name, 0, .inherited = true},
  [4] =
    {field_argument, 2},
    {field_argument, 3},
    {field_name, 0},
  [7] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_name, 0},
  [11] =
    {field_name, 0},
    {field_name, 1},
    {field_name, 2},
  [14] =
    {field_unit, 1},
  [15] =
    {field_address, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [0] = alias_sym_layer_namespace,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_word, 2,
    sym_word,
    alias_sym_layer_namespace,
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
  [178] = 42,
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
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1417);
      if (lookahead == '#') ADVANCE(1418);
      if (lookahead == '$') ADVANCE(1477);
      if (lookahead == '(') ADVANCE(1456);
      if (lookahead == ')') ADVANCE(1457);
      if (lookahead == ',') ADVANCE(1625);
      if (lookahead == '.') ADVANCE(1412);
      if (lookahead == '0') ADVANCE(1450);
      if (lookahead == '1') ADVANCE(1453);
      if (lookahead == ':') ADVANCE(1491);
      if (lookahead == '=') ADVANCE(1494);
      if (lookahead == 'A') ADVANCE(30);
      if (lookahead == 'C') ADVANCE(20);
      if (lookahead == 'L') ADVANCE(35);
      if (lookahead == 'M') ADVANCE(36);
      if (lookahead == 'S') ADVANCE(26);
      if (lookahead == 'W') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(299);
      if (lookahead == 'b') ADVANCE(652);
      if (lookahead == 'c') ADVANCE(744);
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead == 'e') ADVANCE(823);
      if (lookahead == 'f') ADVANCE(163);
      if (lookahead == 'g') ADVANCE(169);
      if (lookahead == 'h') ADVANCE(645);
      if (lookahead == 'i') ADVANCE(824);
      if (lookahead == 'k') ADVANCE(271);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(572);
      if (lookahead == 'p') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(419);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == 'u') ADVANCE(831);
      if (lookahead == 'v') ADVANCE(574);
      if (lookahead == 'w') ADVANCE(912);
      if (lookahead == 'y') ADVANCE(451);
      if (lookahead == '{') ADVANCE(1481);
      if (lookahead == '}') ADVANCE(1482);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(16);
      if (('B' <= lookahead && lookahead <= 'F')) ADVANCE(1414);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1416)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1424);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(1418);
      if (lookahead == '$') ADVANCE(1477);
      if (lookahead == '.') ADVANCE(1412);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1428);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(1418);
      if (lookahead == '$') ADVANCE(1477);
      if (lookahead == '0') ADVANCE(1426);
      if (lookahead == 'r') ADVANCE(595);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(1413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1427);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(1418);
      if (lookahead == '$') ADVANCE(1477);
      if (lookahead == '0') ADVANCE(1449);
      if (lookahead == '1') ADVANCE(1452);
      if (lookahead == 'd') ADVANCE(483);
      if (lookahead == 'f') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(908);
      if (lookahead == 'o') ADVANCE(571);
      if (lookahead == 't') ADVANCE(1076);
      if (lookahead == 'y') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(1418);
      if (lookahead == '$') ADVANCE(1477);
      if (lookahead == '0') ADVANCE(1449);
      if (lookahead == '1') ADVANCE(1452);
      if (lookahead == 'f') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(908);
      if (lookahead == 'o') ADVANCE(571);
      if (lookahead == 't') ADVANCE(1076);
      if (lookahead == 'y') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(1418);
      if (lookahead == '0') ADVANCE(1382);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1414);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(1418);
      if (lookahead == 'a') ADVANCE(1471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1476);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(1418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1476);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(1418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(1418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1492);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(1420);
      if (lookahead == '$') ADVANCE(1478);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0) ADVANCE(1469);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(1420);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0) ADVANCE(1469);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(1615);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '_') ADVANCE(275);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(323);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(401);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(1412);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1425);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(1412);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1428);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(268);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(1435);
      if (lookahead == '3') ADVANCE(1436);
      if (lookahead == '4') ADVANCE(1440);
      if (lookahead == '5') ADVANCE(1441);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(1462);
      if (lookahead == 'O') ADVANCE(34);
      if (lookahead == 'T') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1460);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(39);
      if (lookahead == 'O') ADVANCE(34);
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == 'F') ADVANCE(46);
      END_STATE();
    case 25:
      if (lookahead == 'G') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'H') ADVANCE(27);
      if (lookahead == 'U') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 'I') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'I') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'L') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'L') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1460);
      END_STATE();
    case 31:
      if (lookahead == 'L') ADVANCE(1432);
      END_STATE();
    case 32:
      if (lookahead == 'L') ADVANCE(1433);
      END_STATE();
    case 33:
      if (lookahead == 'N') ADVANCE(1438);
      END_STATE();
    case 34:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == 'O') ADVANCE(22);
      END_STATE();
    case 37:
      if (lookahead == 'O') ADVANCE(1439);
      END_STATE();
    case 38:
      if (lookahead == 'O') ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == 'P') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'P') ADVANCE(23);
      END_STATE();
    case 41:
      if (lookahead == 'R') ADVANCE(1437);
      END_STATE();
    case 42:
      if (lookahead == 'R') ADVANCE(31);
      END_STATE();
    case 43:
      if (lookahead == 'R') ADVANCE(38);
      END_STATE();
    case 44:
      if (lookahead == 'S') ADVANCE(1431);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(1434);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(1430);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(575);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(282);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(254);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(1216);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(925);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(808);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(722);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(276);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(396);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(290);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(719);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(197);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(429);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(609);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(286);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(565);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(924);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(658);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(592);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(182);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(806);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(632);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(633);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(577);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(801);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(293);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(1375);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(281);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(1368);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(277);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(731);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(589);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(361);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(844);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(291);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(578);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(958);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(661);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(1034);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(1214);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(621);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(1167);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(619);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(1027);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(1205);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(1147);
      if (lookahead == 'd') ADVANCE(1535);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(408);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(1194);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(319);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(382);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(923);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(200);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(203);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(1260);
      END_STATE();
    case 102:
      if (lookahead == '_') ADVANCE(1200);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(775);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(1241);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(1271);
      END_STATE();
    case 106:
      if (lookahead == '_') ADVANCE(1199);
      END_STATE();
    case 107:
      if (lookahead == '_') ADVANCE(472);
      END_STATE();
    case 108:
      if (lookahead == '_') ADVANCE(460);
      END_STATE();
    case 109:
      if (lookahead == '_') ADVANCE(819);
      END_STATE();
    case 110:
      if (lookahead == '_') ADVANCE(1024);
      END_STATE();
    case 111:
      if (lookahead == '_') ADVANCE(325);
      END_STATE();
    case 112:
      if (lookahead == '_') ADVANCE(821);
      END_STATE();
    case 113:
      if (lookahead == '_') ADVANCE(1206);
      END_STATE();
    case 114:
      if (lookahead == '_') ADVANCE(960);
      END_STATE();
    case 115:
      if (lookahead == '_') ADVANCE(982);
      END_STATE();
    case 116:
      if (lookahead == '_') ADVANCE(395);
      END_STATE();
    case 117:
      if (lookahead == '_') ADVANCE(863);
      END_STATE();
    case 118:
      if (lookahead == '_') ADVANCE(810);
      END_STATE();
    case 119:
      if (lookahead == '_') ADVANCE(1371);
      END_STATE();
    case 120:
      if (lookahead == '_') ADVANCE(584);
      END_STATE();
    case 121:
      if (lookahead == '_') ADVANCE(1127);
      END_STATE();
    case 122:
      if (lookahead == '_') ADVANCE(763);
      END_STATE();
    case 123:
      if (lookahead == '_') ADVANCE(1181);
      END_STATE();
    case 124:
      if (lookahead == '_') ADVANCE(390);
      END_STATE();
    case 125:
      if (lookahead == '_') ADVANCE(218);
      END_STATE();
    case 126:
      if (lookahead == '_') ADVANCE(707);
      END_STATE();
    case 127:
      if (lookahead == '_') ADVANCE(1084);
      END_STATE();
    case 128:
      if (lookahead == '_') ADVANCE(405);
      END_STATE();
    case 129:
      if (lookahead == '_') ADVANCE(524);
      END_STATE();
    case 130:
      if (lookahead == '_') ADVANCE(586);
      END_STATE();
    case 131:
      if (lookahead == '_') ADVANCE(1376);
      END_STATE();
    case 132:
      if (lookahead == '_') ADVANCE(792);
      END_STATE();
    case 133:
      if (lookahead == '_') ADVANCE(1207);
      END_STATE();
    case 134:
      if (lookahead == '_') ADVANCE(1122);
      END_STATE();
    case 135:
      if (lookahead == '_') ADVANCE(1264);
      END_STATE();
    case 136:
      if (lookahead == '_') ADVANCE(1265);
      END_STATE();
    case 137:
      if (lookahead == '_') ADVANCE(251);
      END_STATE();
    case 138:
      if (lookahead == '_') ADVANCE(1378);
      END_STATE();
    case 139:
      if (lookahead == '_') ADVANCE(587);
      END_STATE();
    case 140:
      if (lookahead == '_') ADVANCE(796);
      END_STATE();
    case 141:
      if (lookahead == '_') ADVANCE(1267);
      END_STATE();
    case 142:
      if (lookahead == '_') ADVANCE(1121);
      END_STATE();
    case 143:
      if (lookahead == '_') ADVANCE(974);
      END_STATE();
    case 144:
      if (lookahead == '_') ADVANCE(1124);
      END_STATE();
    case 145:
      if (lookahead == '_') ADVANCE(979);
      END_STATE();
    case 146:
      if (lookahead == '_') ADVANCE(980);
      END_STATE();
    case 147:
      if (lookahead == '_') ADVANCE(820);
      END_STATE();
    case 148:
      if (lookahead == '_') ADVANCE(1038);
      END_STATE();
    case 149:
      if (lookahead == '_') ADVANCE(1131);
      END_STATE();
    case 150:
      if (lookahead == '_') ADVANCE(1000);
      END_STATE();
    case 151:
      if (lookahead == '_') ADVANCE(593);
      END_STATE();
    case 152:
      if (lookahead == '_') ADVANCE(1002);
      END_STATE();
    case 153:
      if (lookahead == '_') ADVANCE(594);
      END_STATE();
    case 154:
      if (lookahead == '_') ADVANCE(1004);
      END_STATE();
    case 155:
      if (lookahead == '_') ADVANCE(292);
      END_STATE();
    case 156:
      if (lookahead == '_') ADVANCE(294);
      END_STATE();
    case 157:
      if (lookahead == '_') ADVANCE(295);
      END_STATE();
    case 158:
      if (lookahead == '_') ADVANCE(296);
      END_STATE();
    case 159:
      if (lookahead == '_') ADVANCE(297);
      END_STATE();
    case 160:
      if (lookahead == '_') ADVANCE(298);
      END_STATE();
    case 161:
      if (lookahead == '_') ADVANCE(1011);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(1467);
      if (lookahead == 'e') ADVANCE(1463);
      if (lookahead == 'i') ADVANCE(802);
      if (lookahead == 'r') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1460);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(1466);
      if (lookahead == 'l') ADVANCE(913);
      if (lookahead == 'o') ADVANCE(333);
      if (lookahead == 'u') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1460);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(1262);
      if (lookahead == 'o') ADVANCE(1446);
      if (lookahead == 'u') ADVANCE(804);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(1262);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(804);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(1195);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(605);
      if (lookahead == 'o') ADVANCE(1016);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(1509);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(1017);
      if (lookahead == 'e') ADVANCE(868);
      if (lookahead == 'r') ADVANCE(911);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(1386);
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == 'v') ADVANCE(1626);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(620);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(1404);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(839);
      if (lookahead == 'i') ADVANCE(374);
      if (lookahead == 'o') ADVANCE(1324);
      if (lookahead == 'u') ADVANCE(746);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(1012);
      if (lookahead == 'o') ADVANCE(1301);
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(1012);
      if (lookahead == 'o') ADVANCE(1301);
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(397);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(1403);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(817);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(311);
      if (lookahead == 'p') ADVANCE(1300);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(1387);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(636);
      if (lookahead == 't') ADVANCE(668);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(1388);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(771);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(771);
      if (lookahead == 'l') ADVANCE(913);
      if (lookahead == 'o') ADVANCE(333);
      if (lookahead == 'u') ADVANCE(747);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(1222);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(1364);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(1390);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(599);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(363);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(278);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(1013);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(580);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(774);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(872);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(1315);
      if (lookahead == 'h') ADVANCE(1402);
      if (lookahead == 'l') ADVANCE(917);
      if (lookahead == 's') ADVANCE(1025);
      if (lookahead == 't') ADVANCE(656);
      if (lookahead == 'w') ADVANCE(642);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(737);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(1394);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(344);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(1069);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(783);
      END_STATE();
    case 203:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(847);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(1322);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(1252);
      END_STATE();
    case 207:
      if (lookahead == 'a') ADVANCE(607);
      END_STATE();
    case 208:
      if (lookahead == 'a') ADVANCE(368);
      END_STATE();
    case 209:
      if (lookahead == 'a') ADVANCE(869);
      if (lookahead == 'e') ADVANCE(893);
      END_STATE();
    case 210:
      if (lookahead == 'a') ADVANCE(739);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(1175);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(878);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(1197);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(888);
      if (lookahead == 'r') ADVANCE(538);
      END_STATE();
    case 215:
      if (lookahead == 'a') ADVANCE(1102);
      END_STATE();
    case 216:
      if (lookahead == 'a') ADVANCE(1278);
      END_STATE();
    case 217:
      if (lookahead == 'a') ADVANCE(1083);
      END_STATE();
    case 218:
      if (lookahead == 'a') ADVANCE(1113);
      END_STATE();
    case 219:
      if (lookahead == 'a') ADVANCE(1062);
      END_STATE();
    case 220:
      if (lookahead == 'a') ADVANCE(1118);
      END_STATE();
    case 221:
      if (lookahead == 'a') ADVANCE(791);
      END_STATE();
    case 222:
      if (lookahead == 'a') ADVANCE(803);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == 'i') ADVANCE(802);
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 223:
      if (lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 224:
      if (lookahead == 'a') ADVANCE(1258);
      END_STATE();
    case 225:
      if (lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 226:
      if (lookahead == 'a') ADVANCE(386);
      END_STATE();
    case 227:
      if (lookahead == 'a') ADVANCE(391);
      END_STATE();
    case 228:
      if (lookahead == 'a') ADVANCE(385);
      END_STATE();
    case 229:
      if (lookahead == 'a') ADVANCE(336);
      END_STATE();
    case 230:
      if (lookahead == 'a') ADVANCE(768);
      END_STATE();
    case 231:
      if (lookahead == 'a') ADVANCE(1255);
      END_STATE();
    case 232:
      if (lookahead == 'a') ADVANCE(841);
      END_STATE();
    case 233:
      if (lookahead == 'a') ADVANCE(841);
      if (lookahead == 'u') ADVANCE(420);
      END_STATE();
    case 234:
      if (lookahead == 'a') ADVANCE(1344);
      END_STATE();
    case 235:
      if (lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 236:
      if (lookahead == 'a') ADVANCE(1251);
      END_STATE();
    case 237:
      if (lookahead == 'a') ADVANCE(840);
      if (lookahead == 't') ADVANCE(905);
      END_STATE();
    case 238:
      if (lookahead == 'a') ADVANCE(793);
      END_STATE();
    case 239:
      if (lookahead == 'a') ADVANCE(1183);
      END_STATE();
    case 240:
      if (lookahead == 'a') ADVANCE(312);
      END_STATE();
    case 241:
      if (lookahead == 'a') ADVANCE(754);
      END_STATE();
    case 242:
      if (lookahead == 'a') ADVANCE(1246);
      END_STATE();
    case 243:
      if (lookahead == 'a') ADVANCE(766);
      END_STATE();
    case 244:
      if (lookahead == 'a') ADVANCE(1086);
      END_STATE();
    case 245:
      if (lookahead == 'a') ADVANCE(756);
      END_STATE();
    case 246:
      if (lookahead == 'a') ADVANCE(846);
      END_STATE();
    case 247:
      if (lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 248:
      if (lookahead == 'a') ADVANCE(1272);
      END_STATE();
    case 249:
      if (lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 250:
      if (lookahead == 'a') ADVANCE(1259);
      END_STATE();
    case 251:
      if (lookahead == 'a') ADVANCE(876);
      END_STATE();
    case 252:
      if (lookahead == 'a') ADVANCE(348);
      END_STATE();
    case 253:
      if (lookahead == 'a') ADVANCE(881);
      END_STATE();
    case 254:
      if (lookahead == 'a') ADVANCE(1108);
      if (lookahead == 'i') ADVANCE(896);
      if (lookahead == 's') ADVANCE(1021);
      END_STATE();
    case 255:
      if (lookahead == 'a') ADVANCE(339);
      END_STATE();
    case 256:
      if (lookahead == 'a') ADVANCE(349);
      END_STATE();
    case 257:
      if (lookahead == 'a') ADVANCE(342);
      END_STATE();
    case 258:
      if (lookahead == 'a') ADVANCE(345);
      END_STATE();
    case 259:
      if (lookahead == 'a') ADVANCE(407);
      END_STATE();
    case 260:
      if (lookahead == 'a') ADVANCE(887);
      if (lookahead == 'o') ADVANCE(1338);
      END_STATE();
    case 261:
      if (lookahead == 'a') ADVANCE(350);
      END_STATE();
    case 262:
      if (lookahead == 'a') ADVANCE(1292);
      END_STATE();
    case 263:
      if (lookahead == 'a') ADVANCE(356);
      END_STATE();
    case 264:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 265:
      if (lookahead == 'a') ADVANCE(1289);
      END_STATE();
    case 266:
      if (lookahead == 'a') ADVANCE(355);
      END_STATE();
    case 267:
      if (lookahead == 'a') ADVANCE(357);
      END_STATE();
    case 268:
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead == 'g') ADVANCE(1103);
      if (lookahead == 'i') ADVANCE(845);
      if (lookahead == 's') ADVANCE(641);
      END_STATE();
    case 269:
      if (lookahead == 'a') ADVANCE(360);
      END_STATE();
    case 270:
      if (lookahead == 'a') ADVANCE(362);
      END_STATE();
    case 271:
      if (lookahead == 'b') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(1396);
      END_STATE();
    case 272:
      if (lookahead == 'b') ADVANCE(1455);
      END_STATE();
    case 273:
      if (lookahead == 'b') ADVANCE(1298);
      if (lookahead == 'c') ADVANCE(921);
      if (lookahead == 'v') ADVANCE(687);
      END_STATE();
    case 274:
      if (lookahead == 'b') ADVANCE(750);
      END_STATE();
    case 275:
      if (lookahead == 'b') ADVANCE(1309);
      END_STATE();
    case 276:
      if (lookahead == 'b') ADVANCE(779);
      if (lookahead == 't') ADVANCE(1077);
      END_STATE();
    case 277:
      if (lookahead == 'b') ADVANCE(529);
      END_STATE();
    case 278:
      if (lookahead == 'b') ADVANCE(125);
      END_STATE();
    case 279:
      if (lookahead == 'b') ADVANCE(945);
      END_STATE();
    case 280:
      if (lookahead == 'b') ADVANCE(244);
      END_STATE();
    case 281:
      if (lookahead == 'b') ADVANCE(1401);
      END_STATE();
    case 282:
      if (lookahead == 'b') ADVANCE(995);
      if (lookahead == 'c') ADVANCE(1339);
      if (lookahead == 'd') ADVANCE(669);
      if (lookahead == 'f') ADVANCE(918);
      END_STATE();
    case 283:
      if (lookahead == 'b') ADVANCE(219);
      END_STATE();
    case 284:
      if (lookahead == 'b') ADVANCE(545);
      END_STATE();
    case 285:
      if (lookahead == 'b') ADVANCE(786);
      END_STATE();
    case 286:
      if (lookahead == 'b') ADVANCE(247);
      if (lookahead == 's') ADVANCE(1370);
      END_STATE();
    case 287:
      if (lookahead == 'b') ADVANCE(249);
      END_STATE();
    case 288:
      if (lookahead == 'b') ADVANCE(797);
      END_STATE();
    case 289:
      if (lookahead == 'b') ADVANCE(798);
      END_STATE();
    case 290:
      if (lookahead == 'b') ADVANCE(1340);
      if (lookahead == 'e') ADVANCE(1351);
      if (lookahead == 'f') ADVANCE(225);
      if (lookahead == 'm') ADVANCE(480);
      END_STATE();
    case 291:
      if (lookahead == 'b') ADVANCE(989);
      END_STATE();
    case 292:
      if (lookahead == 'b') ADVANCE(1342);
      END_STATE();
    case 293:
      if (lookahead == 'b') ADVANCE(1001);
      END_STATE();
    case 294:
      if (lookahead == 'b') ADVANCE(1003);
      END_STATE();
    case 295:
      if (lookahead == 'b') ADVANCE(1005);
      END_STATE();
    case 296:
      if (lookahead == 'b') ADVANCE(1006);
      END_STATE();
    case 297:
      if (lookahead == 'b') ADVANCE(1007);
      END_STATE();
    case 298:
      if (lookahead == 'b') ADVANCE(1008);
      END_STATE();
    case 299:
      if (lookahead == 'c') ADVANCE(1464);
      if (lookahead == 'd') ADVANCE(1465);
      if (lookahead == 'l') ADVANCE(745);
      if (lookahead == 'n') ADVANCE(649);
      if (lookahead == 'p') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1460);
      END_STATE();
    case 300:
      if (lookahead == 'c') ADVANCE(307);
      if (lookahead == 'd') ADVANCE(376);
      if (lookahead == 'l') ADVANCE(745);
      if (lookahead == 'n') ADVANCE(649);
      if (lookahead == 'p') ADVANCE(1014);
      END_STATE();
    case 301:
      if (lookahead == 'c') ADVANCE(307);
      if (lookahead == 'l') ADVANCE(745);
      if (lookahead == 'n') ADVANCE(649);
      if (lookahead == 'p') ADVANCE(1014);
      END_STATE();
    case 302:
      if (lookahead == 'c') ADVANCE(1616);
      END_STATE();
    case 303:
      if (lookahead == 'c') ADVANCE(1487);
      END_STATE();
    case 304:
      if (lookahead == 'c') ADVANCE(627);
      END_STATE();
    case 305:
      if (lookahead == 'c') ADVANCE(214);
      if (lookahead == 'd') ADVANCE(679);
      if (lookahead == 'f') ADVANCE(711);
      if (lookahead == 'i') ADVANCE(891);
      if (lookahead == 'm') ADVANCE(710);
      if (lookahead == 'n') ADVANCE(1310);
      END_STATE();
    case 306:
      if (lookahead == 'c') ADVANCE(728);
      END_STATE();
    case 307:
      if (lookahead == 'c') ADVANCE(459);
      if (lookahead == 't') ADVANCE(685);
      END_STATE();
    case 308:
      if (lookahead == 'c') ADVANCE(1064);
      if (lookahead == 'e') ADVANCE(835);
      if (lookahead == 'h') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(1306);
      if (lookahead == 'u') ADVANCE(1018);
      if (lookahead == 'w') ADVANCE(221);
      END_STATE();
    case 309:
      if (lookahead == 'c') ADVANCE(730);
      END_STATE();
    case 310:
      if (lookahead == 'c') ADVANCE(724);
      END_STATE();
    case 311:
      if (lookahead == 'c') ADVANCE(1295);
      END_STATE();
    case 312:
      if (lookahead == 'c') ADVANCE(733);
      END_STATE();
    case 313:
      if (lookahead == 'c') ADVANCE(726);
      END_STATE();
    case 314:
      if (lookahead == 'c') ADVANCE(639);
      END_STATE();
    case 315:
      if (lookahead == 'c') ADVANCE(727);
      END_STATE();
    case 316:
      if (lookahead == 'c') ADVANCE(422);
      END_STATE();
    case 317:
      if (lookahead == 'c') ADVANCE(630);
      END_STATE();
    case 318:
      if (lookahead == 'c') ADVANCE(424);
      END_STATE();
    case 319:
      if (lookahead == 'c') ADVANCE(1400);
      END_STATE();
    case 320:
      if (lookahead == 'c') ADVANCE(696);
      END_STATE();
    case 321:
      if (lookahead == 'c') ADVANCE(341);
      END_STATE();
    case 322:
      if (lookahead == 'c') ADVANCE(1075);
      END_STATE();
    case 323:
      if (lookahead == 'c') ADVANCE(770);
      END_STATE();
    case 324:
      if (lookahead == 'c') ADVANCE(427);
      END_STATE();
    case 325:
      if (lookahead == 'c') ADVANCE(1099);
      END_STATE();
    case 326:
      if (lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 327:
      if (lookahead == 'c') ADVANCE(1126);
      END_STATE();
    case 328:
      if (lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 329:
      if (lookahead == 'c') ADVANCE(432);
      END_STATE();
    case 330:
      if (lookahead == 'c') ADVANCE(558);
      END_STATE();
    case 331:
      if (lookahead == 'c') ADVANCE(445);
      END_STATE();
    case 332:
      if (lookahead == 'c') ADVANCE(448);
      END_STATE();
    case 333:
      if (lookahead == 'c') ADVANCE(1325);
      if (lookahead == 'l') ADVANCE(772);
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 334:
      if (lookahead == 'c') ADVANCE(732);
      END_STATE();
    case 335:
      if (lookahead == 'c') ADVANCE(469);
      END_STATE();
    case 336:
      if (lookahead == 'c') ADVANCE(674);
      END_STATE();
    case 337:
      if (lookahead == 'c') ADVANCE(1316);
      END_STATE();
    case 338:
      if (lookahead == 'c') ADVANCE(734);
      END_STATE();
    case 339:
      if (lookahead == 'c') ADVANCE(676);
      END_STATE();
    case 340:
      if (lookahead == 'c') ADVANCE(1336);
      END_STATE();
    case 341:
      if (lookahead == 'c') ADVANCE(486);
      END_STATE();
    case 342:
      if (lookahead == 'c') ADVANCE(678);
      END_STATE();
    case 343:
      if (lookahead == 'c') ADVANCE(1320);
      END_STATE();
    case 344:
      if (lookahead == 'c') ADVANCE(1250);
      END_STATE();
    case 345:
      if (lookahead == 'c') ADVANCE(681);
      END_STATE();
    case 346:
      if (lookahead == 'c') ADVANCE(1321);
      END_STATE();
    case 347:
      if (lookahead == 'c') ADVANCE(540);
      END_STATE();
    case 348:
      if (lookahead == 'c') ADVANCE(503);
      END_STATE();
    case 349:
      if (lookahead == 'c') ADVANCE(532);
      END_STATE();
    case 350:
      if (lookahead == 'c') ADVANCE(1279);
      END_STATE();
    case 351:
      if (lookahead == 'c') ADVANCE(1274);
      END_STATE();
    case 352:
      if (lookahead == 'c') ADVANCE(1330);
      END_STATE();
    case 353:
      if (lookahead == 'c') ADVANCE(1269);
      END_STATE();
    case 354:
      if (lookahead == 'c') ADVANCE(967);
      END_STATE();
    case 355:
      if (lookahead == 'c') ADVANCE(1284);
      END_STATE();
    case 356:
      if (lookahead == 'c') ADVANCE(1275);
      END_STATE();
    case 357:
      if (lookahead == 'c') ADVANCE(1288);
      END_STATE();
    case 358:
      if (lookahead == 'c') ADVANCE(787);
      END_STATE();
    case 359:
      if (lookahead == 'c') ADVANCE(1291);
      END_STATE();
    case 360:
      if (lookahead == 'c') ADVANCE(1294);
      END_STATE();
    case 361:
      if (lookahead == 'c') ADVANCE(1341);
      END_STATE();
    case 362:
      if (lookahead == 'c') ADVANCE(1296);
      END_STATE();
    case 363:
      if (lookahead == 'd') ADVANCE(1547);
      END_STATE();
    case 364:
      if (lookahead == 'd') ADVANCE(1533);
      END_STATE();
    case 365:
      if (lookahead == 'd') ADVANCE(1560);
      END_STATE();
    case 366:
      if (lookahead == 'd') ADVANCE(1561);
      END_STATE();
    case 367:
      if (lookahead == 'd') ADVANCE(1597);
      END_STATE();
    case 368:
      if (lookahead == 'd') ADVANCE(1585);
      END_STATE();
    case 369:
      if (lookahead == 'd') ADVANCE(1581);
      END_STATE();
    case 370:
      if (lookahead == 'd') ADVANCE(1602);
      END_STATE();
    case 371:
      if (lookahead == 'd') ADVANCE(1606);
      END_STATE();
    case 372:
      if (lookahead == 'd') ADVANCE(1574);
      END_STATE();
    case 373:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 374:
      if (lookahead == 'd') ADVANCE(379);
      if (lookahead == 's') ADVANCE(303);
      END_STATE();
    case 375:
      if (lookahead == 'd') ADVANCE(455);
      END_STATE();
    case 376:
      if (lookahead == 'd') ADVANCE(1100);
      END_STATE();
    case 377:
      if (lookahead == 'd') ADVANCE(1145);
      END_STATE();
    case 378:
      if (lookahead == 'd') ADVANCE(660);
      END_STATE();
    case 379:
      if (lookahead == 'd') ADVANCE(784);
      END_STATE();
    case 380:
      if (lookahead == 'd') ADVANCE(623);
      END_STATE();
    case 381:
      if (lookahead == 'd') ADVANCE(520);
      if (lookahead == 'p') ADVANCE(191);
      END_STATE();
    case 382:
      if (lookahead == 'd') ADVANCE(1020);
      END_STATE();
    case 383:
      if (lookahead == 'd') ADVANCE(909);
      END_STATE();
    case 384:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 385:
      if (lookahead == 'd') ADVANCE(910);
      END_STATE();
    case 386:
      if (lookahead == 'd') ADVANCE(705);
      END_STATE();
    case 387:
      if (lookahead == 'd') ADVANCE(468);
      END_STATE();
    case 388:
      if (lookahead == 'd') ADVANCE(920);
      END_STATE();
    case 389:
      if (lookahead == 'd') ADVANCE(922);
      END_STATE();
    case 390:
      if (lookahead == 'd') ADVANCE(463);
      END_STATE();
    case 391:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 392:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 393:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 394:
      if (lookahead == 'd') ADVANCE(477);
      END_STATE();
    case 395:
      if (lookahead == 'd') ADVANCE(1032);
      END_STATE();
    case 396:
      if (lookahead == 'd') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 397:
      if (lookahead == 'd') ADVANCE(964);
      END_STATE();
    case 398:
      if (lookahead == 'd') ADVANCE(122);
      END_STATE();
    case 399:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 400:
      if (lookahead == 'd') ADVANCE(471);
      END_STATE();
    case 401:
      if (lookahead == 'd') ADVANCE(1080);
      END_STATE();
    case 402:
      if (lookahead == 'd') ADVANCE(533);
      END_STATE();
    case 403:
      if (lookahead == 'd') ADVANCE(931);
      END_STATE();
    case 404:
      if (lookahead == 'd') ADVANCE(544);
      END_STATE();
    case 405:
      if (lookahead == 'd') ADVANCE(539);
      END_STATE();
    case 406:
      if (lookahead == 'd') ADVANCE(1089);
      END_STATE();
    case 407:
      if (lookahead == 'd') ADVANCE(494);
      END_STATE();
    case 408:
      if (lookahead == 'd') ADVANCE(851);
      END_STATE();
    case 409:
      if (lookahead == 'd') ADVANCE(495);
      END_STATE();
    case 410:
      if (lookahead == 'd') ADVANCE(496);
      END_STATE();
    case 411:
      if (lookahead == 'd') ADVANCE(498);
      END_STATE();
    case 412:
      if (lookahead == 'd') ADVANCE(500);
      END_STATE();
    case 413:
      if (lookahead == 'd') ADVANCE(505);
      END_STATE();
    case 414:
      if (lookahead == 'd') ADVANCE(509);
      END_STATE();
    case 415:
      if (lookahead == 'd') ADVANCE(567);
      END_STATE();
    case 416:
      if (lookahead == 'd') ADVANCE(510);
      END_STATE();
    case 417:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 418:
      if (lookahead == 'd') ADVANCE(550);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(889);
      if (lookahead == 'g') ADVANCE(272);
      if (lookahead == 'o') ADVANCE(1299);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(1442);
      END_STATE();
    case 421:
      if (lookahead == 'e') ADVANCE(1443);
      END_STATE();
    case 422:
      if (lookahead == 'e') ADVANCE(1490);
      END_STATE();
    case 423:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 424:
      if (lookahead == 'e') ADVANCE(1618);
      END_STATE();
    case 425:
      if (lookahead == 'e') ADVANCE(1554);
      END_STATE();
    case 426:
      if (lookahead == 'e') ADVANCE(1517);
      END_STATE();
    case 427:
      if (lookahead == 'e') ADVANCE(1617);
      END_STATE();
    case 428:
      if (lookahead == 'e') ADVANCE(1624);
      END_STATE();
    case 429:
      if (lookahead == 'e') ADVANCE(1385);
      if (lookahead == 'r') ADVANCE(528);
      END_STATE();
    case 430:
      if (lookahead == 'e') ADVANCE(1495);
      END_STATE();
    case 431:
      if (lookahead == 'e') ADVANCE(1556);
      END_STATE();
    case 432:
      if (lookahead == 'e') ADVANCE(1548);
      END_STATE();
    case 433:
      if (lookahead == 'e') ADVANCE(1530);
      END_STATE();
    case 434:
      if (lookahead == 'e') ADVANCE(1610);
      END_STATE();
    case 435:
      if (lookahead == 'e') ADVANCE(1563);
      END_STATE();
    case 436:
      if (lookahead == 'e') ADVANCE(1523);
      END_STATE();
    case 437:
      if (lookahead == 'e') ADVANCE(1529);
      END_STATE();
    case 438:
      if (lookahead == 'e') ADVANCE(1558);
      END_STATE();
    case 439:
      if (lookahead == 'e') ADVANCE(1566);
      END_STATE();
    case 440:
      if (lookahead == 'e') ADVANCE(1589);
      END_STATE();
    case 441:
      if (lookahead == 'e') ADVANCE(1527);
      END_STATE();
    case 442:
      if (lookahead == 'e') ADVANCE(1594);
      END_STATE();
    case 443:
      if (lookahead == 'e') ADVANCE(1595);
      END_STATE();
    case 444:
      if (lookahead == 'e') ADVANCE(1502);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(1568);
      END_STATE();
    case 446:
      if (lookahead == 'e') ADVANCE(1600);
      END_STATE();
    case 447:
      if (lookahead == 'e') ADVANCE(1598);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(1570);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == 't') ADVANCE(522);
      END_STATE();
    case 450:
      if (lookahead == 'e') ADVANCE(1383);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(1144);
      END_STATE();
    case 452:
      if (lookahead == 'e') ADVANCE(1409);
      END_STATE();
    case 453:
      if (lookahead == 'e') ADVANCE(1384);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(875);
      END_STATE();
    case 455:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 456:
      if (lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(1221);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(1068);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(790);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(818);
      END_STATE();
    case 461:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(1397);
      END_STATE();
    case 463:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(1105);
      END_STATE();
    case 465:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 466:
      if (lookahead == 'e') ADVANCE(1366);
      END_STATE();
    case 467:
      if (lookahead == 'e') ADVANCE(1070);
      END_STATE();
    case 468:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 469:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 470:
      if (lookahead == 'e') ADVANCE(1050);
      if (lookahead == 'o') ADVANCE(1305);
      END_STATE();
    case 471:
      if (lookahead == 'e') ADVANCE(1112);
      END_STATE();
    case 472:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 473:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 474:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 475:
      if (lookahead == 'e') ADVANCE(838);
      END_STATE();
    case 476:
      if (lookahead == 'e') ADVANCE(1148);
      END_STATE();
    case 477:
      if (lookahead == 'e') ADVANCE(738);
      END_STATE();
    case 478:
      if (lookahead == 'e') ADVANCE(1149);
      END_STATE();
    case 479:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 480:
      if (lookahead == 'e') ADVANCE(1257);
      END_STATE();
    case 481:
      if (lookahead == 'e') ADVANCE(873);
      END_STATE();
    case 482:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(1151);
      END_STATE();
    case 485:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 486:
      if (lookahead == 'e') ADVANCE(740);
      END_STATE();
    case 487:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 488:
      if (lookahead == 'e') ADVANCE(1228);
      END_STATE();
    case 489:
      if (lookahead == 'e') ADVANCE(855);
      END_STATE();
    case 490:
      if (lookahead == 'e') ADVANCE(1106);
      END_STATE();
    case 491:
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'i') ADVANCE(930);
      END_STATE();
    case 492:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 493:
      if (lookahead == 'e') ADVANCE(1155);
      END_STATE();
    case 494:
      if (lookahead == 'e') ADVANCE(1051);
      END_STATE();
    case 495:
      if (lookahead == 'e') ADVANCE(1109);
      END_STATE();
    case 496:
      if (lookahead == 'e') ADVANCE(1053);
      END_STATE();
    case 497:
      if (lookahead == 'e') ADVANCE(1217);
      END_STATE();
    case 498:
      if (lookahead == 'e') ADVANCE(1054);
      END_STATE();
    case 499:
      if (lookahead == 'e') ADVANCE(1158);
      END_STATE();
    case 500:
      if (lookahead == 'e') ADVANCE(1055);
      END_STATE();
    case 501:
      if (lookahead == 'e') ADVANCE(1159);
      END_STATE();
    case 502:
      if (lookahead == 'e') ADVANCE(1090);
      END_STATE();
    case 503:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 504:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 505:
      if (lookahead == 'e') ADVANCE(1057);
      END_STATE();
    case 506:
      if (lookahead == 'e') ADVANCE(1058);
      END_STATE();
    case 507:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 508:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 509:
      if (lookahead == 'e') ADVANCE(1060);
      END_STATE();
    case 510:
      if (lookahead == 'e') ADVANCE(1123);
      END_STATE();
    case 511:
      if (lookahead == 'e') ADVANCE(1088);
      END_STATE();
    case 512:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 513:
      if (lookahead == 'e') ADVANCE(1061);
      END_STATE();
    case 514:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 515:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 516:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 517:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 518:
      if (lookahead == 'e') ADVANCE(1178);
      END_STATE();
    case 519:
      if (lookahead == 'e') ADVANCE(1092);
      END_STATE();
    case 520:
      if (lookahead == 'e') ADVANCE(1358);
      END_STATE();
    case 521:
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead == 'o') ADVANCE(753);
      END_STATE();
    case 522:
      if (lookahead == 'e') ADVANCE(837);
      END_STATE();
    case 523:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 524:
      if (lookahead == 'e') ADVANCE(885);
      END_STATE();
    case 525:
      if (lookahead == 'e') ADVANCE(757);
      END_STATE();
    case 526:
      if (lookahead == 'e') ADVANCE(761);
      END_STATE();
    case 527:
      if (lookahead == 'e') ADVANCE(1182);
      END_STATE();
    case 528:
      if (lookahead == 'e') ADVANCE(615);
      END_STATE();
    case 529:
      if (lookahead == 'e') ADVANCE(638);
      END_STATE();
    case 530:
      if (lookahead == 'e') ADVANCE(1184);
      END_STATE();
    case 531:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 532:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 533:
      if (lookahead == 'e') ADVANCE(1079);
      END_STATE();
    case 534:
      if (lookahead == 'e') ADVANCE(899);
      END_STATE();
    case 535:
      if (lookahead == 'e') ADVANCE(883);
      END_STATE();
    case 536:
      if (lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 537:
      if (lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 538:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 539:
      if (lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 540:
      if (lookahead == 'e') ADVANCE(776);
      END_STATE();
    case 541:
      if (lookahead == 'e') ADVANCE(1196);
      END_STATE();
    case 542:
      if (lookahead == 'e') ADVANCE(1374);
      END_STATE();
    case 543:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 544:
      if (lookahead == 'e') ADVANCE(1138);
      END_STATE();
    case 545:
      if (lookahead == 'e') ADVANCE(1097);
      END_STATE();
    case 546:
      if (lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 547:
      if (lookahead == 'e') ADVANCE(1094);
      END_STATE();
    case 548:
      if (lookahead == 'e') ADVANCE(965);
      END_STATE();
    case 549:
      if (lookahead == 'e') ADVANCE(1191);
      END_STATE();
    case 550:
      if (lookahead == 'e') ADVANCE(1096);
      END_STATE();
    case 551:
      if (lookahead == 'e') ADVANCE(1201);
      END_STATE();
    case 552:
      if (lookahead == 'e') ADVANCE(864);
      END_STATE();
    case 553:
      if (lookahead == 'e') ADVANCE(1192);
      END_STATE();
    case 554:
      if (lookahead == 'e') ADVANCE(1202);
      END_STATE();
    case 555:
      if (lookahead == 'e') ADVANCE(1198);
      END_STATE();
    case 556:
      if (lookahead == 'e') ADVANCE(1210);
      END_STATE();
    case 557:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 558:
      if (lookahead == 'e') ADVANCE(1037);
      END_STATE();
    case 559:
      if (lookahead == 'e') ADVANCE(1263);
      END_STATE();
    case 560:
      if (lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 561:
      if (lookahead == 'e') ADVANCE(1357);
      END_STATE();
    case 562:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 563:
      if (lookahead == 'e') ADVANCE(894);
      END_STATE();
    case 564:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 565:
      if (lookahead == 'e') ADVANCE(897);
      if (lookahead == 'f') ADVANCE(990);
      END_STATE();
    case 566:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 567:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 568:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 569:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 570:
      if (lookahead == 'f') ADVANCE(1448);
      END_STATE();
    case 571:
      if (lookahead == 'f') ADVANCE(570);
      if (lookahead == 'n') ADVANCE(1447);
      END_STATE();
    case 572:
      if (lookahead == 'f') ADVANCE(570);
      if (lookahead == 'n') ADVANCE(1447);
      if (lookahead == 'u') ADVANCE(1233);
      if (lookahead == 'v') ADVANCE(458);
      END_STATE();
    case 573:
      if (lookahead == 'f') ADVANCE(1236);
      END_STATE();
    case 574:
      if (lookahead == 'f') ADVANCE(1046);
      if (lookahead == 'r') ADVANCE(1047);
      END_STATE();
    case 575:
      if (lookahead == 'f') ADVANCE(688);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == 'm') ADVANCE(962);
      if (lookahead == 'o') ADVANCE(1031);
      if (lookahead == 'r') ADVANCE(1312);
      if (lookahead == 'v') ADVANCE(201);
      END_STATE();
    case 576:
      if (lookahead == 'f') ADVANCE(583);
      END_STATE();
    case 577:
      if (lookahead == 'f') ADVANCE(999);
      END_STATE();
    case 578:
      if (lookahead == 'f') ADVANCE(778);
      END_STATE();
    case 579:
      if (lookahead == 'f') ADVANCE(205);
      END_STATE();
    case 580:
      if (lookahead == 'f') ADVANCE(452);
      END_STATE();
    case 581:
      if (lookahead == 'f') ADVANCE(663);
      END_STATE();
    case 582:
      if (lookahead == 'f') ADVANCE(935);
      END_STATE();
    case 583:
      if (lookahead == 'f') ADVANCE(1186);
      END_STATE();
    case 584:
      if (lookahead == 'f') ADVANCE(987);
      END_STATE();
    case 585:
      if (lookahead == 'f') ADVANCE(490);
      END_STATE();
    case 586:
      if (lookahead == 'f') ADVANCE(949);
      END_STATE();
    case 587:
      if (lookahead == 'f') ADVANCE(986);
      END_STATE();
    case 588:
      if (lookahead == 'f') ADVANCE(701);
      END_STATE();
    case 589:
      if (lookahead == 'f') ADVANCE(245);
      END_STATE();
    case 590:
      if (lookahead == 'f') ADVANCE(985);
      END_STATE();
    case 591:
      if (lookahead == 'f') ADVANCE(141);
      END_STATE();
    case 592:
      if (lookahead == 'f') ADVANCE(263);
      if (lookahead == 'r') ADVANCE(659);
      END_STATE();
    case 593:
      if (lookahead == 'f') ADVANCE(993);
      END_STATE();
    case 594:
      if (lookahead == 'f') ADVANCE(994);
      END_STATE();
    case 595:
      if (lookahead == 'g') ADVANCE(272);
      END_STATE();
    case 596:
      if (lookahead == 'g') ADVANCE(1468);
      END_STATE();
    case 597:
      if (lookahead == 'g') ADVANCE(1489);
      END_STATE();
    case 598:
      if (lookahead == 'g') ADVANCE(1511);
      END_STATE();
    case 599:
      if (lookahead == 'g') ADVANCE(1544);
      END_STATE();
    case 600:
      if (lookahead == 'g') ADVANCE(1611);
      END_STATE();
    case 601:
      if (lookahead == 'g') ADVANCE(1536);
      END_STATE();
    case 602:
      if (lookahead == 'g') ADVANCE(1496);
      END_STATE();
    case 603:
      if (lookahead == 'g') ADVANCE(1576);
      END_STATE();
    case 604:
      if (lookahead == 'g') ADVANCE(1584);
      END_STATE();
    case 605:
      if (lookahead == 'g') ADVANCE(132);
      END_STATE();
    case 606:
      if (lookahead == 'g') ADVANCE(880);
      END_STATE();
    case 607:
      if (lookahead == 'g') ADVANCE(624);
      END_STATE();
    case 608:
      if (lookahead == 'g') ADVANCE(1235);
      END_STATE();
    case 609:
      if (lookahead == 'g') ADVANCE(1119);
      if (lookahead == 't') ADVANCE(718);
      END_STATE();
    case 610:
      if (lookahead == 'g') ADVANCE(1152);
      END_STATE();
    case 611:
      if (lookahead == 'g') ADVANCE(667);
      END_STATE();
    case 612:
      if (lookahead == 'g') ADVANCE(1156);
      END_STATE();
    case 613:
      if (lookahead == 'g') ADVANCE(906);
      END_STATE();
    case 614:
      if (lookahead == 'g') ADVANCE(436);
      END_STATE();
    case 615:
      if (lookahead == 'g') ADVANCE(450);
      END_STATE();
    case 616:
      if (lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 617:
      if (lookahead == 'g') ADVANCE(1164);
      END_STATE();
    case 618:
      if (lookahead == 'g') ADVANCE(453);
      END_STATE();
    case 619:
      if (lookahead == 'g') ADVANCE(1141);
      END_STATE();
    case 620:
      if (lookahead == 'g') ADVANCE(479);
      END_STATE();
    case 621:
      if (lookahead == 'g') ADVANCE(1085);
      END_STATE();
    case 622:
      if (lookahead == 'g') ADVANCE(547);
      END_STATE();
    case 623:
      if (lookahead == 'g') ADVANCE(493);
      END_STATE();
    case 624:
      if (lookahead == 'g') ADVANCE(684);
      END_STATE();
    case 625:
      if (lookahead == 'g') ADVANCE(519);
      END_STATE();
    case 626:
      if (lookahead == 'g') ADVANCE(890);
      END_STATE();
    case 627:
      if (lookahead == 'h') ADVANCE(381);
      END_STATE();
    case 628:
      if (lookahead == 'h') ADVANCE(1531);
      END_STATE();
    case 629:
      if (lookahead == 'h') ADVANCE(1613);
      END_STATE();
    case 630:
      if (lookahead == 'h') ADVANCE(1591);
      END_STATE();
    case 631:
      if (lookahead == 'h') ADVANCE(1604);
      END_STATE();
    case 632:
      if (lookahead == 'h') ADVANCE(196);
      END_STATE();
    case 633:
      if (lookahead == 'h') ADVANCE(953);
      END_STATE();
    case 634:
      if (lookahead == 'h') ADVANCE(259);
      END_STATE();
    case 635:
      if (lookahead == 'h') ADVANCE(927);
      END_STATE();
    case 636:
      if (lookahead == 'h') ADVANCE(543);
      END_STATE();
    case 637:
      if (lookahead == 'h') ADVANCE(936);
      END_STATE();
    case 638:
      if (lookahead == 'h') ADVANCE(234);
      END_STATE();
    case 639:
      if (lookahead == 'h') ADVANCE(115);
      END_STATE();
    case 640:
      if (lookahead == 'h') ADVANCE(134);
      END_STATE();
    case 641:
      if (lookahead == 'h') ADVANCE(188);
      END_STATE();
    case 642:
      if (lookahead == 'h') ADVANCE(714);
      END_STATE();
    case 643:
      if (lookahead == 'h') ADVANCE(228);
      END_STATE();
    case 644:
      if (lookahead == 'h') ADVANCE(552);
      END_STATE();
    case 645:
      if (lookahead == 'i') ADVANCE(375);
      if (lookahead == 'o') ADVANCE(1348);
      END_STATE();
    case 646:
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 647:
      if (lookahead == 'i') ADVANCE(1408);
      END_STATE();
    case 648:
      if (lookahead == 'i') ADVANCE(1343);
      END_STATE();
    case 649:
      if (lookahead == 'i') ADVANCE(805);
      END_STATE();
    case 650:
      if (lookahead == 'i') ADVANCE(1411);
      END_STATE();
    case 651:
      if (lookahead == 'i') ADVANCE(830);
      if (lookahead == 'l') ADVANCE(1304);
      if (lookahead == 'o') ADVANCE(1101);
      END_STATE();
    case 652:
      if (lookahead == 'i') ADVANCE(830);
      if (lookahead == 'l') ADVANCE(1304);
      if (lookahead == 'o') ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1460);
      END_STATE();
    case 653:
      if (lookahead == 'i') ADVANCE(1349);
      END_STATE();
    case 654:
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'n') ADVANCE(542);
      if (lookahead == 'p') ADVANCE(239);
      if (lookahead == 's') ADVANCE(686);
      if (lookahead == 'x') ADVANCE(1073);
      END_STATE();
    case 655:
      if (lookahead == 'i') ADVANCE(1410);
      END_STATE();
    case 656:
      if (lookahead == 'i') ADVANCE(811);
      END_STATE();
    case 657:
      if (lookahead == 'i') ADVANCE(809);
      END_STATE();
    case 658:
      if (lookahead == 'i') ADVANCE(825);
      if (lookahead == 'o') ADVANCE(1311);
      END_STATE();
    case 659:
      if (lookahead == 'i') ADVANCE(611);
      END_STATE();
    case 660:
      if (lookahead == 'i') ADVANCE(832);
      END_STATE();
    case 661:
      if (lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 662:
      if (lookahead == 'i') ADVANCE(1179);
      END_STATE();
    case 663:
      if (lookahead == 'i') ADVANCE(836);
      END_STATE();
    case 664:
      if (lookahead == 'i') ADVANCE(968);
      END_STATE();
    case 665:
      if (lookahead == 'i') ADVANCE(1029);
      END_STATE();
    case 666:
      if (lookahead == 'i') ADVANCE(1248);
      END_STATE();
    case 667:
      if (lookahead == 'i') ADVANCE(367);
      END_STATE();
    case 668:
      if (lookahead == 'i') ADVANCE(1280);
      END_STATE();
    case 669:
      if (lookahead == 'i') ADVANCE(1072);
      END_STATE();
    case 670:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 671:
      if (lookahead == 'i') ADVANCE(1237);
      END_STATE();
    case 672:
      if (lookahead == 'i') ADVANCE(833);
      END_STATE();
    case 673:
      if (lookahead == 'i') ADVANCE(843);
      END_STATE();
    case 674:
      if (lookahead == 'i') ADVANCE(1238);
      END_STATE();
    case 675:
      if (lookahead == 'i') ADVANCE(848);
      END_STATE();
    case 676:
      if (lookahead == 'i') ADVANCE(1243);
      END_STATE();
    case 677:
      if (lookahead == 'i') ADVANCE(849);
      END_STATE();
    case 678:
      if (lookahead == 'i') ADVANCE(1247);
      END_STATE();
    case 679:
      if (lookahead == 'i') ADVANCE(1188);
      END_STATE();
    case 680:
      if (lookahead == 'i') ADVANCE(907);
      END_STATE();
    case 681:
      if (lookahead == 'i') ADVANCE(1249);
      END_STATE();
    case 682:
      if (lookahead == 'i') ADVANCE(870);
      END_STATE();
    case 683:
      if (lookahead == 'i') ADVANCE(850);
      END_STATE();
    case 684:
      if (lookahead == 'i') ADVANCE(852);
      END_STATE();
    case 685:
      if (lookahead == 'i') ADVANCE(1350);
      END_STATE();
    case 686:
      if (lookahead == 'i') ADVANCE(1405);
      END_STATE();
    case 687:
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 688:
      if (lookahead == 'i') ADVANCE(752);
      END_STATE();
    case 689:
      if (lookahead == 'i') ADVANCE(1406);
      END_STATE();
    case 690:
      if (lookahead == 'i') ADVANCE(1245);
      END_STATE();
    case 691:
      if (lookahead == 'i') ADVANCE(815);
      END_STATE();
    case 692:
      if (lookahead == 'i') ADVANCE(932);
      END_STATE();
    case 693:
      if (lookahead == 'i') ADVANCE(1345);
      END_STATE();
    case 694:
      if (lookahead == 'i') ADVANCE(1407);
      END_STATE();
    case 695:
      if (lookahead == 'i') ADVANCE(816);
      END_STATE();
    case 696:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 697:
      if (lookahead == 'i') ADVANCE(934);
      END_STATE();
    case 698:
      if (lookahead == 'i') ADVANCE(1346);
      END_STATE();
    case 699:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 700:
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 701:
      if (lookahead == 'i') ADVANCE(767);
      END_STATE();
    case 702:
      if (lookahead == 'i') ADVANCE(1347);
      END_STATE();
    case 703:
      if (lookahead == 'i') ADVANCE(871);
      END_STATE();
    case 704:
      if (lookahead == 'i') ADVANCE(877);
      END_STATE();
    case 705:
      if (lookahead == 'i') ADVANCE(489);
      END_STATE();
    case 706:
      if (lookahead == 'i') ADVANCE(946);
      END_STATE();
    case 707:
      if (lookahead == 'i') ADVANCE(866);
      END_STATE();
    case 708:
      if (lookahead == 'i') ADVANCE(948);
      END_STATE();
    case 709:
      if (lookahead == 'i') ADVANCE(415);
      END_STATE();
    case 710:
      if (lookahead == 'i') ADVANCE(882);
      END_STATE();
    case 711:
      if (lookahead == 'i') ADVANCE(886);
      if (lookahead == 'o') ADVANCE(1095);
      END_STATE();
    case 712:
      if (lookahead == 'i') ADVANCE(971);
      END_STATE();
    case 713:
      if (lookahead == 'i') ADVANCE(1352);
      END_STATE();
    case 714:
      if (lookahead == 'i') ADVANCE(789);
      END_STATE();
    case 715:
      if (lookahead == 'i') ADVANCE(1355);
      END_STATE();
    case 716:
      if (lookahead == 'i') ADVANCE(1277);
      END_STATE();
    case 717:
      if (lookahead == 'i') ADVANCE(981);
      END_STATE();
    case 718:
      if (lookahead == 'i') ADVANCE(1285);
      END_STATE();
    case 719:
      if (lookahead == 'i') ADVANCE(626);
      if (lookahead == 'o') ADVANCE(576);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == 's') ADVANCE(326);
      END_STATE();
    case 720:
      if (lookahead == 'i') ADVANCE(898);
      END_STATE();
    case 721:
      if (lookahead == 'i') ADVANCE(1359);
      END_STATE();
    case 722:
      if (lookahead == 'i') ADVANCE(900);
      if (lookahead == 'z') ADVANCE(933);
      END_STATE();
    case 723:
      if (lookahead == 'i') ADVANCE(1360);
      END_STATE();
    case 724:
      if (lookahead == 'k') ADVANCE(1543);
      END_STATE();
    case 725:
      if (lookahead == 'k') ADVANCE(1608);
      END_STATE();
    case 726:
      if (lookahead == 'k') ADVANCE(1542);
      END_STATE();
    case 727:
      if (lookahead == 'k') ADVANCE(1506);
      END_STATE();
    case 728:
      if (lookahead == 'k') ADVANCE(581);
      END_STATE();
    case 729:
      if (lookahead == 'k') ADVANCE(1176);
      END_STATE();
    case 730:
      if (lookahead == 'k') ADVANCE(75);
      END_STATE();
    case 731:
      if (lookahead == 'k') ADVANCE(462);
      END_STATE();
    case 732:
      if (lookahead == 'k') ADVANCE(137);
      END_STATE();
    case 733:
      if (lookahead == 'k') ADVANCE(673);
      END_STATE();
    case 734:
      if (lookahead == 'k') ADVANCE(144);
      END_STATE();
    case 735:
      if (lookahead == 'k') ADVANCE(1219);
      END_STATE();
    case 736:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 737:
      if (lookahead == 'l') ADVANCE(1480);
      END_STATE();
    case 738:
      if (lookahead == 'l') ADVANCE(1549);
      END_STATE();
    case 739:
      if (lookahead == 'l') ADVANCE(1532);
      END_STATE();
    case 740:
      if (lookahead == 'l') ADVANCE(1559);
      END_STATE();
    case 741:
      if (lookahead == 'l') ADVANCE(1537);
      END_STATE();
    case 742:
      if (lookahead == 'l') ADVANCE(913);
      if (lookahead == 'o') ADVANCE(333);
      if (lookahead == 'u') ADVANCE(747);
      END_STATE();
    case 743:
      if (lookahead == 'l') ADVANCE(646);
      if (lookahead == 'o') ADVANCE(736);
      if (lookahead == 'u') ADVANCE(1065);
      END_STATE();
    case 744:
      if (lookahead == 'l') ADVANCE(646);
      if (lookahead == 'o') ADVANCE(736);
      if (lookahead == 'u') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1460);
      END_STATE();
    case 745:
      if (lookahead == 'l') ADVANCE(904);
      if (lookahead == 'w') ADVANCE(173);
      END_STATE();
    case 746:
      if (lookahead == 'l') ADVANCE(1234);
      END_STATE();
    case 747:
      if (lookahead == 'l') ADVANCE(749);
      END_STATE();
    case 748:
      if (lookahead == 'l') ADVANCE(952);
      END_STATE();
    case 749:
      if (lookahead == 'l') ADVANCE(1170);
      END_STATE();
    case 750:
      if (lookahead == 'l') ADVANCE(423);
      END_STATE();
    case 751:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 752:
      if (lookahead == 'l') ADVANCE(425);
      END_STATE();
    case 753:
      if (lookahead == 'l') ADVANCE(760);
      END_STATE();
    case 754:
      if (lookahead == 'l') ADVANCE(758);
      END_STATE();
    case 755:
      if (lookahead == 'l') ADVANCE(428);
      END_STATE();
    case 756:
      if (lookahead == 'l') ADVANCE(773);
      END_STATE();
    case 757:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 758:
      if (lookahead == 'l') ADVANCE(915);
      END_STATE();
    case 759:
      if (lookahead == 'l') ADVANCE(741);
      END_STATE();
    case 760:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 761:
      if (lookahead == 'l') ADVANCE(976);
      END_STATE();
    case 762:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 763:
      if (lookahead == 'l') ADVANCE(929);
      END_STATE();
    case 764:
      if (lookahead == 'l') ADVANCE(1230);
      END_STATE();
    case 765:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 766:
      if (lookahead == 'l') ADVANCE(437);
      END_STATE();
    case 767:
      if (lookahead == 'l') ADVANCE(438);
      END_STATE();
    case 768:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 769:
      if (lookahead == 'l') ADVANCE(1398);
      END_STATE();
    case 770:
      if (lookahead == 'l') ADVANCE(699);
      END_STATE();
    case 771:
      if (lookahead == 'l') ADVANCE(1172);
      END_STATE();
    case 772:
      if (lookahead == 'l') ADVANCE(954);
      END_STATE();
    case 773:
      if (lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 774:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 775:
      if (lookahead == 'l') ADVANCE(957);
      END_STATE();
    case 776:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 777:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 778:
      if (lookahead == 'l') ADVANCE(991);
      END_STATE();
    case 779:
      if (lookahead == 'l') ADVANCE(672);
      END_STATE();
    case 780:
      if (lookahead == 'l') ADVANCE(478);
      END_STATE();
    case 781:
      if (lookahead == 'l') ADVANCE(966);
      END_STATE();
    case 782:
      if (lookahead == 'l') ADVANCE(970);
      END_STATE();
    case 783:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 784:
      if (lookahead == 'l') ADVANCE(482);
      END_STATE();
    case 785:
      if (lookahead == 'l') ADVANCE(549);
      END_STATE();
    case 786:
      if (lookahead == 'l') ADVANCE(492);
      END_STATE();
    case 787:
      if (lookahead == 'l') ADVANCE(499);
      END_STATE();
    case 788:
      if (lookahead == 'l') ADVANCE(512);
      END_STATE();
    case 789:
      if (lookahead == 'l') ADVANCE(515);
      END_STATE();
    case 790:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 791:
      if (lookahead == 'l') ADVANCE(781);
      END_STATE();
    case 792:
      if (lookahead == 'l') ADVANCE(963);
      END_STATE();
    case 793:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 794:
      if (lookahead == 'l') ADVANCE(551);
      END_STATE();
    case 795:
      if (lookahead == 'l') ADVANCE(782);
      END_STATE();
    case 796:
      if (lookahead == 'l') ADVANCE(978);
      END_STATE();
    case 797:
      if (lookahead == 'l') ADVANCE(553);
      END_STATE();
    case 798:
      if (lookahead == 'l') ADVANCE(554);
      END_STATE();
    case 799:
      if (lookahead == 'l') ADVANCE(265);
      END_STATE();
    case 800:
      if (lookahead == 'm') ADVANCE(1545);
      END_STATE();
    case 801:
      if (lookahead == 'm') ADVANCE(260);
      END_STATE();
    case 802:
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 803:
      if (lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 804:
      if (lookahead == 'm') ADVANCE(748);
      END_STATE();
    case 805:
      if (lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 806:
      if (lookahead == 'm') ADVANCE(996);
      END_STATE();
    case 807:
      if (lookahead == 'm') ADVANCE(284);
      END_STATE();
    case 808:
      if (lookahead == 'm') ADVANCE(992);
      if (lookahead == 'r') ADVANCE(523);
      END_STATE();
    case 809:
      if (lookahead == 'm') ADVANCE(650);
      END_STATE();
    case 810:
      if (lookahead == 'm') ADVANCE(193);
      END_STATE();
    case 811:
      if (lookahead == 'm') ADVANCE(434);
      END_STATE();
    case 812:
      if (lookahead == 'm') ADVANCE(1161);
      END_STATE();
    case 813:
      if (lookahead == 'm') ADVANCE(1162);
      END_STATE();
    case 814:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 815:
      if (lookahead == 'm') ADVANCE(548);
      END_STATE();
    case 816:
      if (lookahead == 'm') ADVANCE(442);
      END_STATE();
    case 817:
      if (lookahead == 'm') ADVANCE(1039);
      END_STATE();
    case 818:
      if (lookahead == 'm') ADVANCE(1317);
      END_STATE();
    case 819:
      if (lookahead == 'm') ADVANCE(943);
      END_STATE();
    case 820:
      if (lookahead == 'm') ADVANCE(983);
      END_STATE();
    case 821:
      if (lookahead == 'm') ADVANCE(559);
      END_STATE();
    case 822:
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == 'x') ADVANCE(449);
      END_STATE();
    case 823:
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == 'x') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1460);
      END_STATE();
    case 824:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 825:
      if (lookahead == 'n') ADVANCE(1497);
      END_STATE();
    case 826:
      if (lookahead == 'n') ADVANCE(1484);
      END_STATE();
    case 827:
      if (lookahead == 'n') ADVANCE(1483);
      END_STATE();
    case 828:
      if (lookahead == 'n') ADVANCE(1562);
      END_STATE();
    case 829:
      if (lookahead == 'n') ADVANCE(1539);
      END_STATE();
    case 830:
      if (lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 831:
      if (lookahead == 'n') ADVANCE(1171);
      END_STATE();
    case 832:
      if (lookahead == 'n') ADVANCE(598);
      END_STATE();
    case 833:
      if (lookahead == 'n') ADVANCE(725);
      END_STATE();
    case 834:
      if (lookahead == 'n') ADVANCE(378);
      END_STATE();
    case 835:
      if (lookahead == 'n') ADVANCE(1173);
      END_STATE();
    case 836:
      if (lookahead == 'n') ADVANCE(622);
      END_STATE();
    case 837:
      if (lookahead == 'n') ADVANCE(384);
      END_STATE();
    case 838:
      if (lookahead == 'n') ADVANCE(608);
      END_STATE();
    case 839:
      if (lookahead == 'n') ADVANCE(1308);
      END_STATE();
    case 840:
      if (lookahead == 'n') ADVANCE(373);
      END_STATE();
    case 841:
      if (lookahead == 'n') ADVANCE(1168);
      END_STATE();
    case 842:
      if (lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 843:
      if (lookahead == 'n') ADVANCE(600);
      END_STATE();
    case 844:
      if (lookahead == 'n') ADVANCE(944);
      END_STATE();
    case 845:
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 846:
      if (lookahead == 'n') ADVANCE(398);
      END_STATE();
    case 847:
      if (lookahead == 'n') ADVANCE(1227);
      END_STATE();
    case 848:
      if (lookahead == 'n') ADVANCE(601);
      END_STATE();
    case 849:
      if (lookahead == 'n') ADVANCE(602);
      END_STATE();
    case 850:
      if (lookahead == 'n') ADVANCE(603);
      END_STATE();
    case 851:
      if (lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 852:
      if (lookahead == 'n') ADVANCE(604);
      END_STATE();
    case 853:
      if (lookahead == 'n') ADVANCE(370);
      END_STATE();
    case 854:
      if (lookahead == 'n') ADVANCE(1150);
      END_STATE();
    case 855:
      if (lookahead == 'n') ADVANCE(1253);
      END_STATE();
    case 856:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 857:
      if (lookahead == 'n') ADVANCE(1160);
      END_STATE();
    case 858:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 859:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 860:
      if (lookahead == 'n') ADVANCE(443);
      END_STATE();
    case 861:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 862:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 863:
      if (lookahead == 'n') ADVANCE(466);
      END_STATE();
    case 864:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 865:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 866:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 867:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 868:
      if (lookahead == 'n') ADVANCE(464);
      if (lookahead == 's') ADVANCE(1266);
      END_STATE();
    case 869:
      if (lookahead == 'n') ADVANCE(614);
      END_STATE();
    case 870:
      if (lookahead == 'n') ADVANCE(617);
      END_STATE();
    case 871:
      if (lookahead == 'n') ADVANCE(388);
      END_STATE();
    case 872:
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 873:
      if (lookahead == 'n') ADVANCE(1282);
      END_STATE();
    case 874:
      if (lookahead == 'n') ADVANCE(324);
      END_STATE();
    case 875:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 876:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 877:
      if (lookahead == 'n') ADVANCE(389);
      END_STATE();
    case 878:
      if (lookahead == 'n') ADVANCE(961);
      END_STATE();
    case 879:
      if (lookahead == 'n') ADVANCE(716);
      END_STATE();
    case 880:
      if (lookahead == 'n') ADVANCE(938);
      END_STATE();
    case 881:
      if (lookahead == 'n') ADVANCE(331);
      END_STATE();
    case 882:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 883:
      if (lookahead == 'n') ADVANCE(1190);
      END_STATE();
    case 884:
      if (lookahead == 'n') ADVANCE(682);
      END_STATE();
    case 885:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 886:
      if (lookahead == 'n') ADVANCE(625);
      END_STATE();
    case 887:
      if (lookahead == 'n') ADVANCE(1331);
      END_STATE();
    case 888:
      if (lookahead == 'n') ADVANCE(347);
      END_STATE();
    case 889:
      if (lookahead == 'n') ADVANCE(402);
      if (lookahead == 'p') ADVANCE(557);
      if (lookahead == 's') ADVANCE(647);
      END_STATE();
    case 890:
      if (lookahead == 'n') ADVANCE(988);
      END_STATE();
    case 891:
      if (lookahead == 'n') ADVANCE(1356);
      END_STATE();
    case 892:
      if (lookahead == 'n') ADVANCE(1283);
      END_STATE();
    case 893:
      if (lookahead == 'n') ADVANCE(409);
      END_STATE();
    case 894:
      if (lookahead == 'n') ADVANCE(416);
      END_STATE();
    case 895:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 896:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 897:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 898:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 899:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 900:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 901:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 902:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 903:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 904:
      if (lookahead == 'o') ADVANCE(1367);
      END_STATE();
    case 905:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 906:
      if (lookahead == 'o') ADVANCE(1575);
      END_STATE();
    case 907:
      if (lookahead == 'o') ADVANCE(1571);
      END_STATE();
    case 908:
      if (lookahead == 'o') ADVANCE(1445);
      END_STATE();
    case 909:
      if (lookahead == 'o') ADVANCE(1361);
      END_STATE();
    case 910:
      if (lookahead == 'o') ADVANCE(1362);
      END_STATE();
    case 911:
      if (lookahead == 'o') ADVANCE(1303);
      END_STATE();
    case 912:
      if (lookahead == 'o') ADVANCE(1048);
      END_STATE();
    case 913:
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 914:
      if (lookahead == 'o') ADVANCE(814);
      END_STATE();
    case 915:
      if (lookahead == 'o') ADVANCE(1363);
      END_STATE();
    case 916:
      if (lookahead == 'o') ADVANCE(874);
      END_STATE();
    case 917:
      if (lookahead == 'o') ADVANCE(610);
      END_STATE();
    case 918:
      if (lookahead == 'o') ADVANCE(352);
      END_STATE();
    case 919:
      if (lookahead == 'o') ADVANCE(1377);
      END_STATE();
    case 920:
      if (lookahead == 'o') ADVANCE(1379);
      END_STATE();
    case 921:
      if (lookahead == 'o') ADVANCE(1067);
      END_STATE();
    case 922:
      if (lookahead == 'o') ADVANCE(1365);
      END_STATE();
    case 923:
      if (lookahead == 'o') ADVANCE(1026);
      END_STATE();
    case 924:
      if (lookahead == 'o') ADVANCE(591);
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 925:
      if (lookahead == 'o') ADVANCE(856);
      if (lookahead == 'p') ADVANCE(1078);
      END_STATE();
    case 926:
      if (lookahead == 'o') ADVANCE(1323);
      END_STATE();
    case 927:
      if (lookahead == 'o') ADVANCE(366);
      END_STATE();
    case 928:
      if (lookahead == 'o') ADVANCE(1313);
      END_STATE();
    case 929:
      if (lookahead == 'o') ADVANCE(613);
      END_STATE();
    case 930:
      if (lookahead == 'o') ADVANCE(826);
      END_STATE();
    case 931:
      if (lookahead == 'o') ADVANCE(1329);
      END_STATE();
    case 932:
      if (lookahead == 'o') ADVANCE(827);
      END_STATE();
    case 933:
      if (lookahead == 'o') ADVANCE(914);
      END_STATE();
    case 934:
      if (lookahead == 'o') ADVANCE(895);
      END_STATE();
    case 935:
      if (lookahead == 'o') ADVANCE(1066);
      END_STATE();
    case 936:
      if (lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 937:
      if (lookahead == 'o') ADVANCE(828);
      END_STATE();
    case 938:
      if (lookahead == 'o') ADVANCE(1142);
      END_STATE();
    case 939:
      if (lookahead == 'o') ADVANCE(1081);
      END_STATE();
    case 940:
      if (lookahead == 'o') ADVANCE(1117);
      END_STATE();
    case 941:
      if (lookahead == 'o') ADVANCE(860);
      END_STATE();
    case 942:
      if (lookahead == 'o') ADVANCE(1052);
      END_STATE();
    case 943:
      if (lookahead == 'o') ADVANCE(879);
      END_STATE();
    case 944:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 945:
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 946:
      if (lookahead == 'o') ADVANCE(829);
      END_STATE();
    case 947:
      if (lookahead == 'o') ADVANCE(1056);
      END_STATE();
    case 948:
      if (lookahead == 'o') ADVANCE(1059);
      END_STATE();
    case 949:
      if (lookahead == 'o') ADVANCE(1091);
      END_STATE();
    case 950:
      if (lookahead == 'o') ADVANCE(1063);
      END_STATE();
    case 951:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 952:
      if (lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 953:
      if (lookahead == 'o') ADVANCE(616);
      END_STATE();
    case 954:
      if (lookahead == 'o') ADVANCE(1380);
      END_STATE();
    case 955:
      if (lookahead == 'o') ADVANCE(588);
      END_STATE();
    case 956:
      if (lookahead == 'o') ADVANCE(1314);
      END_STATE();
    case 957:
      if (lookahead == 'o') ADVANCE(612);
      END_STATE();
    case 958:
      if (lookahead == 'o') ADVANCE(1023);
      END_STATE();
    case 959:
      if (lookahead == 'o') ADVANCE(1074);
      END_STATE();
    case 960:
      if (lookahead == 'o') ADVANCE(901);
      END_STATE();
    case 961:
      if (lookahead == 'o') ADVANCE(1318);
      END_STATE();
    case 962:
      if (lookahead == 'o') ADVANCE(394);
      END_STATE();
    case 963:
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 964:
      if (lookahead == 'o') ADVANCE(1372);
      END_STATE();
    case 965:
      if (lookahead == 'o') ADVANCE(1319);
      END_STATE();
    case 966:
      if (lookahead == 'o') ADVANCE(1373);
      END_STATE();
    case 967:
      if (lookahead == 'o') ADVANCE(903);
      END_STATE();
    case 968:
      if (lookahead == 'o') ADVANCE(854);
      END_STATE();
    case 969:
      if (lookahead == 'o') ADVANCE(858);
      END_STATE();
    case 970:
      if (lookahead == 'o') ADVANCE(1381);
      END_STATE();
    case 971:
      if (lookahead == 'o') ADVANCE(857);
      END_STATE();
    case 972:
      if (lookahead == 'o') ADVANCE(759);
      END_STATE();
    case 973:
      if (lookahead == 'o') ADVANCE(1087);
      END_STATE();
    case 974:
      if (lookahead == 'o') ADVANCE(859);
      END_STATE();
    case 975:
      if (lookahead == 'o') ADVANCE(1098);
      END_STATE();
    case 976:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 977:
      if (lookahead == 'o') ADVANCE(861);
      END_STATE();
    case 978:
      if (lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 979:
      if (lookahead == 'o') ADVANCE(862);
      END_STATE();
    case 980:
      if (lookahead == 'o') ADVANCE(865);
      END_STATE();
    case 981:
      if (lookahead == 'o') ADVANCE(867);
      END_STATE();
    case 982:
      if (lookahead == 'o') ADVANCE(1354);
      END_STATE();
    case 983:
      if (lookahead == 'o') ADVANCE(1328);
      END_STATE();
    case 984:
      if (lookahead == 'o') ADVANCE(1327);
      END_STATE();
    case 985:
      if (lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 986:
      if (lookahead == 'o') ADVANCE(1120);
      END_STATE();
    case 987:
      if (lookahead == 'o') ADVANCE(892);
      END_STATE();
    case 988:
      if (lookahead == 'o') ADVANCE(1139);
      END_STATE();
    case 989:
      if (lookahead == 'o') ADVANCE(1332);
      END_STATE();
    case 990:
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 991:
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 992:
      if (lookahead == 'o') ADVANCE(1353);
      END_STATE();
    case 993:
      if (lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 994:
      if (lookahead == 'o') ADVANCE(346);
      END_STATE();
    case 995:
      if (lookahead == 'o') ADVANCE(1130);
      END_STATE();
    case 996:
      if (lookahead == 'o') ADVANCE(1337);
      END_STATE();
    case 997:
      if (lookahead == 'o') ADVANCE(1334);
      END_STATE();
    case 998:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 999:
      if (lookahead == 'o') ADVANCE(795);
      END_STATE();
    case 1000:
      if (lookahead == 'o') ADVANCE(1042);
      END_STATE();
    case 1001:
      if (lookahead == 'o') ADVANCE(1132);
      END_STATE();
    case 1002:
      if (lookahead == 'o') ADVANCE(1043);
      END_STATE();
    case 1003:
      if (lookahead == 'o') ADVANCE(1133);
      END_STATE();
    case 1004:
      if (lookahead == 'o') ADVANCE(1044);
      END_STATE();
    case 1005:
      if (lookahead == 'o') ADVANCE(1134);
      END_STATE();
    case 1006:
      if (lookahead == 'o') ADVANCE(1135);
      END_STATE();
    case 1007:
      if (lookahead == 'o') ADVANCE(1136);
      END_STATE();
    case 1008:
      if (lookahead == 'o') ADVANCE(1137);
      END_STATE();
    case 1009:
      if (lookahead == 'o') ADVANCE(1140);
      END_STATE();
    case 1010:
      if (lookahead == 'o') ADVANCE(1143);
      END_STATE();
    case 1011:
      if (lookahead == 'o') ADVANCE(902);
      END_STATE();
    case 1012:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 1013:
      if (lookahead == 'p') ADVANCE(1540);
      END_STATE();
    case 1014:
      if (lookahead == 'p') ADVANCE(769);
      END_STATE();
    case 1015:
      if (lookahead == 'p') ADVANCE(280);
      END_STATE();
    case 1016:
      if (lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 1017:
      if (lookahead == 'p') ADVANCE(1169);
      END_STATE();
    case 1018:
      if (lookahead == 'p') ADVANCE(1040);
      END_STATE();
    case 1019:
      if (lookahead == 'p') ADVANCE(1307);
      END_STATE();
    case 1020:
      if (lookahead == 'p') ADVANCE(812);
      END_STATE();
    case 1021:
      if (lookahead == 'p') ADVANCE(461);
      if (lookahead == 't') ADVANCE(1111);
      END_STATE();
    case 1022:
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 1023:
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 1024:
      if (lookahead == 'p') ADVANCE(1071);
      END_STATE();
    case 1025:
      if (lookahead == 'p') ADVANCE(777);
      END_STATE();
    case 1026:
      if (lookahead == 'p') ADVANCE(1261);
      END_STATE();
    case 1027:
      if (lookahead == 'p') ADVANCE(919);
      END_STATE();
    case 1028:
      if (lookahead == 'p') ADVANCE(1154);
      END_STATE();
    case 1029:
      if (lookahead == 'p') ADVANCE(439);
      END_STATE();
    case 1030:
      if (lookahead == 'p') ADVANCE(560);
      END_STATE();
    case 1031:
      if (lookahead == 'p') ADVANCE(1239);
      END_STATE();
    case 1032:
      if (lookahead == 'p') ADVANCE(813);
      END_STATE();
    case 1033:
      if (lookahead == 'p') ADVANCE(675);
      END_STATE();
    case 1034:
      if (lookahead == 'p') ADVANCE(939);
      END_STATE();
    case 1035:
      if (lookahead == 'p') ADVANCE(283);
      END_STATE();
    case 1036:
      if (lookahead == 'p') ADVANCE(1115);
      END_STATE();
    case 1037:
      if (lookahead == 'p') ADVANCE(1286);
      END_STATE();
    case 1038:
      if (lookahead == 'p') ADVANCE(1116);
      END_STATE();
    case 1039:
      if (lookahead == 'p') ADVANCE(788);
      END_STATE();
    case 1040:
      if (lookahead == 'p') ADVANCE(1128);
      END_STATE();
    case 1041:
      if (lookahead == 'p') ADVANCE(256);
      END_STATE();
    case 1042:
      if (lookahead == 'p') ADVANCE(255);
      END_STATE();
    case 1043:
      if (lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 1044:
      if (lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 1045:
      if (lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 1046:
      if (lookahead == 'r') ADVANCE(1577);
      END_STATE();
    case 1047:
      if (lookahead == 'r') ADVANCE(1578);
      END_STATE();
    case 1048:
      if (lookahead == 'r') ADVANCE(729);
      END_STATE();
    case 1049:
      if (lookahead == 'r') ADVANCE(1516);
      END_STATE();
    case 1050:
      if (lookahead == 'r') ADVANCE(1104);
      END_STATE();
    case 1051:
      if (lookahead == 'r') ADVANCE(1534);
      END_STATE();
    case 1052:
      if (lookahead == 'r') ADVANCE(1538);
      END_STATE();
    case 1053:
      if (lookahead == 'r') ADVANCE(1501);
      END_STATE();
    case 1054:
      if (lookahead == 'r') ADVANCE(1508);
      END_STATE();
    case 1055:
      if (lookahead == 'r') ADVANCE(1500);
      END_STATE();
    case 1056:
      if (lookahead == 'r') ADVANCE(1596);
      END_STATE();
    case 1057:
      if (lookahead == 'r') ADVANCE(1499);
      END_STATE();
    case 1058:
      if (lookahead == 'r') ADVANCE(1524);
      END_STATE();
    case 1059:
      if (lookahead == 'r') ADVANCE(1541);
      END_STATE();
    case 1060:
      if (lookahead == 'r') ADVANCE(1510);
      END_STATE();
    case 1061:
      if (lookahead == 'r') ADVANCE(1573);
      END_STATE();
    case 1062:
      if (lookahead == 'r') ADVANCE(1599);
      END_STATE();
    case 1063:
      if (lookahead == 'r') ADVANCE(1592);
      END_STATE();
    case 1064:
      if (lookahead == 'r') ADVANCE(521);
      END_STATE();
    case 1065:
      if (lookahead == 'r') ADVANCE(1203);
      END_STATE();
    case 1066:
      if (lookahead == 'r') ADVANCE(800);
      END_STATE();
    case 1067:
      if (lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 1068:
      if (lookahead == 'r') ADVANCE(751);
      END_STATE();
    case 1069:
      if (lookahead == 'r') ADVANCE(670);
      END_STATE();
    case 1070:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 1071:
      if (lookahead == 'r') ADVANCE(955);
      END_STATE();
    case 1072:
      if (lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 1073:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 1074:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 1075:
      if (lookahead == 'r') ADVANCE(537);
      END_STATE();
    case 1076:
      if (lookahead == 'r') ADVANCE(1302);
      END_STATE();
    case 1077:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 1078:
      if (lookahead == 'r') ADVANCE(456);
      END_STATE();
    case 1079:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 1080:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 1081:
      if (lookahead == 'r') ADVANCE(1270);
      END_STATE();
    case 1082:
      if (lookahead == 'r') ADVANCE(709);
      END_STATE();
    case 1083:
      if (lookahead == 'r') ADVANCE(884);
      END_STATE();
    case 1084:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 1085:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 1086:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 1087:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 1088:
      if (lookahead == 'r') ADVANCE(1231);
      END_STATE();
    case 1089:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 1090:
      if (lookahead == 'r') ADVANCE(1082);
      END_STATE();
    case 1091:
      if (lookahead == 'r') ADVANCE(1242);
      END_STATE();
    case 1092:
      if (lookahead == 'r') ADVANCE(1163);
      END_STATE();
    case 1093:
      if (lookahead == 'r') ADVANCE(531);
      END_STATE();
    case 1094:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 1095:
      if (lookahead == 'r') ADVANCE(561);
      END_STATE();
    case 1096:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 1097:
      if (lookahead == 'r') ADVANCE(485);
      END_STATE();
    case 1098:
      if (lookahead == 'r') ADVANCE(447);
      END_STATE();
    case 1099:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 1100:
      if (lookahead == 'r') ADVANCE(518);
      END_STATE();
    case 1101:
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 1102:
      if (lookahead == 'r') ADVANCE(1028);
      END_STATE();
    case 1103:
      if (lookahead == 'r') ADVANCE(926);
      END_STATE();
    case 1104:
      if (lookahead == 'r') ADVANCE(1326);
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 1105:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 1106:
      if (lookahead == 'r') ADVANCE(1093);
      END_STATE();
    case 1107:
      if (lookahead == 'r') ADVANCE(476);
      END_STATE();
    case 1108:
      if (lookahead == 'r') ADVANCE(984);
      END_STATE();
    case 1109:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 1110:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 1111:
      if (lookahead == 'r') ADVANCE(475);
      END_STATE();
    case 1112:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 1113:
      if (lookahead == 'r') ADVANCE(504);
      END_STATE();
    case 1114:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 1115:
      if (lookahead == 'r') ADVANCE(762);
      END_STATE();
    case 1116:
      if (lookahead == 'r') ADVANCE(556);
      END_STATE();
    case 1117:
      if (lookahead == 'r') ADVANCE(526);
      END_STATE();
    case 1118:
      if (lookahead == 'r') ADVANCE(399);
      END_STATE();
    case 1119:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 1120:
      if (lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 1121:
      if (lookahead == 'r') ADVANCE(530);
      END_STATE();
    case 1122:
      if (lookahead == 'r') ADVANCE(563);
      END_STATE();
    case 1123:
      if (lookahead == 'r') ADVANCE(683);
      END_STATE();
    case 1124:
      if (lookahead == 'r') ADVANCE(497);
      END_STATE();
    case 1125:
      if (lookahead == 'r') ADVANCE(1208);
      END_STATE();
    case 1126:
      if (lookahead == 'r') ADVANCE(972);
      END_STATE();
    case 1127:
      if (lookahead == 'r') ADVANCE(536);
      END_STATE();
    case 1128:
      if (lookahead == 'r') ADVANCE(527);
      END_STATE();
    case 1129:
      if (lookahead == 'r') ADVANCE(1211);
      END_STATE();
    case 1130:
      if (lookahead == 'r') ADVANCE(404);
      END_STATE();
    case 1131:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 1132:
      if (lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 1133:
      if (lookahead == 'r') ADVANCE(410);
      END_STATE();
    case 1134:
      if (lookahead == 'r') ADVANCE(411);
      END_STATE();
    case 1135:
      if (lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 1136:
      if (lookahead == 'r') ADVANCE(413);
      END_STATE();
    case 1137:
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 1138:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 1139:
      if (lookahead == 'r') ADVANCE(562);
      END_STATE();
    case 1140:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 1141:
      if (lookahead == 'r') ADVANCE(997);
      END_STATE();
    case 1142:
      if (lookahead == 'r') ADVANCE(566);
      END_STATE();
    case 1143:
      if (lookahead == 'r') ADVANCE(735);
      END_STATE();
    case 1144:
      if (lookahead == 's') ADVANCE(1444);
      END_STATE();
    case 1145:
      if (lookahead == 's') ADVANCE(1488);
      END_STATE();
    case 1146:
      if (lookahead == 's') ADVANCE(1620);
      END_STATE();
    case 1147:
      if (lookahead == 's') ADVANCE(1240);
      END_STATE();
    case 1148:
      if (lookahead == 's') ADVANCE(1486);
      END_STATE();
    case 1149:
      if (lookahead == 's') ADVANCE(1553);
      END_STATE();
    case 1150:
      if (lookahead == 's') ADVANCE(1552);
      END_STATE();
    case 1151:
      if (lookahead == 's') ADVANCE(1518);
      END_STATE();
    case 1152:
      if (lookahead == 's') ADVANCE(1609);
      END_STATE();
    case 1153:
      if (lookahead == 's') ADVANCE(1564);
      END_STATE();
    case 1154:
      if (lookahead == 's') ADVANCE(1505);
      END_STATE();
    case 1155:
      if (lookahead == 's') ADVANCE(1512);
      END_STATE();
    case 1156:
      if (lookahead == 's') ADVANCE(1612);
      END_STATE();
    case 1157:
      if (lookahead == 's') ADVANCE(1601);
      END_STATE();
    case 1158:
      if (lookahead == 's') ADVANCE(1605);
      END_STATE();
    case 1159:
      if (lookahead == 's') ADVANCE(1583);
      END_STATE();
    case 1160:
      if (lookahead == 's') ADVANCE(1520);
      END_STATE();
    case 1161:
      if (lookahead == 's') ADVANCE(1580);
      END_STATE();
    case 1162:
      if (lookahead == 's') ADVANCE(1579);
      END_STATE();
    case 1163:
      if (lookahead == 's') ADVANCE(1567);
      END_STATE();
    case 1164:
      if (lookahead == 's') ADVANCE(1593);
      END_STATE();
    case 1165:
      if (lookahead == 's') ADVANCE(1582);
      END_STATE();
    case 1166:
      if (lookahead == 's') ADVANCE(1565);
      END_STATE();
    case 1167:
      if (lookahead == 's') ADVANCE(1369);
      END_STATE();
    case 1168:
      if (lookahead == 's') ADVANCE(582);
      END_STATE();
    case 1169:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 1170:
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 1171:
      if (lookahead == 's') ADVANCE(457);
      END_STATE();
    case 1172:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 1173:
      if (lookahead == 's') ADVANCE(690);
      END_STATE();
    case 1174:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 1175:
      if (lookahead == 's') ADVANCE(629);
      END_STATE();
    case 1176:
      if (lookahead == 's') ADVANCE(1022);
      END_STATE();
    case 1177:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 1178:
      if (lookahead == 's') ADVANCE(1146);
      END_STATE();
    case 1179:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 1180:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 1181:
      if (lookahead == 's') ADVANCE(535);
      END_STATE();
    case 1182:
      if (lookahead == 's') ADVANCE(1193);
      END_STATE();
    case 1183:
      if (lookahead == 's') ADVANCE(1209);
      END_STATE();
    case 1184:
      if (lookahead == 's') ADVANCE(655);
      END_STATE();
    case 1185:
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 1186:
      if (lookahead == 's') ADVANCE(488);
      END_STATE();
    case 1187:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 1188:
      if (lookahead == 's') ADVANCE(1254);
      END_STATE();
    case 1189:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 1190:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 1191:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 1192:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 1193:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 1194:
      if (lookahead == 's') ADVANCE(634);
      END_STATE();
    case 1195:
      if (lookahead == 's') ADVANCE(1174);
      END_STATE();
    case 1196:
      if (lookahead == 's') ADVANCE(1215);
      END_STATE();
    case 1197:
      if (lookahead == 's') ADVANCE(640);
      END_STATE();
    case 1198:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 1199:
      if (lookahead == 's') ADVANCE(1030);
      END_STATE();
    case 1200:
      if (lookahead == 's') ADVANCE(328);
      END_STATE();
    case 1201:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 1202:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 1203:
      if (lookahead == 's') ADVANCE(959);
      END_STATE();
    case 1204:
      if (lookahead == 's') ADVANCE(473);
      END_STATE();
    case 1205:
      if (lookahead == 's') ADVANCE(689);
      END_STATE();
    case 1206:
      if (lookahead == 's') ADVANCE(327);
      END_STATE();
    case 1207:
      if (lookahead == 's') ADVANCE(694);
      END_STATE();
    case 1208:
      if (lookahead == 's') ADVANCE(973);
      END_STATE();
    case 1209:
      if (lookahead == 's') ADVANCE(484);
      END_STATE();
    case 1210:
      if (lookahead == 's') ADVANCE(1189);
      END_STATE();
    case 1211:
      if (lookahead == 's') ADVANCE(1009);
      END_STATE();
    case 1212:
      if (lookahead == 's') ADVANCE(508);
      END_STATE();
    case 1213:
      if (lookahead == 's') ADVANCE(514);
      END_STATE();
    case 1214:
      if (lookahead == 's') ADVANCE(643);
      END_STATE();
    case 1215:
      if (lookahead == 's') ADVANCE(697);
      END_STATE();
    case 1216:
      if (lookahead == 's') ADVANCE(541);
      if (lookahead == 'w') ADVANCE(1010);
      END_STATE();
    case 1217:
      if (lookahead == 's') ADVANCE(1276);
      END_STATE();
    case 1218:
      if (lookahead == 's') ADVANCE(555);
      END_STATE();
    case 1219:
      if (lookahead == 's') ADVANCE(1041);
      END_STATE();
    case 1220:
      if (lookahead == 't') ADVANCE(1485);
      END_STATE();
    case 1221:
      if (lookahead == 't') ADVANCE(1619);
      END_STATE();
    case 1222:
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 1223:
      if (lookahead == 't') ADVANCE(1504);
      END_STATE();
    case 1224:
      if (lookahead == 't') ADVANCE(1546);
      END_STATE();
    case 1225:
      if (lookahead == 't') ADVANCE(1498);
      END_STATE();
    case 1226:
      if (lookahead == 't') ADVANCE(1550);
      END_STATE();
    case 1227:
      if (lookahead == 't') ADVANCE(1551);
      END_STATE();
    case 1228:
      if (lookahead == 't') ADVANCE(1528);
      END_STATE();
    case 1229:
      if (lookahead == 't') ADVANCE(1590);
      END_STATE();
    case 1230:
      if (lookahead == 't') ADVANCE(1555);
      END_STATE();
    case 1231:
      if (lookahead == 't') ADVANCE(1569);
      END_STATE();
    case 1232:
      if (lookahead == 't') ADVANCE(1503);
      END_STATE();
    case 1233:
      if (lookahead == 't') ADVANCE(1019);
      END_STATE();
    case 1234:
      if (lookahead == 't') ADVANCE(662);
      END_STATE();
    case 1235:
      if (lookahead == 't') ADVANCE(628);
      END_STATE();
    case 1236:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 1237:
      if (lookahead == 't') ADVANCE(1389);
      END_STATE();
    case 1238:
      if (lookahead == 't') ADVANCE(1391);
      END_STATE();
    case 1239:
      if (lookahead == 't') ADVANCE(664);
      END_STATE();
    case 1240:
      if (lookahead == 't') ADVANCE(403);
      if (lookahead == 'w') ADVANCE(241);
      END_STATE();
    case 1241:
      if (lookahead == 't') ADVANCE(1399);
      END_STATE();
    case 1242:
      if (lookahead == 't') ADVANCE(631);
      END_STATE();
    case 1243:
      if (lookahead == 't') ADVANCE(1392);
      END_STATE();
    case 1244:
      if (lookahead == 't') ADVANCE(1287);
      END_STATE();
    case 1245:
      if (lookahead == 't') ADVANCE(648);
      END_STATE();
    case 1246:
      if (lookahead == 't') ADVANCE(692);
      END_STATE();
    case 1247:
      if (lookahead == 't') ADVANCE(1393);
      END_STATE();
    case 1248:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 1249:
      if (lookahead == 't') ADVANCE(1395);
      END_STATE();
    case 1250:
      if (lookahead == 't') ADVANCE(653);
      END_STATE();
    case 1251:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 1252:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 1253:
      if (lookahead == 't') ADVANCE(1157);
      END_STATE();
    case 1254:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 1255:
      if (lookahead == 't') ADVANCE(440);
      END_STATE();
    case 1256:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 1257:
      if (lookahead == 't') ADVANCE(635);
      END_STATE();
    case 1258:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 1259:
      if (lookahead == 't') ADVANCE(680);
      END_STATE();
    case 1260:
      if (lookahead == 't') ADVANCE(951);
      END_STATE();
    case 1261:
      if (lookahead == 't') ADVANCE(657);
      END_STATE();
    case 1262:
      if (lookahead == 't') ADVANCE(1335);
      END_STATE();
    case 1263:
      if (lookahead == 't') ADVANCE(637);
      END_STATE();
    case 1264:
      if (lookahead == 't') ADVANCE(998);
      END_STATE();
    case 1265:
      if (lookahead == 't') ADVANCE(691);
      END_STATE();
    case 1266:
      if (lookahead == 't') ADVANCE(1333);
      END_STATE();
    case 1267:
      if (lookahead == 't') ADVANCE(695);
      END_STATE();
    case 1268:
      if (lookahead == 't') ADVANCE(937);
      END_STATE();
    case 1269:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 1270:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 1271:
      if (lookahead == 't') ADVANCE(956);
      END_STATE();
    case 1272:
      if (lookahead == 't') ADVANCE(677);
      END_STATE();
    case 1273:
      if (lookahead == 't') ADVANCE(940);
      END_STATE();
    case 1274:
      if (lookahead == 't') ADVANCE(942);
      END_STATE();
    case 1275:
      if (lookahead == 't') ADVANCE(947);
      END_STATE();
    case 1276:
      if (lookahead == 't') ADVANCE(975);
      END_STATE();
    case 1277:
      if (lookahead == 't') ADVANCE(950);
      END_STATE();
    case 1278:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 1279:
      if (lookahead == 't') ADVANCE(693);
      END_STATE();
    case 1280:
      if (lookahead == 't') ADVANCE(785);
      END_STATE();
    case 1281:
      if (lookahead == 't') ADVANCE(1268);
      END_STATE();
    case 1282:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 1283:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 1284:
      if (lookahead == 't') ADVANCE(698);
      END_STATE();
    case 1285:
      if (lookahead == 't') ADVANCE(794);
      END_STATE();
    case 1286:
      if (lookahead == 't') ADVANCE(717);
      END_STATE();
    case 1287:
      if (lookahead == 't') ADVANCE(969);
      END_STATE();
    case 1288:
      if (lookahead == 't') ADVANCE(702);
      END_STATE();
    case 1289:
      if (lookahead == 't') ADVANCE(706);
      END_STATE();
    case 1290:
      if (lookahead == 't') ADVANCE(977);
      END_STATE();
    case 1291:
      if (lookahead == 't') ADVANCE(713);
      END_STATE();
    case 1292:
      if (lookahead == 't') ADVANCE(712);
      END_STATE();
    case 1293:
      if (lookahead == 't') ADVANCE(1290);
      END_STATE();
    case 1294:
      if (lookahead == 't') ADVANCE(715);
      END_STATE();
    case 1295:
      if (lookahead == 't') ADVANCE(721);
      END_STATE();
    case 1296:
      if (lookahead == 't') ADVANCE(723);
      END_STATE();
    case 1297:
      if (lookahead == 'u') ADVANCE(1233);
      if (lookahead == 'v') ADVANCE(458);
      END_STATE();
    case 1298:
      if (lookahead == 'u') ADVANCE(597);
      END_STATE();
    case 1299:
      if (lookahead == 'u') ADVANCE(834);
      END_STATE();
    case 1300:
      if (lookahead == 'u') ADVANCE(1220);
      END_STATE();
    case 1301:
      if (lookahead == 'u') ADVANCE(304);
      END_STATE();
    case 1302:
      if (lookahead == 'u') ADVANCE(420);
      END_STATE();
    case 1303:
      if (lookahead == 'u') ADVANCE(1015);
      END_STATE();
    case 1304:
      if (lookahead == 'u') ADVANCE(1049);
      END_STATE();
    case 1305:
      if (lookahead == 'u') ADVANCE(1223);
      END_STATE();
    case 1306:
      if (lookahead == 'u') ADVANCE(1110);
      END_STATE();
    case 1307:
      if (lookahead == 'u') ADVANCE(1224);
      END_STATE();
    case 1308:
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 1309:
      if (lookahead == 'u') ADVANCE(1244);
      END_STATE();
    case 1310:
      if (lookahead == 'u') ADVANCE(807);
      END_STATE();
    case 1311:
      if (lookahead == 'u') ADVANCE(1225);
      END_STATE();
    case 1312:
      if (lookahead == 'u') ADVANCE(780);
      END_STATE();
    case 1313:
      if (lookahead == 'u') ADVANCE(1226);
      END_STATE();
    case 1314:
      if (lookahead == 'u') ADVANCE(317);
      END_STATE();
    case 1315:
      if (lookahead == 'u') ADVANCE(1273);
      END_STATE();
    case 1316:
      if (lookahead == 'u') ADVANCE(1153);
      END_STATE();
    case 1317:
      if (lookahead == 'u') ADVANCE(799);
      END_STATE();
    case 1318:
      if (lookahead == 'u') ADVANCE(1229);
      END_STATE();
    case 1319:
      if (lookahead == 'u') ADVANCE(1232);
      END_STATE();
    case 1320:
      if (lookahead == 'u') ADVANCE(1165);
      END_STATE();
    case 1321:
      if (lookahead == 'u') ADVANCE(1166);
      END_STATE();
    case 1322:
      if (lookahead == 'u') ADVANCE(764);
      END_STATE();
    case 1323:
      if (lookahead == 'u') ADVANCE(1045);
      END_STATE();
    case 1324:
      if (lookahead == 'u') ADVANCE(1204);
      END_STATE();
    case 1325:
      if (lookahead == 'u') ADVANCE(1177);
      END_STATE();
    case 1326:
      if (lookahead == 'u') ADVANCE(755);
      END_STATE();
    case 1327:
      if (lookahead == 'u') ADVANCE(842);
      END_STATE();
    case 1328:
      if (lookahead == 'u') ADVANCE(1185);
      END_STATE();
    case 1329:
      if (lookahead == 'u') ADVANCE(1256);
      END_STATE();
    case 1330:
      if (lookahead == 'u') ADVANCE(1187);
      END_STATE();
    case 1331:
      if (lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 1332:
      if (lookahead == 'u') ADVANCE(853);
      END_STATE();
    case 1333:
      if (lookahead == 'u') ADVANCE(1107);
      END_STATE();
    case 1334:
      if (lookahead == 'u') ADVANCE(1035);
      END_STATE();
    case 1335:
      if (lookahead == 'u') ADVANCE(1114);
      END_STATE();
    case 1336:
      if (lookahead == 'u') ADVANCE(1218);
      END_STATE();
    case 1337:
      if (lookahead == 'u') ADVANCE(1212);
      END_STATE();
    case 1338:
      if (lookahead == 'u') ADVANCE(1213);
      END_STATE();
    case 1339:
      if (lookahead == 'u') ADVANCE(1125);
      END_STATE();
    case 1340:
      if (lookahead == 'u') ADVANCE(1281);
      END_STATE();
    case 1341:
      if (lookahead == 'u') ADVANCE(1129);
      END_STATE();
    case 1342:
      if (lookahead == 'u') ADVANCE(1293);
      END_STATE();
    case 1343:
      if (lookahead == 'v') ADVANCE(671);
      END_STATE();
    case 1344:
      if (lookahead == 'v') ADVANCE(708);
      END_STATE();
    case 1345:
      if (lookahead == 'v') ADVANCE(433);
      END_STATE();
    case 1346:
      if (lookahead == 'v') ADVANCE(441);
      END_STATE();
    case 1347:
      if (lookahead == 'v') ADVANCE(444);
      END_STATE();
    case 1348:
      if (lookahead == 'v') ADVANCE(467);
      END_STATE();
    case 1349:
      if (lookahead == 'v') ADVANCE(231);
      END_STATE();
    case 1350:
      if (lookahead == 'v') ADVANCE(474);
      END_STATE();
    case 1351:
      if (lookahead == 'v') ADVANCE(481);
      END_STATE();
    case 1352:
      if (lookahead == 'v') ADVANCE(568);
      END_STATE();
    case 1353:
      if (lookahead == 'v') ADVANCE(507);
      END_STATE();
    case 1354:
      if (lookahead == 'v') ADVANCE(502);
      END_STATE();
    case 1355:
      if (lookahead == 'v') ADVANCE(516);
      END_STATE();
    case 1356:
      if (lookahead == 'v') ADVANCE(511);
      END_STATE();
    case 1357:
      if (lookahead == 'v') ADVANCE(513);
      END_STATE();
    case 1358:
      if (lookahead == 'v') ADVANCE(700);
      END_STATE();
    case 1359:
      if (lookahead == 'v') ADVANCE(564);
      END_STATE();
    case 1360:
      if (lookahead == 'v') ADVANCE(569);
      END_STATE();
    case 1361:
      if (lookahead == 'w') ADVANCE(1526);
      END_STATE();
    case 1362:
      if (lookahead == 'w') ADVANCE(1522);
      END_STATE();
    case 1363:
      if (lookahead == 'w') ADVANCE(1586);
      END_STATE();
    case 1364:
      if (lookahead == 'w') ADVANCE(1507);
      END_STATE();
    case 1365:
      if (lookahead == 'w') ADVANCE(1525);
      END_STATE();
    case 1366:
      if (lookahead == 'w') ADVANCE(1572);
      END_STATE();
    case 1367:
      if (lookahead == 'w') ADVANCE(51);
      END_STATE();
    case 1368:
      if (lookahead == 'w') ADVANCE(644);
      END_STATE();
    case 1369:
      if (lookahead == 'w') ADVANCE(666);
      END_STATE();
    case 1370:
      if (lookahead == 'w') ADVANCE(665);
      END_STATE();
    case 1371:
      if (lookahead == 'w') ADVANCE(703);
      END_STATE();
    case 1372:
      if (lookahead == 'w') ADVANCE(58);
      END_STATE();
    case 1373:
      if (lookahead == 'w') ADVANCE(60);
      END_STATE();
    case 1374:
      if (lookahead == 'w') ADVANCE(98);
      END_STATE();
    case 1375:
      if (lookahead == 'w') ADVANCE(215);
      END_STATE();
    case 1376:
      if (lookahead == 'w') ADVANCE(217);
      END_STATE();
    case 1377:
      if (lookahead == 'w') ADVANCE(506);
      END_STATE();
    case 1378:
      if (lookahead == 'w') ADVANCE(704);
      END_STATE();
    case 1379:
      if (lookahead == 'w') ADVANCE(406);
      END_STATE();
    case 1380:
      if (lookahead == 'w') ADVANCE(147);
      END_STATE();
    case 1381:
      if (lookahead == 'w') ADVANCE(146);
      END_STATE();
    case 1382:
      if (lookahead == 'x') ADVANCE(1622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1460);
      END_STATE();
    case 1383:
      if (lookahead == 'x') ADVANCE(1587);
      END_STATE();
    case 1384:
      if (lookahead == 'x') ADVANCE(1588);
      END_STATE();
    case 1385:
      if (lookahead == 'x') ADVANCE(330);
      END_STATE();
    case 1386:
      if (lookahead == 'y') ADVANCE(470);
      END_STATE();
    case 1387:
      if (lookahead == 'y') ADVANCE(1607);
      END_STATE();
    case 1388:
      if (lookahead == 'y') ADVANCE(1521);
      END_STATE();
    case 1389:
      if (lookahead == 'y') ADVANCE(1493);
      END_STATE();
    case 1390:
      if (lookahead == 'y') ADVANCE(1557);
      END_STATE();
    case 1391:
      if (lookahead == 'y') ADVANCE(1513);
      END_STATE();
    case 1392:
      if (lookahead == 'y') ADVANCE(1514);
      END_STATE();
    case 1393:
      if (lookahead == 'y') ADVANCE(1515);
      END_STATE();
    case 1394:
      if (lookahead == 'y') ADVANCE(1603);
      END_STATE();
    case 1395:
      if (lookahead == 'y') ADVANCE(1519);
      END_STATE();
    case 1396:
      if (lookahead == 'y') ADVANCE(148);
      END_STATE();
    case 1397:
      if (lookahead == 'y') ADVANCE(279);
      END_STATE();
    case 1398:
      if (lookahead == 'y') ADVANCE(123);
      END_STATE();
    case 1399:
      if (lookahead == 'y') ADVANCE(1033);
      END_STATE();
    case 1400:
      if (lookahead == 'y') ADVANCE(358);
      END_STATE();
    case 1401:
      if (lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 1402:
      if (lookahead == 'y') ADVANCE(1036);
      END_STATE();
    case 1403:
      if (lookahead == 'y') ADVANCE(928);
      END_STATE();
    case 1404:
      if (lookahead == 'y') ADVANCE(1180);
      END_STATE();
    case 1405:
      if (lookahead == 'z') ADVANCE(426);
      END_STATE();
    case 1406:
      if (lookahead == 'z') ADVANCE(430);
      END_STATE();
    case 1407:
      if (lookahead == 'z') ADVANCE(446);
      END_STATE();
    case 1408:
      if (lookahead == 'z') ADVANCE(487);
      END_STATE();
    case 1409:
      if (lookahead == 'z') ADVANCE(941);
      END_STATE();
    case 1410:
      if (lookahead == 'z') ADVANCE(501);
      END_STATE();
    case 1411:
      if (lookahead == 'z') ADVANCE(262);
      END_STATE();
    case 1412:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1429);
      END_STATE();
    case 1413:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1427);
      END_STATE();
    case 1414:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1460);
      END_STATE();
    case 1415:
      if (eof) ADVANCE(1417);
      if (lookahead == '\n') ADVANCE(1479);
      if (lookahead == '#') ADVANCE(1418);
      if (lookahead == '0') ADVANCE(1426);
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'b') ADVANCE(651);
      if (lookahead == 'c') ADVANCE(743);
      if (lookahead == 'd') ADVANCE(222);
      if (lookahead == 'e') ADVANCE(822);
      if (lookahead == 'f') ADVANCE(742);
      if (lookahead == 'g') ADVANCE(169);
      if (lookahead == 'h') ADVANCE(645);
      if (lookahead == 'i') ADVANCE(824);
      if (lookahead == 'k') ADVANCE(271);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(1297);
      if (lookahead == 'p') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(419);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == 'v') ADVANCE(574);
      if (lookahead == 'w') ADVANCE(912);
      if (lookahead == '}') ADVANCE(1482);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(1413);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1415)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1427);
      END_STATE();
    case 1416:
      if (eof) ADVANCE(1417);
      if (lookahead == '#') ADVANCE(1418);
      if (lookahead == '$') ADVANCE(1477);
      if (lookahead == ',') ADVANCE(1625);
      if (lookahead == '.') ADVANCE(1412);
      if (lookahead == '0') ADVANCE(1451);
      if (lookahead == '1') ADVANCE(1454);
      if (lookahead == '=') ADVANCE(1494);
      if (lookahead == 'A') ADVANCE(29);
      if (lookahead == 'C') ADVANCE(21);
      if (lookahead == 'L') ADVANCE(35);
      if (lookahead == 'M') ADVANCE(36);
      if (lookahead == 'S') ADVANCE(26);
      if (lookahead == 'W') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == 'b') ADVANCE(651);
      if (lookahead == 'c') ADVANCE(743);
      if (lookahead == 'd') ADVANCE(222);
      if (lookahead == 'e') ADVANCE(822);
      if (lookahead == 'f') ADVANCE(185);
      if (lookahead == 'g') ADVANCE(169);
      if (lookahead == 'h') ADVANCE(645);
      if (lookahead == 'i') ADVANCE(824);
      if (lookahead == 'k') ADVANCE(271);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(572);
      if (lookahead == 'p') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(419);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == 'u') ADVANCE(831);
      if (lookahead == 'v') ADVANCE(574);
      if (lookahead == 'w') ADVANCE(912);
      if (lookahead == 'y') ADVANCE(451);
      if (lookahead == '{') ADVANCE(1481);
      if (lookahead == '}') ADVANCE(1482);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1416)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1425);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(1615);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1469);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1423);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(1421);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1422);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1423);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1423);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(1429);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1461);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1460);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(1429);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1425);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'x') ADVANCE(1459);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1427);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1427);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(1429);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1428);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1429);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(anon_sym_SHIFT);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(anon_sym_CAPS);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(anon_sym_CTRL);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(anon_sym_CONTROL);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(anon_sym_ALT);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(anon_sym_MOD2);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(anon_sym_MOD3);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(anon_sym_SUPER);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(anon_sym_WIN);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym_LOGO);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(anon_sym_MOD4);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(anon_sym_MOD5);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '_') ADVANCE(282);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(1429);
      if (lookahead == 'x') ADVANCE(1622);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1461);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1460);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(1429);
      if (lookahead == 'x') ADVANCE(1459);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1425);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(1429);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1461);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1460);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(1429);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1425);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_rgb);
      if (lookahead == 'a') ADVANCE(1458);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(anon_sym_rgba);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(sym__hex_comp);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == '.') ADVANCE(1429);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1425);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'P') ADVANCE(44);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'b') ADVANCE(1298);
      if (lookahead == 'c') ADVANCE(921);
      if (lookahead == 'g') ADVANCE(1468);
      if (lookahead == 'v') ADVANCE(687);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'c') ADVANCE(459);
      if (lookahead == 't') ADVANCE(685);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'd') ADVANCE(1100);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'l') ADVANCE(1172);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(anon_sym_deg);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(sym_str);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1469);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'd') ADVANCE(1473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1476);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'd') ADVANCE(1470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1476);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(1475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1476);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(1472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1476);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(1621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1476);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(1474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1476);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1476);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1469);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(1479);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(anon_sym_general);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(anon_sym_animation);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(anon_sym_gestures);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(anon_sym_misc);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(anon_sym_binds);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(anon_sym_device);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(aux_sym_variable_section_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1492);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(anon_sym_sensitivity);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(anon_sym_border_size);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(anon_sym_no_border_on_floating);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(anon_sym_gaps_in);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(anon_sym_gaps_out);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(anon_sym_col_DOTinactive_border);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(anon_sym_col_DOTactive_border);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(anon_sym_col_DOTgroup_border);
      if (lookahead == '_') ADVANCE(267);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(anon_sym_col_DOTgroup_border_active);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(anon_sym_cursor_inactive_timeout);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(anon_sym_no_cursor_warps);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(anon_sym_no_focus_fallback);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(anon_sym_apply_sens_to_raw);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(anon_sym_resize_on_border);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(anon_sym_extend_border_grab_area);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(anon_sym_hover_icon_on_border);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(anon_sym_rounding);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(anon_sym_multisample_edges);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(anon_sym_active_opacity);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(anon_sym_inactive_opacity);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(anon_sym_fullscreen_opacity);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(anon_sym_blur);
      if (lookahead == '_') ADVANCE(654);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(anon_sym_blur_size);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(anon_sym_blur_passes);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(anon_sym_blur_ignore_opacity);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(anon_sym_blur_new_optimizations);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(anon_sym_blur_xray);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(anon_sym_drop_shadow);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(anon_sym_shadow_range);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(anon_sym_shadow_render_power);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(anon_sym_shadow_ignore_window);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(anon_sym_col_DOTshadow);
      if (lookahead == '_') ADVANCE(720);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(anon_sym_col_DOTshadow_inactive);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(anon_sym_shadow_offset);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(anon_sym_shadow_scale);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(anon_sym_dim_inactive);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(anon_sym_dim_strength);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(anon_sym_dim_special);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(anon_sym_dim_around);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(anon_sym_screen_shader);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(anon_sym_enabled);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(anon_sym_disable_while_typing);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(anon_sym_natural_scroll);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(anon_sym_scroll_factor);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(anon_sym_middle_button_emulation);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(anon_sym_tap_button_map);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(anon_sym_clickfinger_behavior);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(anon_sym_tap_DASHto_DASHclick);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(anon_sym_drag_lock);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(anon_sym_tap_DASHand_DASHdrag);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(anon_sym_transform);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(anon_sym_touchpad);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(anon_sym_touchdevice);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(anon_sym_kb_model);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(anon_sym_kb_layout);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(anon_sym_kb_variant);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(anon_sym_kb_options);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(anon_sym_kb_rules);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(anon_sym_kb_file);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(anon_sym_numlock_by_default);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(anon_sym_repeat_rate);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(anon_sym_repeat_delay);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(anon_sym_accel_profile);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(anon_sym_force_no_accel);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(anon_sym_left_handed);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(anon_sym_scroll_method);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(anon_sym_scroll_button);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(anon_sym_follow_mouse);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(anon_sym_mouse_refocus);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(anon_sym_float_switch_override_focus);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(anon_sym_workspace_swipe);
      if (lookahead == '_') ADVANCE(305);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_fingers);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_distance);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_invert);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_min_speed_to_force);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_cancel_ratio);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_create_new);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_forever);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_numbered);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(anon_sym_disable_hyprland_logo);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(anon_sym_disable_splash_rendering);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(anon_sym_vfr);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(anon_sym_vrr);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(anon_sym_mouse_move_enables_dpms);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(anon_sym_key_press_enables_dpms);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(anon_sym_always_follow_on_dnd);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(anon_sym_layers_hog_keyboard_focus);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(anon_sym_animate_manual_resizes);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(anon_sym_animate_mouse_windowdragging);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(anon_sym_disable_autoreload);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(anon_sym_enable_swallow);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(anon_sym_swallow_regex);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(anon_sym_swallow_exception_regex);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(anon_sym_focus_on_activate);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(anon_sym_no_direct_scanout);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(anon_sym_hide_cursor_on_touch);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(anon_sym_mouse_move_focuses_monitor);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(anon_sym_suppress_portal_warnings);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(anon_sym_render_ahead_of_time);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(anon_sym_render_ahead_safezone);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(anon_sym_cursor_zoom_factor);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(anon_sym_cursor_zoom_rigid);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(anon_sym_allow_session_lock_restore);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(anon_sym_render_titles_in_groupbar);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(anon_sym_groupbar_titles_font_size);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(anon_sym_groupbar_gradients);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(anon_sym_pass_mouse_when_bound);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(anon_sym_scroll_event_delay);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(anon_sym_workspace_back_and_forth);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(anon_sym_allow_workspace_cycles);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(anon_sym_focus_preferred_method);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(anon_sym_overlay);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(anon_sym_damage_blink);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(anon_sym_disable_logs);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(anon_sym_disable_time);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(anon_sym_damage_tracking);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(anon_sym_enable_stdout_logs);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(anon_sym_manual_crash);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '#') ADVANCE(1419);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1615);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1615);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '-') ADVANCE(916);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(anon_sym_exec_DASHonce);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(anon_sym_unset);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(anon_sym_address);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(anon_sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1476);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(anon_sym_0x2);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(aux_sym_layer_address_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1623);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(anon_sym_layerrule);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(anon_sym_env);
      if (lookahead == 'd') ADVANCE(1627);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(anon_sym_envd);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1415},
  [2] = {.lex_state = 1415},
  [3] = {.lex_state = 1415},
  [4] = {.lex_state = 1415},
  [5] = {.lex_state = 1415},
  [6] = {.lex_state = 1415},
  [7] = {.lex_state = 1415},
  [8] = {.lex_state = 1415},
  [9] = {.lex_state = 1415},
  [10] = {.lex_state = 1415},
  [11] = {.lex_state = 1415},
  [12] = {.lex_state = 1415},
  [13] = {.lex_state = 1415},
  [14] = {.lex_state = 1415},
  [15] = {.lex_state = 1415},
  [16] = {.lex_state = 1415},
  [17] = {.lex_state = 1415},
  [18] = {.lex_state = 1415},
  [19] = {.lex_state = 1415},
  [20] = {.lex_state = 1415},
  [21] = {.lex_state = 1415},
  [22] = {.lex_state = 1415},
  [23] = {.lex_state = 1415},
  [24] = {.lex_state = 1415},
  [25] = {.lex_state = 1415},
  [26] = {.lex_state = 1415},
  [27] = {.lex_state = 1415},
  [28] = {.lex_state = 1415},
  [29] = {.lex_state = 1415},
  [30] = {.lex_state = 1415},
  [31] = {.lex_state = 1415},
  [32] = {.lex_state = 1415},
  [33] = {.lex_state = 1415},
  [34] = {.lex_state = 1415},
  [35] = {.lex_state = 1415},
  [36] = {.lex_state = 1415},
  [37] = {.lex_state = 1415},
  [38] = {.lex_state = 1415},
  [39] = {.lex_state = 1415},
  [40] = {.lex_state = 1415},
  [41] = {.lex_state = 1415},
  [42] = {.lex_state = 1415},
  [43] = {.lex_state = 1415},
  [44] = {.lex_state = 1415},
  [45] = {.lex_state = 1415},
  [46] = {.lex_state = 1415},
  [47] = {.lex_state = 1415},
  [48] = {.lex_state = 1415},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 1415},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 1415},
  [56] = {.lex_state = 1415},
  [57] = {.lex_state = 1415},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 1415},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 1415},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 1415},
  [65] = {.lex_state = 1415},
  [66] = {.lex_state = 1415},
  [67] = {.lex_state = 1415},
  [68] = {.lex_state = 1415},
  [69] = {.lex_state = 1415},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 1415},
  [72] = {.lex_state = 1415},
  [73] = {.lex_state = 1415},
  [74] = {.lex_state = 1415},
  [75] = {.lex_state = 1415},
  [76] = {.lex_state = 1415},
  [77] = {.lex_state = 1415},
  [78] = {.lex_state = 1415},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 1415},
  [81] = {.lex_state = 1415},
  [82] = {.lex_state = 1415},
  [83] = {.lex_state = 1415},
  [84] = {.lex_state = 1415},
  [85] = {.lex_state = 1415},
  [86] = {.lex_state = 1415},
  [87] = {.lex_state = 1415},
  [88] = {.lex_state = 1415},
  [89] = {.lex_state = 1415},
  [90] = {.lex_state = 1415},
  [91] = {.lex_state = 1415},
  [92] = {.lex_state = 1415},
  [93] = {.lex_state = 1415},
  [94] = {.lex_state = 1415},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 1415},
  [97] = {.lex_state = 1415},
  [98] = {.lex_state = 1415},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1415},
  [101] = {.lex_state = 1415},
  [102] = {.lex_state = 1415},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 1415},
  [106] = {.lex_state = 1415},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 11},
  [131] = {.lex_state = 11},
  [132] = {.lex_state = 1415},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 1415},
  [136] = {.lex_state = 1415},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 1415},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 1415},
  [165] = {.lex_state = 1415},
  [166] = {.lex_state = 1415},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 1415},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1415},
  [176] = {.lex_state = 1415},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 1415},
  [180] = {.lex_state = 1415},
  [181] = {.lex_state = 1415},
  [182] = {.lex_state = 1415},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 1422},
  [186] = {.lex_state = 1415},
  [187] = {.lex_state = 1415},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 5},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 1415},
  [193] = {.lex_state = 1415},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 1415},
  [196] = {.lex_state = 11},
  [197] = {.lex_state = 1614},
  [198] = {.lex_state = 1614},
  [199] = {.lex_state = 9},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 1415},
  [204] = {.lex_state = 1415},
  [205] = {.lex_state = 1415},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 1415},
  [209] = {.lex_state = 1415},
  [210] = {.lex_state = 1415},
  [211] = {.lex_state = 1415},
  [212] = {.lex_state = 1415},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 1623},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 1415},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 5},
  [230] = {.lex_state = 5},
  [231] = {.lex_state = 5},
  [232] = {.lex_state = 1415},
  [233] = {.lex_state = 1415},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 5},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {(TSStateId)(-1)},
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
    [anon_sym_exec] = ACTIONS(1),
    [anon_sym_exec_DASHonce] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_unset] = ACTIONS(1),
    [anon_sym_address] = ACTIONS(1),
    [anon_sym_0x2] = ACTIONS(1),
    [anon_sym_layerrule] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_env] = ACTIONS(1),
    [anon_sym_envd] = ACTIONS(1),
  },
  [1] = {
    [sym_config_file] = STATE(214),
    [sym_comment] = STATE(1),
    [sym_variable_section] = STATE(44),
    [sym_command] = STATE(44),
    [sym_command_exec] = STATE(34),
    [sym_command_exec_once] = STATE(34),
    [sym_command_source] = STATE(34),
    [sym_command_layerrule] = STATE(34),
    [sym_command_env] = STATE(34),
    [sym_command_envd] = STATE(34),
    [aux_sym_config_file_repeat1] = STATE(12),
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
    [anon_sym_exec] = ACTIONS(29),
    [anon_sym_exec_DASHonce] = ACTIONS(31),
    [anon_sym_source] = ACTIONS(33),
    [anon_sym_layerrule] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(37),
    [anon_sym_envd] = ACTIONS(39),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      sym__newline,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 1,
      anon_sym_cursor_zoom_factor,
    STATE(2), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_variable_section_repeat6,
    STATE(5), 1,
      sym__misc_section_var,
    ACTIONS(49), 2,
      anon_sym_swallow_regex,
      anon_sym_swallow_exception_regex,
    ACTIONS(47), 3,
      anon_sym_vrr,
      anon_sym_render_ahead_safezone,
      anon_sym_groupbar_titles_font_size,
    ACTIONS(45), 21,
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
  [54] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      sym__newline,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 1,
      anon_sym_cursor_zoom_factor,
    STATE(5), 1,
      sym__misc_section_var,
    ACTIONS(64), 2,
      anon_sym_swallow_regex,
      anon_sym_swallow_exception_regex,
    STATE(3), 2,
      sym_comment,
      aux_sym_variable_section_repeat6,
    ACTIONS(61), 3,
      anon_sym_vrr,
      anon_sym_render_ahead_safezone,
      anon_sym_groupbar_titles_font_size,
    ACTIONS(58), 21,
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
  [106] = 10,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      sym__newline,
    ACTIONS(51), 1,
      anon_sym_cursor_zoom_factor,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_variable_section_repeat6,
    STATE(4), 1,
      sym_comment,
    STATE(5), 1,
      sym__misc_section_var,
    ACTIONS(49), 2,
      anon_sym_swallow_regex,
      anon_sym_swallow_exception_regex,
    ACTIONS(47), 3,
      anon_sym_vrr,
      anon_sym_render_ahead_safezone,
      anon_sym_groupbar_titles_font_size,
    ACTIONS(45), 21,
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
    ACTIONS(72), 1,
      sym__newline,
    STATE(5), 1,
      sym_comment,
    ACTIONS(74), 28,
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
    ACTIONS(76), 1,
      sym__newline,
    STATE(6), 1,
      sym_comment,
    ACTIONS(78), 28,
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
    ACTIONS(80), 1,
      sym__newline,
    STATE(7), 1,
      sym_comment,
    ACTIONS(82), 28,
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
  [280] = 12,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 1,
      sym__newline,
    ACTIONS(94), 1,
      anon_sym_shadow_offset,
    ACTIONS(96), 1,
      anon_sym_screen_shader,
    STATE(8), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_variable_section_repeat2,
    STATE(20), 1,
      sym__decoration_section_var,
    ACTIONS(92), 2,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
    ACTIONS(86), 5,
      anon_sym_rounding,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
    ACTIONS(90), 7,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_shadow_scale,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
    ACTIONS(88), 8,
      anon_sym_multisample_edges,
      anon_sym_blur,
      anon_sym_blur_ignore_opacity,
      anon_sym_blur_new_optimizations,
      anon_sym_blur_xray,
      anon_sym_drop_shadow,
      anon_sym_shadow_ignore_window,
      anon_sym_dim_inactive,
  [335] = 12,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 1,
      sym__newline,
    ACTIONS(94), 1,
      anon_sym_shadow_offset,
    ACTIONS(96), 1,
      anon_sym_screen_shader,
    STATE(9), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_variable_section_repeat2,
    STATE(20), 1,
      sym__decoration_section_var,
    ACTIONS(92), 2,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
    ACTIONS(86), 5,
      anon_sym_rounding,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
    ACTIONS(90), 7,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_shadow_scale,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
    ACTIONS(88), 8,
      anon_sym_multisample_edges,
      anon_sym_blur,
      anon_sym_blur_ignore_opacity,
      anon_sym_blur_new_optimizations,
      anon_sym_blur_xray,
      anon_sym_drop_shadow,
      anon_sym_shadow_ignore_window,
      anon_sym_dim_inactive,
  [390] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(98), 1,
      sym__newline,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(115), 1,
      anon_sym_shadow_offset,
    ACTIONS(118), 1,
      anon_sym_screen_shader,
    STATE(20), 1,
      sym__decoration_section_var,
    ACTIONS(112), 2,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
    STATE(10), 2,
      sym_comment,
      aux_sym_variable_section_repeat2,
    ACTIONS(103), 5,
      anon_sym_rounding,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
    ACTIONS(109), 7,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_shadow_scale,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
    ACTIONS(106), 8,
      anon_sym_multisample_edges,
      anon_sym_blur,
      anon_sym_blur_ignore_opacity,
      anon_sym_blur_new_optimizations,
      anon_sym_blur_xray,
      anon_sym_drop_shadow,
      anon_sym_shadow_ignore_window,
      anon_sym_dim_inactive,
  [443] = 12,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(121), 1,
      sym__newline,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    ACTIONS(126), 1,
      anon_sym_sensitivity,
    ACTIONS(132), 1,
      anon_sym_touchpad,
    ACTIONS(135), 1,
      anon_sym_touchdevice,
    STATE(25), 1,
      sym__input_section_var,
    STATE(26), 1,
      sym__input_variable_section,
    STATE(11), 2,
      sym_comment,
      aux_sym_variable_section_repeat4,
    ACTIONS(129), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(141), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(138), 8,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_accel_profile,
      anon_sym_scroll_method,
  [496] = 22,
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
    ACTIONS(29), 1,
      anon_sym_exec,
    ACTIONS(31), 1,
      anon_sym_exec_DASHonce,
    ACTIONS(33), 1,
      anon_sym_source,
    ACTIONS(35), 1,
      anon_sym_layerrule,
    ACTIONS(37), 1,
      anon_sym_env,
    ACTIONS(39), 1,
      anon_sym_envd,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_config_file_repeat1,
    STATE(44), 2,
      sym_variable_section,
      sym_command,
    STATE(34), 6,
      sym_command_exec,
      sym_command_exec_once,
      sym_command_source,
      sym_command_layerrule,
      sym_command_env,
      sym_command_envd,
  [569] = 13,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(146), 1,
      sym__newline,
    ACTIONS(148), 1,
      anon_sym_sensitivity,
    ACTIONS(152), 1,
      anon_sym_touchpad,
    ACTIONS(154), 1,
      anon_sym_touchdevice,
    STATE(13), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_variable_section_repeat4,
    STATE(25), 1,
      sym__input_section_var,
    STATE(26), 1,
      sym__input_variable_section,
    ACTIONS(150), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(158), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(156), 8,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_accel_profile,
      anon_sym_scroll_method,
  [624] = 13,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(146), 1,
      sym__newline,
    ACTIONS(148), 1,
      anon_sym_sensitivity,
    ACTIONS(152), 1,
      anon_sym_touchpad,
    ACTIONS(154), 1,
      anon_sym_touchdevice,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      aux_sym_variable_section_repeat4,
    STATE(14), 1,
      sym_comment,
    STATE(25), 1,
      sym__input_section_var,
    STATE(26), 1,
      sym__input_variable_section,
    ACTIONS(150), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(158), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(156), 8,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_accel_profile,
      anon_sym_scroll_method,
  [679] = 21,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 1,
      sym__newline,
    ACTIONS(167), 1,
      anon_sym_general,
    ACTIONS(170), 1,
      anon_sym_decoration,
    ACTIONS(173), 1,
      anon_sym_animation,
    ACTIONS(176), 1,
      anon_sym_input,
    ACTIONS(179), 1,
      anon_sym_gestures,
    ACTIONS(182), 1,
      anon_sym_misc,
    ACTIONS(185), 1,
      anon_sym_binds,
    ACTIONS(188), 1,
      anon_sym_debug,
    ACTIONS(191), 1,
      anon_sym_device,
    ACTIONS(194), 1,
      anon_sym_exec,
    ACTIONS(197), 1,
      anon_sym_exec_DASHonce,
    ACTIONS(200), 1,
      anon_sym_source,
    ACTIONS(203), 1,
      anon_sym_layerrule,
    ACTIONS(206), 1,
      anon_sym_env,
    ACTIONS(209), 1,
      anon_sym_envd,
    STATE(15), 2,
      sym_comment,
      aux_sym_config_file_repeat1,
    STATE(44), 2,
      sym_variable_section,
      sym_command,
    STATE(34), 6,
      sym_command_exec,
      sym_command_exec_once,
      sym_command_source,
      sym_command_layerrule,
      sym_command_env,
      sym_command_envd,
  [750] = 13,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(146), 1,
      sym__newline,
    ACTIONS(148), 1,
      anon_sym_sensitivity,
    ACTIONS(152), 1,
      anon_sym_touchpad,
    ACTIONS(154), 1,
      anon_sym_touchdevice,
    STATE(11), 1,
      aux_sym_variable_section_repeat4,
    STATE(16), 1,
      sym_comment,
    STATE(25), 1,
      sym__input_section_var,
    STATE(26), 1,
      sym__input_variable_section,
    ACTIONS(150), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(158), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(156), 8,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_accel_profile,
      anon_sym_scroll_method,
  [805] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(212), 1,
      sym__newline,
    STATE(17), 1,
      sym_comment,
    ACTIONS(214), 25,
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
  [842] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(216), 1,
      sym__newline,
    STATE(18), 1,
      sym_comment,
    ACTIONS(218), 25,
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
  [879] = 13,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(146), 1,
      sym__newline,
    ACTIONS(148), 1,
      anon_sym_sensitivity,
    ACTIONS(152), 1,
      anon_sym_touchpad,
    ACTIONS(154), 1,
      anon_sym_touchdevice,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      aux_sym_variable_section_repeat4,
    STATE(19), 1,
      sym_comment,
    STATE(25), 1,
      sym__input_section_var,
    STATE(26), 1,
      sym__input_variable_section,
    ACTIONS(150), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(158), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(156), 8,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_accel_profile,
      anon_sym_scroll_method,
  [934] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(222), 1,
      sym__newline,
    STATE(20), 1,
      sym_comment,
    ACTIONS(224), 25,
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
  [971] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(226), 1,
      sym__newline,
    STATE(21), 1,
      sym_comment,
    ACTIONS(228), 22,
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
  [1005] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      sym__newline,
    STATE(22), 1,
      sym_comment,
    ACTIONS(232), 22,
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
  [1039] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(234), 1,
      sym__newline,
    STATE(23), 1,
      sym_comment,
    ACTIONS(236), 22,
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
  [1073] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(238), 1,
      sym__newline,
    STATE(24), 1,
      sym_comment,
    ACTIONS(240), 22,
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
  [1107] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(242), 1,
      sym__newline,
    STATE(25), 1,
      sym_comment,
    ACTIONS(244), 22,
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
  [1141] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(242), 1,
      sym__newline,
    STATE(26), 1,
      sym_comment,
    ACTIONS(244), 22,
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
  [1175] = 10,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(246), 1,
      sym__newline,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    ACTIONS(251), 1,
      anon_sym_sensitivity,
    ACTIONS(263), 1,
      anon_sym_layout,
    STATE(31), 1,
      sym__general_section_var,
    STATE(27), 2,
      sym_comment,
      aux_sym_variable_section_repeat1,
    ACTIONS(260), 4,
      anon_sym_col_DOTinactive_border,
      anon_sym_col_DOTactive_border,
      anon_sym_col_DOTgroup_border,
      anon_sym_col_DOTgroup_border_active,
    ACTIONS(254), 5,
      anon_sym_border_size,
      anon_sym_gaps_in,
      anon_sym_gaps_out,
      anon_sym_cursor_inactive_timeout,
      anon_sym_extend_border_grab_area,
    ACTIONS(257), 6,
      anon_sym_no_border_on_floating,
      anon_sym_no_cursor_warps,
      anon_sym_no_focus_fallback,
      anon_sym_apply_sens_to_raw,
      anon_sym_resize_on_border,
      anon_sym_hover_icon_on_border,
  [1219] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(266), 1,
      sym__newline,
    ACTIONS(268), 1,
      anon_sym_sensitivity,
    ACTIONS(276), 1,
      anon_sym_layout,
    STATE(28), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_variable_section_repeat1,
    STATE(31), 1,
      sym__general_section_var,
    ACTIONS(274), 4,
      anon_sym_col_DOTinactive_border,
      anon_sym_col_DOTactive_border,
      anon_sym_col_DOTgroup_border,
      anon_sym_col_DOTgroup_border_active,
    ACTIONS(270), 5,
      anon_sym_border_size,
      anon_sym_gaps_in,
      anon_sym_gaps_out,
      anon_sym_cursor_inactive_timeout,
      anon_sym_extend_border_grab_area,
    ACTIONS(272), 6,
      anon_sym_no_border_on_floating,
      anon_sym_no_cursor_warps,
      anon_sym_no_focus_fallback,
      anon_sym_apply_sens_to_raw,
      anon_sym_resize_on_border,
      anon_sym_hover_icon_on_border,
  [1265] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(266), 1,
      sym__newline,
    ACTIONS(268), 1,
      anon_sym_sensitivity,
    ACTIONS(276), 1,
      anon_sym_layout,
    STATE(27), 1,
      aux_sym_variable_section_repeat1,
    STATE(29), 1,
      sym_comment,
    STATE(31), 1,
      sym__general_section_var,
    ACTIONS(274), 4,
      anon_sym_col_DOTinactive_border,
      anon_sym_col_DOTactive_border,
      anon_sym_col_DOTgroup_border,
      anon_sym_col_DOTgroup_border_active,
    ACTIONS(270), 5,
      anon_sym_border_size,
      anon_sym_gaps_in,
      anon_sym_gaps_out,
      anon_sym_cursor_inactive_timeout,
      anon_sym_extend_border_grab_area,
    ACTIONS(272), 6,
      anon_sym_no_border_on_floating,
      anon_sym_no_cursor_warps,
      anon_sym_no_focus_fallback,
      anon_sym_apply_sens_to_raw,
      anon_sym_resize_on_border,
      anon_sym_hover_icon_on_border,
  [1311] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(278), 1,
      sym__newline,
    STATE(30), 1,
      sym_comment,
    ACTIONS(280), 18,
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
  [1341] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(282), 1,
      sym__newline,
    STATE(31), 1,
      sym_comment,
    ACTIONS(284), 18,
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
  [1371] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      sym__newline,
    STATE(32), 1,
      sym_comment,
    ACTIONS(288), 18,
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
  [1401] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(33), 1,
      sym_comment,
    ACTIONS(290), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(292), 15,
      anon_sym_general,
      anon_sym_decoration,
      anon_sym_animation,
      anon_sym_input,
      anon_sym_gestures,
      anon_sym_misc,
      anon_sym_binds,
      anon_sym_debug,
      anon_sym_device,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      anon_sym_source,
      anon_sym_layerrule,
      anon_sym_env,
      anon_sym_envd,
  [1429] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(34), 1,
      sym_comment,
    ACTIONS(294), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(296), 15,
      anon_sym_general,
      anon_sym_decoration,
      anon_sym_animation,
      anon_sym_input,
      anon_sym_gestures,
      anon_sym_misc,
      anon_sym_binds,
      anon_sym_debug,
      anon_sym_device,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      anon_sym_source,
      anon_sym_layerrule,
      anon_sym_env,
      anon_sym_envd,
  [1457] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(35), 1,
      sym_comment,
    ACTIONS(298), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(300), 15,
      anon_sym_general,
      anon_sym_decoration,
      anon_sym_animation,
      anon_sym_input,
      anon_sym_gestures,
      anon_sym_misc,
      anon_sym_binds,
      anon_sym_debug,
      anon_sym_device,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      anon_sym_source,
      anon_sym_layerrule,
      anon_sym_env,
      anon_sym_envd,
  [1485] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(36), 1,
      sym_comment,
    ACTIONS(302), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(304), 15,
      anon_sym_general,
      anon_sym_decoration,
      anon_sym_animation,
      anon_sym_input,
      anon_sym_gestures,
      anon_sym_misc,
      anon_sym_binds,
      anon_sym_debug,
      anon_sym_device,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      anon_sym_source,
      anon_sym_layerrule,
      anon_sym_env,
      anon_sym_envd,
  [1513] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(37), 1,
      sym_comment,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(308), 15,
      anon_sym_general,
      anon_sym_decoration,
      anon_sym_animation,
      anon_sym_input,
      anon_sym_gestures,
      anon_sym_misc,
      anon_sym_binds,
      anon_sym_debug,
      anon_sym_device,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      anon_sym_source,
      anon_sym_layerrule,
      anon_sym_env,
      anon_sym_envd,
  [1541] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(310), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(312), 15,
      anon_sym_general,
      anon_sym_decoration,
      anon_sym_animation,
      anon_sym_input,
      anon_sym_gestures,
      anon_sym_misc,
      anon_sym_binds,
      anon_sym_debug,
      anon_sym_device,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      anon_sym_source,
      anon_sym_layerrule,
      anon_sym_env,
      anon_sym_envd,
  [1569] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(314), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(316), 15,
      anon_sym_general,
      anon_sym_decoration,
      anon_sym_animation,
      anon_sym_input,
      anon_sym_gestures,
      anon_sym_misc,
      anon_sym_binds,
      anon_sym_debug,
      anon_sym_device,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      anon_sym_source,
      anon_sym_layerrule,
      anon_sym_env,
      anon_sym_envd,
  [1597] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(40), 1,
      sym_comment,
    ACTIONS(318), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(320), 15,
      anon_sym_general,
      anon_sym_decoration,
      anon_sym_animation,
      anon_sym_input,
      anon_sym_gestures,
      anon_sym_misc,
      anon_sym_binds,
      anon_sym_debug,
      anon_sym_device,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      anon_sym_source,
      anon_sym_layerrule,
      anon_sym_env,
      anon_sym_envd,
  [1625] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(41), 1,
      sym_comment,
    ACTIONS(322), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(324), 15,
      anon_sym_general,
      anon_sym_decoration,
      anon_sym_animation,
      anon_sym_input,
      anon_sym_gestures,
      anon_sym_misc,
      anon_sym_binds,
      anon_sym_debug,
      anon_sym_device,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      anon_sym_source,
      anon_sym_layerrule,
      anon_sym_env,
      anon_sym_envd,
  [1653] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(42), 1,
      sym_comment,
    ACTIONS(326), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(328), 15,
      anon_sym_general,
      anon_sym_decoration,
      anon_sym_animation,
      anon_sym_input,
      anon_sym_gestures,
      anon_sym_misc,
      anon_sym_binds,
      anon_sym_debug,
      anon_sym_device,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      anon_sym_source,
      anon_sym_layerrule,
      anon_sym_env,
      anon_sym_envd,
  [1681] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(43), 1,
      sym_comment,
    ACTIONS(330), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(332), 15,
      anon_sym_general,
      anon_sym_decoration,
      anon_sym_animation,
      anon_sym_input,
      anon_sym_gestures,
      anon_sym_misc,
      anon_sym_binds,
      anon_sym_debug,
      anon_sym_device,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      anon_sym_source,
      anon_sym_layerrule,
      anon_sym_env,
      anon_sym_envd,
  [1709] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(44), 1,
      sym_comment,
    ACTIONS(334), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(336), 15,
      anon_sym_general,
      anon_sym_decoration,
      anon_sym_animation,
      anon_sym_input,
      anon_sym_gestures,
      anon_sym_misc,
      anon_sym_binds,
      anon_sym_debug,
      anon_sym_device,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      anon_sym_source,
      anon_sym_layerrule,
      anon_sym_env,
      anon_sym_envd,
  [1737] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(45), 1,
      sym_comment,
    ACTIONS(338), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(340), 15,
      anon_sym_general,
      anon_sym_decoration,
      anon_sym_animation,
      anon_sym_input,
      anon_sym_gestures,
      anon_sym_misc,
      anon_sym_binds,
      anon_sym_debug,
      anon_sym_device,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      anon_sym_source,
      anon_sym_layerrule,
      anon_sym_env,
      anon_sym_envd,
  [1765] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(46), 1,
      sym_comment,
    ACTIONS(342), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(344), 15,
      anon_sym_general,
      anon_sym_decoration,
      anon_sym_animation,
      anon_sym_input,
      anon_sym_gestures,
      anon_sym_misc,
      anon_sym_binds,
      anon_sym_debug,
      anon_sym_device,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      anon_sym_source,
      anon_sym_layerrule,
      anon_sym_env,
      anon_sym_envd,
  [1793] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(47), 1,
      sym_comment,
    ACTIONS(346), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(348), 15,
      anon_sym_general,
      anon_sym_decoration,
      anon_sym_animation,
      anon_sym_input,
      anon_sym_gestures,
      anon_sym_misc,
      anon_sym_binds,
      anon_sym_debug,
      anon_sym_device,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      anon_sym_source,
      anon_sym_layerrule,
      anon_sym_env,
      anon_sym_envd,
  [1821] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(48), 1,
      sym_comment,
    ACTIONS(350), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(352), 15,
      anon_sym_general,
      anon_sym_decoration,
      anon_sym_animation,
      anon_sym_input,
      anon_sym_gestures,
      anon_sym_misc,
      anon_sym_binds,
      anon_sym_debug,
      anon_sym_device,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      anon_sym_source,
      anon_sym_layerrule,
      anon_sym_env,
      anon_sym_envd,
  [1849] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    STATE(49), 1,
      sym_comment,
    ACTIONS(356), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(166), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(179), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(354), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1879] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    STATE(50), 1,
      sym_comment,
    ACTIONS(356), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(166), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(175), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(354), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1909] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(360), 1,
      sym__newline,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    ACTIONS(371), 1,
      anon_sym_workspace_swipe_cancel_ratio,
    STATE(71), 1,
      sym__gestures_section_var,
    STATE(51), 2,
      sym_comment,
      aux_sym_variable_section_repeat5,
    ACTIONS(368), 3,
      anon_sym_workspace_swipe_fingers,
      anon_sym_workspace_swipe_distance,
      anon_sym_workspace_swipe_min_speed_to_force,
    ACTIONS(365), 5,
      anon_sym_workspace_swipe,
      anon_sym_workspace_swipe_invert,
      anon_sym_workspace_swipe_create_new,
      anon_sym_workspace_swipe_forever,
      anon_sym_workspace_swipe_numbered,
  [1941] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    STATE(52), 1,
      sym_comment,
    ACTIONS(356), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(166), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(173), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(354), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1971] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    STATE(53), 1,
      sym_comment,
    ACTIONS(356), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(166), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(232), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(354), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2001] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    STATE(54), 1,
      sym_comment,
    ACTIONS(356), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(162), 2,
      sym_bool,
      sym_variable_reference,
    STATE(166), 2,
      sym__bool_literal,
      sym__bool_integer,
    ACTIONS(354), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2031] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(374), 1,
      sym__newline,
    ACTIONS(380), 1,
      anon_sym_workspace_swipe_cancel_ratio,
    STATE(55), 1,
      sym_comment,
    STATE(56), 1,
      aux_sym_variable_section_repeat5,
    STATE(71), 1,
      sym__gestures_section_var,
    ACTIONS(378), 3,
      anon_sym_workspace_swipe_fingers,
      anon_sym_workspace_swipe_distance,
      anon_sym_workspace_swipe_min_speed_to_force,
    ACTIONS(376), 5,
      anon_sym_workspace_swipe,
      anon_sym_workspace_swipe_invert,
      anon_sym_workspace_swipe_create_new,
      anon_sym_workspace_swipe_forever,
      anon_sym_workspace_swipe_numbered,
  [2065] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(374), 1,
      sym__newline,
    ACTIONS(380), 1,
      anon_sym_workspace_swipe_cancel_ratio,
    STATE(51), 1,
      aux_sym_variable_section_repeat5,
    STATE(56), 1,
      sym_comment,
    STATE(71), 1,
      sym__gestures_section_var,
    ACTIONS(378), 3,
      anon_sym_workspace_swipe_fingers,
      anon_sym_workspace_swipe_distance,
      anon_sym_workspace_swipe_min_speed_to_force,
    ACTIONS(376), 5,
      anon_sym_workspace_swipe,
      anon_sym_workspace_swipe_invert,
      anon_sym_workspace_swipe_create_new,
      anon_sym_workspace_swipe_forever,
      anon_sym_workspace_swipe_numbered,
  [2099] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(382), 1,
      sym__newline,
    ACTIONS(385), 1,
      anon_sym_RBRACE,
    ACTIONS(390), 1,
      anon_sym_scroll_factor,
    ACTIONS(393), 1,
      anon_sym_tap_button_map,
    STATE(68), 1,
      sym__touchpad_section_var,
    STATE(57), 2,
      sym_comment,
      aux_sym__input_variable_section_repeat1,
    ACTIONS(387), 7,
      anon_sym_disable_while_typing,
      anon_sym_natural_scroll,
      anon_sym_middle_button_emulation,
      anon_sym_clickfinger_behavior,
      anon_sym_tap_DASHto_DASHclick,
      anon_sym_drag_lock,
      anon_sym_tap_DASHand_DASHdrag,
  [2131] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    STATE(58), 1,
      sym_comment,
    ACTIONS(356), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(166), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(181), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(354), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2161] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    STATE(59), 1,
      sym_comment,
    ACTIONS(356), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(166), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(176), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(354), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2191] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(396), 1,
      sym__newline,
    ACTIONS(398), 1,
      anon_sym_RBRACE,
    ACTIONS(402), 1,
      anon_sym_scroll_factor,
    ACTIONS(404), 1,
      anon_sym_tap_button_map,
    STATE(60), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym__input_variable_section_repeat1,
    STATE(68), 1,
      sym__touchpad_section_var,
    ACTIONS(400), 7,
      anon_sym_disable_while_typing,
      anon_sym_natural_scroll,
      anon_sym_middle_button_emulation,
      anon_sym_clickfinger_behavior,
      anon_sym_tap_DASHto_DASHclick,
      anon_sym_drag_lock,
      anon_sym_tap_DASHand_DASHdrag,
  [2225] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym_comment,
    ACTIONS(356), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(166), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(182), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(354), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2255] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(396), 1,
      sym__newline,
    ACTIONS(402), 1,
      anon_sym_scroll_factor,
    ACTIONS(404), 1,
      anon_sym_tap_button_map,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym__input_variable_section_repeat1,
    STATE(62), 1,
      sym_comment,
    STATE(68), 1,
      sym__touchpad_section_var,
    ACTIONS(400), 7,
      anon_sym_disable_while_typing,
      anon_sym_natural_scroll,
      anon_sym_middle_button_emulation,
      anon_sym_clickfinger_behavior,
      anon_sym_tap_DASHto_DASHclick,
      anon_sym_drag_lock,
      anon_sym_tap_DASHand_DASHdrag,
  [2289] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    STATE(63), 1,
      sym_comment,
    ACTIONS(356), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(166), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(180), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(354), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2319] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(408), 1,
      sym__newline,
    STATE(64), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym_variable_section_repeat8,
    STATE(82), 1,
      sym__debug_section_var,
    ACTIONS(412), 2,
      anon_sym_damage_tracking,
      anon_sym_manual_crash,
    ACTIONS(410), 5,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_enable_stdout_logs,
  [2349] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(408), 1,
      sym__newline,
    STATE(64), 1,
      aux_sym_variable_section_repeat8,
    STATE(65), 1,
      sym_comment,
    STATE(82), 1,
      sym__debug_section_var,
    ACTIONS(412), 2,
      anon_sym_damage_tracking,
      anon_sym_manual_crash,
    ACTIONS(410), 5,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_enable_stdout_logs,
  [2379] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(414), 1,
      sym__newline,
    STATE(66), 1,
      sym_comment,
    ACTIONS(416), 10,
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
  [2401] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(418), 1,
      sym__newline,
    STATE(67), 1,
      sym_comment,
    ACTIONS(420), 10,
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
  [2423] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(422), 1,
      sym__newline,
    STATE(68), 1,
      sym_comment,
    ACTIONS(424), 10,
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
  [2445] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(426), 1,
      sym__newline,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym__debug_section_var,
    ACTIONS(434), 2,
      anon_sym_damage_tracking,
      anon_sym_manual_crash,
    STATE(69), 2,
      sym_comment,
      aux_sym_variable_section_repeat8,
    ACTIONS(431), 5,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_enable_stdout_logs,
  [2473] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(437), 1,
      anon_sym_rgb,
    ACTIONS(439), 1,
      anon_sym_rgba,
    ACTIONS(441), 1,
      anon_sym_0x,
    STATE(70), 1,
      sym_comment,
    STATE(74), 1,
      aux_sym_gradient_repeat1,
    STATE(94), 1,
      sym_color,
    STATE(162), 2,
      sym_gradient,
      sym_variable_reference,
    STATE(93), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [2507] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(443), 1,
      sym__newline,
    STATE(71), 1,
      sym_comment,
    ACTIONS(445), 10,
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
  [2529] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(447), 1,
      sym__newline,
    STATE(72), 1,
      sym_comment,
    ACTIONS(449), 10,
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
  [2551] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(451), 1,
      sym__newline,
    STATE(73), 1,
      sym_comment,
    ACTIONS(453), 10,
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
  [2573] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(437), 1,
      anon_sym_rgb,
    ACTIONS(455), 1,
      sym_int,
    ACTIONS(457), 1,
      anon_sym_rgba,
    ACTIONS(459), 1,
      anon_sym_0x,
    ACTIONS(461), 1,
      sym__newline,
    STATE(74), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym_gradient_repeat1,
    STATE(94), 1,
      sym_color,
    STATE(192), 1,
      sym_degree,
    STATE(93), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [2609] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(463), 1,
      sym_int,
    ACTIONS(465), 1,
      anon_sym_rgb,
    ACTIONS(468), 1,
      anon_sym_rgba,
    ACTIONS(471), 1,
      anon_sym_0x,
    ACTIONS(474), 1,
      sym__newline,
    STATE(94), 1,
      sym_color,
    STATE(75), 2,
      sym_comment,
      aux_sym_gradient_repeat1,
    STATE(93), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [2640] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(476), 1,
      sym__newline,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      sym__binds_section_var,
    ACTIONS(484), 2,
      anon_sym_scroll_event_delay,
      anon_sym_focus_preferred_method,
    STATE(76), 2,
      sym_comment,
      aux_sym_variable_section_repeat7,
    ACTIONS(481), 3,
      anon_sym_pass_mouse_when_bound,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
  [2666] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(487), 1,
      sym__newline,
    STATE(76), 1,
      aux_sym_variable_section_repeat7,
    STATE(77), 1,
      sym_comment,
    STATE(83), 1,
      sym__binds_section_var,
    ACTIONS(491), 2,
      anon_sym_scroll_event_delay,
      anon_sym_focus_preferred_method,
    ACTIONS(489), 3,
      anon_sym_pass_mouse_when_bound,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
  [2694] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(493), 1,
      sym__newline,
    STATE(78), 1,
      sym_comment,
    ACTIONS(495), 8,
      anon_sym_RBRACE,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_damage_tracking,
      anon_sym_enable_stdout_logs,
      anon_sym_manual_crash,
  [2714] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(437), 1,
      anon_sym_rgb,
    ACTIONS(439), 1,
      anon_sym_rgba,
    ACTIONS(441), 1,
      anon_sym_0x,
    STATE(79), 1,
      sym_comment,
    STATE(173), 2,
      sym_color,
      sym_variable_reference,
    STATE(93), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [2742] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(497), 1,
      sym__newline,
    STATE(80), 1,
      sym_comment,
    ACTIONS(499), 8,
      anon_sym_RBRACE,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_damage_tracking,
      anon_sym_enable_stdout_logs,
      anon_sym_manual_crash,
  [2762] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(487), 1,
      sym__newline,
    STATE(77), 1,
      aux_sym_variable_section_repeat7,
    STATE(81), 1,
      sym_comment,
    STATE(83), 1,
      sym__binds_section_var,
    ACTIONS(491), 2,
      anon_sym_scroll_event_delay,
      anon_sym_focus_preferred_method,
    ACTIONS(489), 3,
      anon_sym_pass_mouse_when_bound,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
  [2790] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(501), 1,
      sym__newline,
    STATE(82), 1,
      sym_comment,
    ACTIONS(503), 8,
      anon_sym_RBRACE,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_damage_tracking,
      anon_sym_enable_stdout_logs,
      anon_sym_manual_crash,
  [2810] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(505), 1,
      sym__newline,
    STATE(83), 1,
      sym_comment,
    ACTIONS(507), 6,
      anon_sym_RBRACE,
      anon_sym_pass_mouse_when_bound,
      anon_sym_scroll_event_delay,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
      anon_sym_focus_preferred_method,
  [2828] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(509), 1,
      sym__newline,
    STATE(84), 1,
      sym_comment,
    ACTIONS(511), 6,
      anon_sym_RBRACE,
      anon_sym_pass_mouse_when_bound,
      anon_sym_scroll_event_delay,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
      anon_sym_focus_preferred_method,
  [2846] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(513), 1,
      sym__newline,
    STATE(85), 1,
      sym_comment,
    ACTIONS(515), 6,
      anon_sym_RBRACE,
      anon_sym_pass_mouse_when_bound,
      anon_sym_scroll_event_delay,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
      anon_sym_focus_preferred_method,
  [2864] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    ACTIONS(517), 1,
      sym__newline,
    ACTIONS(519), 1,
      anon_sym_transform,
    ACTIONS(521), 1,
      anon_sym_output,
    STATE(86), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym__input_variable_section_repeat2,
    STATE(101), 1,
      sym__touchdevice_section_var,
  [2889] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(398), 1,
      anon_sym_RBRACE,
    ACTIONS(517), 1,
      sym__newline,
    ACTIONS(519), 1,
      anon_sym_transform,
    ACTIONS(521), 1,
      anon_sym_output,
    STATE(86), 1,
      aux_sym__input_variable_section_repeat2,
    STATE(87), 1,
      sym_comment,
    STATE(101), 1,
      sym__touchdevice_section_var,
  [2914] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(523), 1,
      sym__newline,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
    ACTIONS(528), 1,
      anon_sym_transform,
    ACTIONS(531), 1,
      anon_sym_output,
    STATE(101), 1,
      sym__touchdevice_section_var,
    STATE(88), 2,
      sym_comment,
      aux_sym__input_variable_section_repeat2,
  [2937] = 6,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(534), 1,
      sym__newline,
    ACTIONS(537), 1,
      anon_sym_RBRACE,
    ACTIONS(539), 1,
      anon_sym_enabled,
    STATE(105), 1,
      sym__animation_section_var,
    STATE(89), 2,
      sym_comment,
      aux_sym_variable_section_repeat3,
  [2957] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(542), 1,
      sym__newline,
    ACTIONS(544), 1,
      anon_sym_enabled,
    STATE(89), 1,
      aux_sym_variable_section_repeat3,
    STATE(90), 1,
      sym_comment,
    STATE(105), 1,
      sym__animation_section_var,
  [2979] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(548), 1,
      sym__newline,
    STATE(91), 1,
      sym_comment,
    ACTIONS(546), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [2995] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(542), 1,
      sym__newline,
    ACTIONS(544), 1,
      anon_sym_enabled,
    STATE(90), 1,
      aux_sym_variable_section_repeat3,
    STATE(92), 1,
      sym_comment,
    STATE(105), 1,
      sym__animation_section_var,
  [3017] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(552), 1,
      sym__newline,
    STATE(93), 1,
      sym_comment,
    ACTIONS(550), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [3033] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(556), 1,
      sym__newline,
    STATE(94), 1,
      sym_comment,
    ACTIONS(554), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [3049] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(558), 1,
      aux_sym_word_token1,
    ACTIONS(560), 1,
      anon_sym_address,
    STATE(38), 1,
      sym_word,
    STATE(39), 1,
      sym_layer_address,
    STATE(43), 1,
      sym_layer_identifier,
    STATE(95), 1,
      sym_comment,
  [3071] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(564), 1,
      sym__newline,
    STATE(96), 1,
      sym_comment,
    ACTIONS(562), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [3087] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(568), 1,
      sym__newline,
    STATE(97), 1,
      sym_comment,
    ACTIONS(566), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [3103] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(570), 1,
      sym__newline,
    STATE(98), 1,
      sym_comment,
    ACTIONS(572), 3,
      anon_sym_RBRACE,
      anon_sym_transform,
      anon_sym_output,
  [3118] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(574), 1,
      sym_float,
    STATE(99), 1,
      sym_comment,
    STATE(173), 2,
      sym_vec2,
      sym_variable_reference,
  [3135] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(576), 1,
      sym__newline,
    STATE(100), 1,
      sym_comment,
    ACTIONS(578), 3,
      anon_sym_RBRACE,
      anon_sym_transform,
      anon_sym_output,
  [3150] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(580), 1,
      sym__newline,
    STATE(101), 1,
      sym_comment,
    ACTIONS(582), 3,
      anon_sym_RBRACE,
      anon_sym_transform,
      anon_sym_output,
  [3165] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(584), 1,
      sym__newline,
    STATE(102), 1,
      sym_comment,
    ACTIONS(586), 2,
      anon_sym_RBRACE,
      anon_sym_enabled,
  [3179] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(588), 1,
      sym_str,
    ACTIONS(590), 1,
      anon_sym_DOLLAR,
    STATE(103), 1,
      sym_comment,
    STATE(180), 1,
      sym_variable_reference,
  [3195] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(592), 1,
      sym_int,
    STATE(104), 1,
      sym_comment,
    STATE(181), 1,
      sym_variable_reference,
  [3211] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(594), 1,
      sym__newline,
    STATE(105), 1,
      sym_comment,
    ACTIONS(596), 2,
      anon_sym_RBRACE,
      anon_sym_enabled,
  [3225] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(598), 1,
      sym__newline,
    STATE(106), 1,
      sym_comment,
    ACTIONS(600), 2,
      anon_sym_RBRACE,
      anon_sym_enabled,
  [3239] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(602), 1,
      sym_float,
    STATE(107), 1,
      sym_comment,
    STATE(176), 1,
      sym_variable_reference,
  [3255] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(108), 1,
      sym_comment,
    STATE(183), 1,
      sym_layer_rule,
    ACTIONS(604), 2,
      anon_sym_blur,
      anon_sym_unset,
  [3269] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      sym_float,
    STATE(109), 1,
      sym_comment,
    STATE(179), 1,
      sym_variable_reference,
  [3285] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(608), 1,
      sym_int,
    STATE(110), 1,
      sym_comment,
    STATE(182), 1,
      sym_variable_reference,
  [3301] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(610), 1,
      sym_float,
    STATE(111), 1,
      sym_comment,
    STATE(180), 1,
      sym_variable_reference,
  [3317] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_DOLLAR,
    ACTIONS(612), 1,
      sym_str,
    STATE(112), 1,
      sym_comment,
    STATE(233), 1,
      sym_variable_reference,
  [3333] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(614), 1,
      sym_int,
    STATE(113), 1,
      sym_comment,
    STATE(233), 1,
      sym_variable_reference,
  [3349] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(602), 1,
      sym_int,
    STATE(114), 1,
      sym_comment,
    STATE(176), 1,
      sym_variable_reference,
  [3365] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_DOLLAR,
    ACTIONS(616), 1,
      sym_str,
    STATE(115), 1,
      sym_comment,
    STATE(176), 1,
      sym_variable_reference,
  [3381] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_DOLLAR,
    ACTIONS(618), 1,
      sym_str,
    STATE(116), 1,
      sym_comment,
    STATE(173), 1,
      sym_variable_reference,
  [3397] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(620), 1,
      sym_float,
    STATE(117), 1,
      sym_comment,
    STATE(162), 1,
      sym_variable_reference,
  [3413] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(620), 1,
      sym_int,
    STATE(118), 1,
      sym_comment,
    STATE(162), 1,
      sym_variable_reference,
  [3429] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      sym_int,
    STATE(119), 1,
      sym_comment,
    STATE(179), 1,
      sym_variable_reference,
  [3445] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_DOLLAR,
    ACTIONS(622), 1,
      sym_str,
    STATE(120), 1,
      sym_comment,
    STATE(232), 1,
      sym_variable_reference,
  [3461] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_DOLLAR,
    ACTIONS(624), 1,
      sym_str,
    STATE(121), 1,
      sym_comment,
    STATE(162), 1,
      sym_variable_reference,
  [3477] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(610), 1,
      sym_int,
    STATE(122), 1,
      sym_comment,
    STATE(180), 1,
      sym_variable_reference,
  [3493] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(626), 1,
      sym_float,
    STATE(123), 1,
      sym_comment,
    STATE(232), 1,
      sym_variable_reference,
  [3509] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(628), 1,
      sym_int,
    STATE(124), 1,
      sym_comment,
    STATE(173), 1,
      sym_variable_reference,
  [3525] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(628), 1,
      sym_float,
    STATE(125), 1,
      sym_comment,
    STATE(173), 1,
      sym_variable_reference,
  [3541] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(630), 1,
      aux_sym_word_token1,
    STATE(126), 1,
      sym_comment,
    STATE(172), 1,
      sym_word,
  [3554] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(630), 1,
      aux_sym_word_token1,
    STATE(127), 1,
      sym_comment,
    STATE(177), 1,
      sym_word,
  [3567] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(632), 1,
      anon_sym_EQ,
    STATE(128), 1,
      sym_comment,
  [3577] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(634), 1,
      anon_sym_0x2,
    STATE(129), 1,
      sym_comment,
  [3587] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(636), 1,
      sym_str,
    STATE(130), 1,
      sym_comment,
  [3597] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(638), 1,
      sym_str,
    STATE(131), 1,
      sym_comment,
  [3607] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      sym__newline,
    STATE(132), 1,
      sym_comment,
  [3617] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(642), 1,
      anon_sym_EQ,
    STATE(133), 1,
      sym_comment,
  [3627] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(644), 1,
      anon_sym_EQ,
    STATE(134), 1,
      sym_comment,
  [3637] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(646), 1,
      sym__newline,
    STATE(135), 1,
      sym_comment,
  [3647] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(648), 1,
      sym__newline,
    STATE(136), 1,
      sym_comment,
  [3657] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(650), 1,
      anon_sym_EQ,
    STATE(137), 1,
      sym_comment,
  [3667] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(652), 1,
      anon_sym_EQ,
    STATE(138), 1,
      sym_comment,
  [3677] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(654), 1,
      anon_sym_EQ,
    STATE(139), 1,
      sym_comment,
  [3687] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(656), 1,
      anon_sym_EQ,
    STATE(140), 1,
      sym_comment,
  [3697] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(658), 1,
      anon_sym_EQ,
    STATE(141), 1,
      sym_comment,
  [3707] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(660), 1,
      anon_sym_EQ,
    STATE(142), 1,
      sym_comment,
  [3717] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(662), 1,
      anon_sym_EQ,
    STATE(143), 1,
      sym_comment,
  [3727] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(664), 1,
      anon_sym_EQ,
    STATE(144), 1,
      sym_comment,
  [3737] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(666), 1,
      anon_sym_EQ,
    STATE(145), 1,
      sym_comment,
  [3747] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(668), 1,
      anon_sym_EQ,
    STATE(146), 1,
      sym_comment,
  [3757] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(670), 1,
      anon_sym_EQ,
    STATE(147), 1,
      sym_comment,
  [3767] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(672), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym_comment,
  [3777] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(674), 1,
      anon_sym_LBRACE,
    STATE(149), 1,
      sym_comment,
  [3787] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(676), 1,
      anon_sym_EQ,
    STATE(150), 1,
      sym_comment,
  [3797] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(678), 1,
      anon_sym_EQ,
    STATE(151), 1,
      sym_comment,
  [3807] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(680), 1,
      anon_sym_EQ,
    STATE(152), 1,
      sym_comment,
  [3817] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(682), 1,
      anon_sym_EQ,
    STATE(153), 1,
      sym_comment,
  [3827] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(684), 1,
      anon_sym_EQ,
    STATE(154), 1,
      sym_comment,
  [3837] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(686), 1,
      anon_sym_EQ,
    STATE(155), 1,
      sym_comment,
  [3847] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(688), 1,
      anon_sym_COLON,
    STATE(156), 1,
      sym_comment,
  [3857] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(690), 1,
      anon_sym_EQ,
    STATE(157), 1,
      sym_comment,
  [3867] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(692), 1,
      anon_sym_EQ,
    STATE(158), 1,
      sym_comment,
  [3877] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(694), 1,
      anon_sym_EQ,
    STATE(159), 1,
      sym_comment,
  [3887] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(696), 1,
      anon_sym_EQ,
    STATE(160), 1,
      sym_comment,
  [3897] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(698), 1,
      anon_sym_EQ,
    STATE(161), 1,
      sym_comment,
  [3907] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(700), 1,
      sym__newline,
    STATE(162), 1,
      sym_comment,
  [3917] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(702), 1,
      aux_sym_word_token1,
    STATE(163), 1,
      sym_comment,
  [3927] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(704), 1,
      sym__newline,
    STATE(164), 1,
      sym_comment,
  [3937] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(706), 1,
      sym__newline,
    STATE(165), 1,
      sym_comment,
  [3947] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(708), 1,
      sym__newline,
    STATE(166), 1,
      sym_comment,
  [3957] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(710), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym_comment,
  [3967] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(712), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      sym_comment,
  [3977] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(714), 1,
      sym__hex_comp,
    STATE(169), 1,
      sym_comment,
  [3987] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(716), 1,
      anon_sym_EQ,
    STATE(170), 1,
      sym_comment,
  [3997] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(718), 1,
      anon_sym_EQ,
    STATE(171), 1,
      sym_comment,
  [4007] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(720), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      sym_comment,
  [4017] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(722), 1,
      sym__newline,
    STATE(173), 1,
      sym_comment,
  [4027] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(724), 1,
      sym_float,
    STATE(174), 1,
      sym_comment,
  [4037] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(726), 1,
      sym__newline,
    STATE(175), 1,
      sym_comment,
  [4047] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(728), 1,
      sym__newline,
    STATE(176), 1,
      sym_comment,
  [4057] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      sym_comment,
  [4067] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      sym_comment,
  [4077] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(732), 1,
      sym__newline,
    STATE(179), 1,
      sym_comment,
  [4087] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(734), 1,
      sym__newline,
    STATE(180), 1,
      sym_comment,
  [4097] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(736), 1,
      sym__newline,
    STATE(181), 1,
      sym_comment,
  [4107] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(738), 1,
      sym__newline,
    STATE(182), 1,
      sym_comment,
  [4117] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(740), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      sym_comment,
  [4127] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(742), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      sym_comment,
  [4137] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(744), 1,
      aux_sym_comment_token1,
    STATE(185), 1,
      sym_comment,
  [4147] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(746), 1,
      sym__newline,
    STATE(186), 1,
      sym_comment,
  [4157] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(748), 1,
      sym__newline,
    STATE(187), 1,
      sym_comment,
  [4167] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(750), 1,
      sym__hex_comp,
    STATE(188), 1,
      sym_comment,
  [4177] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(752), 1,
      sym__hex_comp,
    STATE(189), 1,
      sym_comment,
  [4187] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(754), 1,
      sym__hex_comp,
    STATE(190), 1,
      sym_comment,
  [4197] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(756), 1,
      anon_sym_deg,
    STATE(191), 1,
      sym_comment,
  [4207] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(758), 1,
      sym__newline,
    STATE(192), 1,
      sym_comment,
  [4217] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(760), 1,
      sym__newline,
    STATE(193), 1,
      sym_comment,
  [4227] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(762), 1,
      anon_sym_LBRACE,
    STATE(194), 1,
      sym_comment,
  [4237] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(764), 1,
      sym__newline,
    STATE(195), 1,
      sym_comment,
  [4247] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(766), 1,
      sym_str,
    STATE(196), 1,
      sym_comment,
  [4257] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(768), 1,
      sym_shell_command,
    STATE(197), 1,
      sym_comment,
  [4267] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(770), 1,
      sym_shell_command,
    STATE(198), 1,
      sym_comment,
  [4277] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(772), 1,
      aux_sym_variable_section_token1,
    STATE(199), 1,
      sym_comment,
  [4287] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(774), 1,
      anon_sym_EQ,
    STATE(200), 1,
      sym_comment,
  [4297] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(776), 1,
      anon_sym_EQ,
    STATE(201), 1,
      sym_comment,
  [4307] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(778), 1,
      anon_sym_EQ,
    STATE(202), 1,
      sym_comment,
  [4317] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(780), 1,
      sym__newline,
    STATE(203), 1,
      sym_comment,
  [4327] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(782), 1,
      sym__newline,
    STATE(204), 1,
      sym_comment,
  [4337] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(784), 1,
      sym__newline,
    STATE(205), 1,
      sym_comment,
  [4347] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(786), 1,
      anon_sym_EQ,
    STATE(206), 1,
      sym_comment,
  [4357] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(788), 1,
      anon_sym_EQ,
    STATE(207), 1,
      sym_comment,
  [4367] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(790), 1,
      sym__newline,
    STATE(208), 1,
      sym_comment,
  [4377] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(792), 1,
      sym__newline,
    STATE(209), 1,
      sym_comment,
  [4387] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(794), 1,
      sym__newline,
    STATE(210), 1,
      sym_comment,
  [4397] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(796), 1,
      sym__newline,
    STATE(211), 1,
      sym_comment,
  [4407] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(798), 1,
      sym__newline,
    STATE(212), 1,
      sym_comment,
  [4417] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(800), 1,
      anon_sym_LBRACE,
    STATE(213), 1,
      sym_comment,
  [4427] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(802), 1,
      ts_builtin_sym_end,
    STATE(214), 1,
      sym_comment,
  [4437] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(804), 1,
      aux_sym_layer_address_token1,
    STATE(215), 1,
      sym_comment,
  [4447] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(806), 1,
      sym__hex_comp,
    STATE(216), 1,
      sym_comment,
  [4457] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(808), 1,
      sym__hex_comp,
    STATE(217), 1,
      sym_comment,
  [4467] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(810), 1,
      sym__hex_comp,
    STATE(218), 1,
      sym_comment,
  [4477] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(812), 1,
      sym__newline,
    STATE(219), 1,
      sym_comment,
  [4487] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(814), 1,
      anon_sym_EQ,
    STATE(220), 1,
      sym_comment,
  [4497] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(816), 1,
      anon_sym_EQ,
    STATE(221), 1,
      sym_comment,
  [4507] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(818), 1,
      anon_sym_EQ,
    STATE(222), 1,
      sym_comment,
  [4517] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(820), 1,
      anon_sym_EQ,
    STATE(223), 1,
      sym_comment,
  [4527] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(822), 1,
      anon_sym_EQ,
    STATE(224), 1,
      sym_comment,
  [4537] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      anon_sym_EQ,
    STATE(225), 1,
      sym_comment,
  [4547] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(826), 1,
      anon_sym_COLON,
    STATE(226), 1,
      sym_comment,
  [4557] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      anon_sym_LBRACE,
    STATE(227), 1,
      sym_comment,
  [4567] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(830), 1,
      anon_sym_LBRACE,
    STATE(228), 1,
      sym_comment,
  [4577] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(832), 1,
      sym__hex_comp,
    STATE(229), 1,
      sym_comment,
  [4587] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(834), 1,
      sym__hex_comp,
    STATE(230), 1,
      sym_comment,
  [4597] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(836), 1,
      sym__hex_comp,
    STATE(231), 1,
      sym_comment,
  [4607] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(838), 1,
      sym__newline,
    STATE(232), 1,
      sym_comment,
  [4617] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(840), 1,
      sym__newline,
    STATE(233), 1,
      sym_comment,
  [4627] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      sym_comment,
  [4637] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(844), 1,
      sym__hex_comp,
    STATE(235), 1,
      sym_comment,
  [4647] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(846), 1,
      anon_sym_LBRACE,
    STATE(236), 1,
      sym_comment,
  [4657] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(848), 1,
      anon_sym_LBRACE,
    STATE(237), 1,
      sym_comment,
  [4667] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(850), 1,
      anon_sym_LBRACE,
    STATE(238), 1,
      sym_comment,
  [4677] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(852), 1,
      anon_sym_LBRACE,
    STATE(239), 1,
      sym_comment,
  [4687] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(854), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      sym_comment,
  [4697] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(856), 1,
      anon_sym_LBRACE,
    STATE(241), 1,
      sym_comment,
  [4707] = 1,
    ACTIONS(858), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 160,
  [SMALL_STATE(6)] = 200,
  [SMALL_STATE(7)] = 240,
  [SMALL_STATE(8)] = 280,
  [SMALL_STATE(9)] = 335,
  [SMALL_STATE(10)] = 390,
  [SMALL_STATE(11)] = 443,
  [SMALL_STATE(12)] = 496,
  [SMALL_STATE(13)] = 569,
  [SMALL_STATE(14)] = 624,
  [SMALL_STATE(15)] = 679,
  [SMALL_STATE(16)] = 750,
  [SMALL_STATE(17)] = 805,
  [SMALL_STATE(18)] = 842,
  [SMALL_STATE(19)] = 879,
  [SMALL_STATE(20)] = 934,
  [SMALL_STATE(21)] = 971,
  [SMALL_STATE(22)] = 1005,
  [SMALL_STATE(23)] = 1039,
  [SMALL_STATE(24)] = 1073,
  [SMALL_STATE(25)] = 1107,
  [SMALL_STATE(26)] = 1141,
  [SMALL_STATE(27)] = 1175,
  [SMALL_STATE(28)] = 1219,
  [SMALL_STATE(29)] = 1265,
  [SMALL_STATE(30)] = 1311,
  [SMALL_STATE(31)] = 1341,
  [SMALL_STATE(32)] = 1371,
  [SMALL_STATE(33)] = 1401,
  [SMALL_STATE(34)] = 1429,
  [SMALL_STATE(35)] = 1457,
  [SMALL_STATE(36)] = 1485,
  [SMALL_STATE(37)] = 1513,
  [SMALL_STATE(38)] = 1541,
  [SMALL_STATE(39)] = 1569,
  [SMALL_STATE(40)] = 1597,
  [SMALL_STATE(41)] = 1625,
  [SMALL_STATE(42)] = 1653,
  [SMALL_STATE(43)] = 1681,
  [SMALL_STATE(44)] = 1709,
  [SMALL_STATE(45)] = 1737,
  [SMALL_STATE(46)] = 1765,
  [SMALL_STATE(47)] = 1793,
  [SMALL_STATE(48)] = 1821,
  [SMALL_STATE(49)] = 1849,
  [SMALL_STATE(50)] = 1879,
  [SMALL_STATE(51)] = 1909,
  [SMALL_STATE(52)] = 1941,
  [SMALL_STATE(53)] = 1971,
  [SMALL_STATE(54)] = 2001,
  [SMALL_STATE(55)] = 2031,
  [SMALL_STATE(56)] = 2065,
  [SMALL_STATE(57)] = 2099,
  [SMALL_STATE(58)] = 2131,
  [SMALL_STATE(59)] = 2161,
  [SMALL_STATE(60)] = 2191,
  [SMALL_STATE(61)] = 2225,
  [SMALL_STATE(62)] = 2255,
  [SMALL_STATE(63)] = 2289,
  [SMALL_STATE(64)] = 2319,
  [SMALL_STATE(65)] = 2349,
  [SMALL_STATE(66)] = 2379,
  [SMALL_STATE(67)] = 2401,
  [SMALL_STATE(68)] = 2423,
  [SMALL_STATE(69)] = 2445,
  [SMALL_STATE(70)] = 2473,
  [SMALL_STATE(71)] = 2507,
  [SMALL_STATE(72)] = 2529,
  [SMALL_STATE(73)] = 2551,
  [SMALL_STATE(74)] = 2573,
  [SMALL_STATE(75)] = 2609,
  [SMALL_STATE(76)] = 2640,
  [SMALL_STATE(77)] = 2666,
  [SMALL_STATE(78)] = 2694,
  [SMALL_STATE(79)] = 2714,
  [SMALL_STATE(80)] = 2742,
  [SMALL_STATE(81)] = 2762,
  [SMALL_STATE(82)] = 2790,
  [SMALL_STATE(83)] = 2810,
  [SMALL_STATE(84)] = 2828,
  [SMALL_STATE(85)] = 2846,
  [SMALL_STATE(86)] = 2864,
  [SMALL_STATE(87)] = 2889,
  [SMALL_STATE(88)] = 2914,
  [SMALL_STATE(89)] = 2937,
  [SMALL_STATE(90)] = 2957,
  [SMALL_STATE(91)] = 2979,
  [SMALL_STATE(92)] = 2995,
  [SMALL_STATE(93)] = 3017,
  [SMALL_STATE(94)] = 3033,
  [SMALL_STATE(95)] = 3049,
  [SMALL_STATE(96)] = 3071,
  [SMALL_STATE(97)] = 3087,
  [SMALL_STATE(98)] = 3103,
  [SMALL_STATE(99)] = 3118,
  [SMALL_STATE(100)] = 3135,
  [SMALL_STATE(101)] = 3150,
  [SMALL_STATE(102)] = 3165,
  [SMALL_STATE(103)] = 3179,
  [SMALL_STATE(104)] = 3195,
  [SMALL_STATE(105)] = 3211,
  [SMALL_STATE(106)] = 3225,
  [SMALL_STATE(107)] = 3239,
  [SMALL_STATE(108)] = 3255,
  [SMALL_STATE(109)] = 3269,
  [SMALL_STATE(110)] = 3285,
  [SMALL_STATE(111)] = 3301,
  [SMALL_STATE(112)] = 3317,
  [SMALL_STATE(113)] = 3333,
  [SMALL_STATE(114)] = 3349,
  [SMALL_STATE(115)] = 3365,
  [SMALL_STATE(116)] = 3381,
  [SMALL_STATE(117)] = 3397,
  [SMALL_STATE(118)] = 3413,
  [SMALL_STATE(119)] = 3429,
  [SMALL_STATE(120)] = 3445,
  [SMALL_STATE(121)] = 3461,
  [SMALL_STATE(122)] = 3477,
  [SMALL_STATE(123)] = 3493,
  [SMALL_STATE(124)] = 3509,
  [SMALL_STATE(125)] = 3525,
  [SMALL_STATE(126)] = 3541,
  [SMALL_STATE(127)] = 3554,
  [SMALL_STATE(128)] = 3567,
  [SMALL_STATE(129)] = 3577,
  [SMALL_STATE(130)] = 3587,
  [SMALL_STATE(131)] = 3597,
  [SMALL_STATE(132)] = 3607,
  [SMALL_STATE(133)] = 3617,
  [SMALL_STATE(134)] = 3627,
  [SMALL_STATE(135)] = 3637,
  [SMALL_STATE(136)] = 3647,
  [SMALL_STATE(137)] = 3657,
  [SMALL_STATE(138)] = 3667,
  [SMALL_STATE(139)] = 3677,
  [SMALL_STATE(140)] = 3687,
  [SMALL_STATE(141)] = 3697,
  [SMALL_STATE(142)] = 3707,
  [SMALL_STATE(143)] = 3717,
  [SMALL_STATE(144)] = 3727,
  [SMALL_STATE(145)] = 3737,
  [SMALL_STATE(146)] = 3747,
  [SMALL_STATE(147)] = 3757,
  [SMALL_STATE(148)] = 3767,
  [SMALL_STATE(149)] = 3777,
  [SMALL_STATE(150)] = 3787,
  [SMALL_STATE(151)] = 3797,
  [SMALL_STATE(152)] = 3807,
  [SMALL_STATE(153)] = 3817,
  [SMALL_STATE(154)] = 3827,
  [SMALL_STATE(155)] = 3837,
  [SMALL_STATE(156)] = 3847,
  [SMALL_STATE(157)] = 3857,
  [SMALL_STATE(158)] = 3867,
  [SMALL_STATE(159)] = 3877,
  [SMALL_STATE(160)] = 3887,
  [SMALL_STATE(161)] = 3897,
  [SMALL_STATE(162)] = 3907,
  [SMALL_STATE(163)] = 3917,
  [SMALL_STATE(164)] = 3927,
  [SMALL_STATE(165)] = 3937,
  [SMALL_STATE(166)] = 3947,
  [SMALL_STATE(167)] = 3957,
  [SMALL_STATE(168)] = 3967,
  [SMALL_STATE(169)] = 3977,
  [SMALL_STATE(170)] = 3987,
  [SMALL_STATE(171)] = 3997,
  [SMALL_STATE(172)] = 4007,
  [SMALL_STATE(173)] = 4017,
  [SMALL_STATE(174)] = 4027,
  [SMALL_STATE(175)] = 4037,
  [SMALL_STATE(176)] = 4047,
  [SMALL_STATE(177)] = 4057,
  [SMALL_STATE(178)] = 4067,
  [SMALL_STATE(179)] = 4077,
  [SMALL_STATE(180)] = 4087,
  [SMALL_STATE(181)] = 4097,
  [SMALL_STATE(182)] = 4107,
  [SMALL_STATE(183)] = 4117,
  [SMALL_STATE(184)] = 4127,
  [SMALL_STATE(185)] = 4137,
  [SMALL_STATE(186)] = 4147,
  [SMALL_STATE(187)] = 4157,
  [SMALL_STATE(188)] = 4167,
  [SMALL_STATE(189)] = 4177,
  [SMALL_STATE(190)] = 4187,
  [SMALL_STATE(191)] = 4197,
  [SMALL_STATE(192)] = 4207,
  [SMALL_STATE(193)] = 4217,
  [SMALL_STATE(194)] = 4227,
  [SMALL_STATE(195)] = 4237,
  [SMALL_STATE(196)] = 4247,
  [SMALL_STATE(197)] = 4257,
  [SMALL_STATE(198)] = 4267,
  [SMALL_STATE(199)] = 4277,
  [SMALL_STATE(200)] = 4287,
  [SMALL_STATE(201)] = 4297,
  [SMALL_STATE(202)] = 4307,
  [SMALL_STATE(203)] = 4317,
  [SMALL_STATE(204)] = 4327,
  [SMALL_STATE(205)] = 4337,
  [SMALL_STATE(206)] = 4347,
  [SMALL_STATE(207)] = 4357,
  [SMALL_STATE(208)] = 4367,
  [SMALL_STATE(209)] = 4377,
  [SMALL_STATE(210)] = 4387,
  [SMALL_STATE(211)] = 4397,
  [SMALL_STATE(212)] = 4407,
  [SMALL_STATE(213)] = 4417,
  [SMALL_STATE(214)] = 4427,
  [SMALL_STATE(215)] = 4437,
  [SMALL_STATE(216)] = 4447,
  [SMALL_STATE(217)] = 4457,
  [SMALL_STATE(218)] = 4467,
  [SMALL_STATE(219)] = 4477,
  [SMALL_STATE(220)] = 4487,
  [SMALL_STATE(221)] = 4497,
  [SMALL_STATE(222)] = 4507,
  [SMALL_STATE(223)] = 4517,
  [SMALL_STATE(224)] = 4527,
  [SMALL_STATE(225)] = 4537,
  [SMALL_STATE(226)] = 4547,
  [SMALL_STATE(227)] = 4557,
  [SMALL_STATE(228)] = 4567,
  [SMALL_STATE(229)] = 4577,
  [SMALL_STATE(230)] = 4587,
  [SMALL_STATE(231)] = 4597,
  [SMALL_STATE(232)] = 4607,
  [SMALL_STATE(233)] = 4617,
  [SMALL_STATE(234)] = 4627,
  [SMALL_STATE(235)] = 4637,
  [SMALL_STATE(236)] = 4647,
  [SMALL_STATE(237)] = 4657,
  [SMALL_STATE(238)] = 4667,
  [SMALL_STATE(239)] = 4677,
  [SMALL_STATE(240)] = 4687,
  [SMALL_STATE(241)] = 4697,
  [SMALL_STATE(242)] = 4707,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(7),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(142),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(141),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(140),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(139),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat6, 1, .production_id = 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 1, .production_id = 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__misc_section_var, 4, .production_id = 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__misc_section_var, 4, .production_id = 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat6, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(18),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(159),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(158),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(157),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(155),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(154),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(153),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(24),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(151),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(150),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(149),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(148),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(147),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(146),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(44),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(213),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(241),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(239),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(238),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(237),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(236),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(228),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(227),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(226),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(225),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(224),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(223),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(222),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(221),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(220),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_section_var, 4, .production_id = 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_section_var, 4, .production_id = 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat2, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat2, 1, .production_id = 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 1, .production_id = 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_variable_section, 4, .production_id = 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_variable_section, 4, .production_id = 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_section_var, 4, .production_id = 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_section_var, 4, .production_id = 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_variable_section, 5, .production_id = 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_variable_section, 5, .production_id = 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat4, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat4, 1, .production_id = 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 1, .production_id = 3),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(32),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(171),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(170),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(128),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(161),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(160),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__general_section_var, 4, .production_id = 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__general_section_var, 4, .production_id = 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat1, 1, .production_id = 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 1, .production_id = 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat1, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_exec_once, 4, .production_id = 4),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_exec_once, 4, .production_id = 4),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_section, 6, .production_id = 7),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_section, 6, .production_id = 7),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_envd, 5, .production_id = 6),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_envd, 5, .production_id = 6),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_section, 5, .production_id = 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_section, 5, .production_id = 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layer_identifier, 1, .production_id = 5),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_layer_identifier, 1, .production_id = 5),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layer_identifier, 1),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_layer_identifier, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_section, 7, .production_id = 7),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_section, 7, .production_id = 7),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_env, 5, .production_id = 6),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_env, 5, .production_id = 6),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_layerrule, 5, .production_id = 6),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_layerrule, 5, .production_id = 6),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 1),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_source, 3, .production_id = 1),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_source, 3, .production_id = 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_section, 4, .production_id = 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_section, 4, .production_id = 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_exec, 4, .production_id = 4),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_exec, 4, .production_id = 4),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layer_address, 4, .production_id = 9),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_layer_address, 4, .production_id = 9),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat5, 2), SHIFT_REPEAT(66),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 2),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 2), SHIFT_REPEAT(145),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 2), SHIFT_REPEAT(144),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 2), SHIFT_REPEAT(143),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat1, 2), SHIFT_REPEAT(67),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 2),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 2), SHIFT_REPEAT(200),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 2), SHIFT_REPEAT(201),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 2), SHIFT_REPEAT(202),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat5, 1),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat1, 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat1, 1, .production_id = 3),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 1, .production_id = 3),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat8, 2), SHIFT_REPEAT(78),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 2),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 2), SHIFT_REPEAT(134),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 2), SHIFT_REPEAT(133),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat5, 1, .production_id = 3),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 1, .production_id = 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__touchpad_section_var, 4, .production_id = 2),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__touchpad_section_var, 4, .production_id = 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gestures_section_var, 4, .production_id = 2),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gestures_section_var, 4, .production_id = 2),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gradient, 1),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(167),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(168),
  [471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(169),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 2),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat7, 2), SHIFT_REPEAT(84),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 2),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 2), SHIFT_REPEAT(138),
  [484] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 2), SHIFT_REPEAT(137),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat8, 1),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug_section_var, 4, .production_id = 2),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__debug_section_var, 4, .production_id = 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat8, 1, .production_id = 3),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 1, .production_id = 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat7, 1, .production_id = 3),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 1, .production_id = 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat7, 1),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binds_section_var, 4, .production_id = 2),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binds_section_var, 4, .production_id = 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat2, 2), SHIFT_REPEAT(100),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 2),
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 2), SHIFT_REPEAT(206),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 2), SHIFT_REPEAT(207),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat3, 2), SHIFT_REPEAT(106),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat3, 2),
  [539] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat3, 2), SHIFT_REPEAT(152),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_rgb, 6),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_rgb, 6),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 1),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 1),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_hex, 5),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_hex, 5),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_rgba, 7),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_rgba, 7),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__touchdevice_section_var, 4, .production_id = 2),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__touchdevice_section_var, 4, .production_id = 2),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat2, 1),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat2, 1, .production_id = 3),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 1, .production_id = 3),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__animation_section_var, 4, .production_id = 2),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__animation_section_var, 4, .production_id = 2),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat3, 1, .production_id = 3),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat3, 1, .production_id = 3),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat3, 1),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat3, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_literal, 1),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_integer, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layer_rule, 1),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_reference, 2),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gradient, 2),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec2, 2),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [802] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_degree, 2, .production_id = 8),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
