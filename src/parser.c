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
#define STATE_COUNT 264
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 243
#define ALIAS_COUNT 1
#define TOKEN_COUNT 192
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 15

enum {
  anon_sym_POUND = 1,
  aux_sym_comment_token1 = 2,
  sym_int = 3,
  sym__immediate_int = 4,
  sym_float = 5,
  sym__immediate_float = 6,
  anon_sym_SHIFT = 7,
  anon_sym_CAPS = 8,
  anon_sym_CTRL = 9,
  anon_sym_CONTROL = 10,
  anon_sym_ALT = 11,
  anon_sym_MOD2 = 12,
  anon_sym_MOD3 = 13,
  anon_sym_SUPER = 14,
  anon_sym_WIN = 15,
  anon_sym_LOGO = 16,
  anon_sym_MOD4 = 17,
  anon_sym_MOD5 = 18,
  anon_sym_true = 19,
  anon_sym_false = 20,
  anon_sym_yes = 21,
  anon_sym_no = 22,
  anon_sym_on = 23,
  anon_sym_off = 24,
  anon_sym_0 = 25,
  anon_sym_1 = 26,
  anon_sym_rgb = 27,
  anon_sym_LPAREN = 28,
  anon_sym_RPAREN = 29,
  anon_sym_rgba = 30,
  anon_sym_0x = 31,
  sym__hex_comp = 32,
  anon_sym_deg = 33,
  sym_str = 34,
  sym_word = 35,
  anon_sym_DOLLAR = 36,
  aux_sym_variable_reference_token1 = 37,
  sym__newline = 38,
  anon_sym_general = 39,
  anon_sym_LBRACE = 40,
  anon_sym_RBRACE = 41,
  anon_sym_decoration = 42,
  anon_sym_animation = 43,
  anon_sym_input = 44,
  anon_sym_gestures = 45,
  anon_sym_misc = 46,
  anon_sym_binds = 47,
  anon_sym_debug = 48,
  anon_sym_device = 49,
  anon_sym_COLON = 50,
  aux_sym_variable_section_token1 = 51,
  anon_sym_sensitivity = 52,
  anon_sym_EQ = 53,
  anon_sym_border_size = 54,
  anon_sym_no_border_on_floating = 55,
  anon_sym_gaps_in = 56,
  anon_sym_gaps_out = 57,
  anon_sym_col_DOTinactive_border = 58,
  anon_sym_col_DOTactive_border = 59,
  anon_sym_col_DOTgroup_border = 60,
  anon_sym_col_DOTgroup_border_active = 61,
  anon_sym_cursor_inactive_timeout = 62,
  anon_sym_layout = 63,
  anon_sym_no_cursor_warps = 64,
  anon_sym_no_focus_fallback = 65,
  anon_sym_apply_sens_to_raw = 66,
  anon_sym_resize_on_border = 67,
  anon_sym_extend_border_grab_area = 68,
  anon_sym_hover_icon_on_border = 69,
  anon_sym_rounding = 70,
  anon_sym_multisample_edges = 71,
  anon_sym_active_opacity = 72,
  anon_sym_inactive_opacity = 73,
  anon_sym_fullscreen_opacity = 74,
  anon_sym_blur = 75,
  anon_sym_blur_size = 76,
  anon_sym_blur_passes = 77,
  anon_sym_blur_ignore_opacity = 78,
  anon_sym_blur_new_optimizations = 79,
  anon_sym_blur_xray = 80,
  anon_sym_drop_shadow = 81,
  anon_sym_shadow_range = 82,
  anon_sym_shadow_render_power = 83,
  anon_sym_shadow_ignore_window = 84,
  anon_sym_col_DOTshadow = 85,
  anon_sym_col_DOTshadow_inactive = 86,
  anon_sym_shadow_offset = 87,
  anon_sym_shadow_scale = 88,
  anon_sym_dim_inactive = 89,
  anon_sym_dim_strength = 90,
  anon_sym_dim_special = 91,
  anon_sym_dim_around = 92,
  anon_sym_screen_shader = 93,
  anon_sym_enabled = 94,
  anon_sym_disable_while_typing = 95,
  anon_sym_natural_scroll = 96,
  anon_sym_scroll_factor = 97,
  anon_sym_middle_button_emulation = 98,
  anon_sym_tap_button_map = 99,
  anon_sym_clickfinger_behavior = 100,
  anon_sym_tap_DASHto_DASHclick = 101,
  anon_sym_drag_lock = 102,
  anon_sym_tap_DASHand_DASHdrag = 103,
  anon_sym_transform = 104,
  anon_sym_output = 105,
  anon_sym_touchpad = 106,
  anon_sym_touchdevice = 107,
  anon_sym_kb_model = 108,
  anon_sym_kb_layout = 109,
  anon_sym_kb_variant = 110,
  anon_sym_kb_options = 111,
  anon_sym_kb_rules = 112,
  anon_sym_kb_file = 113,
  anon_sym_numlock_by_default = 114,
  anon_sym_repeat_rate = 115,
  anon_sym_repeat_delay = 116,
  anon_sym_accel_profile = 117,
  anon_sym_force_no_accel = 118,
  anon_sym_left_handed = 119,
  anon_sym_scroll_method = 120,
  anon_sym_scroll_button = 121,
  anon_sym_follow_mouse = 122,
  anon_sym_mouse_refocus = 123,
  anon_sym_float_switch_override_focus = 124,
  anon_sym_workspace_swipe = 125,
  anon_sym_workspace_swipe_fingers = 126,
  anon_sym_workspace_swipe_distance = 127,
  anon_sym_workspace_swipe_invert = 128,
  anon_sym_workspace_swipe_min_speed_to_force = 129,
  anon_sym_workspace_swipe_cancel_ratio = 130,
  anon_sym_workspace_swipe_create_new = 131,
  anon_sym_workspace_swipe_forever = 132,
  anon_sym_workspace_swipe_numbered = 133,
  anon_sym_disable_hyprland_logo = 134,
  anon_sym_disable_splash_rendering = 135,
  anon_sym_vfr = 136,
  anon_sym_vrr = 137,
  anon_sym_mouse_move_enables_dpms = 138,
  anon_sym_key_press_enables_dpms = 139,
  anon_sym_always_follow_on_dnd = 140,
  anon_sym_layers_hog_keyboard_focus = 141,
  anon_sym_animate_manual_resizes = 142,
  anon_sym_animate_mouse_windowdragging = 143,
  anon_sym_disable_autoreload = 144,
  anon_sym_enable_swallow = 145,
  anon_sym_swallow_regex = 146,
  anon_sym_swallow_exception_regex = 147,
  anon_sym_focus_on_activate = 148,
  anon_sym_no_direct_scanout = 149,
  anon_sym_hide_cursor_on_touch = 150,
  anon_sym_mouse_move_focuses_monitor = 151,
  anon_sym_suppress_portal_warnings = 152,
  anon_sym_render_ahead_of_time = 153,
  anon_sym_render_ahead_safezone = 154,
  anon_sym_cursor_zoom_factor = 155,
  anon_sym_cursor_zoom_rigid = 156,
  anon_sym_allow_session_lock_restore = 157,
  anon_sym_render_titles_in_groupbar = 158,
  anon_sym_groupbar_titles_font_size = 159,
  anon_sym_groupbar_gradients = 160,
  anon_sym_pass_mouse_when_bound = 161,
  anon_sym_scroll_event_delay = 162,
  anon_sym_workspace_back_and_forth = 163,
  anon_sym_allow_workspace_cycles = 164,
  anon_sym_focus_preferred_method = 165,
  anon_sym_overlay = 166,
  anon_sym_damage_blink = 167,
  anon_sym_disable_logs = 168,
  anon_sym_disable_time = 169,
  anon_sym_damage_tracking = 170,
  anon_sym_enable_stdout_logs = 171,
  anon_sym_manual_crash = 172,
  sym_shell_command = 173,
  anon_sym_exec = 174,
  anon_sym_exec_DASHonce = 175,
  anon_sym_source = 176,
  anon_sym_unset = 177,
  anon_sym_address = 178,
  anon_sym_0x2 = 179,
  aux_sym_layer_address_token1 = 180,
  anon_sym_layerrule = 181,
  anon_sym_COMMA = 182,
  anon_sym_env = 183,
  anon_sym_envd = 184,
  anon_sym_preferred = 185,
  anon_sym_highres = 186,
  anon_sym_highrr = 187,
  anon_sym_monitor = 188,
  sym_by = 189,
  sym_at = 190,
  sym_auto = 191,
  sym_config_file = 192,
  sym_comment = 193,
  sym_vec2 = 194,
  sym_bool = 195,
  sym__bool_literal = 196,
  sym__bool_integer = 197,
  sym_color = 198,
  sym_color_rgb = 199,
  sym_color_rgba = 200,
  sym_color_hex = 201,
  sym_gradient = 202,
  sym_degree = 203,
  sym_variable_reference = 204,
  sym_variable_section = 205,
  sym__general_section_var = 206,
  sym__decoration_section_var = 207,
  sym__animation_section_var = 208,
  sym__touchpad_section_var = 209,
  sym__touchdevice_section_var = 210,
  sym__input_variable_section = 211,
  sym__input_section_var = 212,
  sym__gestures_section_var = 213,
  sym__misc_section_var = 214,
  sym__binds_section_var = 215,
  sym__debug_section_var = 216,
  sym_command = 217,
  sym_command_exec = 218,
  sym_command_exec_once = 219,
  sym_command_source = 220,
  sym_layer_rule = 221,
  sym_layer_address = 222,
  sym_layer_identifier = 223,
  sym_command_layerrule = 224,
  sym_command_env = 225,
  sym_command_envd = 226,
  sym_resolution = 227,
  sym_position = 228,
  sym_auto_resolution = 229,
  sym_command_monitor = 230,
  aux_sym_config_file_repeat1 = 231,
  aux_sym_gradient_repeat1 = 232,
  aux_sym_variable_section_repeat1 = 233,
  aux_sym_variable_section_repeat2 = 234,
  aux_sym_variable_section_repeat3 = 235,
  aux_sym_variable_section_repeat4 = 236,
  aux_sym_variable_section_repeat5 = 237,
  aux_sym_variable_section_repeat6 = 238,
  aux_sym_variable_section_repeat7 = 239,
  aux_sym_variable_section_repeat8 = 240,
  aux_sym__input_variable_section_repeat1 = 241,
  aux_sym__input_variable_section_repeat2 = 242,
  alias_sym_layer_namespace = 243,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_int] = "int",
  [sym__immediate_int] = "int",
  [sym_float] = "float",
  [sym__immediate_float] = "_immediate_float",
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
  [sym_word] = "word",
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
  [anon_sym_preferred] = "preferred",
  [anon_sym_highres] = "highres",
  [anon_sym_highrr] = "highrr",
  [anon_sym_monitor] = "monitor",
  [sym_by] = "by",
  [sym_at] = "at",
  [sym_auto] = "auto",
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
  [sym_resolution] = "resolution",
  [sym_position] = "position",
  [sym_auto_resolution] = "auto_resolution",
  [sym_command_monitor] = "command_monitor",
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
  [sym__immediate_int] = sym_int,
  [sym_float] = sym_float,
  [sym__immediate_float] = sym__immediate_float,
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
  [sym_word] = sym_word,
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
  [anon_sym_preferred] = anon_sym_preferred,
  [anon_sym_highres] = anon_sym_highres,
  [anon_sym_highrr] = anon_sym_highrr,
  [anon_sym_monitor] = anon_sym_monitor,
  [sym_by] = sym_by,
  [sym_at] = sym_at,
  [sym_auto] = sym_auto,
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
  [sym_resolution] = sym_resolution,
  [sym_position] = sym_position,
  [sym_auto_resolution] = sym_auto_resolution,
  [sym_command_monitor] = sym_command_monitor,
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
  [sym__immediate_int] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym__immediate_float] = {
    .visible = false,
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
  [sym_word] = {
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
  [anon_sym_preferred] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_highres] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_highrr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_monitor] = {
    .visible = true,
    .named = false,
  },
  [sym_by] = {
    .visible = true,
    .named = true,
  },
  [sym_at] = {
    .visible = true,
    .named = true,
  },
  [sym_auto] = {
    .visible = true,
    .named = true,
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
  [sym_resolution] = {
    .visible = true,
    .named = true,
  },
  [sym_position] = {
    .visible = true,
    .named = true,
  },
  [sym_auto_resolution] = {
    .visible = true,
    .named = true,
  },
  [sym_command_monitor] = {
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
  field_arguments = 2,
  field_height = 3,
  field_identifier = 4,
  field_name = 5,
  field_position = 6,
  field_refresh_rate = 7,
  field_resolution = 8,
  field_rule = 9,
  field_scale = 10,
  field_unit = 11,
  field_value = 12,
  field_width = 13,
  field_x_offset = 14,
  field_y_offset = 15,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_address] = "address",
  [field_arguments] = "arguments",
  [field_height] = "height",
  [field_identifier] = "identifier",
  [field_name] = "name",
  [field_position] = "position",
  [field_refresh_rate] = "refresh_rate",
  [field_resolution] = "resolution",
  [field_rule] = "rule",
  [field_scale] = "scale",
  [field_unit] = "unit",
  [field_value] = "value",
  [field_width] = "width",
  [field_x_offset] = "x_offset",
  [field_y_offset] = "y_offset",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 4},
  [6] = {.index = 8, .length = 4},
  [7] = {.index = 12, .length = 3},
  [8] = {.index = 15, .length = 2},
  [9] = {.index = 17, .length = 1},
  [10] = {.index = 18, .length = 1},
  [11] = {.index = 19, .length = 3},
  [12] = {.index = 22, .length = 2},
  [13] = {.index = 24, .length = 7},
  [14] = {.index = 31, .length = 8},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_arguments, 2},
    {field_name, 0},
  [2] =
    {field_name, 0},
  [3] =
    {field_name, 0, .inherited = true},
  [4] =
    {field_arguments, 3},
    {field_identifier, 4},
    {field_name, 0},
    {field_rule, 2},
  [8] =
    {field_arguments, 3},
    {field_name, 0},
    {field_name, 2},
    {field_value, 4},
  [12] =
    {field_name, 0},
    {field_name, 1},
    {field_name, 2},
  [15] =
    {field_height, 2},
    {field_width, 0},
  [17] =
    {field_unit, 1},
  [18] =
    {field_address, 3},
  [19] =
    {field_height, 2},
    {field_refresh_rate, 4},
    {field_width, 0},
  [22] =
    {field_x_offset, 0},
    {field_y_offset, 2},
  [24] =
    {field_arguments, 2},
    {field_arguments, 4},
    {field_arguments, 6},
    {field_name, 0},
    {field_position, 5},
    {field_resolution, 3},
    {field_scale, 7},
  [31] =
    {field_arguments, 3},
    {field_arguments, 5},
    {field_arguments, 7},
    {field_name, 0},
    {field_name, 2},
    {field_position, 6},
    {field_resolution, 4},
    {field_scale, 8},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [0] = alias_sym_layer_namespace,
  },
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
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1450);
      if (lookahead == '#') ADVANCE(1451);
      if (lookahead == '$') ADVANCE(1512);
      if (lookahead == '(') ADVANCE(1492);
      if (lookahead == ')') ADVANCE(1493);
      if (lookahead == ',') ADVANCE(1661);
      if (lookahead == '.') ADVANCE(1443);
      if (lookahead == '0') ADVANCE(1486);
      if (lookahead == '1') ADVANCE(1489);
      if (lookahead == ':') ADVANCE(1527);
      if (lookahead == '=') ADVANCE(1530);
      if (lookahead == '@') ADVANCE(1669);
      if (lookahead == 'A') ADVANCE(35);
      if (lookahead == 'C') ADVANCE(25);
      if (lookahead == 'L') ADVANCE(40);
      if (lookahead == 'M') ADVANCE(41);
      if (lookahead == 'S') ADVANCE(31);
      if (lookahead == 'W') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'b') ADVANCE(667);
      if (lookahead == 'c') ADVANCE(762);
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(841);
      if (lookahead == 'f') ADVANCE(168);
      if (lookahead == 'g') ADVANCE(173);
      if (lookahead == 'h') ADVANCE(660);
      if (lookahead == 'i') ADVANCE(842);
      if (lookahead == 'k') ADVANCE(277);
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == 'o') ADVANCE(584);
      if (lookahead == 'p') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(427);
      if (lookahead == 's') ADVANCE(313);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == 'u') ADVANCE(849);
      if (lookahead == 'v') ADVANCE(586);
      if (lookahead == 'w') ADVANCE(932);
      if (lookahead == 'x') ADVANCE(1668);
      if (lookahead == 'y') ADVANCE(460);
      if (lookahead == '{') ADVANCE(1517);
      if (lookahead == '}') ADVANCE(1518);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(20);
      if (('B' <= lookahead && lookahead <= 'F')) ADVANCE(1447);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1449)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1461);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(1451);
      if (lookahead == '$') ADVANCE(1512);
      if (lookahead == '.') ADVANCE(1444);
      if (lookahead == 'a') ADVANCE(1326);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1463);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(1451);
      if (lookahead == '$') ADVANCE(1512);
      if (lookahead == '0') ADVANCE(1485);
      if (lookahead == '1') ADVANCE(1488);
      if (lookahead == 'd') ADVANCE(495);
      if (lookahead == 'f') ADVANCE(190);
      if (lookahead == 'n') ADVANCE(928);
      if (lookahead == 'o') ADVANCE(583);
      if (lookahead == 't') ADVANCE(1098);
      if (lookahead == 'y') ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(1451);
      if (lookahead == '$') ADVANCE(1512);
      if (lookahead == '0') ADVANCE(1485);
      if (lookahead == '1') ADVANCE(1488);
      if (lookahead == 'f') ADVANCE(190);
      if (lookahead == 'n') ADVANCE(928);
      if (lookahead == 'o') ADVANCE(583);
      if (lookahead == 't') ADVANCE(1098);
      if (lookahead == 'y') ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(1451);
      if (lookahead == '$') ADVANCE(1512);
      if (lookahead == '0') ADVANCE(1412);
      if (lookahead == 'r') ADVANCE(608);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1447);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(1451);
      if (lookahead == '$') ADVANCE(1512);
      if (lookahead == '0') ADVANCE(1411);
      if (lookahead == 'r') ADVANCE(608);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(1451);
      if (lookahead == '$') ADVANCE(1512);
      if (lookahead == 'a') ADVANCE(1326);
      if (lookahead == 'h') ADVANCE(690);
      if (lookahead == 'p') ADVANCE(1089);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(1445);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1459);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(1451);
      if (lookahead == ',') ADVANCE(1661);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1511);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(1451);
      if (lookahead == '0') ADVANCE(1415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(1451);
      if (lookahead == 'a') ADVANCE(1506);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1511);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(1451);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(1446);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1462);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(1451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(1451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1528);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(1451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1514);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(1453);
      if (lookahead == '$') ADVANCE(1513);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0) ADVANCE(1504);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(1453);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0) ADVANCE(1504);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(1651);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(241);
      if (lookahead == '_') ADVANCE(287);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(328);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(409);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(1443);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1460);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(274);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(1444);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1457);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(1444);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1463);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(1471);
      if (lookahead == '3') ADVANCE(1472);
      if (lookahead == '4') ADVANCE(1476);
      if (lookahead == '5') ADVANCE(1477);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(1497);
      if (lookahead == 'O') ADVANCE(39);
      if (lookahead == 'T') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1496);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'O') ADVANCE(39);
      if (lookahead == 'T') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == 'D') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 'F') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == 'G') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 'H') ADVANCE(32);
      if (lookahead == 'U') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'I') ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == 'I') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'L') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 'L') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1496);
      END_STATE();
    case 36:
      if (lookahead == 'L') ADVANCE(1468);
      END_STATE();
    case 37:
      if (lookahead == 'L') ADVANCE(1469);
      END_STATE();
    case 38:
      if (lookahead == 'N') ADVANCE(1474);
      END_STATE();
    case 39:
      if (lookahead == 'N') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 'O') ADVANCE(30);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == 'O') ADVANCE(1475);
      END_STATE();
    case 43:
      if (lookahead == 'O') ADVANCE(37);
      END_STATE();
    case 44:
      if (lookahead == 'P') ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == 'P') ADVANCE(28);
      END_STATE();
    case 46:
      if (lookahead == 'R') ADVANCE(1473);
      END_STATE();
    case 47:
      if (lookahead == 'R') ADVANCE(36);
      END_STATE();
    case 48:
      if (lookahead == 'R') ADVANCE(43);
      END_STATE();
    case 49:
      if (lookahead == 'S') ADVANCE(1467);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(1470);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(1466);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(48);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(587);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(288);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(210);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(1243);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(948);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(825);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(740);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(281);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(405);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(297);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(737);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(200);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(625);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(292);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(578);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(947);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(674);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(607);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(189);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(437);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(836);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(647);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(819);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(299);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(648);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(1404);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(589);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(286);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(1402);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(282);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(749);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(603);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(367);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(863);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(296);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(590);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(677);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(1055);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(1240);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(981);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(837);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(635);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(1194);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(633);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(1046);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(1230);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(1174);
      if (lookahead == 'd') ADVANCE(1571);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(403);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(326);
      END_STATE();
    case 102:
      if (lookahead == '_') ADVANCE(945);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(209);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(415);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(389);
      END_STATE();
    case 106:
      if (lookahead == '_') ADVANCE(1225);
      END_STATE();
    case 107:
      if (lookahead == '_') ADVANCE(1268);
      END_STATE();
    case 108:
      if (lookahead == '_') ADVANCE(496);
      END_STATE();
    case 109:
      if (lookahead == '_') ADVANCE(1224);
      END_STATE();
    case 110:
      if (lookahead == '_') ADVANCE(490);
      END_STATE();
    case 111:
      if (lookahead == '_') ADVANCE(1152);
      END_STATE();
    case 112:
      if (lookahead == '_') ADVANCE(468);
      END_STATE();
    case 113:
      if (lookahead == '_') ADVANCE(1045);
      END_STATE();
    case 114:
      if (lookahead == '_') ADVANCE(345);
      END_STATE();
    case 115:
      if (lookahead == '_') ADVANCE(839);
      END_STATE();
    case 116:
      if (lookahead == '_') ADVANCE(1231);
      END_STATE();
    case 117:
      if (lookahead == '_') ADVANCE(982);
      END_STATE();
    case 118:
      if (lookahead == '_') ADVANCE(1008);
      END_STATE();
    case 119:
      if (lookahead == '_') ADVANCE(402);
      END_STATE();
    case 120:
      if (lookahead == '_') ADVANCE(884);
      END_STATE();
    case 121:
      if (lookahead == '_') ADVANCE(1125);
      END_STATE();
    case 122:
      if (lookahead == '_') ADVANCE(1287);
      END_STATE();
    case 123:
      if (lookahead == '_') ADVANCE(827);
      END_STATE();
    case 124:
      if (lookahead == '_') ADVANCE(1398);
      END_STATE();
    case 125:
      if (lookahead == '_') ADVANCE(596);
      END_STATE();
    case 126:
      if (lookahead == '_') ADVANCE(240);
      END_STATE();
    case 127:
      if (lookahead == '_') ADVANCE(1298);
      END_STATE();
    case 128:
      if (lookahead == '_') ADVANCE(1207);
      END_STATE();
    case 129:
      if (lookahead == '_') ADVANCE(793);
      END_STATE();
    case 130:
      if (lookahead == '_') ADVANCE(1291);
      END_STATE();
    case 131:
      if (lookahead == '_') ADVANCE(779);
      END_STATE();
    case 132:
      if (lookahead == '_') ADVANCE(250);
      END_STATE();
    case 133:
      if (lookahead == '_') ADVANCE(727);
      END_STATE();
    case 134:
      if (lookahead == '_') ADVANCE(1112);
      END_STATE();
    case 135:
      if (lookahead == '_') ADVANCE(598);
      END_STATE();
    case 136:
      if (lookahead == '_') ADVANCE(1405);
      END_STATE();
    case 137:
      if (lookahead == '_') ADVANCE(411);
      END_STATE();
    case 138:
      if (lookahead == '_') ADVANCE(1233);
      END_STATE();
    case 139:
      if (lookahead == '_') ADVANCE(1292);
      END_STATE();
    case 140:
      if (lookahead == '_') ADVANCE(1407);
      END_STATE();
    case 141:
      if (lookahead == '_') ADVANCE(599);
      END_STATE();
    case 142:
      if (lookahead == '_') ADVANCE(257);
      END_STATE();
    case 143:
      if (lookahead == '_') ADVANCE(1295);
      END_STATE();
    case 144:
      if (lookahead == '_') ADVANCE(1146);
      END_STATE();
    case 145:
      if (lookahead == '_') ADVANCE(998);
      END_STATE();
    case 146:
      if (lookahead == '_') ADVANCE(1148);
      END_STATE();
    case 147:
      if (lookahead == '_') ADVANCE(1005);
      END_STATE();
    case 148:
      if (lookahead == '_') ADVANCE(1006);
      END_STATE();
    case 149:
      if (lookahead == '_') ADVANCE(838);
      END_STATE();
    case 150:
      if (lookahead == '_') ADVANCE(1060);
      END_STATE();
    case 151:
      if (lookahead == '_') ADVANCE(809);
      END_STATE();
    case 152:
      if (lookahead == '_') ADVANCE(1157);
      END_STATE();
    case 153:
      if (lookahead == '_') ADVANCE(1242);
      END_STATE();
    case 154:
      if (lookahead == '_') ADVANCE(1014);
      END_STATE();
    case 155:
      if (lookahead == '_') ADVANCE(604);
      END_STATE();
    case 156:
      if (lookahead == '_') ADVANCE(814);
      END_STATE();
    case 157:
      if (lookahead == '_') ADVANCE(1018);
      END_STATE();
    case 158:
      if (lookahead == '_') ADVANCE(605);
      END_STATE();
    case 159:
      if (lookahead == '_') ADVANCE(1019);
      END_STATE();
    case 160:
      if (lookahead == '_') ADVANCE(298);
      END_STATE();
    case 161:
      if (lookahead == '_') ADVANCE(300);
      END_STATE();
    case 162:
      if (lookahead == '_') ADVANCE(301);
      END_STATE();
    case 163:
      if (lookahead == '_') ADVANCE(302);
      END_STATE();
    case 164:
      if (lookahead == '_') ADVANCE(303);
      END_STATE();
    case 165:
      if (lookahead == '_') ADVANCE(304);
      END_STATE();
    case 166:
      if (lookahead == '_') ADVANCE(1032);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(1502);
      if (lookahead == 'e') ADVANCE(1498);
      if (lookahead == 'i') ADVANCE(820);
      if (lookahead == 'r') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1496);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(1501);
      if (lookahead == 'l') ADVANCE(933);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead == 'u') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1496);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(1222);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(1222);
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(619);
      if (lookahead == 'o') ADVANCE(1037);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(1545);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(1038);
      if (lookahead == 'e') ADVANCE(887);
      if (lookahead == 'r') ADVANCE(931);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(1289);
      if (lookahead == 'o') ADVANCE(1482);
      if (lookahead == 'u') ADVANCE(822);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(1289);
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(822);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(1417);
      if (lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead == 'v') ADVANCE(1662);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(634);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(1435);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(858);
      if (lookahead == 'i') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(850);
      if (lookahead == 'u') ADVANCE(764);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(1033);
      if (lookahead == 'o') ADVANCE(1330);
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(1033);
      if (lookahead == 'o') ADVANCE(1330);
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(1433);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(834);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(404);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(318);
      if (lookahead == 'p') ADVANCE(1331);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(1418);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(1419);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(649);
      if (lookahead == 't') ADVANCE(683);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(787);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(787);
      if (lookahead == 'l') ADVANCE(933);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead == 'u') ADVANCE(765);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(1393);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(1421);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(613);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(1249);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(283);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(390);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(1034);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(1363);
      if (lookahead == 'h') ADVANCE(1434);
      if (lookahead == 'l') ADVANCE(938);
      if (lookahead == 's') ADVANCE(1053);
      if (lookahead == 't') ADVANCE(672);
      if (lookahead == 'w') ADVANCE(655);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(592);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(791);
      END_STATE();
    case 203:
      if (lookahead == 'a') ADVANCE(1351);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(348);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(755);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(1425);
      END_STATE();
    case 207:
      if (lookahead == 'a') ADVANCE(867);
      END_STATE();
    case 208:
      if (lookahead == 'a') ADVANCE(799);
      END_STATE();
    case 209:
      if (lookahead == 'a') ADVANCE(349);
      END_STATE();
    case 210:
      if (lookahead == 'a') ADVANCE(1092);
      if (lookahead == 'i') ADVANCE(913);
      if (lookahead == 's') ADVANCE(1041);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(621);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(888);
      if (lookahead == 'e') ADVANCE(910);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(1278);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(1095);
      END_STATE();
    case 215:
      if (lookahead == 'a') ADVANCE(757);
      END_STATE();
    case 216:
      if (lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 217:
      if (lookahead == 'a') ADVANCE(1202);
      END_STATE();
    case 218:
      if (lookahead == 'a') ADVANCE(906);
      END_STATE();
    case 219:
      if (lookahead == 'a') ADVANCE(1223);
      END_STATE();
    case 220:
      if (lookahead == 'a') ADVANCE(1306);
      END_STATE();
    case 221:
      if (lookahead == 'a') ADVANCE(1132);
      END_STATE();
    case 222:
      if (lookahead == 'a') ADVANCE(1113);
      END_STATE();
    case 223:
      if (lookahead == 'a') ADVANCE(1085);
      END_STATE();
    case 224:
      if (lookahead == 'a') ADVANCE(1144);
      END_STATE();
    case 225:
      if (lookahead == 'a') ADVANCE(808);
      END_STATE();
    case 226:
      if (lookahead == 'a') ADVANCE(821);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == 'i') ADVANCE(820);
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 227:
      if (lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 228:
      if (lookahead == 'a') ADVANCE(1284);
      END_STATE();
    case 229:
      if (lookahead == 'a') ADVANCE(361);
      END_STATE();
    case 230:
      if (lookahead == 'a') ADVANCE(392);
      END_STATE();
    case 231:
      if (lookahead == 'a') ADVANCE(398);
      END_STATE();
    case 232:
      if (lookahead == 'a') ADVANCE(394);
      END_STATE();
    case 233:
      if (lookahead == 'a') ADVANCE(784);
      END_STATE();
    case 234:
      if (lookahead == 'a') ADVANCE(1281);
      END_STATE();
    case 235:
      if (lookahead == 'a') ADVANCE(859);
      END_STATE();
    case 236:
      if (lookahead == 'a') ADVANCE(859);
      if (lookahead == 'u') ADVANCE(428);
      END_STATE();
    case 237:
      if (lookahead == 'a') ADVANCE(1372);
      END_STATE();
    case 238:
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 239:
      if (lookahead == 'a') ADVANCE(1277);
      END_STATE();
    case 240:
      if (lookahead == 'a') ADVANCE(346);
      END_STATE();
    case 241:
      if (lookahead == 'a') ADVANCE(860);
      if (lookahead == 't') ADVANCE(925);
      END_STATE();
    case 242:
      if (lookahead == 'a') ADVANCE(811);
      END_STATE();
    case 243:
      if (lookahead == 'a') ADVANCE(1209);
      END_STATE();
    case 244:
      if (lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 245:
      if (lookahead == 'a') ADVANCE(790);
      END_STATE();
    case 246:
      if (lookahead == 'a') ADVANCE(862);
      END_STATE();
    case 247:
      if (lookahead == 'a') ADVANCE(1286);
      END_STATE();
    case 248:
      if (lookahead == 'a') ADVANCE(782);
      END_STATE();
    case 249:
      if (lookahead == 'a') ADVANCE(1116);
      END_STATE();
    case 250:
      if (lookahead == 'a') ADVANCE(1128);
      END_STATE();
    case 251:
      if (lookahead == 'a') ADVANCE(772);
      END_STATE();
    case 252:
      if (lookahead == 'a') ADVANCE(338);
      END_STATE();
    case 253:
      if (lookahead == 'a') ADVANCE(870);
      END_STATE();
    case 254:
      if (lookahead == 'a') ADVANCE(1300);
      END_STATE();
    case 255:
      if (lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 256:
      if (lookahead == 'a') ADVANCE(1290);
      END_STATE();
    case 257:
      if (lookahead == 'a') ADVANCE(893);
      END_STATE();
    case 258:
      if (lookahead == 'a') ADVANCE(354);
      END_STATE();
    case 259:
      if (lookahead == 'a') ADVANCE(898);
      if (lookahead == 'r') ADVANCE(549);
      END_STATE();
    case 260:
      if (lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 261:
      if (lookahead == 'a') ADVANCE(356);
      END_STATE();
    case 262:
      if (lookahead == 'a') ADVANCE(900);
      END_STATE();
    case 263:
      if (lookahead == 'a') ADVANCE(352);
      END_STATE();
    case 264:
      if (lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 265:
      if (lookahead == 'a') ADVANCE(416);
      END_STATE();
    case 266:
      if (lookahead == 'a') ADVANCE(904);
      if (lookahead == 'o') ADVANCE(1367);
      END_STATE();
    case 267:
      if (lookahead == 'a') ADVANCE(357);
      END_STATE();
    case 268:
      if (lookahead == 'a') ADVANCE(363);
      END_STATE();
    case 269:
      if (lookahead == 'a') ADVANCE(1321);
      END_STATE();
    case 270:
      if (lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 271:
      if (lookahead == 'a') ADVANCE(1318);
      END_STATE();
    case 272:
      if (lookahead == 'a') ADVANCE(360);
      END_STATE();
    case 273:
      if (lookahead == 'a') ADVANCE(362);
      END_STATE();
    case 274:
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead == 'g') ADVANCE(1133);
      if (lookahead == 'i') ADVANCE(864);
      if (lookahead == 's') ADVANCE(653);
      END_STATE();
    case 275:
      if (lookahead == 'a') ADVANCE(366);
      END_STATE();
    case 276:
      if (lookahead == 'a') ADVANCE(368);
      END_STATE();
    case 277:
      if (lookahead == 'b') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(1427);
      END_STATE();
    case 278:
      if (lookahead == 'b') ADVANCE(1491);
      END_STATE();
    case 279:
      if (lookahead == 'b') ADVANCE(1328);
      if (lookahead == 'c') ADVANCE(943);
      if (lookahead == 'v') ADVANCE(706);
      END_STATE();
    case 280:
      if (lookahead == 'b') ADVANCE(769);
      END_STATE();
    case 281:
      if (lookahead == 'b') ADVANCE(796);
      if (lookahead == 't') ADVANCE(1103);
      END_STATE();
    case 282:
      if (lookahead == 'b') ADVANCE(533);
      END_STATE();
    case 283:
      if (lookahead == 'b') ADVANCE(132);
      END_STATE();
    case 284:
      if (lookahead == 'b') ADVANCE(966);
      END_STATE();
    case 285:
      if (lookahead == 'b') ADVANCE(249);
      END_STATE();
    case 286:
      if (lookahead == 'b') ADVANCE(1432);
      END_STATE();
    case 287:
      if (lookahead == 'b') ADVANCE(1340);
      END_STATE();
    case 288:
      if (lookahead == 'b') ADVANCE(1020);
      if (lookahead == 'c') ADVANCE(1368);
      if (lookahead == 'd') ADVANCE(685);
      if (lookahead == 'f') ADVANCE(939);
      END_STATE();
    case 289:
      if (lookahead == 'b') ADVANCE(223);
      END_STATE();
    case 290:
      if (lookahead == 'b') ADVANCE(555);
      END_STATE();
    case 291:
      if (lookahead == 'b') ADVANCE(803);
      END_STATE();
    case 292:
      if (lookahead == 'b') ADVANCE(252);
      if (lookahead == 's') ADVANCE(1397);
      END_STATE();
    case 293:
      if (lookahead == 'b') ADVANCE(255);
      END_STATE();
    case 294:
      if (lookahead == 'b') ADVANCE(815);
      END_STATE();
    case 295:
      if (lookahead == 'b') ADVANCE(816);
      END_STATE();
    case 296:
      if (lookahead == 'b') ADVANCE(1015);
      END_STATE();
    case 297:
      if (lookahead == 'b') ADVANCE(1369);
      if (lookahead == 'e') ADVANCE(1373);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(491);
      END_STATE();
    case 298:
      if (lookahead == 'b') ADVANCE(1371);
      END_STATE();
    case 299:
      if (lookahead == 'b') ADVANCE(1024);
      END_STATE();
    case 300:
      if (lookahead == 'b') ADVANCE(1025);
      END_STATE();
    case 301:
      if (lookahead == 'b') ADVANCE(1026);
      END_STATE();
    case 302:
      if (lookahead == 'b') ADVANCE(1027);
      END_STATE();
    case 303:
      if (lookahead == 'b') ADVANCE(1028);
      END_STATE();
    case 304:
      if (lookahead == 'b') ADVANCE(1029);
      END_STATE();
    case 305:
      if (lookahead == 'c') ADVANCE(1499);
      if (lookahead == 'd') ADVANCE(1500);
      if (lookahead == 'l') ADVANCE(763);
      if (lookahead == 'n') ADVANCE(664);
      if (lookahead == 'p') ADVANCE(1035);
      if (lookahead == 'u') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1496);
      END_STATE();
    case 306:
      if (lookahead == 'c') ADVANCE(315);
      if (lookahead == 'd') ADVANCE(384);
      if (lookahead == 'l') ADVANCE(763);
      if (lookahead == 'n') ADVANCE(664);
      if (lookahead == 'p') ADVANCE(1035);
      if (lookahead == 'u') ADVANCE(1260);
      END_STATE();
    case 307:
      if (lookahead == 'c') ADVANCE(315);
      if (lookahead == 'l') ADVANCE(763);
      if (lookahead == 'n') ADVANCE(664);
      if (lookahead == 'p') ADVANCE(1035);
      END_STATE();
    case 308:
      if (lookahead == 'c') ADVANCE(1652);
      END_STATE();
    case 309:
      if (lookahead == 'c') ADVANCE(1523);
      END_STATE();
    case 310:
      if (lookahead == 'c') ADVANCE(259);
      if (lookahead == 'd') ADVANCE(701);
      if (lookahead == 'f') ADVANCE(729);
      if (lookahead == 'i') ADVANCE(908);
      if (lookahead == 'm') ADVANCE(707);
      if (lookahead == 'n') ADVANCE(1338);
      END_STATE();
    case 311:
      if (lookahead == 'c') ADVANCE(641);
      END_STATE();
    case 312:
      if (lookahead == 'c') ADVANCE(746);
      END_STATE();
    case 313:
      if (lookahead == 'c') ADVANCE(1088);
      if (lookahead == 'e') ADVANCE(853);
      if (lookahead == 'h') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(1335);
      if (lookahead == 'u') ADVANCE(1039);
      if (lookahead == 'w') ADVANCE(225);
      END_STATE();
    case 314:
      if (lookahead == 'c') ADVANCE(748);
      END_STATE();
    case 315:
      if (lookahead == 'c') ADVANCE(467);
      if (lookahead == 't') ADVANCE(704);
      END_STATE();
    case 316:
      if (lookahead == 'c') ADVANCE(742);
      END_STATE();
    case 317:
      if (lookahead == 'c') ADVANCE(1353);
      if (lookahead == 'l') ADVANCE(788);
      if (lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 318:
      if (lookahead == 'c') ADVANCE(1324);
      END_STATE();
    case 319:
      if (lookahead == 'c') ADVANCE(751);
      END_STATE();
    case 320:
      if (lookahead == 'c') ADVANCE(744);
      END_STATE();
    case 321:
      if (lookahead == 'c') ADVANCE(651);
      END_STATE();
    case 322:
      if (lookahead == 'c') ADVANCE(745);
      END_STATE();
    case 323:
      if (lookahead == 'c') ADVANCE(644);
      END_STATE();
    case 324:
      if (lookahead == 'c') ADVANCE(430);
      END_STATE();
    case 325:
      if (lookahead == 'c') ADVANCE(432);
      END_STATE();
    case 326:
      if (lookahead == 'c') ADVANCE(1431);
      END_STATE();
    case 327:
      if (lookahead == 'c') ADVANCE(717);
      END_STATE();
    case 328:
      if (lookahead == 'c') ADVANCE(786);
      END_STATE();
    case 329:
      if (lookahead == 'c') ADVANCE(1104);
      END_STATE();
    case 330:
      if (lookahead == 'c') ADVANCE(248);
      END_STATE();
    case 331:
      if (lookahead == 'c') ADVANCE(435);
      END_STATE();
    case 332:
      if (lookahead == 'c') ADVANCE(218);
      END_STATE();
    case 333:
      if (lookahead == 'c') ADVANCE(1151);
      END_STATE();
    case 334:
      if (lookahead == 'c') ADVANCE(440);
      END_STATE();
    case 335:
      if (lookahead == 'c') ADVANCE(569);
      END_STATE();
    case 336:
      if (lookahead == 'c') ADVANCE(453);
      END_STATE();
    case 337:
      if (lookahead == 'c') ADVANCE(456);
      END_STATE();
    case 338:
      if (lookahead == 'c') ADVANCE(750);
      END_STATE();
    case 339:
      if (lookahead == 'c') ADVANCE(1346);
      END_STATE();
    case 340:
      if (lookahead == 'c') ADVANCE(476);
      END_STATE();
    case 341:
      if (lookahead == 'c') ADVANCE(752);
      END_STATE();
    case 342:
      if (lookahead == 'c') ADVANCE(1365);
      END_STATE();
    case 343:
      if (lookahead == 'c') ADVANCE(497);
      END_STATE();
    case 344:
      if (lookahead == 'c') ADVANCE(1349);
      END_STATE();
    case 345:
      if (lookahead == 'c') ADVANCE(1107);
      END_STATE();
    case 346:
      if (lookahead == 'c') ADVANCE(1275);
      END_STATE();
    case 347:
      if (lookahead == 'c') ADVANCE(1350);
      END_STATE();
    case 348:
      if (lookahead == 'c') ADVANCE(689);
      END_STATE();
    case 349:
      if (lookahead == 'c') ADVANCE(343);
      END_STATE();
    case 350:
      if (lookahead == 'c') ADVANCE(550);
      END_STATE();
    case 351:
      if (lookahead == 'c') ADVANCE(693);
      END_STATE();
    case 352:
      if (lookahead == 'c') ADVANCE(695);
      END_STATE();
    case 353:
      if (lookahead == 'c') ADVANCE(697);
      END_STATE();
    case 354:
      if (lookahead == 'c') ADVANCE(513);
      END_STATE();
    case 355:
      if (lookahead == 'c') ADVANCE(1358);
      END_STATE();
    case 356:
      if (lookahead == 'c') ADVANCE(542);
      END_STATE();
    case 357:
      if (lookahead == 'c') ADVANCE(1307);
      END_STATE();
    case 358:
      if (lookahead == 'c') ADVANCE(1296);
      END_STATE();
    case 359:
      if (lookahead == 'c') ADVANCE(989);
      END_STATE();
    case 360:
      if (lookahead == 'c') ADVANCE(1313);
      END_STATE();
    case 361:
      if (lookahead == 'c') ADVANCE(1302);
      END_STATE();
    case 362:
      if (lookahead == 'c') ADVANCE(1317);
      END_STATE();
    case 363:
      if (lookahead == 'c') ADVANCE(1303);
      END_STATE();
    case 364:
      if (lookahead == 'c') ADVANCE(804);
      END_STATE();
    case 365:
      if (lookahead == 'c') ADVANCE(1320);
      END_STATE();
    case 366:
      if (lookahead == 'c') ADVANCE(1323);
      END_STATE();
    case 367:
      if (lookahead == 'c') ADVANCE(1370);
      END_STATE();
    case 368:
      if (lookahead == 'c') ADVANCE(1325);
      END_STATE();
    case 369:
      if (lookahead == 'd') ADVANCE(1583);
      END_STATE();
    case 370:
      if (lookahead == 'd') ADVANCE(1664);
      END_STATE();
    case 371:
      if (lookahead == 'd') ADVANCE(1569);
      END_STATE();
    case 372:
      if (lookahead == 'd') ADVANCE(1596);
      END_STATE();
    case 373:
      if (lookahead == 'd') ADVANCE(1597);
      END_STATE();
    case 374:
      if (lookahead == 'd') ADVANCE(1633);
      END_STATE();
    case 375:
      if (lookahead == 'd') ADVANCE(1621);
      END_STATE();
    case 376:
      if (lookahead == 'd') ADVANCE(1617);
      END_STATE();
    case 377:
      if (lookahead == 'd') ADVANCE(1638);
      END_STATE();
    case 378:
      if (lookahead == 'd') ADVANCE(1642);
      END_STATE();
    case 379:
      if (lookahead == 'd') ADVANCE(1610);
      END_STATE();
    case 380:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 381:
      if (lookahead == 'd') ADVANCE(387);
      if (lookahead == 's') ADVANCE(309);
      END_STATE();
    case 382:
      if (lookahead == 'd') ADVANCE(464);
      END_STATE();
    case 383:
      if (lookahead == 'd') ADVANCE(464);
      if (lookahead == 'g') ADVANCE(646);
      END_STATE();
    case 384:
      if (lookahead == 'd') ADVANCE(1131);
      END_STATE();
    case 385:
      if (lookahead == 'd') ADVANCE(1171);
      END_STATE();
    case 386:
      if (lookahead == 'd') ADVANCE(676);
      END_STATE();
    case 387:
      if (lookahead == 'd') ADVANCE(801);
      END_STATE();
    case 388:
      if (lookahead == 'd') ADVANCE(636);
      END_STATE();
    case 389:
      if (lookahead == 'd') ADVANCE(1040);
      END_STATE();
    case 390:
      if (lookahead == 'd') ADVANCE(929);
      END_STATE();
    case 391:
      if (lookahead == 'd') ADVANCE(532);
      if (lookahead == 'p') ADVANCE(198);
      END_STATE();
    case 392:
      if (lookahead == 'd') ADVANCE(703);
      END_STATE();
    case 393:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 394:
      if (lookahead == 'd') ADVANCE(930);
      END_STATE();
    case 395:
      if (lookahead == 'd') ADVANCE(485);
      END_STATE();
    case 396:
      if (lookahead == 'd') ADVANCE(941);
      END_STATE();
    case 397:
      if (lookahead == 'd') ADVANCE(944);
      END_STATE();
    case 398:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 399:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 400:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 401:
      if (lookahead == 'd') ADVANCE(486);
      END_STATE();
    case 402:
      if (lookahead == 'd') ADVANCE(1051);
      END_STATE();
    case 403:
      if (lookahead == 'd') ADVANCE(472);
      END_STATE();
    case 404:
      if (lookahead == 'd') ADVANCE(985);
      END_STATE();
    case 405:
      if (lookahead == 'd') ADVANCE(536);
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 406:
      if (lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 407:
      if (lookahead == 'd') ADVANCE(483);
      END_STATE();
    case 408:
      if (lookahead == 'd') ADVANCE(949);
      END_STATE();
    case 409:
      if (lookahead == 'd') ADVANCE(1110);
      END_STATE();
    case 410:
      if (lookahead == 'd') ADVANCE(545);
      END_STATE();
    case 411:
      if (lookahead == 'd') ADVANCE(553);
      END_STATE();
    case 412:
      if (lookahead == 'd') ADVANCE(554);
      END_STATE();
    case 413:
      if (lookahead == 'd') ADVANCE(1118);
      END_STATE();
    case 414:
      if (lookahead == 'd') ADVANCE(560);
      END_STATE();
    case 415:
      if (lookahead == 'd') ADVANCE(873);
      END_STATE();
    case 416:
      if (lookahead == 'd') ADVANCE(507);
      END_STATE();
    case 417:
      if (lookahead == 'd') ADVANCE(509);
      END_STATE();
    case 418:
      if (lookahead == 'd') ADVANCE(512);
      END_STATE();
    case 419:
      if (lookahead == 'd') ADVANCE(515);
      END_STATE();
    case 420:
      if (lookahead == 'd') ADVANCE(516);
      END_STATE();
    case 421:
      if (lookahead == 'd') ADVANCE(518);
      END_STATE();
    case 422:
      if (lookahead == 'd') ADVANCE(579);
      END_STATE();
    case 423:
      if (lookahead == 'd') ADVANCE(522);
      END_STATE();
    case 424:
      if (lookahead == 'd') ADVANCE(523);
      END_STATE();
    case 425:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 426:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 427:
      if (lookahead == 'e') ADVANCE(901);
      if (lookahead == 'g') ADVANCE(278);
      if (lookahead == 'o') ADVANCE(1329);
      END_STATE();
    case 428:
      if (lookahead == 'e') ADVANCE(1478);
      END_STATE();
    case 429:
      if (lookahead == 'e') ADVANCE(1479);
      END_STATE();
    case 430:
      if (lookahead == 'e') ADVANCE(1526);
      END_STATE();
    case 431:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 432:
      if (lookahead == 'e') ADVANCE(1654);
      END_STATE();
    case 433:
      if (lookahead == 'e') ADVANCE(1590);
      END_STATE();
    case 434:
      if (lookahead == 'e') ADVANCE(1553);
      END_STATE();
    case 435:
      if (lookahead == 'e') ADVANCE(1653);
      END_STATE();
    case 436:
      if (lookahead == 'e') ADVANCE(1660);
      END_STATE();
    case 437:
      if (lookahead == 'e') ADVANCE(1416);
      if (lookahead == 'r') ADVANCE(540);
      END_STATE();
    case 438:
      if (lookahead == 'e') ADVANCE(1531);
      END_STATE();
    case 439:
      if (lookahead == 'e') ADVANCE(1592);
      END_STATE();
    case 440:
      if (lookahead == 'e') ADVANCE(1584);
      END_STATE();
    case 441:
      if (lookahead == 'e') ADVANCE(1566);
      END_STATE();
    case 442:
      if (lookahead == 'e') ADVANCE(1646);
      END_STATE();
    case 443:
      if (lookahead == 'e') ADVANCE(1599);
      END_STATE();
    case 444:
      if (lookahead == 'e') ADVANCE(1559);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(1565);
      END_STATE();
    case 446:
      if (lookahead == 'e') ADVANCE(1594);
      END_STATE();
    case 447:
      if (lookahead == 'e') ADVANCE(1602);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(1625);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(1563);
      END_STATE();
    case 450:
      if (lookahead == 'e') ADVANCE(1630);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(1631);
      END_STATE();
    case 452:
      if (lookahead == 'e') ADVANCE(1538);
      END_STATE();
    case 453:
      if (lookahead == 'e') ADVANCE(1604);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(1636);
      END_STATE();
    case 455:
      if (lookahead == 'e') ADVANCE(1634);
      END_STATE();
    case 456:
      if (lookahead == 'e') ADVANCE(1606);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == 't') ADVANCE(534);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(1413);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(1170);
      END_STATE();
    case 461:
      if (lookahead == 'e') ADVANCE(1440);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(1414);
      END_STATE();
    case 463:
      if (lookahead == 'e') ADVANCE(918);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 465:
      if (lookahead == 'e') ADVANCE(1248);
      END_STATE();
    case 466:
      if (lookahead == 'e') ADVANCE(1094);
      END_STATE();
    case 467:
      if (lookahead == 'e') ADVANCE(807);
      END_STATE();
    case 468:
      if (lookahead == 'e') ADVANCE(835);
      END_STATE();
    case 469:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 470:
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead == 'o') ADVANCE(770);
      END_STATE();
    case 471:
      if (lookahead == 'e') ADVANCE(1428);
      END_STATE();
    case 472:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 473:
      if (lookahead == 'e') ADVANCE(1135);
      END_STATE();
    case 474:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 475:
      if (lookahead == 'e') ADVANCE(1395);
      END_STATE();
    case 476:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 477:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 478:
      if (lookahead == 'e') ADVANCE(1096);
      END_STATE();
    case 479:
      if (lookahead == 'e') ADVANCE(1072);
      if (lookahead == 'o') ADVANCE(1337);
      END_STATE();
    case 480:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 481:
      if (lookahead == 'e') ADVANCE(1173);
      if (lookahead == 'r') ADVANCE(1666);
      END_STATE();
    case 482:
      if (lookahead == 'e') ADVANCE(857);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(1139);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 485:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 486:
      if (lookahead == 'e') ADVANCE(756);
      END_STATE();
    case 487:
      if (lookahead == 'e') ADVANCE(1175);
      END_STATE();
    case 488:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 489:
      if (lookahead == 'e') ADVANCE(1176);
      END_STATE();
    case 490:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 491:
      if (lookahead == 'e') ADVANCE(1285);
      END_STATE();
    case 492:
      if (lookahead == 'e') ADVANCE(1108);
      END_STATE();
    case 493:
      if (lookahead == 'e') ADVANCE(892);
      END_STATE();
    case 494:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 495:
      if (lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 496:
      if (lookahead == 'e') ADVANCE(902);
      END_STATE();
    case 497:
      if (lookahead == 'e') ADVANCE(758);
      END_STATE();
    case 498:
      if (lookahead == 'e') ADVANCE(1178);
      END_STATE();
    case 499:
      if (lookahead == 'e') ADVANCE(1255);
      END_STATE();
    case 500:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 501:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 502:
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(950);
      END_STATE();
    case 503:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 504:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 505:
      if (lookahead == 'e') ADVANCE(1182);
      END_STATE();
    case 506:
      if (lookahead == 'e') ADVANCE(1211);
      END_STATE();
    case 507:
      if (lookahead == 'e') ADVANCE(1074);
      END_STATE();
    case 508:
      if (lookahead == 'e') ADVANCE(1244);
      END_STATE();
    case 509:
      if (lookahead == 'e') ADVANCE(1137);
      END_STATE();
    case 510:
      if (lookahead == 'e') ADVANCE(1185);
      END_STATE();
    case 511:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 512:
      if (lookahead == 'e') ADVANCE(1076);
      END_STATE();
    case 513:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 514:
      if (lookahead == 'e') ADVANCE(1186);
      END_STATE();
    case 515:
      if (lookahead == 'e') ADVANCE(1077);
      END_STATE();
    case 516:
      if (lookahead == 'e') ADVANCE(1078);
      END_STATE();
    case 517:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 518:
      if (lookahead == 'e') ADVANCE(1080);
      END_STATE();
    case 519:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 520:
      if (lookahead == 'e') ADVANCE(1081);
      END_STATE();
    case 521:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 522:
      if (lookahead == 'e') ADVANCE(1083);
      END_STATE();
    case 523:
      if (lookahead == 'e') ADVANCE(1147);
      END_STATE();
    case 524:
      if (lookahead == 'e') ADVANCE(1117);
      END_STATE();
    case 525:
      if (lookahead == 'e') ADVANCE(1084);
      END_STATE();
    case 526:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 527:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 528:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 529:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 530:
      if (lookahead == 'e') ADVANCE(1204);
      END_STATE();
    case 531:
      if (lookahead == 'e') ADVANCE(1122);
      END_STATE();
    case 532:
      if (lookahead == 'e') ADVANCE(1387);
      END_STATE();
    case 533:
      if (lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 534:
      if (lookahead == 'e') ADVANCE(856);
      END_STATE();
    case 535:
      if (lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 536:
      if (lookahead == 'e') ADVANCE(774);
      END_STATE();
    case 537:
      if (lookahead == 'e') ADVANCE(875);
      END_STATE();
    case 538:
      if (lookahead == 'e') ADVANCE(1115);
      END_STATE();
    case 539:
      if (lookahead == 'e') ADVANCE(1208);
      END_STATE();
    case 540:
      if (lookahead == 'e') ADVANCE(630);
      END_STATE();
    case 541:
      if (lookahead == 'e') ADVANCE(777);
      END_STATE();
    case 542:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 543:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 544:
      if (lookahead == 'e') ADVANCE(916);
      END_STATE();
    case 545:
      if (lookahead == 'e') ADVANCE(1106);
      END_STATE();
    case 546:
      if (lookahead == 'e') ADVANCE(1121);
      END_STATE();
    case 547:
      if (lookahead == 'e') ADVANCE(896);
      END_STATE();
    case 548:
      if (lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 549:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 550:
      if (lookahead == 'e') ADVANCE(794);
      END_STATE();
    case 551:
      if (lookahead == 'e') ADVANCE(1210);
      END_STATE();
    case 552:
      if (lookahead == 'e') ADVANCE(1401);
      END_STATE();
    case 553:
      if (lookahead == 'e') ADVANCE(781);
      END_STATE();
    case 554:
      if (lookahead == 'e') ADVANCE(1164);
      END_STATE();
    case 555:
      if (lookahead == 'e') ADVANCE(1129);
      END_STATE();
    case 556:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 557:
      if (lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 558:
      if (lookahead == 'e') ADVANCE(1123);
      END_STATE();
    case 559:
      if (lookahead == 'e') ADVANCE(1217);
      END_STATE();
    case 560:
      if (lookahead == 'e') ADVANCE(1126);
      END_STATE();
    case 561:
      if (lookahead == 'e') ADVANCE(1226);
      END_STATE();
    case 562:
      if (lookahead == 'e') ADVANCE(882);
      END_STATE();
    case 563:
      if (lookahead == 'e') ADVANCE(1218);
      END_STATE();
    case 564:
      if (lookahead == 'e') ADVANCE(1227);
      END_STATE();
    case 565:
      if (lookahead == 'e') ADVANCE(1219);
      END_STATE();
    case 566:
      if (lookahead == 'e') ADVANCE(1235);
      END_STATE();
    case 567:
      if (lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 568:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 569:
      if (lookahead == 'e') ADVANCE(1059);
      END_STATE();
    case 570:
      if (lookahead == 'e') ADVANCE(557);
      END_STATE();
    case 571:
      if (lookahead == 'e') ADVANCE(1001);
      END_STATE();
    case 572:
      if (lookahead == 'e') ADVANCE(1386);
      END_STATE();
    case 573:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 574:
      if (lookahead == 'e') ADVANCE(911);
      END_STATE();
    case 575:
      if (lookahead == 'e') ADVANCE(1311);
      END_STATE();
    case 576:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 577:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 578:
      if (lookahead == 'e') ADVANCE(914);
      if (lookahead == 'f') ADVANCE(986);
      END_STATE();
    case 579:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 580:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 581:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 582:
      if (lookahead == 'f') ADVANCE(1484);
      END_STATE();
    case 583:
      if (lookahead == 'f') ADVANCE(582);
      if (lookahead == 'n') ADVANCE(1483);
      END_STATE();
    case 584:
      if (lookahead == 'f') ADVANCE(582);
      if (lookahead == 'n') ADVANCE(1483);
      if (lookahead == 'u') ADVANCE(1261);
      if (lookahead == 'v') ADVANCE(466);
      END_STATE();
    case 585:
      if (lookahead == 'f') ADVANCE(1263);
      END_STATE();
    case 586:
      if (lookahead == 'f') ADVANCE(1067);
      if (lookahead == 'r') ADVANCE(1068);
      END_STATE();
    case 587:
      if (lookahead == 'f') ADVANCE(708);
      if (lookahead == 'l') ADVANCE(183);
      if (lookahead == 'm') ADVANCE(937);
      if (lookahead == 'o') ADVANCE(1049);
      if (lookahead == 'r') ADVANCE(1341);
      if (lookahead == 'v') ADVANCE(214);
      END_STATE();
    case 588:
      if (lookahead == 'f') ADVANCE(600);
      END_STATE();
    case 589:
      if (lookahead == 'f') ADVANCE(1023);
      END_STATE();
    case 590:
      if (lookahead == 'f') ADVANCE(795);
      END_STATE();
    case 591:
      if (lookahead == 'f') ADVANCE(203);
      END_STATE();
    case 592:
      if (lookahead == 'f') ADVANCE(461);
      END_STATE();
    case 593:
      if (lookahead == 'f') ADVANCE(679);
      END_STATE();
    case 594:
      if (lookahead == 'f') ADVANCE(492);
      END_STATE();
    case 595:
      if (lookahead == 'f') ADVANCE(958);
      END_STATE();
    case 596:
      if (lookahead == 'f') ADVANCE(1012);
      END_STATE();
    case 597:
      if (lookahead == 'f') ADVANCE(538);
      END_STATE();
    case 598:
      if (lookahead == 'f') ADVANCE(971);
      END_STATE();
    case 599:
      if (lookahead == 'f') ADVANCE(1010);
      END_STATE();
    case 600:
      if (lookahead == 'f') ADVANCE(1232);
      END_STATE();
    case 601:
      if (lookahead == 'f') ADVANCE(980);
      END_STATE();
    case 602:
      if (lookahead == 'f') ADVANCE(722);
      END_STATE();
    case 603:
      if (lookahead == 'f') ADVANCE(251);
      END_STATE();
    case 604:
      if (lookahead == 'f') ADVANCE(988);
      END_STATE();
    case 605:
      if (lookahead == 'f') ADVANCE(991);
      END_STATE();
    case 606:
      if (lookahead == 'f') ADVANCE(143);
      END_STATE();
    case 607:
      if (lookahead == 'f') ADVANCE(268);
      if (lookahead == 'r') ADVANCE(675);
      END_STATE();
    case 608:
      if (lookahead == 'g') ADVANCE(278);
      END_STATE();
    case 609:
      if (lookahead == 'g') ADVANCE(1503);
      END_STATE();
    case 610:
      if (lookahead == 'g') ADVANCE(646);
      END_STATE();
    case 611:
      if (lookahead == 'g') ADVANCE(1525);
      END_STATE();
    case 612:
      if (lookahead == 'g') ADVANCE(1547);
      END_STATE();
    case 613:
      if (lookahead == 'g') ADVANCE(1580);
      END_STATE();
    case 614:
      if (lookahead == 'g') ADVANCE(1647);
      END_STATE();
    case 615:
      if (lookahead == 'g') ADVANCE(1572);
      END_STATE();
    case 616:
      if (lookahead == 'g') ADVANCE(1532);
      END_STATE();
    case 617:
      if (lookahead == 'g') ADVANCE(1612);
      END_STATE();
    case 618:
      if (lookahead == 'g') ADVANCE(1620);
      END_STATE();
    case 619:
      if (lookahead == 'g') ADVANCE(151);
      END_STATE();
    case 620:
      if (lookahead == 'g') ADVANCE(897);
      END_STATE();
    case 621:
      if (lookahead == 'g') ADVANCE(638);
      END_STATE();
    case 622:
      if (lookahead == 'g') ADVANCE(1265);
      END_STATE();
    case 623:
      if (lookahead == 'g') ADVANCE(688);
      END_STATE();
    case 624:
      if (lookahead == 'g') ADVANCE(1179);
      END_STATE();
    case 625:
      if (lookahead == 'g') ADVANCE(1145);
      if (lookahead == 't') ADVANCE(736);
      END_STATE();
    case 626:
      if (lookahead == 'g') ADVANCE(926);
      END_STATE();
    case 627:
      if (lookahead == 'g') ADVANCE(1183);
      END_STATE();
    case 628:
      if (lookahead == 'g') ADVANCE(444);
      END_STATE();
    case 629:
      if (lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 630:
      if (lookahead == 'g') ADVANCE(458);
      END_STATE();
    case 631:
      if (lookahead == 'g') ADVANCE(1191);
      END_STATE();
    case 632:
      if (lookahead == 'g') ADVANCE(462);
      END_STATE();
    case 633:
      if (lookahead == 'g') ADVANCE(1168);
      END_STATE();
    case 634:
      if (lookahead == 'g') ADVANCE(488);
      END_STATE();
    case 635:
      if (lookahead == 'g') ADVANCE(1114);
      END_STATE();
    case 636:
      if (lookahead == 'g') ADVANCE(505);
      END_STATE();
    case 637:
      if (lookahead == 'g') ADVANCE(558);
      END_STATE();
    case 638:
      if (lookahead == 'g') ADVANCE(702);
      END_STATE();
    case 639:
      if (lookahead == 'g') ADVANCE(531);
      END_STATE();
    case 640:
      if (lookahead == 'g') ADVANCE(907);
      END_STATE();
    case 641:
      if (lookahead == 'h') ADVANCE(391);
      END_STATE();
    case 642:
      if (lookahead == 'h') ADVANCE(1567);
      END_STATE();
    case 643:
      if (lookahead == 'h') ADVANCE(1649);
      END_STATE();
    case 644:
      if (lookahead == 'h') ADVANCE(1627);
      END_STATE();
    case 645:
      if (lookahead == 'h') ADVANCE(1640);
      END_STATE();
    case 646:
      if (lookahead == 'h') ADVANCE(1071);
      END_STATE();
    case 647:
      if (lookahead == 'h') ADVANCE(246);
      END_STATE();
    case 648:
      if (lookahead == 'h') ADVANCE(975);
      END_STATE();
    case 649:
      if (lookahead == 'h') ADVANCE(556);
      END_STATE();
    case 650:
      if (lookahead == 'h') ADVANCE(237);
      END_STATE();
    case 651:
      if (lookahead == 'h') ADVANCE(118);
      END_STATE();
    case 652:
      if (lookahead == 'h') ADVANCE(121);
      END_STATE();
    case 653:
      if (lookahead == 'h') ADVANCE(197);
      END_STATE();
    case 654:
      if (lookahead == 'h') ADVANCE(953);
      END_STATE();
    case 655:
      if (lookahead == 'h') ADVANCE(732);
      END_STATE();
    case 656:
      if (lookahead == 'h') ADVANCE(959);
      END_STATE();
    case 657:
      if (lookahead == 'h') ADVANCE(232);
      END_STATE();
    case 658:
      if (lookahead == 'h') ADVANCE(265);
      END_STATE();
    case 659:
      if (lookahead == 'h') ADVANCE(562);
      END_STATE();
    case 660:
      if (lookahead == 'i') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(1377);
      END_STATE();
    case 661:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 662:
      if (lookahead == 'i') ADVANCE(1439);
      END_STATE();
    case 663:
      if (lookahead == 'i') ADVANCE(1380);
      END_STATE();
    case 664:
      if (lookahead == 'i') ADVANCE(823);
      END_STATE();
    case 665:
      if (lookahead == 'i') ADVANCE(1442);
      END_STATE();
    case 666:
      if (lookahead == 'i') ADVANCE(843);
      if (lookahead == 'l') ADVANCE(1334);
      if (lookahead == 'o') ADVANCE(1087);
      END_STATE();
    case 667:
      if (lookahead == 'i') ADVANCE(843);
      if (lookahead == 'l') ADVANCE(1334);
      if (lookahead == 'o') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1496);
      END_STATE();
    case 668:
      if (lookahead == 'i') ADVANCE(1378);
      END_STATE();
    case 669:
      if (lookahead == 'i') ADVANCE(620);
      if (lookahead == 'n') ADVANCE(552);
      if (lookahead == 'p') ADVANCE(243);
      if (lookahead == 's') ADVANCE(705);
      if (lookahead == 'x') ADVANCE(1101);
      END_STATE();
    case 670:
      if (lookahead == 'i') ADVANCE(1441);
      END_STATE();
    case 671:
      if (lookahead == 'i') ADVANCE(1294);
      END_STATE();
    case 672:
      if (lookahead == 'i') ADVANCE(828);
      END_STATE();
    case 673:
      if (lookahead == 'i') ADVANCE(826);
      END_STATE();
    case 674:
      if (lookahead == 'i') ADVANCE(844);
      if (lookahead == 'o') ADVANCE(1342);
      END_STATE();
    case 675:
      if (lookahead == 'i') ADVANCE(623);
      END_STATE();
    case 676:
      if (lookahead == 'i') ADVANCE(851);
      END_STATE();
    case 677:
      if (lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 678:
      if (lookahead == 'i') ADVANCE(1205);
      END_STATE();
    case 679:
      if (lookahead == 'i') ADVANCE(855);
      END_STATE();
    case 680:
      if (lookahead == 'i') ADVANCE(1048);
      END_STATE();
    case 681:
      if (lookahead == 'i') ADVANCE(990);
      END_STATE();
    case 682:
      if (lookahead == 'i') ADVANCE(1274);
      END_STATE();
    case 683:
      if (lookahead == 'i') ADVANCE(1309);
      END_STATE();
    case 684:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 685:
      if (lookahead == 'i') ADVANCE(1099);
      END_STATE();
    case 686:
      if (lookahead == 'i') ADVANCE(852);
      END_STATE();
    case 687:
      if (lookahead == 'i') ADVANCE(1264);
      END_STATE();
    case 688:
      if (lookahead == 'i') ADVANCE(374);
      END_STATE();
    case 689:
      if (lookahead == 'i') ADVANCE(1266);
      END_STATE();
    case 690:
      if (lookahead == 'i') ADVANCE(610);
      END_STATE();
    case 691:
      if (lookahead == 'i') ADVANCE(861);
      END_STATE();
    case 692:
      if (lookahead == 'i') ADVANCE(422);
      END_STATE();
    case 693:
      if (lookahead == 'i') ADVANCE(1270);
      END_STATE();
    case 694:
      if (lookahead == 'i') ADVANCE(866);
      END_STATE();
    case 695:
      if (lookahead == 'i') ADVANCE(1272);
      END_STATE();
    case 696:
      if (lookahead == 'i') ADVANCE(868);
      END_STATE();
    case 697:
      if (lookahead == 'i') ADVANCE(1276);
      END_STATE();
    case 698:
      if (lookahead == 'i') ADVANCE(927);
      END_STATE();
    case 699:
      if (lookahead == 'i') ADVANCE(889);
      END_STATE();
    case 700:
      if (lookahead == 'i') ADVANCE(869);
      END_STATE();
    case 701:
      if (lookahead == 'i') ADVANCE(1212);
      END_STATE();
    case 702:
      if (lookahead == 'i') ADVANCE(871);
      END_STATE();
    case 703:
      if (lookahead == 'i') ADVANCE(537);
      END_STATE();
    case 704:
      if (lookahead == 'i') ADVANCE(1379);
      END_STATE();
    case 705:
      if (lookahead == 'i') ADVANCE(1436);
      END_STATE();
    case 706:
      if (lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 707:
      if (lookahead == 'i') ADVANCE(895);
      END_STATE();
    case 708:
      if (lookahead == 'i') ADVANCE(771);
      END_STATE();
    case 709:
      if (lookahead == 'i') ADVANCE(382);
      if (lookahead == 'o') ADVANCE(1377);
      END_STATE();
    case 710:
      if (lookahead == 'i') ADVANCE(1437);
      END_STATE();
    case 711:
      if (lookahead == 'i') ADVANCE(1271);
      END_STATE();
    case 712:
      if (lookahead == 'i') ADVANCE(832);
      END_STATE();
    case 713:
      if (lookahead == 'i') ADVANCE(952);
      END_STATE();
    case 714:
      if (lookahead == 'i') ADVANCE(1374);
      END_STATE();
    case 715:
      if (lookahead == 'i') ADVANCE(1438);
      END_STATE();
    case 716:
      if (lookahead == 'i') ADVANCE(833);
      END_STATE();
    case 717:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 718:
      if (lookahead == 'i') ADVANCE(955);
      END_STATE();
    case 719:
      if (lookahead == 'i') ADVANCE(1375);
      END_STATE();
    case 720:
      if (lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 721:
      if (lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 722:
      if (lookahead == 'i') ADVANCE(783);
      END_STATE();
    case 723:
      if (lookahead == 'i') ADVANCE(1376);
      END_STATE();
    case 724:
      if (lookahead == 'i') ADVANCE(890);
      END_STATE();
    case 725:
      if (lookahead == 'i') ADVANCE(894);
      END_STATE();
    case 726:
      if (lookahead == 'i') ADVANCE(967);
      END_STATE();
    case 727:
      if (lookahead == 'i') ADVANCE(885);
      END_STATE();
    case 728:
      if (lookahead == 'i') ADVANCE(970);
      END_STATE();
    case 729:
      if (lookahead == 'i') ADVANCE(903);
      if (lookahead == 'o') ADVANCE(1127);
      END_STATE();
    case 730:
      if (lookahead == 'i') ADVANCE(995);
      END_STATE();
    case 731:
      if (lookahead == 'i') ADVANCE(1381);
      END_STATE();
    case 732:
      if (lookahead == 'i') ADVANCE(806);
      END_STATE();
    case 733:
      if (lookahead == 'i') ADVANCE(1384);
      END_STATE();
    case 734:
      if (lookahead == 'i') ADVANCE(1305);
      END_STATE();
    case 735:
      if (lookahead == 'i') ADVANCE(1007);
      END_STATE();
    case 736:
      if (lookahead == 'i') ADVANCE(1314);
      END_STATE();
    case 737:
      if (lookahead == 'i') ADVANCE(640);
      if (lookahead == 'o') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 738:
      if (lookahead == 'i') ADVANCE(1388);
      END_STATE();
    case 739:
      if (lookahead == 'i') ADVANCE(915);
      END_STATE();
    case 740:
      if (lookahead == 'i') ADVANCE(919);
      if (lookahead == 'z') ADVANCE(954);
      END_STATE();
    case 741:
      if (lookahead == 'i') ADVANCE(1389);
      END_STATE();
    case 742:
      if (lookahead == 'k') ADVANCE(1579);
      END_STATE();
    case 743:
      if (lookahead == 'k') ADVANCE(1644);
      END_STATE();
    case 744:
      if (lookahead == 'k') ADVANCE(1578);
      END_STATE();
    case 745:
      if (lookahead == 'k') ADVANCE(1542);
      END_STATE();
    case 746:
      if (lookahead == 'k') ADVANCE(593);
      END_STATE();
    case 747:
      if (lookahead == 'k') ADVANCE(1201);
      END_STATE();
    case 748:
      if (lookahead == 'k') ADVANCE(80);
      END_STATE();
    case 749:
      if (lookahead == 'k') ADVANCE(471);
      END_STATE();
    case 750:
      if (lookahead == 'k') ADVANCE(142);
      END_STATE();
    case 751:
      if (lookahead == 'k') ADVANCE(691);
      END_STATE();
    case 752:
      if (lookahead == 'k') ADVANCE(146);
      END_STATE();
    case 753:
      if (lookahead == 'k') ADVANCE(1246);
      END_STATE();
    case 754:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 755:
      if (lookahead == 'l') ADVANCE(1516);
      END_STATE();
    case 756:
      if (lookahead == 'l') ADVANCE(1585);
      END_STATE();
    case 757:
      if (lookahead == 'l') ADVANCE(1568);
      END_STATE();
    case 758:
      if (lookahead == 'l') ADVANCE(1595);
      END_STATE();
    case 759:
      if (lookahead == 'l') ADVANCE(1573);
      END_STATE();
    case 760:
      if (lookahead == 'l') ADVANCE(933);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead == 'u') ADVANCE(765);
      END_STATE();
    case 761:
      if (lookahead == 'l') ADVANCE(661);
      if (lookahead == 'o') ADVANCE(754);
      if (lookahead == 'u') ADVANCE(1090);
      END_STATE();
    case 762:
      if (lookahead == 'l') ADVANCE(661);
      if (lookahead == 'o') ADVANCE(754);
      if (lookahead == 'u') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1496);
      END_STATE();
    case 763:
      if (lookahead == 'l') ADVANCE(923);
      if (lookahead == 'w') ADVANCE(179);
      END_STATE();
    case 764:
      if (lookahead == 'l') ADVANCE(1262);
      END_STATE();
    case 765:
      if (lookahead == 'l') ADVANCE(767);
      END_STATE();
    case 766:
      if (lookahead == 'l') ADVANCE(974);
      END_STATE();
    case 767:
      if (lookahead == 'l') ADVANCE(1197);
      END_STATE();
    case 768:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 769:
      if (lookahead == 'l') ADVANCE(431);
      END_STATE();
    case 770:
      if (lookahead == 'l') ADVANCE(776);
      END_STATE();
    case 771:
      if (lookahead == 'l') ADVANCE(433);
      END_STATE();
    case 772:
      if (lookahead == 'l') ADVANCE(789);
      END_STATE();
    case 773:
      if (lookahead == 'l') ADVANCE(759);
      END_STATE();
    case 774:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 775:
      if (lookahead == 'l') ADVANCE(935);
      END_STATE();
    case 776:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 777:
      if (lookahead == 'l') ADVANCE(1003);
      END_STATE();
    case 778:
      if (lookahead == 'l') ADVANCE(436);
      END_STATE();
    case 779:
      if (lookahead == 'l') ADVANCE(951);
      END_STATE();
    case 780:
      if (lookahead == 'l') ADVANCE(1257);
      END_STATE();
    case 781:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 782:
      if (lookahead == 'l') ADVANCE(445);
      END_STATE();
    case 783:
      if (lookahead == 'l') ADVANCE(446);
      END_STATE();
    case 784:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 785:
      if (lookahead == 'l') ADVANCE(1429);
      END_STATE();
    case 786:
      if (lookahead == 'l') ADVANCE(720);
      END_STATE();
    case 787:
      if (lookahead == 'l') ADVANCE(1200);
      END_STATE();
    case 788:
      if (lookahead == 'l') ADVANCE(976);
      END_STATE();
    case 789:
      if (lookahead == 'l') ADVANCE(293);
      END_STATE();
    case 790:
      if (lookahead == 'l') ADVANCE(775);
      END_STATE();
    case 791:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 792:
      if (lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 793:
      if (lookahead == 'l') ADVANCE(979);
      END_STATE();
    case 794:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 795:
      if (lookahead == 'l') ADVANCE(1016);
      END_STATE();
    case 796:
      if (lookahead == 'l') ADVANCE(686);
      END_STATE();
    case 797:
      if (lookahead == 'l') ADVANCE(489);
      END_STATE();
    case 798:
      if (lookahead == 'l') ADVANCE(987);
      END_STATE();
    case 799:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 800:
      if (lookahead == 'l') ADVANCE(994);
      END_STATE();
    case 801:
      if (lookahead == 'l') ADVANCE(494);
      END_STATE();
    case 802:
      if (lookahead == 'l') ADVANCE(559);
      END_STATE();
    case 803:
      if (lookahead == 'l') ADVANCE(503);
      END_STATE();
    case 804:
      if (lookahead == 'l') ADVANCE(510);
      END_STATE();
    case 805:
      if (lookahead == 'l') ADVANCE(521);
      END_STATE();
    case 806:
      if (lookahead == 'l') ADVANCE(527);
      END_STATE();
    case 807:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 808:
      if (lookahead == 'l') ADVANCE(798);
      END_STATE();
    case 809:
      if (lookahead == 'l') ADVANCE(984);
      END_STATE();
    case 810:
      if (lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 811:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 812:
      if (lookahead == 'l') ADVANCE(561);
      END_STATE();
    case 813:
      if (lookahead == 'l') ADVANCE(800);
      END_STATE();
    case 814:
      if (lookahead == 'l') ADVANCE(1004);
      END_STATE();
    case 815:
      if (lookahead == 'l') ADVANCE(563);
      END_STATE();
    case 816:
      if (lookahead == 'l') ADVANCE(564);
      END_STATE();
    case 817:
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 818:
      if (lookahead == 'm') ADVANCE(1581);
      END_STATE();
    case 819:
      if (lookahead == 'm') ADVANCE(266);
      END_STATE();
    case 820:
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 821:
      if (lookahead == 'm') ADVANCE(178);
      END_STATE();
    case 822:
      if (lookahead == 'm') ADVANCE(766);
      END_STATE();
    case 823:
      if (lookahead == 'm') ADVANCE(195);
      END_STATE();
    case 824:
      if (lookahead == 'm') ADVANCE(290);
      END_STATE();
    case 825:
      if (lookahead == 'm') ADVANCE(1017);
      if (lookahead == 'r') ADVANCE(535);
      END_STATE();
    case 826:
      if (lookahead == 'm') ADVANCE(665);
      END_STATE();
    case 827:
      if (lookahead == 'm') ADVANCE(199);
      END_STATE();
    case 828:
      if (lookahead == 'm') ADVANCE(442);
      END_STATE();
    case 829:
      if (lookahead == 'm') ADVANCE(1188);
      END_STATE();
    case 830:
      if (lookahead == 'm') ADVANCE(1189);
      END_STATE();
    case 831:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 832:
      if (lookahead == 'm') ADVANCE(571);
      END_STATE();
    case 833:
      if (lookahead == 'm') ADVANCE(450);
      END_STATE();
    case 834:
      if (lookahead == 'm') ADVANCE(1061);
      END_STATE();
    case 835:
      if (lookahead == 'm') ADVANCE(1345);
      END_STATE();
    case 836:
      if (lookahead == 'm') ADVANCE(946);
      END_STATE();
    case 837:
      if (lookahead == 'm') ADVANCE(963);
      END_STATE();
    case 838:
      if (lookahead == 'm') ADVANCE(1011);
      END_STATE();
    case 839:
      if (lookahead == 'm') ADVANCE(575);
      END_STATE();
    case 840:
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == 'x') ADVANCE(457);
      END_STATE();
    case 841:
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == 'x') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1496);
      END_STATE();
    case 842:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 843:
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 844:
      if (lookahead == 'n') ADVANCE(1533);
      END_STATE();
    case 845:
      if (lookahead == 'n') ADVANCE(1520);
      END_STATE();
    case 846:
      if (lookahead == 'n') ADVANCE(1519);
      END_STATE();
    case 847:
      if (lookahead == 'n') ADVANCE(1598);
      END_STATE();
    case 848:
      if (lookahead == 'n') ADVANCE(1575);
      END_STATE();
    case 849:
      if (lookahead == 'n') ADVANCE(1198);
      END_STATE();
    case 850:
      if (lookahead == 'n') ADVANCE(671);
      if (lookahead == 'u') ADVANCE(1229);
      END_STATE();
    case 851:
      if (lookahead == 'n') ADVANCE(612);
      END_STATE();
    case 852:
      if (lookahead == 'n') ADVANCE(743);
      END_STATE();
    case 853:
      if (lookahead == 'n') ADVANCE(1221);
      END_STATE();
    case 854:
      if (lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 855:
      if (lookahead == 'n') ADVANCE(637);
      END_STATE();
    case 856:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 857:
      if (lookahead == 'n') ADVANCE(622);
      END_STATE();
    case 858:
      if (lookahead == 'n') ADVANCE(1336);
      END_STATE();
    case 859:
      if (lookahead == 'n') ADVANCE(1195);
      END_STATE();
    case 860:
      if (lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 861:
      if (lookahead == 'n') ADVANCE(614);
      END_STATE();
    case 862:
      if (lookahead == 'n') ADVANCE(395);
      END_STATE();
    case 863:
      if (lookahead == 'n') ADVANCE(965);
      END_STATE();
    case 864:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 865:
      if (lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 866:
      if (lookahead == 'n') ADVANCE(615);
      END_STATE();
    case 867:
      if (lookahead == 'n') ADVANCE(1254);
      END_STATE();
    case 868:
      if (lookahead == 'n') ADVANCE(616);
      END_STATE();
    case 869:
      if (lookahead == 'n') ADVANCE(617);
      END_STATE();
    case 870:
      if (lookahead == 'n') ADVANCE(425);
      END_STATE();
    case 871:
      if (lookahead == 'n') ADVANCE(618);
      END_STATE();
    case 872:
      if (lookahead == 'n') ADVANCE(1177);
      END_STATE();
    case 873:
      if (lookahead == 'n') ADVANCE(376);
      END_STATE();
    case 874:
      if (lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 875:
      if (lookahead == 'n') ADVANCE(1279);
      END_STATE();
    case 876:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 877:
      if (lookahead == 'n') ADVANCE(1187);
      END_STATE();
    case 878:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 879:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 880:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 881:
      if (lookahead == 'n') ADVANCE(451);
      END_STATE();
    case 882:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 883:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 884:
      if (lookahead == 'n') ADVANCE(475);
      END_STATE();
    case 885:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 886:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 887:
      if (lookahead == 'n') ADVANCE(473);
      if (lookahead == 's') ADVANCE(1293);
      END_STATE();
    case 888:
      if (lookahead == 'n') ADVANCE(628);
      END_STATE();
    case 889:
      if (lookahead == 'n') ADVANCE(631);
      END_STATE();
    case 890:
      if (lookahead == 'n') ADVANCE(396);
      END_STATE();
    case 891:
      if (lookahead == 'n') ADVANCE(331);
      END_STATE();
    case 892:
      if (lookahead == 'n') ADVANCE(1282);
      END_STATE();
    case 893:
      if (lookahead == 'n') ADVANCE(400);
      END_STATE();
    case 894:
      if (lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 895:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 896:
      if (lookahead == 'n') ADVANCE(1216);
      END_STATE();
    case 897:
      if (lookahead == 'n') ADVANCE(960);
      END_STATE();
    case 898:
      if (lookahead == 'n') ADVANCE(350);
      END_STATE();
    case 899:
      if (lookahead == 'n') ADVANCE(699);
      END_STATE();
    case 900:
      if (lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 901:
      if (lookahead == 'n') ADVANCE(410);
      if (lookahead == 'p') ADVANCE(568);
      if (lookahead == 's') ADVANCE(662);
      END_STATE();
    case 902:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 903:
      if (lookahead == 'n') ADVANCE(639);
      END_STATE();
    case 904:
      if (lookahead == 'n') ADVANCE(1359);
      END_STATE();
    case 905:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 906:
      if (lookahead == 'n') ADVANCE(997);
      END_STATE();
    case 907:
      if (lookahead == 'n') ADVANCE(1013);
      END_STATE();
    case 908:
      if (lookahead == 'n') ADVANCE(1385);
      END_STATE();
    case 909:
      if (lookahead == 'n') ADVANCE(1312);
      END_STATE();
    case 910:
      if (lookahead == 'n') ADVANCE(417);
      END_STATE();
    case 911:
      if (lookahead == 'n') ADVANCE(424);
      END_STATE();
    case 912:
      if (lookahead == 'n') ADVANCE(734);
      END_STATE();
    case 913:
      if (lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 914:
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 915:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 916:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 917:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 918:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 919:
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 920:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 921:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 922:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 923:
      if (lookahead == 'o') ADVANCE(1396);
      END_STATE();
    case 924:
      if (lookahead == 'o') ADVANCE(1670);
      END_STATE();
    case 925:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 926:
      if (lookahead == 'o') ADVANCE(1611);
      END_STATE();
    case 927:
      if (lookahead == 'o') ADVANCE(1607);
      END_STATE();
    case 928:
      if (lookahead == 'o') ADVANCE(1481);
      END_STATE();
    case 929:
      if (lookahead == 'o') ADVANCE(1390);
      END_STATE();
    case 930:
      if (lookahead == 'o') ADVANCE(1391);
      END_STATE();
    case 931:
      if (lookahead == 'o') ADVANCE(1333);
      END_STATE();
    case 932:
      if (lookahead == 'o') ADVANCE(1069);
      END_STATE();
    case 933:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 934:
      if (lookahead == 'o') ADVANCE(831);
      END_STATE();
    case 935:
      if (lookahead == 'o') ADVANCE(1392);
      END_STATE();
    case 936:
      if (lookahead == 'o') ADVANCE(891);
      END_STATE();
    case 937:
      if (lookahead == 'o') ADVANCE(401);
      END_STATE();
    case 938:
      if (lookahead == 'o') ADVANCE(624);
      END_STATE();
    case 939:
      if (lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 940:
      if (lookahead == 'o') ADVANCE(1406);
      END_STATE();
    case 941:
      if (lookahead == 'o') ADVANCE(1408);
      END_STATE();
    case 942:
      if (lookahead == 'o') ADVANCE(1352);
      END_STATE();
    case 943:
      if (lookahead == 'o') ADVANCE(1093);
      END_STATE();
    case 944:
      if (lookahead == 'o') ADVANCE(1394);
      END_STATE();
    case 945:
      if (lookahead == 'o') ADVANCE(1044);
      END_STATE();
    case 946:
      if (lookahead == 'o') ADVANCE(1366);
      END_STATE();
    case 947:
      if (lookahead == 'o') ADVANCE(606);
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 948:
      if (lookahead == 'o') ADVANCE(876);
      if (lookahead == 'p') ADVANCE(1163);
      END_STATE();
    case 949:
      if (lookahead == 'o') ADVANCE(1356);
      END_STATE();
    case 950:
      if (lookahead == 'o') ADVANCE(845);
      END_STATE();
    case 951:
      if (lookahead == 'o') ADVANCE(626);
      END_STATE();
    case 952:
      if (lookahead == 'o') ADVANCE(846);
      END_STATE();
    case 953:
      if (lookahead == 'o') ADVANCE(373);
      END_STATE();
    case 954:
      if (lookahead == 'o') ADVANCE(934);
      END_STATE();
    case 955:
      if (lookahead == 'o') ADVANCE(917);
      END_STATE();
    case 956:
      if (lookahead == 'o') ADVANCE(1073);
      END_STATE();
    case 957:
      if (lookahead == 'o') ADVANCE(847);
      END_STATE();
    case 958:
      if (lookahead == 'o') ADVANCE(1091);
      END_STATE();
    case 959:
      if (lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 960:
      if (lookahead == 'o') ADVANCE(1167);
      END_STATE();
    case 961:
      if (lookahead == 'o') ADVANCE(881);
      END_STATE();
    case 962:
      if (lookahead == 'o') ADVANCE(1109);
      END_STATE();
    case 963:
      if (lookahead == 'o') ADVANCE(912);
      END_STATE();
    case 964:
      if (lookahead == 'o') ADVANCE(1143);
      END_STATE();
    case 965:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 966:
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 967:
      if (lookahead == 'o') ADVANCE(848);
      END_STATE();
    case 968:
      if (lookahead == 'o') ADVANCE(1075);
      END_STATE();
    case 969:
      if (lookahead == 'o') ADVANCE(1079);
      END_STATE();
    case 970:
      if (lookahead == 'o') ADVANCE(1082);
      END_STATE();
    case 971:
      if (lookahead == 'o') ADVANCE(1119);
      END_STATE();
    case 972:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 973:
      if (lookahead == 'o') ADVANCE(1086);
      END_STATE();
    case 974:
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 975:
      if (lookahead == 'o') ADVANCE(629);
      END_STATE();
    case 976:
      if (lookahead == 'o') ADVANCE(1409);
      END_STATE();
    case 977:
      if (lookahead == 'o') ADVANCE(1344);
      END_STATE();
    case 978:
      if (lookahead == 'o') ADVANCE(602);
      END_STATE();
    case 979:
      if (lookahead == 'o') ADVANCE(627);
      END_STATE();
    case 980:
      if (lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 981:
      if (lookahead == 'o') ADVANCE(1043);
      END_STATE();
    case 982:
      if (lookahead == 'o') ADVANCE(920);
      END_STATE();
    case 983:
      if (lookahead == 'o') ADVANCE(1100);
      END_STATE();
    case 984:
      if (lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 985:
      if (lookahead == 'o') ADVANCE(1399);
      END_STATE();
    case 986:
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 987:
      if (lookahead == 'o') ADVANCE(1400);
      END_STATE();
    case 988:
      if (lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 989:
      if (lookahead == 'o') ADVANCE(922);
      END_STATE();
    case 990:
      if (lookahead == 'o') ADVANCE(872);
      END_STATE();
    case 991:
      if (lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 992:
      if (lookahead == 'o') ADVANCE(1343);
      END_STATE();
    case 993:
      if (lookahead == 'o') ADVANCE(878);
      END_STATE();
    case 994:
      if (lookahead == 'o') ADVANCE(1410);
      END_STATE();
    case 995:
      if (lookahead == 'o') ADVANCE(877);
      END_STATE();
    case 996:
      if (lookahead == 'o') ADVANCE(773);
      END_STATE();
    case 997:
      if (lookahead == 'o') ADVANCE(1347);
      END_STATE();
    case 998:
      if (lookahead == 'o') ADVANCE(879);
      END_STATE();
    case 999:
      if (lookahead == 'o') ADVANCE(1120);
      END_STATE();
    case 1000:
      if (lookahead == 'o') ADVANCE(1130);
      END_STATE();
    case 1001:
      if (lookahead == 'o') ADVANCE(1348);
      END_STATE();
    case 1002:
      if (lookahead == 'o') ADVANCE(880);
      END_STATE();
    case 1003:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 1004:
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 1005:
      if (lookahead == 'o') ADVANCE(905);
      END_STATE();
    case 1006:
      if (lookahead == 'o') ADVANCE(883);
      END_STATE();
    case 1007:
      if (lookahead == 'o') ADVANCE(886);
      END_STATE();
    case 1008:
      if (lookahead == 'o') ADVANCE(1383);
      END_STATE();
    case 1009:
      if (lookahead == 'o') ADVANCE(1357);
      END_STATE();
    case 1010:
      if (lookahead == 'o') ADVANCE(1149);
      END_STATE();
    case 1011:
      if (lookahead == 'o') ADVANCE(1355);
      END_STATE();
    case 1012:
      if (lookahead == 'o') ADVANCE(909);
      END_STATE();
    case 1013:
      if (lookahead == 'o') ADVANCE(1165);
      END_STATE();
    case 1014:
      if (lookahead == 'o') ADVANCE(1058);
      END_STATE();
    case 1015:
      if (lookahead == 'o') ADVANCE(1360);
      END_STATE();
    case 1016:
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 1017:
      if (lookahead == 'o') ADVANCE(1382);
      END_STATE();
    case 1018:
      if (lookahead == 'o') ADVANCE(1062);
      END_STATE();
    case 1019:
      if (lookahead == 'o') ADVANCE(1063);
      END_STATE();
    case 1020:
      if (lookahead == 'o') ADVANCE(1154);
      END_STATE();
    case 1021:
      if (lookahead == 'o') ADVANCE(1362);
      END_STATE();
    case 1022:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 1023:
      if (lookahead == 'o') ADVANCE(813);
      END_STATE();
    case 1024:
      if (lookahead == 'o') ADVANCE(1156);
      END_STATE();
    case 1025:
      if (lookahead == 'o') ADVANCE(1158);
      END_STATE();
    case 1026:
      if (lookahead == 'o') ADVANCE(1159);
      END_STATE();
    case 1027:
      if (lookahead == 'o') ADVANCE(1160);
      END_STATE();
    case 1028:
      if (lookahead == 'o') ADVANCE(1161);
      END_STATE();
    case 1029:
      if (lookahead == 'o') ADVANCE(1162);
      END_STATE();
    case 1030:
      if (lookahead == 'o') ADVANCE(1166);
      END_STATE();
    case 1031:
      if (lookahead == 'o') ADVANCE(1169);
      END_STATE();
    case 1032:
      if (lookahead == 'o') ADVANCE(921);
      END_STATE();
    case 1033:
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 1034:
      if (lookahead == 'p') ADVANCE(1576);
      END_STATE();
    case 1035:
      if (lookahead == 'p') ADVANCE(785);
      END_STATE();
    case 1036:
      if (lookahead == 'p') ADVANCE(285);
      END_STATE();
    case 1037:
      if (lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 1038:
      if (lookahead == 'p') ADVANCE(1196);
      END_STATE();
    case 1039:
      if (lookahead == 'p') ADVANCE(1064);
      END_STATE();
    case 1040:
      if (lookahead == 'p') ADVANCE(829);
      END_STATE();
    case 1041:
      if (lookahead == 'p') ADVANCE(469);
      if (lookahead == 't') ADVANCE(1102);
      END_STATE();
    case 1042:
      if (lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 1043:
      if (lookahead == 'p') ADVANCE(204);
      END_STATE();
    case 1044:
      if (lookahead == 'p') ADVANCE(1288);
      END_STATE();
    case 1045:
      if (lookahead == 'p') ADVANCE(1097);
      END_STATE();
    case 1046:
      if (lookahead == 'p') ADVANCE(940);
      END_STATE();
    case 1047:
      if (lookahead == 'p') ADVANCE(1181);
      END_STATE();
    case 1048:
      if (lookahead == 'p') ADVANCE(447);
      END_STATE();
    case 1049:
      if (lookahead == 'p') ADVANCE(1267);
      END_STATE();
    case 1050:
      if (lookahead == 'p') ADVANCE(1339);
      END_STATE();
    case 1051:
      if (lookahead == 'p') ADVANCE(830);
      END_STATE();
    case 1052:
      if (lookahead == 'p') ADVANCE(570);
      END_STATE();
    case 1053:
      if (lookahead == 'p') ADVANCE(792);
      END_STATE();
    case 1054:
      if (lookahead == 'p') ADVANCE(694);
      END_STATE();
    case 1055:
      if (lookahead == 'p') ADVANCE(962);
      END_STATE();
    case 1056:
      if (lookahead == 'p') ADVANCE(289);
      END_STATE();
    case 1057:
      if (lookahead == 'p') ADVANCE(1141);
      END_STATE();
    case 1058:
      if (lookahead == 'p') ADVANCE(260);
      END_STATE();
    case 1059:
      if (lookahead == 'p') ADVANCE(1315);
      END_STATE();
    case 1060:
      if (lookahead == 'p') ADVANCE(1142);
      END_STATE();
    case 1061:
      if (lookahead == 'p') ADVANCE(805);
      END_STATE();
    case 1062:
      if (lookahead == 'p') ADVANCE(263);
      END_STATE();
    case 1063:
      if (lookahead == 'p') ADVANCE(264);
      END_STATE();
    case 1064:
      if (lookahead == 'p') ADVANCE(1153);
      END_STATE();
    case 1065:
      if (lookahead == 'p') ADVANCE(261);
      END_STATE();
    case 1066:
      if (lookahead == 'p') ADVANCE(161);
      END_STATE();
    case 1067:
      if (lookahead == 'r') ADVANCE(1613);
      END_STATE();
    case 1068:
      if (lookahead == 'r') ADVANCE(1614);
      END_STATE();
    case 1069:
      if (lookahead == 'r') ADVANCE(747);
      END_STATE();
    case 1070:
      if (lookahead == 'r') ADVANCE(1552);
      END_STATE();
    case 1071:
      if (lookahead == 'r') ADVANCE(481);
      END_STATE();
    case 1072:
      if (lookahead == 'r') ADVANCE(1134);
      END_STATE();
    case 1073:
      if (lookahead == 'r') ADVANCE(1667);
      END_STATE();
    case 1074:
      if (lookahead == 'r') ADVANCE(1570);
      END_STATE();
    case 1075:
      if (lookahead == 'r') ADVANCE(1574);
      END_STATE();
    case 1076:
      if (lookahead == 'r') ADVANCE(1537);
      END_STATE();
    case 1077:
      if (lookahead == 'r') ADVANCE(1544);
      END_STATE();
    case 1078:
      if (lookahead == 'r') ADVANCE(1536);
      END_STATE();
    case 1079:
      if (lookahead == 'r') ADVANCE(1632);
      END_STATE();
    case 1080:
      if (lookahead == 'r') ADVANCE(1535);
      END_STATE();
    case 1081:
      if (lookahead == 'r') ADVANCE(1560);
      END_STATE();
    case 1082:
      if (lookahead == 'r') ADVANCE(1577);
      END_STATE();
    case 1083:
      if (lookahead == 'r') ADVANCE(1546);
      END_STATE();
    case 1084:
      if (lookahead == 'r') ADVANCE(1609);
      END_STATE();
    case 1085:
      if (lookahead == 'r') ADVANCE(1635);
      END_STATE();
    case 1086:
      if (lookahead == 'r') ADVANCE(1628);
      END_STATE();
    case 1087:
      if (lookahead == 'r') ADVANCE(407);
      END_STATE();
    case 1088:
      if (lookahead == 'r') ADVANCE(470);
      END_STATE();
    case 1089:
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 1090:
      if (lookahead == 'r') ADVANCE(1228);
      END_STATE();
    case 1091:
      if (lookahead == 'r') ADVANCE(818);
      END_STATE();
    case 1092:
      if (lookahead == 'r') ADVANCE(1009);
      END_STATE();
    case 1093:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 1094:
      if (lookahead == 'r') ADVANCE(768);
      END_STATE();
    case 1095:
      if (lookahead == 'r') ADVANCE(684);
      END_STATE();
    case 1096:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 1097:
      if (lookahead == 'r') ADVANCE(978);
      END_STATE();
    case 1098:
      if (lookahead == 'r') ADVANCE(1332);
      END_STATE();
    case 1099:
      if (lookahead == 'r') ADVANCE(474);
      END_STATE();
    case 1100:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 1101:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 1102:
      if (lookahead == 'r') ADVANCE(482);
      END_STATE();
    case 1103:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 1104:
      if (lookahead == 'r') ADVANCE(501);
      END_STATE();
    case 1105:
      if (lookahead == 'r') ADVANCE(477);
      END_STATE();
    case 1106:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 1107:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 1108:
      if (lookahead == 'r') ADVANCE(1105);
      END_STATE();
    case 1109:
      if (lookahead == 'r') ADVANCE(1299);
      END_STATE();
    case 1110:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 1111:
      if (lookahead == 'r') ADVANCE(692);
      END_STATE();
    case 1112:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 1113:
      if (lookahead == 'r') ADVANCE(899);
      END_STATE();
    case 1114:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 1115:
      if (lookahead == 'r') ADVANCE(1124);
      END_STATE();
    case 1116:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 1117:
      if (lookahead == 'r') ADVANCE(1258);
      END_STATE();
    case 1118:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 1119:
      if (lookahead == 'r') ADVANCE(1269);
      END_STATE();
    case 1120:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 1121:
      if (lookahead == 'r') ADVANCE(1111);
      END_STATE();
    case 1122:
      if (lookahead == 'r') ADVANCE(1190);
      END_STATE();
    case 1123:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 1124:
      if (lookahead == 'r') ADVANCE(543);
      END_STATE();
    case 1125:
      if (lookahead == 'r') ADVANCE(574);
      END_STATE();
    case 1126:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 1127:
      if (lookahead == 'r') ADVANCE(572);
      END_STATE();
    case 1128:
      if (lookahead == 'r') ADVANCE(511);
      END_STATE();
    case 1129:
      if (lookahead == 'r') ADVANCE(504);
      END_STATE();
    case 1130:
      if (lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 1131:
      if (lookahead == 'r') ADVANCE(530);
      END_STATE();
    case 1132:
      if (lookahead == 'r') ADVANCE(1047);
      END_STATE();
    case 1133:
      if (lookahead == 'r') ADVANCE(942);
      END_STATE();
    case 1134:
      if (lookahead == 'r') ADVANCE(1354);
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 1135:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 1136:
      if (lookahead == 'r') ADVANCE(487);
      END_STATE();
    case 1137:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 1138:
      if (lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 1139:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 1140:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 1141:
      if (lookahead == 'r') ADVANCE(810);
      END_STATE();
    case 1142:
      if (lookahead == 'r') ADVANCE(566);
      END_STATE();
    case 1143:
      if (lookahead == 'r') ADVANCE(541);
      END_STATE();
    case 1144:
      if (lookahead == 'r') ADVANCE(406);
      END_STATE();
    case 1145:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 1146:
      if (lookahead == 'r') ADVANCE(506);
      END_STATE();
    case 1147:
      if (lookahead == 'r') ADVANCE(700);
      END_STATE();
    case 1148:
      if (lookahead == 'r') ADVANCE(508);
      END_STATE();
    case 1149:
      if (lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 1150:
      if (lookahead == 'r') ADVANCE(1236);
      END_STATE();
    case 1151:
      if (lookahead == 'r') ADVANCE(996);
      END_STATE();
    case 1152:
      if (lookahead == 'r') ADVANCE(548);
      END_STATE();
    case 1153:
      if (lookahead == 'r') ADVANCE(539);
      END_STATE();
    case 1154:
      if (lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 1155:
      if (lookahead == 'r') ADVANCE(1237);
      END_STATE();
    case 1156:
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 1157:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 1158:
      if (lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 1159:
      if (lookahead == 'r') ADVANCE(419);
      END_STATE();
    case 1160:
      if (lookahead == 'r') ADVANCE(420);
      END_STATE();
    case 1161:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 1162:
      if (lookahead == 'r') ADVANCE(423);
      END_STATE();
    case 1163:
      if (lookahead == 'r') ADVANCE(567);
      END_STATE();
    case 1164:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 1165:
      if (lookahead == 'r') ADVANCE(576);
      END_STATE();
    case 1166:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 1167:
      if (lookahead == 'r') ADVANCE(577);
      END_STATE();
    case 1168:
      if (lookahead == 'r') ADVANCE(1021);
      END_STATE();
    case 1169:
      if (lookahead == 'r') ADVANCE(753);
      END_STATE();
    case 1170:
      if (lookahead == 's') ADVANCE(1480);
      END_STATE();
    case 1171:
      if (lookahead == 's') ADVANCE(1524);
      END_STATE();
    case 1172:
      if (lookahead == 's') ADVANCE(1656);
      END_STATE();
    case 1173:
      if (lookahead == 's') ADVANCE(1665);
      END_STATE();
    case 1174:
      if (lookahead == 's') ADVANCE(1273);
      END_STATE();
    case 1175:
      if (lookahead == 's') ADVANCE(1522);
      END_STATE();
    case 1176:
      if (lookahead == 's') ADVANCE(1589);
      END_STATE();
    case 1177:
      if (lookahead == 's') ADVANCE(1588);
      END_STATE();
    case 1178:
      if (lookahead == 's') ADVANCE(1554);
      END_STATE();
    case 1179:
      if (lookahead == 's') ADVANCE(1645);
      END_STATE();
    case 1180:
      if (lookahead == 's') ADVANCE(1600);
      END_STATE();
    case 1181:
      if (lookahead == 's') ADVANCE(1541);
      END_STATE();
    case 1182:
      if (lookahead == 's') ADVANCE(1548);
      END_STATE();
    case 1183:
      if (lookahead == 's') ADVANCE(1648);
      END_STATE();
    case 1184:
      if (lookahead == 's') ADVANCE(1637);
      END_STATE();
    case 1185:
      if (lookahead == 's') ADVANCE(1641);
      END_STATE();
    case 1186:
      if (lookahead == 's') ADVANCE(1619);
      END_STATE();
    case 1187:
      if (lookahead == 's') ADVANCE(1556);
      END_STATE();
    case 1188:
      if (lookahead == 's') ADVANCE(1616);
      END_STATE();
    case 1189:
      if (lookahead == 's') ADVANCE(1615);
      END_STATE();
    case 1190:
      if (lookahead == 's') ADVANCE(1603);
      END_STATE();
    case 1191:
      if (lookahead == 's') ADVANCE(1629);
      END_STATE();
    case 1192:
      if (lookahead == 's') ADVANCE(1618);
      END_STATE();
    case 1193:
      if (lookahead == 's') ADVANCE(1601);
      END_STATE();
    case 1194:
      if (lookahead == 's') ADVANCE(1403);
      END_STATE();
    case 1195:
      if (lookahead == 's') ADVANCE(595);
      END_STATE();
    case 1196:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 1197:
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 1198:
      if (lookahead == 's') ADVANCE(465);
      END_STATE();
    case 1199:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 1200:
      if (lookahead == 's') ADVANCE(429);
      END_STATE();
    case 1201:
      if (lookahead == 's') ADVANCE(1042);
      END_STATE();
    case 1202:
      if (lookahead == 's') ADVANCE(643);
      END_STATE();
    case 1203:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 1204:
      if (lookahead == 's') ADVANCE(1172);
      END_STATE();
    case 1205:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 1206:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 1207:
      if (lookahead == 's') ADVANCE(547);
      END_STATE();
    case 1208:
      if (lookahead == 's') ADVANCE(1220);
      END_STATE();
    case 1209:
      if (lookahead == 's') ADVANCE(1234);
      END_STATE();
    case 1210:
      if (lookahead == 's') ADVANCE(1241);
      END_STATE();
    case 1211:
      if (lookahead == 's') ADVANCE(670);
      END_STATE();
    case 1212:
      if (lookahead == 's') ADVANCE(1280);
      END_STATE();
    case 1213:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 1214:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 1215:
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 1216:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 1217:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 1218:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 1219:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 1220:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 1221:
      if (lookahead == 's') ADVANCE(711);
      END_STATE();
    case 1222:
      if (lookahead == 's') ADVANCE(1199);
      END_STATE();
    case 1223:
      if (lookahead == 's') ADVANCE(652);
      END_STATE();
    case 1224:
      if (lookahead == 's') ADVANCE(1052);
      END_STATE();
    case 1225:
      if (lookahead == 's') ADVANCE(332);
      END_STATE();
    case 1226:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 1227:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 1228:
      if (lookahead == 's') ADVANCE(983);
      END_STATE();
    case 1229:
      if (lookahead == 's') ADVANCE(480);
      END_STATE();
    case 1230:
      if (lookahead == 's') ADVANCE(710);
      END_STATE();
    case 1231:
      if (lookahead == 's') ADVANCE(333);
      END_STATE();
    case 1232:
      if (lookahead == 's') ADVANCE(499);
      END_STATE();
    case 1233:
      if (lookahead == 's') ADVANCE(715);
      END_STATE();
    case 1234:
      if (lookahead == 's') ADVANCE(498);
      END_STATE();
    case 1235:
      if (lookahead == 's') ADVANCE(1214);
      END_STATE();
    case 1236:
      if (lookahead == 's') ADVANCE(999);
      END_STATE();
    case 1237:
      if (lookahead == 's') ADVANCE(1030);
      END_STATE();
    case 1238:
      if (lookahead == 's') ADVANCE(519);
      END_STATE();
    case 1239:
      if (lookahead == 's') ADVANCE(526);
      END_STATE();
    case 1240:
      if (lookahead == 's') ADVANCE(657);
      END_STATE();
    case 1241:
      if (lookahead == 's') ADVANCE(718);
      END_STATE();
    case 1242:
      if (lookahead == 's') ADVANCE(658);
      END_STATE();
    case 1243:
      if (lookahead == 's') ADVANCE(551);
      if (lookahead == 'w') ADVANCE(1031);
      END_STATE();
    case 1244:
      if (lookahead == 's') ADVANCE(1304);
      END_STATE();
    case 1245:
      if (lookahead == 's') ADVANCE(565);
      END_STATE();
    case 1246:
      if (lookahead == 's') ADVANCE(1065);
      END_STATE();
    case 1247:
      if (lookahead == 't') ADVANCE(1521);
      END_STATE();
    case 1248:
      if (lookahead == 't') ADVANCE(1655);
      END_STATE();
    case 1249:
      if (lookahead == 't') ADVANCE(502);
      END_STATE();
    case 1250:
      if (lookahead == 't') ADVANCE(1540);
      END_STATE();
    case 1251:
      if (lookahead == 't') ADVANCE(1582);
      END_STATE();
    case 1252:
      if (lookahead == 't') ADVANCE(1534);
      END_STATE();
    case 1253:
      if (lookahead == 't') ADVANCE(1586);
      END_STATE();
    case 1254:
      if (lookahead == 't') ADVANCE(1587);
      END_STATE();
    case 1255:
      if (lookahead == 't') ADVANCE(1564);
      END_STATE();
    case 1256:
      if (lookahead == 't') ADVANCE(1626);
      END_STATE();
    case 1257:
      if (lookahead == 't') ADVANCE(1591);
      END_STATE();
    case 1258:
      if (lookahead == 't') ADVANCE(1605);
      END_STATE();
    case 1259:
      if (lookahead == 't') ADVANCE(1539);
      END_STATE();
    case 1260:
      if (lookahead == 't') ADVANCE(924);
      END_STATE();
    case 1261:
      if (lookahead == 't') ADVANCE(1050);
      END_STATE();
    case 1262:
      if (lookahead == 't') ADVANCE(678);
      END_STATE();
    case 1263:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 1264:
      if (lookahead == 't') ADVANCE(1420);
      END_STATE();
    case 1265:
      if (lookahead == 't') ADVANCE(642);
      END_STATE();
    case 1266:
      if (lookahead == 't') ADVANCE(1422);
      END_STATE();
    case 1267:
      if (lookahead == 't') ADVANCE(681);
      END_STATE();
    case 1268:
      if (lookahead == 't') ADVANCE(1430);
      END_STATE();
    case 1269:
      if (lookahead == 't') ADVANCE(645);
      END_STATE();
    case 1270:
      if (lookahead == 't') ADVANCE(1423);
      END_STATE();
    case 1271:
      if (lookahead == 't') ADVANCE(663);
      END_STATE();
    case 1272:
      if (lookahead == 't') ADVANCE(1424);
      END_STATE();
    case 1273:
      if (lookahead == 't') ADVANCE(408);
      if (lookahead == 'w') ADVANCE(245);
      END_STATE();
    case 1274:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 1275:
      if (lookahead == 't') ADVANCE(668);
      END_STATE();
    case 1276:
      if (lookahead == 't') ADVANCE(1426);
      END_STATE();
    case 1277:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 1278:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 1279:
      if (lookahead == 't') ADVANCE(1184);
      END_STATE();
    case 1280:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 1281:
      if (lookahead == 't') ADVANCE(448);
      END_STATE();
    case 1282:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 1283:
      if (lookahead == 't') ADVANCE(1316);
      END_STATE();
    case 1284:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 1285:
      if (lookahead == 't') ADVANCE(654);
      END_STATE();
    case 1286:
      if (lookahead == 't') ADVANCE(713);
      END_STATE();
    case 1287:
      if (lookahead == 't') ADVANCE(972);
      END_STATE();
    case 1288:
      if (lookahead == 't') ADVANCE(673);
      END_STATE();
    case 1289:
      if (lookahead == 't') ADVANCE(1364);
      END_STATE();
    case 1290:
      if (lookahead == 't') ADVANCE(698);
      END_STATE();
    case 1291:
      if (lookahead == 't') ADVANCE(1022);
      END_STATE();
    case 1292:
      if (lookahead == 't') ADVANCE(712);
      END_STATE();
    case 1293:
      if (lookahead == 't') ADVANCE(1361);
      END_STATE();
    case 1294:
      if (lookahead == 't') ADVANCE(956);
      END_STATE();
    case 1295:
      if (lookahead == 't') ADVANCE(716);
      END_STATE();
    case 1296:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 1297:
      if (lookahead == 't') ADVANCE(957);
      END_STATE();
    case 1298:
      if (lookahead == 't') ADVANCE(977);
      END_STATE();
    case 1299:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 1300:
      if (lookahead == 't') ADVANCE(696);
      END_STATE();
    case 1301:
      if (lookahead == 't') ADVANCE(964);
      END_STATE();
    case 1302:
      if (lookahead == 't') ADVANCE(968);
      END_STATE();
    case 1303:
      if (lookahead == 't') ADVANCE(969);
      END_STATE();
    case 1304:
      if (lookahead == 't') ADVANCE(1000);
      END_STATE();
    case 1305:
      if (lookahead == 't') ADVANCE(973);
      END_STATE();
    case 1306:
      if (lookahead == 't') ADVANCE(529);
      END_STATE();
    case 1307:
      if (lookahead == 't') ADVANCE(714);
      END_STATE();
    case 1308:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 1309:
      if (lookahead == 't') ADVANCE(802);
      END_STATE();
    case 1310:
      if (lookahead == 't') ADVANCE(1297);
      END_STATE();
    case 1311:
      if (lookahead == 't') ADVANCE(656);
      END_STATE();
    case 1312:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 1313:
      if (lookahead == 't') ADVANCE(719);
      END_STATE();
    case 1314:
      if (lookahead == 't') ADVANCE(812);
      END_STATE();
    case 1315:
      if (lookahead == 't') ADVANCE(735);
      END_STATE();
    case 1316:
      if (lookahead == 't') ADVANCE(993);
      END_STATE();
    case 1317:
      if (lookahead == 't') ADVANCE(723);
      END_STATE();
    case 1318:
      if (lookahead == 't') ADVANCE(726);
      END_STATE();
    case 1319:
      if (lookahead == 't') ADVANCE(1002);
      END_STATE();
    case 1320:
      if (lookahead == 't') ADVANCE(731);
      END_STATE();
    case 1321:
      if (lookahead == 't') ADVANCE(730);
      END_STATE();
    case 1322:
      if (lookahead == 't') ADVANCE(1319);
      END_STATE();
    case 1323:
      if (lookahead == 't') ADVANCE(733);
      END_STATE();
    case 1324:
      if (lookahead == 't') ADVANCE(738);
      END_STATE();
    case 1325:
      if (lookahead == 't') ADVANCE(741);
      END_STATE();
    case 1326:
      if (lookahead == 'u') ADVANCE(1260);
      END_STATE();
    case 1327:
      if (lookahead == 'u') ADVANCE(1261);
      if (lookahead == 'v') ADVANCE(466);
      END_STATE();
    case 1328:
      if (lookahead == 'u') ADVANCE(611);
      END_STATE();
    case 1329:
      if (lookahead == 'u') ADVANCE(854);
      END_STATE();
    case 1330:
      if (lookahead == 'u') ADVANCE(311);
      END_STATE();
    case 1331:
      if (lookahead == 'u') ADVANCE(1247);
      END_STATE();
    case 1332:
      if (lookahead == 'u') ADVANCE(428);
      END_STATE();
    case 1333:
      if (lookahead == 'u') ADVANCE(1036);
      END_STATE();
    case 1334:
      if (lookahead == 'u') ADVANCE(1070);
      END_STATE();
    case 1335:
      if (lookahead == 'u') ADVANCE(1138);
      END_STATE();
    case 1336:
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 1337:
      if (lookahead == 'u') ADVANCE(1250);
      END_STATE();
    case 1338:
      if (lookahead == 'u') ADVANCE(824);
      END_STATE();
    case 1339:
      if (lookahead == 'u') ADVANCE(1251);
      END_STATE();
    case 1340:
      if (lookahead == 'u') ADVANCE(1283);
      END_STATE();
    case 1341:
      if (lookahead == 'u') ADVANCE(797);
      END_STATE();
    case 1342:
      if (lookahead == 'u') ADVANCE(1252);
      END_STATE();
    case 1343:
      if (lookahead == 'u') ADVANCE(1253);
      END_STATE();
    case 1344:
      if (lookahead == 'u') ADVANCE(323);
      END_STATE();
    case 1345:
      if (lookahead == 'u') ADVANCE(817);
      END_STATE();
    case 1346:
      if (lookahead == 'u') ADVANCE(1180);
      END_STATE();
    case 1347:
      if (lookahead == 'u') ADVANCE(1256);
      END_STATE();
    case 1348:
      if (lookahead == 'u') ADVANCE(1259);
      END_STATE();
    case 1349:
      if (lookahead == 'u') ADVANCE(1192);
      END_STATE();
    case 1350:
      if (lookahead == 'u') ADVANCE(1193);
      END_STATE();
    case 1351:
      if (lookahead == 'u') ADVANCE(780);
      END_STATE();
    case 1352:
      if (lookahead == 'u') ADVANCE(1066);
      END_STATE();
    case 1353:
      if (lookahead == 'u') ADVANCE(1203);
      END_STATE();
    case 1354:
      if (lookahead == 'u') ADVANCE(778);
      END_STATE();
    case 1355:
      if (lookahead == 'u') ADVANCE(1215);
      END_STATE();
    case 1356:
      if (lookahead == 'u') ADVANCE(1308);
      END_STATE();
    case 1357:
      if (lookahead == 'u') ADVANCE(865);
      END_STATE();
    case 1358:
      if (lookahead == 'u') ADVANCE(1213);
      END_STATE();
    case 1359:
      if (lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 1360:
      if (lookahead == 'u') ADVANCE(874);
      END_STATE();
    case 1361:
      if (lookahead == 'u') ADVANCE(1136);
      END_STATE();
    case 1362:
      if (lookahead == 'u') ADVANCE(1056);
      END_STATE();
    case 1363:
      if (lookahead == 'u') ADVANCE(1301);
      END_STATE();
    case 1364:
      if (lookahead == 'u') ADVANCE(1140);
      END_STATE();
    case 1365:
      if (lookahead == 'u') ADVANCE(1245);
      END_STATE();
    case 1366:
      if (lookahead == 'u') ADVANCE(1238);
      END_STATE();
    case 1367:
      if (lookahead == 'u') ADVANCE(1239);
      END_STATE();
    case 1368:
      if (lookahead == 'u') ADVANCE(1150);
      END_STATE();
    case 1369:
      if (lookahead == 'u') ADVANCE(1310);
      END_STATE();
    case 1370:
      if (lookahead == 'u') ADVANCE(1155);
      END_STATE();
    case 1371:
      if (lookahead == 'u') ADVANCE(1322);
      END_STATE();
    case 1372:
      if (lookahead == 'v') ADVANCE(728);
      END_STATE();
    case 1373:
      if (lookahead == 'v') ADVANCE(493);
      END_STATE();
    case 1374:
      if (lookahead == 'v') ADVANCE(441);
      END_STATE();
    case 1375:
      if (lookahead == 'v') ADVANCE(449);
      END_STATE();
    case 1376:
      if (lookahead == 'v') ADVANCE(452);
      END_STATE();
    case 1377:
      if (lookahead == 'v') ADVANCE(478);
      END_STATE();
    case 1378:
      if (lookahead == 'v') ADVANCE(234);
      END_STATE();
    case 1379:
      if (lookahead == 'v') ADVANCE(484);
      END_STATE();
    case 1380:
      if (lookahead == 'v') ADVANCE(687);
      END_STATE();
    case 1381:
      if (lookahead == 'v') ADVANCE(580);
      END_STATE();
    case 1382:
      if (lookahead == 'v') ADVANCE(517);
      END_STATE();
    case 1383:
      if (lookahead == 'v') ADVANCE(546);
      END_STATE();
    case 1384:
      if (lookahead == 'v') ADVANCE(528);
      END_STATE();
    case 1385:
      if (lookahead == 'v') ADVANCE(524);
      END_STATE();
    case 1386:
      if (lookahead == 'v') ADVANCE(525);
      END_STATE();
    case 1387:
      if (lookahead == 'v') ADVANCE(721);
      END_STATE();
    case 1388:
      if (lookahead == 'v') ADVANCE(573);
      END_STATE();
    case 1389:
      if (lookahead == 'v') ADVANCE(581);
      END_STATE();
    case 1390:
      if (lookahead == 'w') ADVANCE(1562);
      END_STATE();
    case 1391:
      if (lookahead == 'w') ADVANCE(1558);
      END_STATE();
    case 1392:
      if (lookahead == 'w') ADVANCE(1622);
      END_STATE();
    case 1393:
      if (lookahead == 'w') ADVANCE(1543);
      END_STATE();
    case 1394:
      if (lookahead == 'w') ADVANCE(1561);
      END_STATE();
    case 1395:
      if (lookahead == 'w') ADVANCE(1608);
      END_STATE();
    case 1396:
      if (lookahead == 'w') ADVANCE(56);
      END_STATE();
    case 1397:
      if (lookahead == 'w') ADVANCE(680);
      END_STATE();
    case 1398:
      if (lookahead == 'w') ADVANCE(724);
      END_STATE();
    case 1399:
      if (lookahead == 'w') ADVANCE(63);
      END_STATE();
    case 1400:
      if (lookahead == 'w') ADVANCE(72);
      END_STATE();
    case 1401:
      if (lookahead == 'w') ADVANCE(102);
      END_STATE();
    case 1402:
      if (lookahead == 'w') ADVANCE(659);
      END_STATE();
    case 1403:
      if (lookahead == 'w') ADVANCE(682);
      END_STATE();
    case 1404:
      if (lookahead == 'w') ADVANCE(221);
      END_STATE();
    case 1405:
      if (lookahead == 'w') ADVANCE(222);
      END_STATE();
    case 1406:
      if (lookahead == 'w') ADVANCE(520);
      END_STATE();
    case 1407:
      if (lookahead == 'w') ADVANCE(725);
      END_STATE();
    case 1408:
      if (lookahead == 'w') ADVANCE(413);
      END_STATE();
    case 1409:
      if (lookahead == 'w') ADVANCE(149);
      END_STATE();
    case 1410:
      if (lookahead == 'w') ADVANCE(148);
      END_STATE();
    case 1411:
      if (lookahead == 'x') ADVANCE(1495);
      END_STATE();
    case 1412:
      if (lookahead == 'x') ADVANCE(1495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1496);
      END_STATE();
    case 1413:
      if (lookahead == 'x') ADVANCE(1623);
      END_STATE();
    case 1414:
      if (lookahead == 'x') ADVANCE(1624);
      END_STATE();
    case 1415:
      if (lookahead == 'x') ADVANCE(1658);
      END_STATE();
    case 1416:
      if (lookahead == 'x') ADVANCE(335);
      END_STATE();
    case 1417:
      if (lookahead == 'y') ADVANCE(479);
      END_STATE();
    case 1418:
      if (lookahead == 'y') ADVANCE(1643);
      END_STATE();
    case 1419:
      if (lookahead == 'y') ADVANCE(1557);
      END_STATE();
    case 1420:
      if (lookahead == 'y') ADVANCE(1529);
      END_STATE();
    case 1421:
      if (lookahead == 'y') ADVANCE(1593);
      END_STATE();
    case 1422:
      if (lookahead == 'y') ADVANCE(1549);
      END_STATE();
    case 1423:
      if (lookahead == 'y') ADVANCE(1550);
      END_STATE();
    case 1424:
      if (lookahead == 'y') ADVANCE(1551);
      END_STATE();
    case 1425:
      if (lookahead == 'y') ADVANCE(1639);
      END_STATE();
    case 1426:
      if (lookahead == 'y') ADVANCE(1555);
      END_STATE();
    case 1427:
      if (lookahead == 'y') ADVANCE(150);
      END_STATE();
    case 1428:
      if (lookahead == 'y') ADVANCE(284);
      END_STATE();
    case 1429:
      if (lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 1430:
      if (lookahead == 'y') ADVANCE(1054);
      END_STATE();
    case 1431:
      if (lookahead == 'y') ADVANCE(364);
      END_STATE();
    case 1432:
      if (lookahead == 'y') ADVANCE(100);
      END_STATE();
    case 1433:
      if (lookahead == 'y') ADVANCE(992);
      END_STATE();
    case 1434:
      if (lookahead == 'y') ADVANCE(1057);
      END_STATE();
    case 1435:
      if (lookahead == 'y') ADVANCE(1206);
      END_STATE();
    case 1436:
      if (lookahead == 'z') ADVANCE(434);
      END_STATE();
    case 1437:
      if (lookahead == 'z') ADVANCE(438);
      END_STATE();
    case 1438:
      if (lookahead == 'z') ADVANCE(454);
      END_STATE();
    case 1439:
      if (lookahead == 'z') ADVANCE(500);
      END_STATE();
    case 1440:
      if (lookahead == 'z') ADVANCE(961);
      END_STATE();
    case 1441:
      if (lookahead == 'z') ADVANCE(514);
      END_STATE();
    case 1442:
      if (lookahead == 'z') ADVANCE(269);
      END_STATE();
    case 1443:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1465);
      END_STATE();
    case 1444:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1464);
      END_STATE();
    case 1445:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1459);
      END_STATE();
    case 1446:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1462);
      END_STATE();
    case 1447:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1496);
      END_STATE();
    case 1448:
      if (eof) ADVANCE(1450);
      if (lookahead == '\n') ADVANCE(1515);
      if (lookahead == '#') ADVANCE(1451);
      if (lookahead == '0') ADVANCE(1458);
      if (lookahead == 'a') ADVANCE(307);
      if (lookahead == 'b') ADVANCE(666);
      if (lookahead == 'c') ADVANCE(761);
      if (lookahead == 'd') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(840);
      if (lookahead == 'f') ADVANCE(760);
      if (lookahead == 'g') ADVANCE(173);
      if (lookahead == 'h') ADVANCE(709);
      if (lookahead == 'i') ADVANCE(842);
      if (lookahead == 'k') ADVANCE(277);
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 'o') ADVANCE(1327);
      if (lookahead == 'p') ADVANCE(169);
      if (lookahead == 'r') ADVANCE(427);
      if (lookahead == 's') ADVANCE(313);
      if (lookahead == 't') ADVANCE(182);
      if (lookahead == 'v') ADVANCE(586);
      if (lookahead == 'w') ADVANCE(932);
      if (lookahead == '}') ADVANCE(1518);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(1445);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1448)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1459);
      END_STATE();
    case 1449:
      if (eof) ADVANCE(1450);
      if (lookahead == '#') ADVANCE(1451);
      if (lookahead == '$') ADVANCE(1512);
      if (lookahead == ',') ADVANCE(1661);
      if (lookahead == '.') ADVANCE(1444);
      if (lookahead == '0') ADVANCE(1487);
      if (lookahead == '1') ADVANCE(1490);
      if (lookahead == '=') ADVANCE(1530);
      if (lookahead == 'A') ADVANCE(34);
      if (lookahead == 'C') ADVANCE(26);
      if (lookahead == 'L') ADVANCE(40);
      if (lookahead == 'M') ADVANCE(41);
      if (lookahead == 'S') ADVANCE(31);
      if (lookahead == 'W') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == 'b') ADVANCE(666);
      if (lookahead == 'c') ADVANCE(761);
      if (lookahead == 'd') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(840);
      if (lookahead == 'f') ADVANCE(191);
      if (lookahead == 'g') ADVANCE(173);
      if (lookahead == 'h') ADVANCE(660);
      if (lookahead == 'i') ADVANCE(842);
      if (lookahead == 'k') ADVANCE(277);
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == 'o') ADVANCE(584);
      if (lookahead == 'p') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(427);
      if (lookahead == 's') ADVANCE(313);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == 'u') ADVANCE(849);
      if (lookahead == 'v') ADVANCE(586);
      if (lookahead == 'w') ADVANCE(932);
      if (lookahead == 'y') ADVANCE(460);
      if (lookahead == '{') ADVANCE(1517);
      if (lookahead == '}') ADVANCE(1518);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1449)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1457);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(1651);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1504);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1456);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(1454);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1456);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1456);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(1464);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1457);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'x') ADVANCE(1495);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1459);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1459);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(sym__immediate_int);
      if (lookahead == '.') ADVANCE(1465);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1460);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(sym__immediate_int);
      if (lookahead == '.') ADVANCE(1465);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1460);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1496);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(sym__immediate_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1462);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(1464);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1463);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1464);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(sym__immediate_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1465);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(anon_sym_SHIFT);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(anon_sym_CAPS);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(anon_sym_CTRL);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(anon_sym_CONTROL);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(anon_sym_ALT);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(anon_sym_MOD2);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(anon_sym_MOD3);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(anon_sym_SUPER);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(anon_sym_WIN);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(anon_sym_LOGO);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(anon_sym_MOD4);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(anon_sym_MOD5);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '_') ADVANCE(288);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(1465);
      if (lookahead == 'x') ADVANCE(1495);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1460);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1496);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == 'x') ADVANCE(1495);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1457);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(1465);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1460);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1496);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(1464);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1457);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(anon_sym_rgb);
      if (lookahead == 'a') ADVANCE(1494);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(anon_sym_rgba);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(sym__hex_comp);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'P') ADVANCE(49);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'b') ADVANCE(1328);
      if (lookahead == 'c') ADVANCE(943);
      if (lookahead == 'g') ADVANCE(1503);
      if (lookahead == 'v') ADVANCE(706);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'c') ADVANCE(467);
      if (lookahead == 't') ADVANCE(704);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'd') ADVANCE(1131);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'l') ADVANCE(1200);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'm') ADVANCE(178);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(anon_sym_deg);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(sym_str);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1504);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(1508);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1511);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(1505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1511);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1510);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1511);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(1507);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1511);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(1657);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1511);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(1509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1511);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1511);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1504);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(aux_sym_variable_reference_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1514);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(1515);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(anon_sym_general);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(anon_sym_animation);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(anon_sym_gestures);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(anon_sym_misc);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(anon_sym_binds);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(anon_sym_device);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(aux_sym_variable_section_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1528);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(anon_sym_sensitivity);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(anon_sym_border_size);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(anon_sym_no_border_on_floating);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(anon_sym_gaps_in);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(anon_sym_gaps_out);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(anon_sym_col_DOTinactive_border);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(anon_sym_col_DOTactive_border);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(anon_sym_col_DOTgroup_border);
      if (lookahead == '_') ADVANCE(273);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(anon_sym_col_DOTgroup_border_active);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(anon_sym_cursor_inactive_timeout);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(anon_sym_no_cursor_warps);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(anon_sym_no_focus_fallback);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(anon_sym_apply_sens_to_raw);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(anon_sym_resize_on_border);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(anon_sym_extend_border_grab_area);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(anon_sym_hover_icon_on_border);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(anon_sym_rounding);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(anon_sym_multisample_edges);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(anon_sym_active_opacity);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(anon_sym_inactive_opacity);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(anon_sym_fullscreen_opacity);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(anon_sym_blur);
      if (lookahead == '_') ADVANCE(669);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(anon_sym_blur_size);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(anon_sym_blur_passes);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(anon_sym_blur_ignore_opacity);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(anon_sym_blur_new_optimizations);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(anon_sym_blur_xray);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(anon_sym_drop_shadow);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(anon_sym_shadow_range);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(anon_sym_shadow_render_power);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(anon_sym_shadow_ignore_window);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(anon_sym_col_DOTshadow);
      if (lookahead == '_') ADVANCE(739);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(anon_sym_col_DOTshadow_inactive);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(anon_sym_shadow_offset);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(anon_sym_shadow_scale);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(anon_sym_dim_inactive);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(anon_sym_dim_strength);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(anon_sym_dim_special);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(anon_sym_dim_around);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(anon_sym_screen_shader);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(anon_sym_enabled);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(anon_sym_disable_while_typing);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(anon_sym_natural_scroll);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(anon_sym_scroll_factor);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(anon_sym_middle_button_emulation);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(anon_sym_tap_button_map);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(anon_sym_clickfinger_behavior);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(anon_sym_tap_DASHto_DASHclick);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(anon_sym_drag_lock);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(anon_sym_tap_DASHand_DASHdrag);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(anon_sym_transform);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(anon_sym_touchpad);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(anon_sym_touchdevice);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(anon_sym_kb_model);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(anon_sym_kb_layout);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(anon_sym_kb_variant);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(anon_sym_kb_options);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(anon_sym_kb_rules);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(anon_sym_kb_file);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(anon_sym_numlock_by_default);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(anon_sym_repeat_rate);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(anon_sym_repeat_delay);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(anon_sym_accel_profile);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(anon_sym_force_no_accel);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(anon_sym_left_handed);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(anon_sym_scroll_method);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(anon_sym_scroll_button);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(anon_sym_follow_mouse);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(anon_sym_mouse_refocus);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(anon_sym_float_switch_override_focus);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(anon_sym_workspace_swipe);
      if (lookahead == '_') ADVANCE(310);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_fingers);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_distance);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_invert);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_min_speed_to_force);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_cancel_ratio);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_create_new);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_forever);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_numbered);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(anon_sym_disable_hyprland_logo);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(anon_sym_disable_splash_rendering);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(anon_sym_vfr);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(anon_sym_vrr);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(anon_sym_mouse_move_enables_dpms);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(anon_sym_key_press_enables_dpms);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(anon_sym_always_follow_on_dnd);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(anon_sym_layers_hog_keyboard_focus);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(anon_sym_animate_manual_resizes);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(anon_sym_animate_mouse_windowdragging);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(anon_sym_disable_autoreload);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(anon_sym_enable_swallow);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(anon_sym_swallow_regex);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(anon_sym_swallow_exception_regex);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(anon_sym_focus_on_activate);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(anon_sym_no_direct_scanout);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(anon_sym_hide_cursor_on_touch);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(anon_sym_mouse_move_focuses_monitor);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(anon_sym_suppress_portal_warnings);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(anon_sym_render_ahead_of_time);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(anon_sym_render_ahead_safezone);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(anon_sym_cursor_zoom_factor);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(anon_sym_cursor_zoom_rigid);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(anon_sym_allow_session_lock_restore);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(anon_sym_render_titles_in_groupbar);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(anon_sym_groupbar_titles_font_size);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(anon_sym_groupbar_gradients);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(anon_sym_pass_mouse_when_bound);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(anon_sym_scroll_event_delay);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(anon_sym_workspace_back_and_forth);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(anon_sym_allow_workspace_cycles);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(anon_sym_focus_preferred_method);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(anon_sym_overlay);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(anon_sym_damage_blink);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(anon_sym_disable_logs);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(anon_sym_disable_time);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(anon_sym_damage_tracking);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(anon_sym_enable_stdout_logs);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(anon_sym_manual_crash);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '#') ADVANCE(1452);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1651);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1651);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '-') ADVANCE(936);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(anon_sym_exec_DASHonce);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(anon_sym_unset);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(anon_sym_address);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(anon_sym_address);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1511);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(anon_sym_0x2);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(aux_sym_layer_address_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1659);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(anon_sym_layerrule);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(anon_sym_env);
      if (lookahead == 'd') ADVANCE(1663);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(anon_sym_envd);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(anon_sym_preferred);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(anon_sym_highres);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(anon_sym_highrr);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(anon_sym_monitor);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(sym_by);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(sym_at);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(sym_auto);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1448},
  [2] = {.lex_state = 1448},
  [3] = {.lex_state = 1448},
  [4] = {.lex_state = 1448},
  [5] = {.lex_state = 1448},
  [6] = {.lex_state = 1448},
  [7] = {.lex_state = 1448},
  [8] = {.lex_state = 1448},
  [9] = {.lex_state = 1448},
  [10] = {.lex_state = 1448},
  [11] = {.lex_state = 1448},
  [12] = {.lex_state = 1448},
  [13] = {.lex_state = 1448},
  [14] = {.lex_state = 1448},
  [15] = {.lex_state = 1448},
  [16] = {.lex_state = 1448},
  [17] = {.lex_state = 1448},
  [18] = {.lex_state = 1448},
  [19] = {.lex_state = 1448},
  [20] = {.lex_state = 1448},
  [21] = {.lex_state = 1448},
  [22] = {.lex_state = 1448},
  [23] = {.lex_state = 1448},
  [24] = {.lex_state = 1448},
  [25] = {.lex_state = 1448},
  [26] = {.lex_state = 1448},
  [27] = {.lex_state = 1448},
  [28] = {.lex_state = 1448},
  [29] = {.lex_state = 1448},
  [30] = {.lex_state = 1448},
  [31] = {.lex_state = 1448},
  [32] = {.lex_state = 1448},
  [33] = {.lex_state = 1448},
  [34] = {.lex_state = 1448},
  [35] = {.lex_state = 1448},
  [36] = {.lex_state = 1448},
  [37] = {.lex_state = 1448},
  [38] = {.lex_state = 1448},
  [39] = {.lex_state = 1448},
  [40] = {.lex_state = 1448},
  [41] = {.lex_state = 1448},
  [42] = {.lex_state = 1448},
  [43] = {.lex_state = 1448},
  [44] = {.lex_state = 1448},
  [45] = {.lex_state = 1448},
  [46] = {.lex_state = 1448},
  [47] = {.lex_state = 1448},
  [48] = {.lex_state = 1448},
  [49] = {.lex_state = 1448},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 1448},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 1448},
  [55] = {.lex_state = 1448},
  [56] = {.lex_state = 1448},
  [57] = {.lex_state = 1448},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 1448},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 1448},
  [66] = {.lex_state = 1448},
  [67] = {.lex_state = 1448},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 1448},
  [70] = {.lex_state = 1448},
  [71] = {.lex_state = 1448},
  [72] = {.lex_state = 1448},
  [73] = {.lex_state = 1448},
  [74] = {.lex_state = 1448},
  [75] = {.lex_state = 1448},
  [76] = {.lex_state = 1448},
  [77] = {.lex_state = 1448},
  [78] = {.lex_state = 1448},
  [79] = {.lex_state = 1448},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 1448},
  [82] = {.lex_state = 1448},
  [83] = {.lex_state = 1448},
  [84] = {.lex_state = 1448},
  [85] = {.lex_state = 1448},
  [86] = {.lex_state = 1448},
  [87] = {.lex_state = 1448},
  [88] = {.lex_state = 1448},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 1448},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 1448},
  [93] = {.lex_state = 1448},
  [94] = {.lex_state = 1448},
  [95] = {.lex_state = 1448},
  [96] = {.lex_state = 1448},
  [97] = {.lex_state = 1448},
  [98] = {.lex_state = 1448},
  [99] = {.lex_state = 1448},
  [100] = {.lex_state = 1448},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1448},
  [104] = {.lex_state = 1448},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 14},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 14},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 14},
  [111] = {.lex_state = 1448},
  [112] = {.lex_state = 14},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 14},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1448},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 1448},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 1448},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 15},
  [141] = {.lex_state = 1448},
  [142] = {.lex_state = 1448},
  [143] = {.lex_state = 15},
  [144] = {.lex_state = 1448},
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
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 1448},
  [172] = {.lex_state = 13},
  [173] = {.lex_state = 1448},
  [174] = {.lex_state = 1448},
  [175] = {.lex_state = 1448},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 1448},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1448},
  [185] = {.lex_state = 1448},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 1448},
  [189] = {.lex_state = 1448},
  [190] = {.lex_state = 1448},
  [191] = {.lex_state = 1448},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 1455},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 1448},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 1448},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 7},
  [210] = {.lex_state = 15},
  [211] = {.lex_state = 1650},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 1650},
  [217] = {.lex_state = 12},
  [218] = {.lex_state = 1448},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 1448},
  [222] = {.lex_state = 1448},
  [223] = {.lex_state = 1448},
  [224] = {.lex_state = 1448},
  [225] = {.lex_state = 1448},
  [226] = {.lex_state = 1448},
  [227] = {.lex_state = 1448},
  [228] = {.lex_state = 1659},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 10},
  [231] = {.lex_state = 10},
  [232] = {.lex_state = 1448},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 4},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 1448},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 4},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 1448},
  [254] = {.lex_state = 1448},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_int] = ACTIONS(1),
    [sym__immediate_int] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym__immediate_float] = ACTIONS(1),
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
    [anon_sym_layerrule] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_env] = ACTIONS(1),
    [anon_sym_envd] = ACTIONS(1),
    [anon_sym_preferred] = ACTIONS(1),
    [anon_sym_highres] = ACTIONS(1),
    [anon_sym_highrr] = ACTIONS(1),
    [anon_sym_monitor] = ACTIONS(1),
    [sym_by] = ACTIONS(1),
    [sym_at] = ACTIONS(1),
    [sym_auto] = ACTIONS(1),
  },
  [1] = {
    [sym_config_file] = STATE(237),
    [sym_comment] = STATE(1),
    [sym_variable_section] = STATE(42),
    [sym_command] = STATE(42),
    [sym_command_exec] = STATE(43),
    [sym_command_exec_once] = STATE(43),
    [sym_command_source] = STATE(43),
    [sym_command_layerrule] = STATE(43),
    [sym_command_env] = STATE(43),
    [sym_command_envd] = STATE(43),
    [sym_command_monitor] = STATE(43),
    [aux_sym_config_file_repeat1] = STATE(10),
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
    [anon_sym_monitor] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      sym__newline,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      anon_sym_cursor_zoom_factor,
    STATE(6), 1,
      sym__misc_section_var,
    ACTIONS(54), 2,
      anon_sym_swallow_regex,
      anon_sym_swallow_exception_regex,
    STATE(2), 2,
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
  [52] = 10,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(60), 1,
      sym__newline,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      anon_sym_cursor_zoom_factor,
    STATE(3), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_variable_section_repeat6,
    STATE(6), 1,
      sym__misc_section_var,
    ACTIONS(68), 2,
      anon_sym_swallow_regex,
      anon_sym_swallow_exception_regex,
    ACTIONS(66), 3,
      anon_sym_vrr,
      anon_sym_render_ahead_safezone,
      anon_sym_groupbar_titles_font_size,
    ACTIONS(64), 21,
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
    ACTIONS(60), 1,
      sym__newline,
    ACTIONS(70), 1,
      anon_sym_cursor_zoom_factor,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_variable_section_repeat6,
    STATE(4), 1,
      sym_comment,
    STATE(6), 1,
      sym__misc_section_var,
    ACTIONS(68), 2,
      anon_sym_swallow_regex,
      anon_sym_swallow_exception_regex,
    ACTIONS(66), 3,
      anon_sym_vrr,
      anon_sym_render_ahead_safezone,
      anon_sym_groupbar_titles_font_size,
    ACTIONS(64), 21,
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
    ACTIONS(74), 1,
      sym__newline,
    STATE(5), 1,
      sym_comment,
    ACTIONS(76), 28,
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
    ACTIONS(78), 1,
      sym__newline,
    STATE(6), 1,
      sym_comment,
    ACTIONS(80), 28,
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
    ACTIONS(82), 1,
      sym__newline,
    STATE(7), 1,
      sym_comment,
    ACTIONS(84), 28,
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
  [280] = 22,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      sym__newline,
    ACTIONS(91), 1,
      anon_sym_general,
    ACTIONS(94), 1,
      anon_sym_decoration,
    ACTIONS(97), 1,
      anon_sym_animation,
    ACTIONS(100), 1,
      anon_sym_input,
    ACTIONS(103), 1,
      anon_sym_gestures,
    ACTIONS(106), 1,
      anon_sym_misc,
    ACTIONS(109), 1,
      anon_sym_binds,
    ACTIONS(112), 1,
      anon_sym_debug,
    ACTIONS(115), 1,
      anon_sym_device,
    ACTIONS(118), 1,
      anon_sym_exec,
    ACTIONS(121), 1,
      anon_sym_exec_DASHonce,
    ACTIONS(124), 1,
      anon_sym_source,
    ACTIONS(127), 1,
      anon_sym_layerrule,
    ACTIONS(130), 1,
      anon_sym_env,
    ACTIONS(133), 1,
      anon_sym_envd,
    ACTIONS(136), 1,
      anon_sym_monitor,
    STATE(8), 2,
      sym_comment,
      aux_sym_config_file_repeat1,
    STATE(42), 2,
      sym_variable_section,
      sym_command,
    STATE(43), 7,
      sym_command_exec,
      sym_command_exec_once,
      sym_command_source,
      sym_command_layerrule,
      sym_command_env,
      sym_command_envd,
      sym_command_monitor,
  [355] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(139), 1,
      sym__newline,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    ACTIONS(156), 1,
      anon_sym_shadow_offset,
    ACTIONS(159), 1,
      anon_sym_screen_shader,
    STATE(13), 1,
      sym__decoration_section_var,
    ACTIONS(153), 2,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
    STATE(9), 2,
      sym_comment,
      aux_sym_variable_section_repeat2,
    ACTIONS(144), 5,
      anon_sym_rounding,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
    ACTIONS(150), 7,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_shadow_scale,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
    ACTIONS(147), 8,
      anon_sym_multisample_edges,
      anon_sym_blur,
      anon_sym_blur_ignore_opacity,
      anon_sym_blur_new_optimizations,
      anon_sym_blur_xray,
      anon_sym_drop_shadow,
      anon_sym_shadow_ignore_window,
      anon_sym_dim_inactive,
  [408] = 23,
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
    ACTIONS(41), 1,
      anon_sym_monitor,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      aux_sym_config_file_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(42), 2,
      sym_variable_section,
      sym_command,
    STATE(43), 7,
      sym_command_exec,
      sym_command_exec_once,
      sym_command_source,
      sym_command_layerrule,
      sym_command_env,
      sym_command_envd,
      sym_command_monitor,
  [485] = 12,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(164), 1,
      sym__newline,
    ACTIONS(174), 1,
      anon_sym_shadow_offset,
    ACTIONS(176), 1,
      anon_sym_screen_shader,
    STATE(9), 1,
      aux_sym_variable_section_repeat2,
    STATE(11), 1,
      sym_comment,
    STATE(13), 1,
      sym__decoration_section_var,
    ACTIONS(172), 2,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
    ACTIONS(166), 5,
      anon_sym_rounding,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
    ACTIONS(170), 7,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_shadow_scale,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
    ACTIONS(168), 8,
      anon_sym_multisample_edges,
      anon_sym_blur,
      anon_sym_blur_ignore_opacity,
      anon_sym_blur_new_optimizations,
      anon_sym_blur_xray,
      anon_sym_drop_shadow,
      anon_sym_shadow_ignore_window,
      anon_sym_dim_inactive,
  [540] = 12,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(164), 1,
      sym__newline,
    ACTIONS(174), 1,
      anon_sym_shadow_offset,
    ACTIONS(176), 1,
      anon_sym_screen_shader,
    STATE(11), 1,
      aux_sym_variable_section_repeat2,
    STATE(12), 1,
      sym_comment,
    STATE(13), 1,
      sym__decoration_section_var,
    ACTIONS(172), 2,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
    ACTIONS(166), 5,
      anon_sym_rounding,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
    ACTIONS(170), 7,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_shadow_scale,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
    ACTIONS(168), 8,
      anon_sym_multisample_edges,
      anon_sym_blur,
      anon_sym_blur_ignore_opacity,
      anon_sym_blur_new_optimizations,
      anon_sym_blur_xray,
      anon_sym_drop_shadow,
      anon_sym_shadow_ignore_window,
      anon_sym_dim_inactive,
  [595] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(178), 1,
      sym__newline,
    STATE(13), 1,
      sym_comment,
    ACTIONS(180), 25,
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
  [632] = 13,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(182), 1,
      sym__newline,
    ACTIONS(184), 1,
      anon_sym_sensitivity,
    ACTIONS(188), 1,
      anon_sym_touchpad,
    ACTIONS(190), 1,
      anon_sym_touchdevice,
    STATE(14), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_variable_section_repeat4,
    STATE(21), 1,
      sym__input_section_var,
    STATE(23), 1,
      sym__input_variable_section,
    ACTIONS(186), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(194), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(192), 8,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_accel_profile,
      anon_sym_scroll_method,
  [687] = 13,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(182), 1,
      sym__newline,
    ACTIONS(184), 1,
      anon_sym_sensitivity,
    ACTIONS(188), 1,
      anon_sym_touchpad,
    ACTIONS(190), 1,
      anon_sym_touchdevice,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_variable_section_repeat4,
    STATE(21), 1,
      sym__input_section_var,
    STATE(23), 1,
      sym__input_variable_section,
    ACTIONS(186), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(194), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(192), 8,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_accel_profile,
      anon_sym_scroll_method,
  [742] = 13,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(182), 1,
      sym__newline,
    ACTIONS(184), 1,
      anon_sym_sensitivity,
    ACTIONS(188), 1,
      anon_sym_touchpad,
    ACTIONS(190), 1,
      anon_sym_touchdevice,
    STATE(14), 1,
      aux_sym_variable_section_repeat4,
    STATE(16), 1,
      sym_comment,
    STATE(21), 1,
      sym__input_section_var,
    STATE(23), 1,
      sym__input_variable_section,
    ACTIONS(186), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(194), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(192), 8,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_accel_profile,
      anon_sym_scroll_method,
  [797] = 12,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(198), 1,
      sym__newline,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    ACTIONS(203), 1,
      anon_sym_sensitivity,
    ACTIONS(209), 1,
      anon_sym_touchpad,
    ACTIONS(212), 1,
      anon_sym_touchdevice,
    STATE(21), 1,
      sym__input_section_var,
    STATE(23), 1,
      sym__input_variable_section,
    STATE(17), 2,
      sym_comment,
      aux_sym_variable_section_repeat4,
    ACTIONS(206), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(218), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(215), 8,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_accel_profile,
      anon_sym_scroll_method,
  [850] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(221), 1,
      sym__newline,
    STATE(18), 1,
      sym_comment,
    ACTIONS(223), 25,
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
  [887] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(225), 1,
      sym__newline,
    STATE(19), 1,
      sym_comment,
    ACTIONS(227), 25,
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
  [924] = 13,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(182), 1,
      sym__newline,
    ACTIONS(184), 1,
      anon_sym_sensitivity,
    ACTIONS(188), 1,
      anon_sym_touchpad,
    ACTIONS(190), 1,
      anon_sym_touchdevice,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym_variable_section_repeat4,
    STATE(20), 1,
      sym_comment,
    STATE(21), 1,
      sym__input_section_var,
    STATE(23), 1,
      sym__input_variable_section,
    ACTIONS(186), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(194), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(192), 8,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_accel_profile,
      anon_sym_scroll_method,
  [979] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(231), 1,
      sym__newline,
    STATE(21), 1,
      sym_comment,
    ACTIONS(233), 22,
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
  [1013] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      sym__newline,
    STATE(22), 1,
      sym_comment,
    ACTIONS(237), 22,
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
  [1047] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(231), 1,
      sym__newline,
    STATE(23), 1,
      sym_comment,
    ACTIONS(233), 22,
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
  [1081] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(239), 1,
      sym__newline,
    STATE(24), 1,
      sym_comment,
    ACTIONS(241), 22,
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
  [1115] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      sym__newline,
    STATE(25), 1,
      sym_comment,
    ACTIONS(245), 22,
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
  [1149] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(247), 1,
      sym__newline,
    STATE(26), 1,
      sym_comment,
    ACTIONS(249), 22,
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
  [1183] = 10,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(251), 1,
      sym__newline,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    ACTIONS(256), 1,
      anon_sym_sensitivity,
    ACTIONS(268), 1,
      anon_sym_layout,
    STATE(32), 1,
      sym__general_section_var,
    STATE(27), 2,
      sym_comment,
      aux_sym_variable_section_repeat1,
    ACTIONS(265), 4,
      anon_sym_col_DOTinactive_border,
      anon_sym_col_DOTactive_border,
      anon_sym_col_DOTgroup_border,
      anon_sym_col_DOTgroup_border_active,
    ACTIONS(259), 5,
      anon_sym_border_size,
      anon_sym_gaps_in,
      anon_sym_gaps_out,
      anon_sym_cursor_inactive_timeout,
      anon_sym_extend_border_grab_area,
    ACTIONS(262), 6,
      anon_sym_no_border_on_floating,
      anon_sym_no_cursor_warps,
      anon_sym_no_focus_fallback,
      anon_sym_apply_sens_to_raw,
      anon_sym_resize_on_border,
      anon_sym_hover_icon_on_border,
  [1227] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(271), 1,
      sym__newline,
    ACTIONS(273), 1,
      anon_sym_sensitivity,
    ACTIONS(281), 1,
      anon_sym_layout,
    STATE(28), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_variable_section_repeat1,
    STATE(32), 1,
      sym__general_section_var,
    ACTIONS(279), 4,
      anon_sym_col_DOTinactive_border,
      anon_sym_col_DOTactive_border,
      anon_sym_col_DOTgroup_border,
      anon_sym_col_DOTgroup_border_active,
    ACTIONS(275), 5,
      anon_sym_border_size,
      anon_sym_gaps_in,
      anon_sym_gaps_out,
      anon_sym_cursor_inactive_timeout,
      anon_sym_extend_border_grab_area,
    ACTIONS(277), 6,
      anon_sym_no_border_on_floating,
      anon_sym_no_cursor_warps,
      anon_sym_no_focus_fallback,
      anon_sym_apply_sens_to_raw,
      anon_sym_resize_on_border,
      anon_sym_hover_icon_on_border,
  [1273] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(271), 1,
      sym__newline,
    ACTIONS(273), 1,
      anon_sym_sensitivity,
    ACTIONS(281), 1,
      anon_sym_layout,
    STATE(27), 1,
      aux_sym_variable_section_repeat1,
    STATE(29), 1,
      sym_comment,
    STATE(32), 1,
      sym__general_section_var,
    ACTIONS(279), 4,
      anon_sym_col_DOTinactive_border,
      anon_sym_col_DOTactive_border,
      anon_sym_col_DOTgroup_border,
      anon_sym_col_DOTgroup_border_active,
    ACTIONS(275), 5,
      anon_sym_border_size,
      anon_sym_gaps_in,
      anon_sym_gaps_out,
      anon_sym_cursor_inactive_timeout,
      anon_sym_extend_border_grab_area,
    ACTIONS(277), 6,
      anon_sym_no_border_on_floating,
      anon_sym_no_cursor_warps,
      anon_sym_no_focus_fallback,
      anon_sym_apply_sens_to_raw,
      anon_sym_resize_on_border,
      anon_sym_hover_icon_on_border,
  [1319] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      sym__newline,
    STATE(30), 1,
      sym_comment,
    ACTIONS(285), 18,
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
  [1349] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(287), 1,
      sym__newline,
    STATE(31), 1,
      sym_comment,
    ACTIONS(289), 18,
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
  [1379] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(291), 1,
      sym__newline,
    STATE(32), 1,
      sym_comment,
    ACTIONS(293), 18,
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
  [1409] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(33), 1,
      sym_comment,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(297), 16,
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
      anon_sym_monitor,
  [1438] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(34), 1,
      sym_comment,
    ACTIONS(299), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(301), 16,
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
      anon_sym_monitor,
  [1467] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(35), 1,
      sym_comment,
    ACTIONS(303), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(305), 16,
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
      anon_sym_monitor,
  [1496] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(36), 1,
      sym_comment,
    ACTIONS(307), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(309), 16,
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
      anon_sym_monitor,
  [1525] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(37), 1,
      sym_comment,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(313), 16,
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
      anon_sym_monitor,
  [1554] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(317), 16,
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
      anon_sym_monitor,
  [1583] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(319), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(321), 16,
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
      anon_sym_monitor,
  [1612] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(40), 1,
      sym_comment,
    ACTIONS(323), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(325), 16,
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
      anon_sym_monitor,
  [1641] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(41), 1,
      sym_comment,
    ACTIONS(327), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(329), 16,
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
      anon_sym_monitor,
  [1670] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(42), 1,
      sym_comment,
    ACTIONS(331), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(333), 16,
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
      anon_sym_monitor,
  [1699] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(43), 1,
      sym_comment,
    ACTIONS(335), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(337), 16,
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
      anon_sym_monitor,
  [1728] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(44), 1,
      sym_comment,
    ACTIONS(339), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(341), 16,
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
      anon_sym_monitor,
  [1757] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(45), 1,
      sym_comment,
    ACTIONS(343), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(345), 16,
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
      anon_sym_monitor,
  [1786] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(46), 1,
      sym_comment,
    ACTIONS(347), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(349), 16,
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
      anon_sym_monitor,
  [1815] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(47), 1,
      sym_comment,
    ACTIONS(351), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(353), 16,
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
      anon_sym_monitor,
  [1844] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(48), 1,
      sym_comment,
    ACTIONS(355), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(357), 16,
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
      anon_sym_monitor,
  [1873] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(49), 1,
      sym_comment,
    ACTIONS(359), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(361), 16,
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
      anon_sym_monitor,
  [1902] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    STATE(50), 1,
      sym_comment,
    ACTIONS(365), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(175), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(189), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(363), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1932] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(369), 1,
      sym__newline,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    ACTIONS(375), 1,
      anon_sym_scroll_factor,
    ACTIONS(377), 1,
      anon_sym_tap_button_map,
    STATE(51), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym__input_variable_section_repeat1,
    STATE(72), 1,
      sym__touchpad_section_var,
    ACTIONS(373), 7,
      anon_sym_disable_while_typing,
      anon_sym_natural_scroll,
      anon_sym_middle_button_emulation,
      anon_sym_clickfinger_behavior,
      anon_sym_tap_DASHto_DASHclick,
      anon_sym_drag_lock,
      anon_sym_tap_DASHand_DASHdrag,
  [1966] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    STATE(52), 1,
      sym_comment,
    ACTIONS(365), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(175), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(188), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(363), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1996] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    STATE(53), 1,
      sym_comment,
    ACTIONS(365), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(175), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(182), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(363), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2026] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(379), 1,
      sym__newline,
    ACTIONS(382), 1,
      anon_sym_RBRACE,
    ACTIONS(390), 1,
      anon_sym_workspace_swipe_cancel_ratio,
    STATE(75), 1,
      sym__gestures_section_var,
    STATE(54), 2,
      sym_comment,
      aux_sym_variable_section_repeat5,
    ACTIONS(387), 3,
      anon_sym_workspace_swipe_fingers,
      anon_sym_workspace_swipe_distance,
      anon_sym_workspace_swipe_min_speed_to_force,
    ACTIONS(384), 5,
      anon_sym_workspace_swipe,
      anon_sym_workspace_swipe_invert,
      anon_sym_workspace_swipe_create_new,
      anon_sym_workspace_swipe_forever,
      anon_sym_workspace_swipe_numbered,
  [2058] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(393), 1,
      sym__newline,
    ACTIONS(399), 1,
      anon_sym_workspace_swipe_cancel_ratio,
    STATE(54), 1,
      aux_sym_variable_section_repeat5,
    STATE(55), 1,
      sym_comment,
    STATE(75), 1,
      sym__gestures_section_var,
    ACTIONS(397), 3,
      anon_sym_workspace_swipe_fingers,
      anon_sym_workspace_swipe_distance,
      anon_sym_workspace_swipe_min_speed_to_force,
    ACTIONS(395), 5,
      anon_sym_workspace_swipe,
      anon_sym_workspace_swipe_invert,
      anon_sym_workspace_swipe_create_new,
      anon_sym_workspace_swipe_forever,
      anon_sym_workspace_swipe_numbered,
  [2092] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(393), 1,
      sym__newline,
    ACTIONS(399), 1,
      anon_sym_workspace_swipe_cancel_ratio,
    STATE(55), 1,
      aux_sym_variable_section_repeat5,
    STATE(56), 1,
      sym_comment,
    STATE(75), 1,
      sym__gestures_section_var,
    ACTIONS(397), 3,
      anon_sym_workspace_swipe_fingers,
      anon_sym_workspace_swipe_distance,
      anon_sym_workspace_swipe_min_speed_to_force,
    ACTIONS(395), 5,
      anon_sym_workspace_swipe,
      anon_sym_workspace_swipe_invert,
      anon_sym_workspace_swipe_create_new,
      anon_sym_workspace_swipe_forever,
      anon_sym_workspace_swipe_numbered,
  [2126] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym__newline,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    ACTIONS(409), 1,
      anon_sym_scroll_factor,
    ACTIONS(412), 1,
      anon_sym_tap_button_map,
    STATE(72), 1,
      sym__touchpad_section_var,
    STATE(57), 2,
      sym_comment,
      aux_sym__input_variable_section_repeat1,
    ACTIONS(406), 7,
      anon_sym_disable_while_typing,
      anon_sym_natural_scroll,
      anon_sym_middle_button_emulation,
      anon_sym_clickfinger_behavior,
      anon_sym_tap_DASHto_DASHclick,
      anon_sym_drag_lock,
      anon_sym_tap_DASHand_DASHdrag,
  [2158] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    STATE(58), 1,
      sym_comment,
    ACTIONS(365), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(175), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(190), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(363), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2188] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    STATE(59), 1,
      sym_comment,
    ACTIONS(365), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(175), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(191), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(363), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2218] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    STATE(60), 1,
      sym_comment,
    ACTIONS(365), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(175), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(253), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(363), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2248] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym_comment,
    ACTIONS(365), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(175), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(185), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(363), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2278] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    STATE(62), 1,
      sym_comment,
    ACTIONS(365), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(175), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(184), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(363), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2308] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(369), 1,
      sym__newline,
    ACTIONS(375), 1,
      anon_sym_scroll_factor,
    ACTIONS(377), 1,
      anon_sym_tap_button_map,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym__input_variable_section_repeat1,
    STATE(63), 1,
      sym_comment,
    STATE(72), 1,
      sym__touchpad_section_var,
    ACTIONS(373), 7,
      anon_sym_disable_while_typing,
      anon_sym_natural_scroll,
      anon_sym_middle_button_emulation,
      anon_sym_clickfinger_behavior,
      anon_sym_tap_DASHto_DASHclick,
      anon_sym_drag_lock,
      anon_sym_tap_DASHand_DASHdrag,
  [2342] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    STATE(64), 1,
      sym_comment,
    ACTIONS(365), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(171), 2,
      sym_bool,
      sym_variable_reference,
    STATE(175), 2,
      sym__bool_literal,
      sym__bool_integer,
    ACTIONS(363), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2372] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(417), 1,
      sym__newline,
    STATE(65), 1,
      sym_comment,
    ACTIONS(419), 10,
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
  [2394] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(421), 1,
      sym__newline,
    STATE(66), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym_variable_section_repeat8,
    STATE(81), 1,
      sym__debug_section_var,
    ACTIONS(425), 2,
      anon_sym_damage_tracking,
      anon_sym_manual_crash,
    ACTIONS(423), 5,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_enable_stdout_logs,
  [2424] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(427), 1,
      sym_int,
    ACTIONS(429), 1,
      anon_sym_rgb,
    ACTIONS(431), 1,
      anon_sym_rgba,
    ACTIONS(433), 1,
      anon_sym_0x,
    ACTIONS(435), 1,
      sym__newline,
    STATE(67), 1,
      sym_comment,
    STATE(76), 1,
      aux_sym_gradient_repeat1,
    STATE(99), 1,
      sym_color,
    STATE(205), 1,
      sym_degree,
    STATE(94), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [2460] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    ACTIONS(429), 1,
      anon_sym_rgb,
    ACTIONS(437), 1,
      anon_sym_rgba,
    ACTIONS(439), 1,
      anon_sym_0x,
    STATE(67), 1,
      aux_sym_gradient_repeat1,
    STATE(68), 1,
      sym_comment,
    STATE(99), 1,
      sym_color,
    STATE(171), 2,
      sym_gradient,
      sym_variable_reference,
    STATE(94), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [2494] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(421), 1,
      sym__newline,
    STATE(69), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym_variable_section_repeat8,
    STATE(81), 1,
      sym__debug_section_var,
    ACTIONS(425), 2,
      anon_sym_damage_tracking,
      anon_sym_manual_crash,
    ACTIONS(423), 5,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_enable_stdout_logs,
  [2524] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(441), 1,
      sym__newline,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym__debug_section_var,
    ACTIONS(449), 2,
      anon_sym_damage_tracking,
      anon_sym_manual_crash,
    STATE(70), 2,
      sym_comment,
      aux_sym_variable_section_repeat8,
    ACTIONS(446), 5,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_enable_stdout_logs,
  [2552] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym__newline,
    STATE(71), 1,
      sym_comment,
    ACTIONS(454), 10,
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
  [2574] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(456), 1,
      sym__newline,
    STATE(72), 1,
      sym_comment,
    ACTIONS(458), 10,
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
  [2596] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(460), 1,
      sym__newline,
    STATE(73), 1,
      sym_comment,
    ACTIONS(462), 10,
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
  [2618] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(464), 1,
      sym__newline,
    STATE(74), 1,
      sym_comment,
    ACTIONS(466), 10,
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
  [2640] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(468), 1,
      sym__newline,
    STATE(75), 1,
      sym_comment,
    ACTIONS(470), 10,
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
  [2662] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(472), 1,
      sym_int,
    ACTIONS(474), 1,
      anon_sym_rgb,
    ACTIONS(477), 1,
      anon_sym_rgba,
    ACTIONS(480), 1,
      anon_sym_0x,
    ACTIONS(483), 1,
      sym__newline,
    STATE(99), 1,
      sym_color,
    STATE(76), 2,
      sym_comment,
      aux_sym_gradient_repeat1,
    STATE(94), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [2693] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(485), 1,
      sym__newline,
    STATE(77), 1,
      sym_comment,
    ACTIONS(487), 8,
      anon_sym_RBRACE,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_damage_tracking,
      anon_sym_enable_stdout_logs,
      anon_sym_manual_crash,
  [2713] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(489), 1,
      sym__newline,
    STATE(78), 1,
      sym_comment,
    STATE(83), 1,
      aux_sym_variable_section_repeat7,
    STATE(86), 1,
      sym__binds_section_var,
    ACTIONS(493), 2,
      anon_sym_scroll_event_delay,
      anon_sym_focus_preferred_method,
    ACTIONS(491), 3,
      anon_sym_pass_mouse_when_bound,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
  [2741] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(489), 1,
      sym__newline,
    STATE(78), 1,
      aux_sym_variable_section_repeat7,
    STATE(79), 1,
      sym_comment,
    STATE(86), 1,
      sym__binds_section_var,
    ACTIONS(493), 2,
      anon_sym_scroll_event_delay,
      anon_sym_focus_preferred_method,
    ACTIONS(491), 3,
      anon_sym_pass_mouse_when_bound,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
  [2769] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    ACTIONS(429), 1,
      anon_sym_rgb,
    ACTIONS(437), 1,
      anon_sym_rgba,
    ACTIONS(439), 1,
      anon_sym_0x,
    STATE(80), 1,
      sym_comment,
    STATE(182), 2,
      sym_color,
      sym_variable_reference,
    STATE(94), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [2797] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      sym__newline,
    STATE(81), 1,
      sym_comment,
    ACTIONS(497), 8,
      anon_sym_RBRACE,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_damage_tracking,
      anon_sym_enable_stdout_logs,
      anon_sym_manual_crash,
  [2817] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(499), 1,
      sym__newline,
    STATE(82), 1,
      sym_comment,
    ACTIONS(501), 8,
      anon_sym_RBRACE,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_damage_tracking,
      anon_sym_enable_stdout_logs,
      anon_sym_manual_crash,
  [2837] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(503), 1,
      sym__newline,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      sym__binds_section_var,
    ACTIONS(511), 2,
      anon_sym_scroll_event_delay,
      anon_sym_focus_preferred_method,
    STATE(83), 2,
      sym_comment,
      aux_sym_variable_section_repeat7,
    ACTIONS(508), 3,
      anon_sym_pass_mouse_when_bound,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
  [2863] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(514), 1,
      sym__newline,
    STATE(84), 1,
      sym_comment,
    ACTIONS(516), 6,
      anon_sym_RBRACE,
      anon_sym_pass_mouse_when_bound,
      anon_sym_scroll_event_delay,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
      anon_sym_focus_preferred_method,
  [2881] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(518), 1,
      sym__newline,
    STATE(85), 1,
      sym_comment,
    ACTIONS(520), 6,
      anon_sym_RBRACE,
      anon_sym_pass_mouse_when_bound,
      anon_sym_scroll_event_delay,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
      anon_sym_focus_preferred_method,
  [2899] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(522), 1,
      sym__newline,
    STATE(86), 1,
      sym_comment,
    ACTIONS(524), 6,
      anon_sym_RBRACE,
      anon_sym_pass_mouse_when_bound,
      anon_sym_scroll_event_delay,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
      anon_sym_focus_preferred_method,
  [2917] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    ACTIONS(526), 1,
      sym__newline,
    ACTIONS(528), 1,
      anon_sym_transform,
    ACTIONS(530), 1,
      anon_sym_output,
    STATE(87), 1,
      sym_comment,
    STATE(90), 1,
      aux_sym__input_variable_section_repeat2,
    STATE(104), 1,
      sym__touchdevice_section_var,
  [2942] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
    ACTIONS(526), 1,
      sym__newline,
    ACTIONS(528), 1,
      anon_sym_transform,
    ACTIONS(530), 1,
      anon_sym_output,
    STATE(87), 1,
      aux_sym__input_variable_section_repeat2,
    STATE(88), 1,
      sym_comment,
    STATE(104), 1,
      sym__touchdevice_section_var,
  [2967] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(532), 1,
      sym_int,
    STATE(89), 1,
      sym_comment,
    STATE(168), 2,
      sym_resolution,
      sym_auto_resolution,
    ACTIONS(534), 3,
      anon_sym_preferred,
      anon_sym_highres,
      anon_sym_highrr,
  [2986] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(536), 1,
      sym__newline,
    ACTIONS(539), 1,
      anon_sym_RBRACE,
    ACTIONS(541), 1,
      anon_sym_transform,
    ACTIONS(544), 1,
      anon_sym_output,
    STATE(104), 1,
      sym__touchdevice_section_var,
    STATE(90), 2,
      sym_comment,
      aux_sym__input_variable_section_repeat2,
  [3009] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(532), 1,
      sym_int,
    STATE(91), 1,
      sym_comment,
    STATE(137), 2,
      sym_resolution,
      sym_auto_resolution,
    ACTIONS(534), 3,
      anon_sym_preferred,
      anon_sym_highres,
      anon_sym_highrr,
  [3028] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(549), 1,
      sym__newline,
    STATE(92), 1,
      sym_comment,
    ACTIONS(547), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [3044] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(553), 1,
      sym__newline,
    STATE(93), 1,
      sym_comment,
    ACTIONS(551), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [3060] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(557), 1,
      sym__newline,
    STATE(94), 1,
      sym_comment,
    ACTIONS(555), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [3076] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(559), 1,
      sym__newline,
    ACTIONS(561), 1,
      anon_sym_enabled,
    STATE(95), 1,
      sym_comment,
    STATE(96), 1,
      aux_sym_variable_section_repeat3,
    STATE(119), 1,
      sym__animation_section_var,
  [3098] = 6,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(563), 1,
      sym__newline,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
    ACTIONS(568), 1,
      anon_sym_enabled,
    STATE(119), 1,
      sym__animation_section_var,
    STATE(96), 2,
      sym_comment,
      aux_sym_variable_section_repeat3,
  [3118] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(559), 1,
      sym__newline,
    ACTIONS(561), 1,
      anon_sym_enabled,
    STATE(95), 1,
      aux_sym_variable_section_repeat3,
    STATE(97), 1,
      sym_comment,
    STATE(119), 1,
      sym__animation_section_var,
  [3140] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(573), 1,
      sym__newline,
    STATE(98), 1,
      sym_comment,
    ACTIONS(571), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [3156] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(577), 1,
      sym__newline,
    STATE(99), 1,
      sym_comment,
    ACTIONS(575), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [3172] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(579), 1,
      sym__newline,
    STATE(100), 1,
      sym_comment,
    ACTIONS(581), 3,
      anon_sym_RBRACE,
      anon_sym_transform,
      anon_sym_output,
  [3187] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(583), 1,
      sym_word,
    ACTIONS(585), 1,
      anon_sym_address,
    STATE(40), 1,
      sym_layer_address,
    STATE(41), 1,
      sym_layer_identifier,
    STATE(101), 1,
      sym_comment,
  [3206] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    ACTIONS(587), 1,
      sym_float,
    STATE(102), 1,
      sym_comment,
    STATE(182), 2,
      sym_vec2,
      sym_variable_reference,
  [3223] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(589), 1,
      sym__newline,
    STATE(103), 1,
      sym_comment,
    ACTIONS(591), 3,
      anon_sym_RBRACE,
      anon_sym_transform,
      anon_sym_output,
  [3238] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(593), 1,
      sym__newline,
    STATE(104), 1,
      sym_comment,
    ACTIONS(595), 3,
      anon_sym_RBRACE,
      anon_sym_transform,
      anon_sym_output,
  [3253] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    ACTIONS(597), 1,
      sym_int,
    STATE(105), 1,
      sym_comment,
    STATE(191), 1,
      sym_variable_reference,
  [3269] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(599), 1,
      sym_str,
    ACTIONS(601), 1,
      anon_sym_DOLLAR,
    STATE(106), 1,
      sym_comment,
    STATE(171), 1,
      sym_variable_reference,
  [3285] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    ACTIONS(603), 1,
      sym_int,
    STATE(107), 1,
      sym_comment,
    STATE(188), 1,
      sym_variable_reference,
  [3301] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(601), 1,
      anon_sym_DOLLAR,
    ACTIONS(605), 1,
      sym_str,
    STATE(108), 1,
      sym_comment,
    STATE(254), 1,
      sym_variable_reference,
  [3317] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      sym_int,
    STATE(109), 1,
      sym_comment,
    STATE(189), 1,
      sym_variable_reference,
  [3333] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(601), 1,
      anon_sym_DOLLAR,
    ACTIONS(609), 1,
      sym_str,
    STATE(110), 1,
      sym_comment,
    STATE(182), 1,
      sym_variable_reference,
  [3349] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(611), 1,
      sym__newline,
    STATE(111), 1,
      sym_comment,
    ACTIONS(613), 2,
      anon_sym_RBRACE,
      anon_sym_enabled,
  [3363] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(601), 1,
      anon_sym_DOLLAR,
    ACTIONS(615), 1,
      sym_str,
    STATE(112), 1,
      sym_comment,
    STATE(253), 1,
      sym_variable_reference,
  [3379] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    ACTIONS(617), 1,
      sym_int,
    STATE(113), 1,
      sym_comment,
    STATE(185), 1,
      sym_variable_reference,
  [3395] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    ACTIONS(619), 1,
      sym_float,
    STATE(114), 1,
      sym_comment,
    STATE(253), 1,
      sym_variable_reference,
  [3411] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    ACTIONS(621), 1,
      sym_int,
    STATE(115), 1,
      sym_comment,
    STATE(190), 1,
      sym_variable_reference,
  [3427] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(601), 1,
      anon_sym_DOLLAR,
    ACTIONS(623), 1,
      sym_str,
    STATE(116), 1,
      sym_comment,
    STATE(185), 1,
      sym_variable_reference,
  [3443] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(601), 1,
      anon_sym_DOLLAR,
    ACTIONS(625), 1,
      sym_str,
    STATE(117), 1,
      sym_comment,
    STATE(189), 1,
      sym_variable_reference,
  [3459] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    ACTIONS(617), 1,
      sym_float,
    STATE(118), 1,
      sym_comment,
    STATE(185), 1,
      sym_variable_reference,
  [3475] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(627), 1,
      sym__newline,
    STATE(119), 1,
      sym_comment,
    ACTIONS(629), 2,
      anon_sym_RBRACE,
      anon_sym_enabled,
  [3489] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    ACTIONS(631), 1,
      sym_int,
    STATE(120), 1,
      sym_comment,
    STATE(254), 1,
      sym_variable_reference,
  [3505] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(633), 1,
      sym__newline,
    STATE(121), 1,
      sym_comment,
    ACTIONS(635), 2,
      anon_sym_RBRACE,
      anon_sym_enabled,
  [3519] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    ACTIONS(603), 1,
      sym_float,
    STATE(122), 1,
      sym_comment,
    STATE(188), 1,
      sym_variable_reference,
  [3535] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    ACTIONS(637), 1,
      sym_float,
    STATE(123), 1,
      sym_comment,
    STATE(171), 1,
      sym_variable_reference,
  [3551] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    ACTIONS(637), 1,
      sym_int,
    STATE(124), 1,
      sym_comment,
    STATE(171), 1,
      sym_variable_reference,
  [3567] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(125), 1,
      sym_comment,
    STATE(196), 1,
      sym_layer_rule,
    ACTIONS(639), 2,
      anon_sym_blur,
      anon_sym_unset,
  [3581] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(641), 1,
      sym_int,
    ACTIONS(643), 1,
      sym_auto,
    STATE(126), 1,
      sym_comment,
    STATE(198), 1,
      sym_position,
  [3597] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      sym_float,
    STATE(127), 1,
      sym_comment,
    STATE(189), 1,
      sym_variable_reference,
  [3613] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    ACTIONS(645), 1,
      sym_float,
    STATE(128), 1,
      sym_comment,
    STATE(182), 1,
      sym_variable_reference,
  [3629] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(641), 1,
      sym_int,
    ACTIONS(647), 1,
      sym_auto,
    STATE(129), 1,
      sym_comment,
    STATE(229), 1,
      sym_position,
  [3645] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    ACTIONS(645), 1,
      sym_int,
    STATE(130), 1,
      sym_comment,
    STATE(182), 1,
      sym_variable_reference,
  [3661] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(651), 1,
      sym_at,
    STATE(131), 1,
      sym_comment,
  [3674] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(132), 1,
      sym_comment,
    ACTIONS(653), 2,
      sym_float,
      sym_auto,
  [3685] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(655), 1,
      sym_word,
    ACTIONS(657), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      sym_comment,
  [3698] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(134), 1,
      sym_comment,
    ACTIONS(659), 2,
      sym_float,
      sym_auto,
  [3709] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(661), 1,
      anon_sym_EQ,
    STATE(135), 1,
      sym_comment,
  [3719] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(663), 1,
      sym__newline,
    STATE(136), 1,
      sym_comment,
  [3729] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      sym_comment,
  [3739] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      sym_comment,
  [3749] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(669), 1,
      sym_by,
    STATE(139), 1,
      sym_comment,
  [3759] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(671), 1,
      sym_str,
    STATE(140), 1,
      sym_comment,
  [3769] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(673), 1,
      sym__newline,
    STATE(141), 1,
      sym_comment,
  [3779] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(675), 1,
      sym__newline,
    STATE(142), 1,
      sym_comment,
  [3789] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(677), 1,
      sym_str,
    STATE(143), 1,
      sym_comment,
  [3799] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(679), 1,
      sym__newline,
    STATE(144), 1,
      sym_comment,
  [3809] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(681), 1,
      anon_sym_EQ,
    STATE(145), 1,
      sym_comment,
  [3819] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(683), 1,
      anon_sym_EQ,
    STATE(146), 1,
      sym_comment,
  [3829] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(685), 1,
      anon_sym_EQ,
    STATE(147), 1,
      sym_comment,
  [3839] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(687), 1,
      anon_sym_EQ,
    STATE(148), 1,
      sym_comment,
  [3849] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(689), 1,
      anon_sym_EQ,
    STATE(149), 1,
      sym_comment,
  [3859] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(691), 1,
      anon_sym_EQ,
    STATE(150), 1,
      sym_comment,
  [3869] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(693), 1,
      anon_sym_EQ,
    STATE(151), 1,
      sym_comment,
  [3879] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(695), 1,
      anon_sym_EQ,
    STATE(152), 1,
      sym_comment,
  [3889] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(697), 1,
      anon_sym_EQ,
    STATE(153), 1,
      sym_comment,
  [3899] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(699), 1,
      anon_sym_EQ,
    STATE(154), 1,
      sym_comment,
  [3909] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(701), 1,
      anon_sym_EQ,
    STATE(155), 1,
      sym_comment,
  [3919] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(703), 1,
      anon_sym_EQ,
    STATE(156), 1,
      sym_comment,
  [3929] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(705), 1,
      anon_sym_EQ,
    STATE(157), 1,
      sym_comment,
  [3939] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(707), 1,
      anon_sym_LBRACE,
    STATE(158), 1,
      sym_comment,
  [3949] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(709), 1,
      anon_sym_LBRACE,
    STATE(159), 1,
      sym_comment,
  [3959] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(711), 1,
      anon_sym_EQ,
    STATE(160), 1,
      sym_comment,
  [3969] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(713), 1,
      anon_sym_EQ,
    STATE(161), 1,
      sym_comment,
  [3979] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(715), 1,
      anon_sym_EQ,
    STATE(162), 1,
      sym_comment,
  [3989] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(717), 1,
      anon_sym_COLON,
    STATE(163), 1,
      sym_comment,
  [3999] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(719), 1,
      anon_sym_EQ,
    STATE(164), 1,
      sym_comment,
  [4009] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(721), 1,
      anon_sym_EQ,
    STATE(165), 1,
      sym_comment,
  [4019] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(723), 1,
      anon_sym_EQ,
    STATE(166), 1,
      sym_comment,
  [4029] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(725), 1,
      anon_sym_EQ,
    STATE(167), 1,
      sym_comment,
  [4039] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      sym_comment,
  [4049] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(729), 1,
      sym__immediate_int,
    STATE(169), 1,
      sym_comment,
  [4059] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(731), 1,
      anon_sym_EQ,
    STATE(170), 1,
      sym_comment,
  [4069] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(733), 1,
      sym__newline,
    STATE(171), 1,
      sym_comment,
  [4079] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(735), 1,
      aux_sym_variable_reference_token1,
    STATE(172), 1,
      sym_comment,
  [4089] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(737), 1,
      sym__newline,
    STATE(173), 1,
      sym_comment,
  [4099] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(739), 1,
      sym__newline,
    STATE(174), 1,
      sym_comment,
  [4109] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(741), 1,
      sym__newline,
    STATE(175), 1,
      sym_comment,
  [4119] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(743), 1,
      anon_sym_LPAREN,
    STATE(176), 1,
      sym_comment,
  [4129] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    STATE(177), 1,
      sym_comment,
  [4139] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(747), 1,
      sym__hex_comp,
    STATE(178), 1,
      sym_comment,
  [4149] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(749), 1,
      anon_sym_EQ,
    STATE(179), 1,
      sym_comment,
  [4159] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(751), 1,
      anon_sym_EQ,
    STATE(180), 1,
      sym_comment,
  [4169] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(753), 1,
      anon_sym_EQ,
    STATE(181), 1,
      sym_comment,
  [4179] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(755), 1,
      sym__newline,
    STATE(182), 1,
      sym_comment,
  [4189] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(757), 1,
      sym_float,
    STATE(183), 1,
      sym_comment,
  [4199] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(759), 1,
      sym__newline,
    STATE(184), 1,
      sym_comment,
  [4209] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(761), 1,
      sym__newline,
    STATE(185), 1,
      sym_comment,
  [4219] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(763), 1,
      anon_sym_EQ,
    STATE(186), 1,
      sym_comment,
  [4229] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(765), 1,
      anon_sym_EQ,
    STATE(187), 1,
      sym_comment,
  [4239] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(767), 1,
      sym__newline,
    STATE(188), 1,
      sym_comment,
  [4249] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(769), 1,
      sym__newline,
    STATE(189), 1,
      sym_comment,
  [4259] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(771), 1,
      sym__newline,
    STATE(190), 1,
      sym_comment,
  [4269] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym__newline,
    STATE(191), 1,
      sym_comment,
  [4279] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(775), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      sym_comment,
  [4289] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(777), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      sym_comment,
  [4299] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(779), 1,
      anon_sym_0x2,
    STATE(194), 1,
      sym_comment,
  [4309] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      sym_comment,
  [4319] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(783), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      sym_comment,
  [4329] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(785), 1,
      sym_by,
    STATE(197), 1,
      sym_comment,
  [4339] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(787), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      sym_comment,
  [4349] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(789), 1,
      anon_sym_COMMA,
    STATE(199), 1,
      sym_comment,
  [4359] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(791), 1,
      aux_sym_comment_token1,
    STATE(200), 1,
      sym_comment,
  [4369] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(793), 1,
      sym__hex_comp,
    STATE(201), 1,
      sym_comment,
  [4379] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(795), 1,
      sym__hex_comp,
    STATE(202), 1,
      sym_comment,
  [4389] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(797), 1,
      sym__hex_comp,
    STATE(203), 1,
      sym_comment,
  [4399] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(799), 1,
      anon_sym_deg,
    STATE(204), 1,
      sym_comment,
  [4409] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(801), 1,
      sym__newline,
    STATE(205), 1,
      sym_comment,
  [4419] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(803), 1,
      anon_sym_LBRACE,
    STATE(206), 1,
      sym_comment,
  [4429] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(805), 1,
      sym__newline,
    STATE(207), 1,
      sym_comment,
  [4439] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(807), 1,
      sym_word,
    STATE(208), 1,
      sym_comment,
  [4449] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(809), 1,
      sym_word,
    STATE(209), 1,
      sym_comment,
  [4459] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(811), 1,
      sym_str,
    STATE(210), 1,
      sym_comment,
  [4469] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(813), 1,
      sym_shell_command,
    STATE(211), 1,
      sym_comment,
  [4479] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(815), 1,
      anon_sym_LBRACE,
    STATE(212), 1,
      sym_comment,
  [4489] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(817), 1,
      anon_sym_EQ,
    STATE(213), 1,
      sym_comment,
  [4499] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(819), 1,
      anon_sym_EQ,
    STATE(214), 1,
      sym_comment,
  [4509] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(821), 1,
      anon_sym_EQ,
    STATE(215), 1,
      sym_comment,
  [4519] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(823), 1,
      sym_shell_command,
    STATE(216), 1,
      sym_comment,
  [4529] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(825), 1,
      aux_sym_variable_section_token1,
    STATE(217), 1,
      sym_comment,
  [4539] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(827), 1,
      sym__newline,
    STATE(218), 1,
      sym_comment,
  [4549] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(829), 1,
      anon_sym_EQ,
    STATE(219), 1,
      sym_comment,
  [4559] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(831), 1,
      anon_sym_EQ,
    STATE(220), 1,
      sym_comment,
  [4569] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(833), 1,
      sym__newline,
    STATE(221), 1,
      sym_comment,
  [4579] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(835), 1,
      sym__newline,
    STATE(222), 1,
      sym_comment,
  [4589] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(837), 1,
      sym__newline,
    STATE(223), 1,
      sym_comment,
  [4599] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(839), 1,
      sym__newline,
    STATE(224), 1,
      sym_comment,
  [4609] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(841), 1,
      sym__newline,
    STATE(225), 1,
      sym_comment,
  [4619] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(843), 1,
      sym__newline,
    STATE(226), 1,
      sym_comment,
  [4629] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(845), 1,
      sym__newline,
    STATE(227), 1,
      sym_comment,
  [4639] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(847), 1,
      aux_sym_layer_address_token1,
    STATE(228), 1,
      sym_comment,
  [4649] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(849), 1,
      anon_sym_COMMA,
    STATE(229), 1,
      sym_comment,
  [4659] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(851), 1,
      sym__immediate_int,
    STATE(230), 1,
      sym_comment,
  [4669] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(853), 1,
      sym__immediate_int,
    STATE(231), 1,
      sym_comment,
  [4679] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(855), 1,
      sym__newline,
    STATE(232), 1,
      sym_comment,
  [4689] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(857), 1,
      sym__hex_comp,
    STATE(233), 1,
      sym_comment,
  [4699] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym__hex_comp,
    STATE(234), 1,
      sym_comment,
  [4709] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(861), 1,
      sym__hex_comp,
    STATE(235), 1,
      sym_comment,
  [4719] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym__newline,
    STATE(236), 1,
      sym_comment,
  [4729] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(865), 1,
      ts_builtin_sym_end,
    STATE(237), 1,
      sym_comment,
  [4739] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(867), 1,
      anon_sym_EQ,
    STATE(238), 1,
      sym_comment,
  [4749] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(869), 1,
      anon_sym_EQ,
    STATE(239), 1,
      sym_comment,
  [4759] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(871), 1,
      anon_sym_EQ,
    STATE(240), 1,
      sym_comment,
  [4769] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(873), 1,
      anon_sym_EQ,
    STATE(241), 1,
      sym_comment,
  [4779] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(875), 1,
      anon_sym_EQ,
    STATE(242), 1,
      sym_comment,
  [4789] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(877), 1,
      anon_sym_EQ,
    STATE(243), 1,
      sym_comment,
  [4799] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(879), 1,
      anon_sym_EQ,
    STATE(244), 1,
      sym_comment,
  [4809] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(881), 1,
      anon_sym_COLON,
    STATE(245), 1,
      sym_comment,
  [4819] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(883), 1,
      anon_sym_LBRACE,
    STATE(246), 1,
      sym_comment,
  [4829] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      sym_comment,
  [4839] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(887), 1,
      anon_sym_COMMA,
    STATE(248), 1,
      sym_comment,
  [4849] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(889), 1,
      anon_sym_LBRACE,
    STATE(249), 1,
      sym_comment,
  [4859] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(891), 1,
      sym__hex_comp,
    STATE(250), 1,
      sym_comment,
  [4869] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(893), 1,
      sym__hex_comp,
    STATE(251), 1,
      sym_comment,
  [4879] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(895), 1,
      sym__hex_comp,
    STATE(252), 1,
      sym_comment,
  [4889] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(897), 1,
      sym__newline,
    STATE(253), 1,
      sym_comment,
  [4899] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(899), 1,
      sym__newline,
    STATE(254), 1,
      sym_comment,
  [4909] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(901), 1,
      anon_sym_LBRACE,
    STATE(255), 1,
      sym_comment,
  [4919] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(903), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      sym_comment,
  [4929] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(905), 1,
      sym__hex_comp,
    STATE(257), 1,
      sym_comment,
  [4939] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(907), 1,
      anon_sym_LBRACE,
    STATE(258), 1,
      sym_comment,
  [4949] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(909), 1,
      anon_sym_LBRACE,
    STATE(259), 1,
      sym_comment,
  [4959] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(911), 1,
      anon_sym_LBRACE,
    STATE(260), 1,
      sym_comment,
  [4969] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(913), 1,
      anon_sym_LBRACE,
    STATE(261), 1,
      sym_comment,
  [4979] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
    STATE(262), 1,
      sym_comment,
  [4989] = 1,
    ACTIONS(917), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 160,
  [SMALL_STATE(6)] = 200,
  [SMALL_STATE(7)] = 240,
  [SMALL_STATE(8)] = 280,
  [SMALL_STATE(9)] = 355,
  [SMALL_STATE(10)] = 408,
  [SMALL_STATE(11)] = 485,
  [SMALL_STATE(12)] = 540,
  [SMALL_STATE(13)] = 595,
  [SMALL_STATE(14)] = 632,
  [SMALL_STATE(15)] = 687,
  [SMALL_STATE(16)] = 742,
  [SMALL_STATE(17)] = 797,
  [SMALL_STATE(18)] = 850,
  [SMALL_STATE(19)] = 887,
  [SMALL_STATE(20)] = 924,
  [SMALL_STATE(21)] = 979,
  [SMALL_STATE(22)] = 1013,
  [SMALL_STATE(23)] = 1047,
  [SMALL_STATE(24)] = 1081,
  [SMALL_STATE(25)] = 1115,
  [SMALL_STATE(26)] = 1149,
  [SMALL_STATE(27)] = 1183,
  [SMALL_STATE(28)] = 1227,
  [SMALL_STATE(29)] = 1273,
  [SMALL_STATE(30)] = 1319,
  [SMALL_STATE(31)] = 1349,
  [SMALL_STATE(32)] = 1379,
  [SMALL_STATE(33)] = 1409,
  [SMALL_STATE(34)] = 1438,
  [SMALL_STATE(35)] = 1467,
  [SMALL_STATE(36)] = 1496,
  [SMALL_STATE(37)] = 1525,
  [SMALL_STATE(38)] = 1554,
  [SMALL_STATE(39)] = 1583,
  [SMALL_STATE(40)] = 1612,
  [SMALL_STATE(41)] = 1641,
  [SMALL_STATE(42)] = 1670,
  [SMALL_STATE(43)] = 1699,
  [SMALL_STATE(44)] = 1728,
  [SMALL_STATE(45)] = 1757,
  [SMALL_STATE(46)] = 1786,
  [SMALL_STATE(47)] = 1815,
  [SMALL_STATE(48)] = 1844,
  [SMALL_STATE(49)] = 1873,
  [SMALL_STATE(50)] = 1902,
  [SMALL_STATE(51)] = 1932,
  [SMALL_STATE(52)] = 1966,
  [SMALL_STATE(53)] = 1996,
  [SMALL_STATE(54)] = 2026,
  [SMALL_STATE(55)] = 2058,
  [SMALL_STATE(56)] = 2092,
  [SMALL_STATE(57)] = 2126,
  [SMALL_STATE(58)] = 2158,
  [SMALL_STATE(59)] = 2188,
  [SMALL_STATE(60)] = 2218,
  [SMALL_STATE(61)] = 2248,
  [SMALL_STATE(62)] = 2278,
  [SMALL_STATE(63)] = 2308,
  [SMALL_STATE(64)] = 2342,
  [SMALL_STATE(65)] = 2372,
  [SMALL_STATE(66)] = 2394,
  [SMALL_STATE(67)] = 2424,
  [SMALL_STATE(68)] = 2460,
  [SMALL_STATE(69)] = 2494,
  [SMALL_STATE(70)] = 2524,
  [SMALL_STATE(71)] = 2552,
  [SMALL_STATE(72)] = 2574,
  [SMALL_STATE(73)] = 2596,
  [SMALL_STATE(74)] = 2618,
  [SMALL_STATE(75)] = 2640,
  [SMALL_STATE(76)] = 2662,
  [SMALL_STATE(77)] = 2693,
  [SMALL_STATE(78)] = 2713,
  [SMALL_STATE(79)] = 2741,
  [SMALL_STATE(80)] = 2769,
  [SMALL_STATE(81)] = 2797,
  [SMALL_STATE(82)] = 2817,
  [SMALL_STATE(83)] = 2837,
  [SMALL_STATE(84)] = 2863,
  [SMALL_STATE(85)] = 2881,
  [SMALL_STATE(86)] = 2899,
  [SMALL_STATE(87)] = 2917,
  [SMALL_STATE(88)] = 2942,
  [SMALL_STATE(89)] = 2967,
  [SMALL_STATE(90)] = 2986,
  [SMALL_STATE(91)] = 3009,
  [SMALL_STATE(92)] = 3028,
  [SMALL_STATE(93)] = 3044,
  [SMALL_STATE(94)] = 3060,
  [SMALL_STATE(95)] = 3076,
  [SMALL_STATE(96)] = 3098,
  [SMALL_STATE(97)] = 3118,
  [SMALL_STATE(98)] = 3140,
  [SMALL_STATE(99)] = 3156,
  [SMALL_STATE(100)] = 3172,
  [SMALL_STATE(101)] = 3187,
  [SMALL_STATE(102)] = 3206,
  [SMALL_STATE(103)] = 3223,
  [SMALL_STATE(104)] = 3238,
  [SMALL_STATE(105)] = 3253,
  [SMALL_STATE(106)] = 3269,
  [SMALL_STATE(107)] = 3285,
  [SMALL_STATE(108)] = 3301,
  [SMALL_STATE(109)] = 3317,
  [SMALL_STATE(110)] = 3333,
  [SMALL_STATE(111)] = 3349,
  [SMALL_STATE(112)] = 3363,
  [SMALL_STATE(113)] = 3379,
  [SMALL_STATE(114)] = 3395,
  [SMALL_STATE(115)] = 3411,
  [SMALL_STATE(116)] = 3427,
  [SMALL_STATE(117)] = 3443,
  [SMALL_STATE(118)] = 3459,
  [SMALL_STATE(119)] = 3475,
  [SMALL_STATE(120)] = 3489,
  [SMALL_STATE(121)] = 3505,
  [SMALL_STATE(122)] = 3519,
  [SMALL_STATE(123)] = 3535,
  [SMALL_STATE(124)] = 3551,
  [SMALL_STATE(125)] = 3567,
  [SMALL_STATE(126)] = 3581,
  [SMALL_STATE(127)] = 3597,
  [SMALL_STATE(128)] = 3613,
  [SMALL_STATE(129)] = 3629,
  [SMALL_STATE(130)] = 3645,
  [SMALL_STATE(131)] = 3661,
  [SMALL_STATE(132)] = 3674,
  [SMALL_STATE(133)] = 3685,
  [SMALL_STATE(134)] = 3698,
  [SMALL_STATE(135)] = 3709,
  [SMALL_STATE(136)] = 3719,
  [SMALL_STATE(137)] = 3729,
  [SMALL_STATE(138)] = 3739,
  [SMALL_STATE(139)] = 3749,
  [SMALL_STATE(140)] = 3759,
  [SMALL_STATE(141)] = 3769,
  [SMALL_STATE(142)] = 3779,
  [SMALL_STATE(143)] = 3789,
  [SMALL_STATE(144)] = 3799,
  [SMALL_STATE(145)] = 3809,
  [SMALL_STATE(146)] = 3819,
  [SMALL_STATE(147)] = 3829,
  [SMALL_STATE(148)] = 3839,
  [SMALL_STATE(149)] = 3849,
  [SMALL_STATE(150)] = 3859,
  [SMALL_STATE(151)] = 3869,
  [SMALL_STATE(152)] = 3879,
  [SMALL_STATE(153)] = 3889,
  [SMALL_STATE(154)] = 3899,
  [SMALL_STATE(155)] = 3909,
  [SMALL_STATE(156)] = 3919,
  [SMALL_STATE(157)] = 3929,
  [SMALL_STATE(158)] = 3939,
  [SMALL_STATE(159)] = 3949,
  [SMALL_STATE(160)] = 3959,
  [SMALL_STATE(161)] = 3969,
  [SMALL_STATE(162)] = 3979,
  [SMALL_STATE(163)] = 3989,
  [SMALL_STATE(164)] = 3999,
  [SMALL_STATE(165)] = 4009,
  [SMALL_STATE(166)] = 4019,
  [SMALL_STATE(167)] = 4029,
  [SMALL_STATE(168)] = 4039,
  [SMALL_STATE(169)] = 4049,
  [SMALL_STATE(170)] = 4059,
  [SMALL_STATE(171)] = 4069,
  [SMALL_STATE(172)] = 4079,
  [SMALL_STATE(173)] = 4089,
  [SMALL_STATE(174)] = 4099,
  [SMALL_STATE(175)] = 4109,
  [SMALL_STATE(176)] = 4119,
  [SMALL_STATE(177)] = 4129,
  [SMALL_STATE(178)] = 4139,
  [SMALL_STATE(179)] = 4149,
  [SMALL_STATE(180)] = 4159,
  [SMALL_STATE(181)] = 4169,
  [SMALL_STATE(182)] = 4179,
  [SMALL_STATE(183)] = 4189,
  [SMALL_STATE(184)] = 4199,
  [SMALL_STATE(185)] = 4209,
  [SMALL_STATE(186)] = 4219,
  [SMALL_STATE(187)] = 4229,
  [SMALL_STATE(188)] = 4239,
  [SMALL_STATE(189)] = 4249,
  [SMALL_STATE(190)] = 4259,
  [SMALL_STATE(191)] = 4269,
  [SMALL_STATE(192)] = 4279,
  [SMALL_STATE(193)] = 4289,
  [SMALL_STATE(194)] = 4299,
  [SMALL_STATE(195)] = 4309,
  [SMALL_STATE(196)] = 4319,
  [SMALL_STATE(197)] = 4329,
  [SMALL_STATE(198)] = 4339,
  [SMALL_STATE(199)] = 4349,
  [SMALL_STATE(200)] = 4359,
  [SMALL_STATE(201)] = 4369,
  [SMALL_STATE(202)] = 4379,
  [SMALL_STATE(203)] = 4389,
  [SMALL_STATE(204)] = 4399,
  [SMALL_STATE(205)] = 4409,
  [SMALL_STATE(206)] = 4419,
  [SMALL_STATE(207)] = 4429,
  [SMALL_STATE(208)] = 4439,
  [SMALL_STATE(209)] = 4449,
  [SMALL_STATE(210)] = 4459,
  [SMALL_STATE(211)] = 4469,
  [SMALL_STATE(212)] = 4479,
  [SMALL_STATE(213)] = 4489,
  [SMALL_STATE(214)] = 4499,
  [SMALL_STATE(215)] = 4509,
  [SMALL_STATE(216)] = 4519,
  [SMALL_STATE(217)] = 4529,
  [SMALL_STATE(218)] = 4539,
  [SMALL_STATE(219)] = 4549,
  [SMALL_STATE(220)] = 4559,
  [SMALL_STATE(221)] = 4569,
  [SMALL_STATE(222)] = 4579,
  [SMALL_STATE(223)] = 4589,
  [SMALL_STATE(224)] = 4599,
  [SMALL_STATE(225)] = 4609,
  [SMALL_STATE(226)] = 4619,
  [SMALL_STATE(227)] = 4629,
  [SMALL_STATE(228)] = 4639,
  [SMALL_STATE(229)] = 4649,
  [SMALL_STATE(230)] = 4659,
  [SMALL_STATE(231)] = 4669,
  [SMALL_STATE(232)] = 4679,
  [SMALL_STATE(233)] = 4689,
  [SMALL_STATE(234)] = 4699,
  [SMALL_STATE(235)] = 4709,
  [SMALL_STATE(236)] = 4719,
  [SMALL_STATE(237)] = 4729,
  [SMALL_STATE(238)] = 4739,
  [SMALL_STATE(239)] = 4749,
  [SMALL_STATE(240)] = 4759,
  [SMALL_STATE(241)] = 4769,
  [SMALL_STATE(242)] = 4779,
  [SMALL_STATE(243)] = 4789,
  [SMALL_STATE(244)] = 4799,
  [SMALL_STATE(245)] = 4809,
  [SMALL_STATE(246)] = 4819,
  [SMALL_STATE(247)] = 4829,
  [SMALL_STATE(248)] = 4839,
  [SMALL_STATE(249)] = 4849,
  [SMALL_STATE(250)] = 4859,
  [SMALL_STATE(251)] = 4869,
  [SMALL_STATE(252)] = 4879,
  [SMALL_STATE(253)] = 4889,
  [SMALL_STATE(254)] = 4899,
  [SMALL_STATE(255)] = 4909,
  [SMALL_STATE(256)] = 4919,
  [SMALL_STATE(257)] = 4929,
  [SMALL_STATE(258)] = 4939,
  [SMALL_STATE(259)] = 4949,
  [SMALL_STATE(260)] = 4959,
  [SMALL_STATE(261)] = 4969,
  [SMALL_STATE(262)] = 4979,
  [SMALL_STATE(263)] = 4989,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(7),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(152),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(151),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(150),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(149),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__misc_section_var, 4, .production_id = 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__misc_section_var, 4, .production_id = 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat6, 1, .production_id = 3),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 1, .production_id = 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat6, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(42),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(212),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(261),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(260),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(259),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(258),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(255),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(249),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(246),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(245),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(244),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(243),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(242),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(241),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(240),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(239),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(238),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(18),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(179),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(170),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(167),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(166),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(165),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(164),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat2, 1, .production_id = 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 1, .production_id = 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(24),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(161),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(160),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(159),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(158),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(157),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(156),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat2, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_section_var, 4, .production_id = 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_section_var, 4, .production_id = 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat4, 1, .production_id = 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 1, .production_id = 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_variable_section, 5, .production_id = 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_variable_section, 5, .production_id = 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat4, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_variable_section, 4, .production_id = 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_variable_section, 4, .production_id = 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_section_var, 4, .production_id = 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_section_var, 4, .production_id = 2),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(30),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(187),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(186),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(181),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(135),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(180),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat1, 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__general_section_var, 4, .production_id = 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__general_section_var, 4, .production_id = 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat1, 1, .production_id = 3),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 1, .production_id = 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_section, 7, .production_id = 7),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_section, 7, .production_id = 7),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_env, 5, .production_id = 6),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_env, 5, .production_id = 6),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_envd, 5, .production_id = 6),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_envd, 5, .production_id = 6),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_exec, 3, .production_id = 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_exec, 3, .production_id = 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_exec_once, 3, .production_id = 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_exec_once, 3, .production_id = 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layer_identifier, 1, .production_id = 4),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_layer_identifier, 1, .production_id = 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_source, 3, .production_id = 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_source, 3, .production_id = 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layer_identifier, 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_layer_identifier, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_layerrule, 5, .production_id = 5),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_layerrule, 5, .production_id = 5),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 1),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layer_address, 4, .production_id = 10),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_layer_address, 4, .production_id = 10),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_monitor, 8, .production_id = 13),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_monitor, 8, .production_id = 13),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_monitor, 9, .production_id = 14),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_monitor, 9, .production_id = 14),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_section, 5, .production_id = 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_section, 5, .production_id = 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_section, 6, .production_id = 7),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_section, 6, .production_id = 7),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_section, 4, .production_id = 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_section, 4, .production_id = 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat5, 2), SHIFT_REPEAT(74),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 2),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 2), SHIFT_REPEAT(155),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 2), SHIFT_REPEAT(154),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 2), SHIFT_REPEAT(153),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat1, 2), SHIFT_REPEAT(71),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 2),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 2), SHIFT_REPEAT(213),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 2), SHIFT_REPEAT(214),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 2), SHIFT_REPEAT(215),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gestures_section_var, 4, .production_id = 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gestures_section_var, 4, .production_id = 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gradient, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat8, 2), SHIFT_REPEAT(82),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 2),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 2), SHIFT_REPEAT(146),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 2), SHIFT_REPEAT(145),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat1, 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat1, 1, .production_id = 3),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 1, .production_id = 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__touchpad_section_var, 4, .production_id = 2),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__touchpad_section_var, 4, .production_id = 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat5, 1),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat5, 1, .production_id = 3),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 1, .production_id = 3),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(176),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(177),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(178),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug_section_var, 4, .production_id = 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__debug_section_var, 4, .production_id = 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat8, 1, .production_id = 3),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 1, .production_id = 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat8, 1),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 1),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat7, 2), SHIFT_REPEAT(85),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 2),
  [508] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 2), SHIFT_REPEAT(148),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 2), SHIFT_REPEAT(147),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binds_section_var, 4, .production_id = 2),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binds_section_var, 4, .production_id = 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat7, 1),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat7, 1, .production_id = 3),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 1, .production_id = 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat2, 2), SHIFT_REPEAT(100),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 2),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 2), SHIFT_REPEAT(219),
  [544] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 2), SHIFT_REPEAT(220),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_rgb, 6),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_rgb, 6),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_hex, 5),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_hex, 5),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat3, 2), SHIFT_REPEAT(121),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat3, 2),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat3, 2), SHIFT_REPEAT(162),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_rgba, 7),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_rgba, 7),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 1),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat2, 1),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 1),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__touchdevice_section_var, 4, .production_id = 2),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__touchdevice_section_var, 4, .production_id = 2),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat2, 1, .production_id = 3),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 1, .production_id = 3),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__animation_section_var, 4, .production_id = 2),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__animation_section_var, 4, .production_id = 2),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat3, 1, .production_id = 3),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat3, 1, .production_id = 3),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat3, 1),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat3, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resolution, 3, .production_id = 8),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_reference, 2),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_resolution, 1),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_literal, 1),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_integer, 1),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layer_rule, 1),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gradient, 2),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec2, 2),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_degree, 2, .production_id = 9),
  [865] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resolution, 5, .production_id = 11),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position, 3, .production_id = 12),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
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
