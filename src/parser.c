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
#define STATE_COUNT 290
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 257
#define ALIAS_COUNT 1
#define TOKEN_COUNT 197
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 20

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
  anon_sym_desc = 185,
  aux_sym_monitor_desc_token1 = 186,
  anon_sym_preferred = 187,
  anon_sym_highres = 188,
  anon_sym_highrr = 189,
  anon_sym_mirror = 190,
  anon_sym_bitdepth = 191,
  anon_sym_monitor = 192,
  sym_by = 193,
  sym_at = 194,
  sym_auto = 195,
  sym_disable = 196,
  sym_config_file = 197,
  sym_comment = 198,
  sym_vec2 = 199,
  sym_bool = 200,
  sym__bool_literal = 201,
  sym__bool_integer = 202,
  sym_color = 203,
  sym_color_rgb = 204,
  sym_color_rgba = 205,
  sym_color_hex = 206,
  sym_gradient = 207,
  sym_degree = 208,
  sym_variable_reference = 209,
  sym_variable_section = 210,
  sym__general_section_var = 211,
  sym__decoration_section_var = 212,
  sym__animation_section_var = 213,
  sym__touchpad_section_var = 214,
  sym__touchdevice_section_var = 215,
  sym__input_variable_section = 216,
  sym__input_section_var = 217,
  sym__gestures_section_var = 218,
  sym__misc_section_var = 219,
  sym__binds_section_var = 220,
  sym__debug_section_var = 221,
  sym_command = 222,
  sym_command_exec = 223,
  sym_command_exec_once = 224,
  sym_command_source = 225,
  sym_layer_rule = 226,
  sym_layer_address = 227,
  sym_layer_identifier = 228,
  sym_command_layerrule = 229,
  sym_command_env = 230,
  sym_command_envd = 231,
  sym_monitor_desc = 232,
  sym__monitor_name = 233,
  sym_resolution = 234,
  sym_position = 235,
  sym_auto_resolution = 236,
  sym__monitor_disable = 237,
  sym_mirror = 238,
  sym_bitdepth = 239,
  sym_transform = 240,
  sym__monitor_config_optional = 241,
  sym__monitor_config = 242,
  sym_command_monitor = 243,
  aux_sym_config_file_repeat1 = 244,
  aux_sym_gradient_repeat1 = 245,
  aux_sym_variable_section_repeat1 = 246,
  aux_sym_variable_section_repeat2 = 247,
  aux_sym_variable_section_repeat3 = 248,
  aux_sym_variable_section_repeat4 = 249,
  aux_sym_variable_section_repeat5 = 250,
  aux_sym_variable_section_repeat6 = 251,
  aux_sym_variable_section_repeat7 = 252,
  aux_sym_variable_section_repeat8 = 253,
  aux_sym__input_variable_section_repeat1 = 254,
  aux_sym__input_variable_section_repeat2 = 255,
  aux_sym__monitor_config_repeat1 = 256,
  alias_sym_layer_namespace = 257,
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
  [anon_sym_desc] = "desc",
  [aux_sym_monitor_desc_token1] = "monitor_desc_token1",
  [anon_sym_preferred] = "preferred",
  [anon_sym_highres] = "highres",
  [anon_sym_highrr] = "highrr",
  [anon_sym_mirror] = "mirror",
  [anon_sym_bitdepth] = "bitdepth",
  [anon_sym_monitor] = "monitor",
  [sym_by] = "by",
  [sym_at] = "at",
  [sym_auto] = "auto",
  [sym_disable] = "disable",
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
  [sym_monitor_desc] = "monitor_desc",
  [sym__monitor_name] = "_monitor_name",
  [sym_resolution] = "resolution",
  [sym_position] = "position",
  [sym_auto_resolution] = "auto_resolution",
  [sym__monitor_disable] = "_monitor_disable",
  [sym_mirror] = "mirror",
  [sym_bitdepth] = "bitdepth",
  [sym_transform] = "transform",
  [sym__monitor_config_optional] = "_monitor_config_optional",
  [sym__monitor_config] = "_monitor_config",
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
  [aux_sym__monitor_config_repeat1] = "_monitor_config_repeat1",
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
  [anon_sym_desc] = anon_sym_desc,
  [aux_sym_monitor_desc_token1] = aux_sym_monitor_desc_token1,
  [anon_sym_preferred] = anon_sym_preferred,
  [anon_sym_highres] = anon_sym_highres,
  [anon_sym_highrr] = anon_sym_highrr,
  [anon_sym_mirror] = anon_sym_mirror,
  [anon_sym_bitdepth] = anon_sym_bitdepth,
  [anon_sym_monitor] = anon_sym_monitor,
  [sym_by] = sym_by,
  [sym_at] = sym_at,
  [sym_auto] = sym_auto,
  [sym_disable] = sym_disable,
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
  [sym_monitor_desc] = sym_monitor_desc,
  [sym__monitor_name] = sym__monitor_name,
  [sym_resolution] = sym_resolution,
  [sym_position] = sym_position,
  [sym_auto_resolution] = sym_auto_resolution,
  [sym__monitor_disable] = sym__monitor_disable,
  [sym_mirror] = sym_mirror,
  [sym_bitdepth] = sym_bitdepth,
  [sym_transform] = sym_transform,
  [sym__monitor_config_optional] = sym__monitor_config_optional,
  [sym__monitor_config] = sym__monitor_config,
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
  [aux_sym__monitor_config_repeat1] = aux_sym__monitor_config_repeat1,
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
  [anon_sym_desc] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_monitor_desc_token1] = {
    .visible = false,
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
  [anon_sym_mirror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bitdepth] = {
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
  [sym_disable] = {
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
  [sym_monitor_desc] = {
    .visible = true,
    .named = true,
  },
  [sym__monitor_name] = {
    .visible = false,
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
  [sym__monitor_disable] = {
    .visible = false,
    .named = true,
  },
  [sym_mirror] = {
    .visible = true,
    .named = true,
  },
  [sym_bitdepth] = {
    .visible = true,
    .named = true,
  },
  [sym_transform] = {
    .visible = true,
    .named = true,
  },
  [sym__monitor_config_optional] = {
    .visible = false,
    .named = true,
  },
  [sym__monitor_config] = {
    .visible = false,
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
  [aux_sym__monitor_config_repeat1] = {
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
  field_bitdepth = 2,
  field_description = 3,
  field_height = 4,
  field_identifier = 5,
  field_mirror = 6,
  field_name = 7,
  field_position = 8,
  field_refresh_rate = 9,
  field_resolution = 10,
  field_rule = 11,
  field_scale = 12,
  field_transform = 13,
  field_unit = 14,
  field_value = 15,
  field_width = 16,
  field_x_offset = 17,
  field_y_offset = 18,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_address] = "address",
  [field_bitdepth] = "bitdepth",
  [field_description] = "description",
  [field_height] = "height",
  [field_identifier] = "identifier",
  [field_mirror] = "mirror",
  [field_name] = "name",
  [field_position] = "position",
  [field_refresh_rate] = "refresh_rate",
  [field_resolution] = "resolution",
  [field_rule] = "rule",
  [field_scale] = "scale",
  [field_transform] = "transform",
  [field_unit] = "unit",
  [field_value] = "value",
  [field_width] = "width",
  [field_x_offset] = "x_offset",
  [field_y_offset] = "y_offset",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 5},
  [4] = {.index = 8, .length = 1},
  [6] = {.index = 9, .length = 3},
  [7] = {.index = 12, .length = 3},
  [8] = {.index = 15, .length = 1},
  [9] = {.index = 16, .length = 3},
  [10] = {.index = 19, .length = 2},
  [11] = {.index = 21, .length = 1},
  [12] = {.index = 22, .length = 1},
  [13] = {.index = 23, .length = 3},
  [14] = {.index = 26, .length = 2},
  [15] = {.index = 28, .length = 3},
  [16] = {.index = 31, .length = 4},
  [17] = {.index = 35, .length = 1},
  [18] = {.index = 36, .length = 1},
  [19] = {.index = 37, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 0},
    {field_name, 2, .inherited = true},
  [3] =
    {field_name, 0},
    {field_name, 2, .inherited = true},
    {field_position, 2, .inherited = true},
    {field_resolution, 2, .inherited = true},
    {field_scale, 2, .inherited = true},
  [8] =
    {field_name, 0, .inherited = true},
  [9] =
    {field_identifier, 4},
    {field_name, 0},
    {field_rule, 2},
  [12] =
    {field_name, 0},
    {field_name, 2},
    {field_value, 4},
  [15] =
    {field_description, 2},
  [16] =
    {field_name, 0},
    {field_name, 1},
    {field_name, 2},
  [19] =
    {field_height, 2},
    {field_width, 0},
  [21] =
    {field_unit, 1},
  [22] =
    {field_address, 3},
  [23] =
    {field_height, 2},
    {field_refresh_rate, 4},
    {field_width, 0},
  [26] =
    {field_x_offset, 0},
    {field_y_offset, 2},
  [28] =
    {field_position, 3},
    {field_resolution, 1},
    {field_scale, 5},
  [31] =
    {field_name, 0},
    {field_position, 4},
    {field_resolution, 2},
    {field_scale, 6},
  [35] =
    {field_transform, 2},
  [36] =
    {field_mirror, 2},
  [37] =
    {field_bitdepth, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
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
  [149] = 133,
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
  [175] = 134,
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
  [213] = 151,
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
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 147,
  [289] = 289,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1478);
      if (lookahead == '#') ADVANCE(1479);
      if (lookahead == '$') ADVANCE(1544);
      if (lookahead == '(') ADVANCE(1521);
      if (lookahead == ')') ADVANCE(1522);
      if (lookahead == ',') ADVANCE(1693);
      if (lookahead == '.') ADVANCE(1471);
      if (lookahead == '0') ADVANCE(1515);
      if (lookahead == '1') ADVANCE(1518);
      if (lookahead == ':') ADVANCE(1559);
      if (lookahead == '=') ADVANCE(1562);
      if (lookahead == '@') ADVANCE(1707);
      if (lookahead == 'A') ADVANCE(37);
      if (lookahead == 'C') ADVANCE(27);
      if (lookahead == 'L') ADVANCE(42);
      if (lookahead == 'M') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(33);
      if (lookahead == 'W') ADVANCE(35);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'b') ADVANCE(677);
      if (lookahead == 'c') ADVANCE(780);
      if (lookahead == 'd') ADVANCE(169);
      if (lookahead == 'e') ADVANCE(862);
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == 'g') ADVANCE(175);
      if (lookahead == 'h') ADVANCE(678);
      if (lookahead == 'i') ADVANCE(863);
      if (lookahead == 'k') ADVANCE(283);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == 'm') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(176);
      if (lookahead == 'o') ADVANCE(599);
      if (lookahead == 'p') ADVANCE(172);
      if (lookahead == 'r') ADVANCE(439);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(871);
      if (lookahead == 'v') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(954);
      if (lookahead == 'x') ADVANCE(1706);
      if (lookahead == 'y') ADVANCE(473);
      if (lookahead == '{') ADVANCE(1549);
      if (lookahead == '}') ADVANCE(1550);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(22);
      if (('B' <= lookahead && lookahead <= 'F')) ADVANCE(1475);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1477)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1490);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(1479);
      if (lookahead == '$') ADVANCE(1544);
      if (lookahead == '.') ADVANCE(1472);
      if (lookahead == 'a') ADVANCE(1354);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1492);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(1479);
      if (lookahead == '$') ADVANCE(1544);
      if (lookahead == '0') ADVANCE(1514);
      if (lookahead == '1') ADVANCE(1517);
      if (lookahead == 'd') ADVANCE(506);
      if (lookahead == 'f') ADVANCE(193);
      if (lookahead == 'n') ADVANCE(950);
      if (lookahead == 'o') ADVANCE(598);
      if (lookahead == 't') ADVANCE(1122);
      if (lookahead == 'y') ADVANCE(473);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(1479);
      if (lookahead == '$') ADVANCE(1544);
      if (lookahead == '0') ADVANCE(1514);
      if (lookahead == '1') ADVANCE(1517);
      if (lookahead == 'f') ADVANCE(193);
      if (lookahead == 'n') ADVANCE(950);
      if (lookahead == 'o') ADVANCE(598);
      if (lookahead == 't') ADVANCE(1122);
      if (lookahead == 'y') ADVANCE(473);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(1479);
      if (lookahead == '$') ADVANCE(1544);
      if (lookahead == '0') ADVANCE(1440);
      if (lookahead == 'r') ADVANCE(623);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1475);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(1479);
      if (lookahead == '$') ADVANCE(1544);
      if (lookahead == '0') ADVANCE(1439);
      if (lookahead == 'r') ADVANCE(623);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(1479);
      if (lookahead == '$') ADVANCE(1544);
      if (lookahead == 'a') ADVANCE(1354);
      if (lookahead == 'd') ADVANCE(719);
      if (lookahead == 'h') ADVANCE(704);
      if (lookahead == 'p') ADVANCE(1113);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(1473);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1488);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(1479);
      if (lookahead == ',') ADVANCE(1693);
      if (lookahead == 'd') ADVANCE(1537);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1543);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(1479);
      if (lookahead == '0') ADVANCE(1443);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(1479);
      if (lookahead == 'a') ADVANCE(1536);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1543);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(1479);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(1474);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1491);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(1479);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1543);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(1479);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(1479);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1560);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(1479);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1546);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(1481);
      if (lookahead == '$') ADVANCE(1545);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0) ADVANCE(1533);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(1481);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0) ADVANCE(1533);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(1483);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1698);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(1699);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(1683);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '_') ADVANCE(295);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(338);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(410);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(1471);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1489);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(280);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(1472);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1486);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(1472);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1492);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(1500);
      if (lookahead == '3') ADVANCE(1501);
      if (lookahead == '4') ADVANCE(1505);
      if (lookahead == '5') ADVANCE(1506);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(1526);
      if (lookahead == 'O') ADVANCE(41);
      if (lookahead == 'T') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1525);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(46);
      if (lookahead == 'O') ADVANCE(41);
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 29:
      if (lookahead == 'D') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'F') ADVANCE(53);
      END_STATE();
    case 32:
      if (lookahead == 'G') ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == 'H') ADVANCE(34);
      if (lookahead == 'U') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'I') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'I') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'L') ADVANCE(52);
      END_STATE();
    case 37:
      if (lookahead == 'L') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1525);
      END_STATE();
    case 38:
      if (lookahead == 'L') ADVANCE(1497);
      END_STATE();
    case 39:
      if (lookahead == 'L') ADVANCE(1498);
      END_STATE();
    case 40:
      if (lookahead == 'N') ADVANCE(1503);
      END_STATE();
    case 41:
      if (lookahead == 'N') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'O') ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == 'O') ADVANCE(29);
      END_STATE();
    case 44:
      if (lookahead == 'O') ADVANCE(1504);
      END_STATE();
    case 45:
      if (lookahead == 'O') ADVANCE(39);
      END_STATE();
    case 46:
      if (lookahead == 'P') ADVANCE(51);
      END_STATE();
    case 47:
      if (lookahead == 'P') ADVANCE(30);
      END_STATE();
    case 48:
      if (lookahead == 'R') ADVANCE(1502);
      END_STATE();
    case 49:
      if (lookahead == 'R') ADVANCE(38);
      END_STATE();
    case 50:
      if (lookahead == 'R') ADVANCE(45);
      END_STATE();
    case 51:
      if (lookahead == 'S') ADVANCE(1496);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(1499);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(1495);
      END_STATE();
    case 54:
      if (lookahead == 'T') ADVANCE(50);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(602);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(296);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(218);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(1269);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(968);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(846);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(758);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(288);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(419);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(301);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(755);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(203);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(641);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(300);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(593);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(967);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(689);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(622);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(192);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(450);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(857);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(663);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(839);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(308);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(1433);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(605);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(294);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(664);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(1430);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(289);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(767);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(885);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(618);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(306);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(377);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(606);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(1266);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(1005);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(1080);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(858);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(646);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(1220);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(1070);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(1256);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(1006);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(1200);
      if (lookahead == 'd') ADVANCE(1603);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(426);
      END_STATE();
    case 102:
      if (lookahead == '_') ADVANCE(335);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(214);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(401);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(1003);
      END_STATE();
    case 106:
      if (lookahead == '_') ADVANCE(216);
      END_STATE();
    case 107:
      if (lookahead == '_') ADVANCE(1296);
      END_STATE();
    case 108:
      if (lookahead == '_') ADVANCE(551);
      END_STATE();
    case 109:
      if (lookahead == '_') ADVANCE(501);
      END_STATE();
    case 110:
      if (lookahead == '_') ADVANCE(1138);
      END_STATE();
    case 111:
      if (lookahead == '_') ADVANCE(483);
      END_STATE();
    case 112:
      if (lookahead == '_') ADVANCE(1179);
      END_STATE();
    case 113:
      if (lookahead == '_') ADVANCE(695);
      END_STATE();
    case 114:
      if (lookahead == '_') ADVANCE(1071);
      END_STATE();
    case 115:
      if (lookahead == '_') ADVANCE(859);
      END_STATE();
    case 116:
      if (lookahead == '_') ADVANCE(1251);
      END_STATE();
    case 117:
      if (lookahead == '_') ADVANCE(344);
      END_STATE();
    case 118:
      if (lookahead == '_') ADVANCE(1250);
      END_STATE();
    case 119:
      if (lookahead == '_') ADVANCE(649);
      END_STATE();
    case 120:
      if (lookahead == '_') ADVANCE(1031);
      END_STATE();
    case 121:
      if (lookahead == '_') ADVANCE(416);
      END_STATE();
    case 122:
      if (lookahead == '_') ADVANCE(906);
      END_STATE();
    case 123:
      if (lookahead == '_') ADVANCE(1149);
      END_STATE();
    case 124:
      if (lookahead == '_') ADVANCE(848);
      END_STATE();
    case 125:
      if (lookahead == '_') ADVANCE(1426);
      END_STATE();
    case 126:
      if (lookahead == '_') ADVANCE(610);
      END_STATE();
    case 127:
      if (lookahead == '_') ADVANCE(1314);
      END_STATE();
    case 128:
      if (lookahead == '_') ADVANCE(1235);
      END_STATE();
    case 129:
      if (lookahead == '_') ADVANCE(417);
      END_STATE();
    case 130:
      if (lookahead == '_') ADVANCE(816);
      END_STATE();
    case 131:
      if (lookahead == '_') ADVANCE(745);
      END_STATE();
    case 132:
      if (lookahead == '_') ADVANCE(1328);
      END_STATE();
    case 133:
      if (lookahead == '_') ADVANCE(799);
      END_STATE();
    case 134:
      if (lookahead == '_') ADVANCE(254);
      END_STATE();
    case 135:
      if (lookahead == '_') ADVANCE(1320);
      END_STATE();
    case 136:
      if (lookahead == '_') ADVANCE(613);
      END_STATE();
    case 137:
      if (lookahead == '_') ADVANCE(1434);
      END_STATE();
    case 138:
      if (lookahead == '_') ADVANCE(1257);
      END_STATE();
    case 139:
      if (lookahead == '_') ADVANCE(1184);
      END_STATE();
    case 140:
      if (lookahead == '_') ADVANCE(1259);
      END_STATE();
    case 141:
      if (lookahead == '_') ADVANCE(1321);
      END_STATE();
    case 142:
      if (lookahead == '_') ADVANCE(261);
      END_STATE();
    case 143:
      if (lookahead == '_') ADVANCE(424);
      END_STATE();
    case 144:
      if (lookahead == '_') ADVANCE(1436);
      END_STATE();
    case 145:
      if (lookahead == '_') ADVANCE(614);
      END_STATE();
    case 146:
      if (lookahead == '_') ADVANCE(1325);
      END_STATE();
    case 147:
      if (lookahead == '_') ADVANCE(1174);
      END_STATE();
    case 148:
      if (lookahead == '_') ADVANCE(1022);
      END_STATE();
    case 149:
      if (lookahead == '_') ADVANCE(1175);
      END_STATE();
    case 150:
      if (lookahead == '_') ADVANCE(1028);
      END_STATE();
    case 151:
      if (lookahead == '_') ADVANCE(1029);
      END_STATE();
    case 152:
      if (lookahead == '_') ADVANCE(860);
      END_STATE();
    case 153:
      if (lookahead == '_') ADVANCE(1085);
      END_STATE();
    case 154:
      if (lookahead == '_') ADVANCE(830);
      END_STATE();
    case 155:
      if (lookahead == '_') ADVANCE(1268);
      END_STATE();
    case 156:
      if (lookahead == '_') ADVANCE(1037);
      END_STATE();
    case 157:
      if (lookahead == '_') ADVANCE(619);
      END_STATE();
    case 158:
      if (lookahead == '_') ADVANCE(834);
      END_STATE();
    case 159:
      if (lookahead == '_') ADVANCE(1041);
      END_STATE();
    case 160:
      if (lookahead == '_') ADVANCE(620);
      END_STATE();
    case 161:
      if (lookahead == '_') ADVANCE(1042);
      END_STATE();
    case 162:
      if (lookahead == '_') ADVANCE(307);
      END_STATE();
    case 163:
      if (lookahead == '_') ADVANCE(309);
      END_STATE();
    case 164:
      if (lookahead == '_') ADVANCE(310);
      END_STATE();
    case 165:
      if (lookahead == '_') ADVANCE(311);
      END_STATE();
    case 166:
      if (lookahead == '_') ADVANCE(312);
      END_STATE();
    case 167:
      if (lookahead == '_') ADVANCE(313);
      END_STATE();
    case 168:
      if (lookahead == '_') ADVANCE(1055);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(1531);
      if (lookahead == 'e') ADVANCE(1527);
      if (lookahead == 'i') ADVANCE(840);
      if (lookahead == 'r') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1525);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(1530);
      if (lookahead == 'l') ADVANCE(955);
      if (lookahead == 'o') ADVANCE(327);
      if (lookahead == 'u') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1525);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(1248);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(1248);
      if (lookahead == 'r') ADVANCE(472);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(634);
      if (lookahead == 'o') ADVANCE(1060);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(1577);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(1061);
      if (lookahead == 'e') ADVANCE(907);
      if (lookahead == 'r') ADVANCE(953);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(1317);
      if (lookahead == 'o') ADVANCE(1511);
      if (lookahead == 'u') ADVANCE(843);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(1317);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(843);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(1445);
      if (lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead == 'v') ADVANCE(1694);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(650);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(879);
      if (lookahead == 'i') ADVANCE(391);
      if (lookahead == 'o') ADVANCE(872);
      if (lookahead == 'u') ADVANCE(782);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(879);
      if (lookahead == 'i') ADVANCE(392);
      if (lookahead == 'o') ADVANCE(872);
      if (lookahead == 'u') ADVANCE(782);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(1463);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(1056);
      if (lookahead == 'o') ADVANCE(1359);
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(1056);
      if (lookahead == 'o') ADVANCE(1359);
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(1461);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(855);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(1446);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(418);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == 'p') ADVANCE(1358);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(1447);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(666);
      if (lookahead == 't') ADVANCE(699);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(809);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(809);
      if (lookahead == 'l') ADVANCE(955);
      if (lookahead == 'o') ADVANCE(327);
      if (lookahead == 'u') ADVANCE(783);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(1421);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(1449);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(628);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(1276);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(402);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(1057);
      END_STATE();
    case 203:
      if (lookahead == 'a') ADVANCE(1391);
      if (lookahead == 'h') ADVANCE(1462);
      if (lookahead == 'l') ADVANCE(959);
      if (lookahead == 's') ADVANCE(1077);
      if (lookahead == 't') ADVANCE(688);
      if (lookahead == 'w') ADVANCE(672);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(608);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(911);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(813);
      END_STATE();
    case 207:
      if (lookahead == 'a') ADVANCE(1379);
      END_STATE();
    case 208:
      if (lookahead == 'a') ADVANCE(773);
      END_STATE();
    case 209:
      if (lookahead == 'a') ADVANCE(1453);
      END_STATE();
    case 210:
      if (lookahead == 'a') ADVANCE(359);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(889);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(820);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(648);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(357);
      END_STATE();
    case 215:
      if (lookahead == 'a') ADVANCE(908);
      if (lookahead == 'e') ADVANCE(932);
      END_STATE();
    case 216:
      if (lookahead == 'a') ADVANCE(339);
      END_STATE();
    case 217:
      if (lookahead == 'a') ADVANCE(1307);
      END_STATE();
    case 218:
      if (lookahead == 'a') ADVANCE(1117);
      if (lookahead == 'i') ADVANCE(935);
      if (lookahead == 's') ADVANCE(1065);
      END_STATE();
    case 219:
      if (lookahead == 'a') ADVANCE(1120);
      END_STATE();
    case 220:
      if (lookahead == 'a') ADVANCE(775);
      END_STATE();
    case 221:
      if (lookahead == 'a') ADVANCE(385);
      END_STATE();
    case 222:
      if (lookahead == 'a') ADVANCE(1228);
      END_STATE();
    case 223:
      if (lookahead == 'a') ADVANCE(928);
      END_STATE();
    case 224:
      if (lookahead == 'a') ADVANCE(1249);
      END_STATE();
    case 225:
      if (lookahead == 'a') ADVANCE(926);
      if (lookahead == 'r') ADVANCE(566);
      END_STATE();
    case 226:
      if (lookahead == 'a') ADVANCE(1139);
      END_STATE();
    case 227:
      if (lookahead == 'a') ADVANCE(1335);
      END_STATE();
    case 228:
      if (lookahead == 'a') ADVANCE(1157);
      END_STATE();
    case 229:
      if (lookahead == 'a') ADVANCE(1137);
      END_STATE();
    case 230:
      if (lookahead == 'a') ADVANCE(1110);
      END_STATE();
    case 231:
      if (lookahead == 'a') ADVANCE(1170);
      END_STATE();
    case 232:
      if (lookahead == 'a') ADVANCE(829);
      END_STATE();
    case 233:
      if (lookahead == 'a') ADVANCE(842);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'i') ADVANCE(840);
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 234:
      if (lookahead == 'a') ADVANCE(842);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == 'i') ADVANCE(841);
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 235:
      if (lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 236:
      if (lookahead == 'a') ADVANCE(1311);
      END_STATE();
    case 237:
      if (lookahead == 'a') ADVANCE(371);
      END_STATE();
    case 238:
      if (lookahead == 'a') ADVANCE(403);
      END_STATE();
    case 239:
      if (lookahead == 'a') ADVANCE(411);
      END_STATE();
    case 240:
      if (lookahead == 'a') ADVANCE(406);
      END_STATE();
    case 241:
      if (lookahead == 'a') ADVANCE(804);
      END_STATE();
    case 242:
      if (lookahead == 'a') ADVANCE(1309);
      END_STATE();
    case 243:
      if (lookahead == 'a') ADVANCE(881);
      END_STATE();
    case 244:
      if (lookahead == 'a') ADVANCE(881);
      if (lookahead == 'u') ADVANCE(440);
      END_STATE();
    case 245:
      if (lookahead == 'a') ADVANCE(1400);
      END_STATE();
    case 246:
      if (lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 247:
      if (lookahead == 'a') ADVANCE(882);
      if (lookahead == 't') ADVANCE(947);
      END_STATE();
    case 248:
      if (lookahead == 'a') ADVANCE(1305);
      END_STATE();
    case 249:
      if (lookahead == 'a') ADVANCE(831);
      END_STATE();
    case 250:
      if (lookahead == 'a') ADVANCE(1234);
      END_STATE();
    case 251:
      if (lookahead == 'a') ADVANCE(329);
      END_STATE();
    case 252:
      if (lookahead == 'a') ADVANCE(812);
      END_STATE();
    case 253:
      if (lookahead == 'a') ADVANCE(1313);
      END_STATE();
    case 254:
      if (lookahead == 'a') ADVANCE(1153);
      END_STATE();
    case 255:
      if (lookahead == 'a') ADVANCE(791);
      END_STATE();
    case 256:
      if (lookahead == 'a') ADVANCE(890);
      END_STATE();
    case 257:
      if (lookahead == 'a') ADVANCE(802);
      END_STATE();
    case 258:
      if (lookahead == 'a') ADVANCE(350);
      END_STATE();
    case 259:
      if (lookahead == 'a') ADVANCE(331);
      END_STATE();
    case 260:
      if (lookahead == 'a') ADVANCE(1330);
      END_STATE();
    case 261:
      if (lookahead == 'a') ADVANCE(916);
      END_STATE();
    case 262:
      if (lookahead == 'a') ADVANCE(1323);
      END_STATE();
    case 263:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 264:
      if (lookahead == 'a') ADVANCE(363);
      END_STATE();
    case 265:
      if (lookahead == 'a') ADVANCE(919);
      END_STATE();
    case 266:
      if (lookahead == 'a') ADVANCE(361);
      END_STATE();
    case 267:
      if (lookahead == 'a') ADVANCE(1345);
      END_STATE();
    case 268:
      if (lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 269:
      if (lookahead == 'a') ADVANCE(366);
      END_STATE();
    case 270:
      if (lookahead == 'a') ADVANCE(362);
      END_STATE();
    case 271:
      if (lookahead == 'a') ADVANCE(364);
      END_STATE();
    case 272:
      if (lookahead == 'a') ADVANCE(428);
      END_STATE();
    case 273:
      if (lookahead == 'a') ADVANCE(925);
      if (lookahead == 'o') ADVANCE(1396);
      END_STATE();
    case 274:
      if (lookahead == 'a') ADVANCE(367);
      END_STATE();
    case 275:
      if (lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 276:
      if (lookahead == 'a') ADVANCE(1349);
      END_STATE();
    case 277:
      if (lookahead == 'a') ADVANCE(373);
      END_STATE();
    case 278:
      if (lookahead == 'a') ADVANCE(370);
      END_STATE();
    case 279:
      if (lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 280:
      if (lookahead == 'a') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(1158);
      if (lookahead == 'i') ADVANCE(886);
      if (lookahead == 's') ADVANCE(671);
      END_STATE();
    case 281:
      if (lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 282:
      if (lookahead == 'a') ADVANCE(378);
      END_STATE();
    case 283:
      if (lookahead == 'b') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(1455);
      END_STATE();
    case 284:
      if (lookahead == 'b') ADVANCE(1520);
      END_STATE();
    case 285:
      if (lookahead == 'b') ADVANCE(1356);
      if (lookahead == 'c') ADVANCE(966);
      if (lookahead == 's') ADVANCE(317);
      if (lookahead == 'v') ADVANCE(723);
      END_STATE();
    case 286:
      if (lookahead == 'b') ADVANCE(1356);
      if (lookahead == 'c') ADVANCE(966);
      if (lookahead == 'v') ADVANCE(723);
      END_STATE();
    case 287:
      if (lookahead == 'b') ADVANCE(787);
      END_STATE();
    case 288:
      if (lookahead == 'b') ADVANCE(814);
      if (lookahead == 't') ADVANCE(1127);
      END_STATE();
    case 289:
      if (lookahead == 'b') ADVANCE(550);
      END_STATE();
    case 290:
      if (lookahead == 'b') ADVANCE(134);
      END_STATE();
    case 291:
      if (lookahead == 'b') ADVANCE(986);
      END_STATE();
    case 292:
      if (lookahead == 'b') ADVANCE(226);
      END_STATE();
    case 293:
      if (lookahead == 'b') ADVANCE(789);
      END_STATE();
    case 294:
      if (lookahead == 'b') ADVANCE(1460);
      END_STATE();
    case 295:
      if (lookahead == 'b') ADVANCE(1369);
      END_STATE();
    case 296:
      if (lookahead == 'b') ADVANCE(1043);
      if (lookahead == 'c') ADVANCE(1397);
      if (lookahead == 'd') ADVANCE(705);
      if (lookahead == 'f') ADVANCE(961);
      END_STATE();
    case 297:
      if (lookahead == 'b') ADVANCE(230);
      END_STATE();
    case 298:
      if (lookahead == 'b') ADVANCE(806);
      END_STATE();
    case 299:
      if (lookahead == 'b') ADVANCE(572);
      END_STATE();
    case 300:
      if (lookahead == 'b') ADVANCE(258);
      if (lookahead == 's') ADVANCE(1425);
      END_STATE();
    case 301:
      if (lookahead == 'b') ADVANCE(1393);
      if (lookahead == 'e') ADVANCE(1401);
      if (lookahead == 'f') ADVANCE(237);
      if (lookahead == 'm') ADVANCE(507);
      END_STATE();
    case 302:
      if (lookahead == 'b') ADVANCE(259);
      END_STATE();
    case 303:
      if (lookahead == 'b') ADVANCE(827);
      END_STATE();
    case 304:
      if (lookahead == 'b') ADVANCE(835);
      END_STATE();
    case 305:
      if (lookahead == 'b') ADVANCE(836);
      END_STATE();
    case 306:
      if (lookahead == 'b') ADVANCE(1038);
      END_STATE();
    case 307:
      if (lookahead == 'b') ADVANCE(1399);
      END_STATE();
    case 308:
      if (lookahead == 'b') ADVANCE(1047);
      END_STATE();
    case 309:
      if (lookahead == 'b') ADVANCE(1048);
      END_STATE();
    case 310:
      if (lookahead == 'b') ADVANCE(1049);
      END_STATE();
    case 311:
      if (lookahead == 'b') ADVANCE(1050);
      END_STATE();
    case 312:
      if (lookahead == 'b') ADVANCE(1051);
      END_STATE();
    case 313:
      if (lookahead == 'b') ADVANCE(1052);
      END_STATE();
    case 314:
      if (lookahead == 'c') ADVANCE(1528);
      if (lookahead == 'd') ADVANCE(1529);
      if (lookahead == 'l') ADVANCE(781);
      if (lookahead == 'n') ADVANCE(682);
      if (lookahead == 'p') ADVANCE(1058);
      if (lookahead == 'u') ADVANCE(1287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1525);
      END_STATE();
    case 315:
      if (lookahead == 'c') ADVANCE(325);
      if (lookahead == 'd') ADVANCE(395);
      if (lookahead == 'l') ADVANCE(781);
      if (lookahead == 'n') ADVANCE(682);
      if (lookahead == 'p') ADVANCE(1058);
      if (lookahead == 'u') ADVANCE(1287);
      END_STATE();
    case 316:
      if (lookahead == 'c') ADVANCE(325);
      if (lookahead == 'l') ADVANCE(781);
      if (lookahead == 'n') ADVANCE(682);
      if (lookahead == 'p') ADVANCE(1058);
      END_STATE();
    case 317:
      if (lookahead == 'c') ADVANCE(1696);
      END_STATE();
    case 318:
      if (lookahead == 'c') ADVANCE(1684);
      END_STATE();
    case 319:
      if (lookahead == 'c') ADVANCE(1555);
      END_STATE();
    case 320:
      if (lookahead == 'c') ADVANCE(225);
      if (lookahead == 'd') ADVANCE(714);
      if (lookahead == 'f') ADVANCE(747);
      if (lookahead == 'i') ADVANCE(930);
      if (lookahead == 'm') ADVANCE(724);
      if (lookahead == 'n') ADVANCE(1366);
      END_STATE();
    case 321:
      if (lookahead == 'c') ADVANCE(656);
      END_STATE();
    case 322:
      if (lookahead == 'c') ADVANCE(764);
      END_STATE();
    case 323:
      if (lookahead == 'c') ADVANCE(1112);
      if (lookahead == 'e') ADVANCE(875);
      if (lookahead == 'h') ADVANCE(189);
      if (lookahead == 'o') ADVANCE(1365);
      if (lookahead == 'u') ADVANCE(1062);
      if (lookahead == 'w') ADVANCE(232);
      END_STATE();
    case 324:
      if (lookahead == 'c') ADVANCE(766);
      END_STATE();
    case 325:
      if (lookahead == 'c') ADVANCE(480);
      if (lookahead == 't') ADVANCE(721);
      END_STATE();
    case 326:
      if (lookahead == 'c') ADVANCE(760);
      END_STATE();
    case 327:
      if (lookahead == 'c') ADVANCE(1381);
      if (lookahead == 'l') ADVANCE(810);
      if (lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 328:
      if (lookahead == 'c') ADVANCE(1352);
      END_STATE();
    case 329:
      if (lookahead == 'c') ADVANCE(769);
      END_STATE();
    case 330:
      if (lookahead == 'c') ADVANCE(762);
      END_STATE();
    case 331:
      if (lookahead == 'c') ADVANCE(763);
      END_STATE();
    case 332:
      if (lookahead == 'c') ADVANCE(669);
      END_STATE();
    case 333:
      if (lookahead == 'c') ADVANCE(660);
      END_STATE();
    case 334:
      if (lookahead == 'c') ADVANCE(442);
      END_STATE();
    case 335:
      if (lookahead == 'c') ADVANCE(1459);
      END_STATE();
    case 336:
      if (lookahead == 'c') ADVANCE(444);
      END_STATE();
    case 337:
      if (lookahead == 'c') ADVANCE(734);
      END_STATE();
    case 338:
      if (lookahead == 'c') ADVANCE(808);
      END_STATE();
    case 339:
      if (lookahead == 'c') ADVANCE(355);
      END_STATE();
    case 340:
      if (lookahead == 'c') ADVANCE(257);
      END_STATE();
    case 341:
      if (lookahead == 'c') ADVANCE(448);
      END_STATE();
    case 342:
      if (lookahead == 'c') ADVANCE(1130);
      END_STATE();
    case 343:
      if (lookahead == 'c') ADVANCE(223);
      END_STATE();
    case 344:
      if (lookahead == 'c') ADVANCE(1131);
      END_STATE();
    case 345:
      if (lookahead == 'c') ADVANCE(453);
      END_STATE();
    case 346:
      if (lookahead == 'c') ADVANCE(1177);
      END_STATE();
    case 347:
      if (lookahead == 'c') ADVANCE(584);
      END_STATE();
    case 348:
      if (lookahead == 'c') ADVANCE(466);
      END_STATE();
    case 349:
      if (lookahead == 'c') ADVANCE(469);
      END_STATE();
    case 350:
      if (lookahead == 'c') ADVANCE(768);
      END_STATE();
    case 351:
      if (lookahead == 'c') ADVANCE(1374);
      END_STATE();
    case 352:
      if (lookahead == 'c') ADVANCE(491);
      END_STATE();
    case 353:
      if (lookahead == 'c') ADVANCE(770);
      END_STATE();
    case 354:
      if (lookahead == 'c') ADVANCE(1394);
      END_STATE();
    case 355:
      if (lookahead == 'c') ADVANCE(510);
      END_STATE();
    case 356:
      if (lookahead == 'c') ADVANCE(1377);
      END_STATE();
    case 357:
      if (lookahead == 'c') ADVANCE(1302);
      END_STATE();
    case 358:
      if (lookahead == 'c') ADVANCE(1378);
      END_STATE();
    case 359:
      if (lookahead == 'c') ADVANCE(707);
      END_STATE();
    case 360:
      if (lookahead == 'c') ADVANCE(567);
      END_STATE();
    case 361:
      if (lookahead == 'c') ADVANCE(709);
      END_STATE();
    case 362:
      if (lookahead == 'c') ADVANCE(711);
      END_STATE();
    case 363:
      if (lookahead == 'c') ADVANCE(525);
      END_STATE();
    case 364:
      if (lookahead == 'c') ADVANCE(712);
      END_STATE();
    case 365:
      if (lookahead == 'c') ADVANCE(1386);
      END_STATE();
    case 366:
      if (lookahead == 'c') ADVANCE(559);
      END_STATE();
    case 367:
      if (lookahead == 'c') ADVANCE(1337);
      END_STATE();
    case 368:
      if (lookahead == 'c') ADVANCE(1013);
      END_STATE();
    case 369:
      if (lookahead == 'c') ADVANCE(1326);
      END_STATE();
    case 370:
      if (lookahead == 'c') ADVANCE(1342);
      END_STATE();
    case 371:
      if (lookahead == 'c') ADVANCE(1332);
      END_STATE();
    case 372:
      if (lookahead == 'c') ADVANCE(1346);
      END_STATE();
    case 373:
      if (lookahead == 'c') ADVANCE(1333);
      END_STATE();
    case 374:
      if (lookahead == 'c') ADVANCE(824);
      END_STATE();
    case 375:
      if (lookahead == 'c') ADVANCE(1348);
      END_STATE();
    case 376:
      if (lookahead == 'c') ADVANCE(1351);
      END_STATE();
    case 377:
      if (lookahead == 'c') ADVANCE(1398);
      END_STATE();
    case 378:
      if (lookahead == 'c') ADVANCE(1353);
      END_STATE();
    case 379:
      if (lookahead == 'd') ADVANCE(1615);
      END_STATE();
    case 380:
      if (lookahead == 'd') ADVANCE(1700);
      END_STATE();
    case 381:
      if (lookahead == 'd') ADVANCE(1601);
      END_STATE();
    case 382:
      if (lookahead == 'd') ADVANCE(1628);
      END_STATE();
    case 383:
      if (lookahead == 'd') ADVANCE(1629);
      END_STATE();
    case 384:
      if (lookahead == 'd') ADVANCE(1665);
      END_STATE();
    case 385:
      if (lookahead == 'd') ADVANCE(1653);
      END_STATE();
    case 386:
      if (lookahead == 'd') ADVANCE(1649);
      END_STATE();
    case 387:
      if (lookahead == 'd') ADVANCE(1670);
      END_STATE();
    case 388:
      if (lookahead == 'd') ADVANCE(1674);
      END_STATE();
    case 389:
      if (lookahead == 'd') ADVANCE(1642);
      END_STATE();
    case 390:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 391:
      if (lookahead == 'd') ADVANCE(399);
      if (lookahead == 'r') ADVANCE(1166);
      if (lookahead == 's') ADVANCE(319);
      END_STATE();
    case 392:
      if (lookahead == 'd') ADVANCE(399);
      if (lookahead == 's') ADVANCE(319);
      END_STATE();
    case 393:
      if (lookahead == 'd') ADVANCE(478);
      END_STATE();
    case 394:
      if (lookahead == 'd') ADVANCE(478);
      if (lookahead == 'g') ADVANCE(662);
      END_STATE();
    case 395:
      if (lookahead == 'd') ADVANCE(1156);
      END_STATE();
    case 396:
      if (lookahead == 'd') ADVANCE(1197);
      END_STATE();
    case 397:
      if (lookahead == 'd') ADVANCE(481);
      END_STATE();
    case 398:
      if (lookahead == 'd') ADVANCE(691);
      END_STATE();
    case 399:
      if (lookahead == 'd') ADVANCE(822);
      END_STATE();
    case 400:
      if (lookahead == 'd') ADVANCE(651);
      END_STATE();
    case 401:
      if (lookahead == 'd') ADVANCE(1064);
      END_STATE();
    case 402:
      if (lookahead == 'd') ADVANCE(951);
      END_STATE();
    case 403:
      if (lookahead == 'd') ADVANCE(720);
      END_STATE();
    case 404:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 405:
      if (lookahead == 'd') ADVANCE(548);
      if (lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 406:
      if (lookahead == 'd') ADVANCE(952);
      END_STATE();
    case 407:
      if (lookahead == 'd') ADVANCE(496);
      END_STATE();
    case 408:
      if (lookahead == 'd') ADVANCE(962);
      END_STATE();
    case 409:
      if (lookahead == 'd') ADVANCE(964);
      END_STATE();
    case 410:
      if (lookahead == 'd') ADVANCE(1135);
      END_STATE();
    case 411:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 412:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 413:
      if (lookahead == 'd') ADVANCE(1144);
      END_STATE();
    case 414:
      if (lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 415:
      if (lookahead == 'd') ADVANCE(502);
      END_STATE();
    case 416:
      if (lookahead == 'd') ADVANCE(1075);
      END_STATE();
    case 417:
      if (lookahead == 'd') ADVANCE(485);
      END_STATE();
    case 418:
      if (lookahead == 'd') ADVANCE(1009);
      END_STATE();
    case 419:
      if (lookahead == 'd') ADVANCE(553);
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 420:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 421:
      if (lookahead == 'd') ADVANCE(500);
      END_STATE();
    case 422:
      if (lookahead == 'd') ADVANCE(969);
      END_STATE();
    case 423:
      if (lookahead == 'd') ADVANCE(513);
      END_STATE();
    case 424:
      if (lookahead == 'd') ADVANCE(571);
      END_STATE();
    case 425:
      if (lookahead == 'd') ADVANCE(523);
      END_STATE();
    case 426:
      if (lookahead == 'd') ADVANCE(894);
      END_STATE();
    case 427:
      if (lookahead == 'd') ADVANCE(568);
      END_STATE();
    case 428:
      if (lookahead == 'd') ADVANCE(529);
      END_STATE();
    case 429:
      if (lookahead == 'd') ADVANCE(531);
      END_STATE();
    case 430:
      if (lookahead == 'd') ADVANCE(532);
      END_STATE();
    case 431:
      if (lookahead == 'd') ADVANCE(534);
      END_STATE();
    case 432:
      if (lookahead == 'd') ADVANCE(535);
      END_STATE();
    case 433:
      if (lookahead == 'd') ADVANCE(594);
      END_STATE();
    case 434:
      if (lookahead == 'd') ADVANCE(537);
      END_STATE();
    case 435:
      if (lookahead == 'd') ADVANCE(540);
      END_STATE();
    case 436:
      if (lookahead == 'd') ADVANCE(541);
      END_STATE();
    case 437:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 438:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 439:
      if (lookahead == 'e') ADVANCE(923);
      if (lookahead == 'g') ADVANCE(284);
      if (lookahead == 'o') ADVANCE(1357);
      END_STATE();
    case 440:
      if (lookahead == 'e') ADVANCE(1507);
      END_STATE();
    case 441:
      if (lookahead == 'e') ADVANCE(1508);
      END_STATE();
    case 442:
      if (lookahead == 'e') ADVANCE(1558);
      END_STATE();
    case 443:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 444:
      if (lookahead == 'e') ADVANCE(1686);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(1710);
      END_STATE();
    case 446:
      if (lookahead == 'e') ADVANCE(1622);
      END_STATE();
    case 447:
      if (lookahead == 'e') ADVANCE(1585);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(1685);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(1692);
      END_STATE();
    case 450:
      if (lookahead == 'e') ADVANCE(1444);
      if (lookahead == 'r') ADVANCE(557);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(1563);
      END_STATE();
    case 452:
      if (lookahead == 'e') ADVANCE(1624);
      END_STATE();
    case 453:
      if (lookahead == 'e') ADVANCE(1616);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(1598);
      END_STATE();
    case 455:
      if (lookahead == 'e') ADVANCE(1678);
      END_STATE();
    case 456:
      if (lookahead == 'e') ADVANCE(1631);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(1591);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(1597);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(1626);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(1634);
      END_STATE();
    case 461:
      if (lookahead == 'e') ADVANCE(1657);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(1595);
      END_STATE();
    case 463:
      if (lookahead == 'e') ADVANCE(1662);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(1663);
      END_STATE();
    case 465:
      if (lookahead == 'e') ADVANCE(1570);
      END_STATE();
    case 466:
      if (lookahead == 'e') ADVANCE(1636);
      END_STATE();
    case 467:
      if (lookahead == 'e') ADVANCE(1668);
      END_STATE();
    case 468:
      if (lookahead == 'e') ADVANCE(1666);
      END_STATE();
    case 469:
      if (lookahead == 'e') ADVANCE(1638);
      END_STATE();
    case 470:
      if (lookahead == 'e') ADVANCE(1709);
      END_STATE();
    case 471:
      if (lookahead == 'e') ADVANCE(1441);
      END_STATE();
    case 472:
      if (lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 473:
      if (lookahead == 'e') ADVANCE(1196);
      END_STATE();
    case 474:
      if (lookahead == 'e') ADVANCE(318);
      if (lookahead == 't') ADVANCE(549);
      END_STATE();
    case 475:
      if (lookahead == 'e') ADVANCE(1467);
      END_STATE();
    case 476:
      if (lookahead == 'e') ADVANCE(1442);
      END_STATE();
    case 477:
      if (lookahead == 'e') ADVANCE(940);
      END_STATE();
    case 478:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 479:
      if (lookahead == 'e') ADVANCE(1275);
      END_STATE();
    case 480:
      if (lookahead == 'e') ADVANCE(828);
      END_STATE();
    case 481:
      if (lookahead == 'e') ADVANCE(1063);
      END_STATE();
    case 482:
      if (lookahead == 'e') ADVANCE(1119);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(856);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(1456);
      END_STATE();
    case 485:
      if (lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 486:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 487:
      if (lookahead == 'e') ADVANCE(477);
      if (lookahead == 'o') ADVANCE(788);
      END_STATE();
    case 488:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 489:
      if (lookahead == 'e') ADVANCE(1423);
      END_STATE();
    case 490:
      if (lookahead == 'e') ADVANCE(1160);
      END_STATE();
    case 491:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 492:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 493:
      if (lookahead == 'e') ADVANCE(1121);
      END_STATE();
    case 494:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 495:
      if (lookahead == 'e') ADVANCE(1199);
      if (lookahead == 'r') ADVANCE(1702);
      END_STATE();
    case 496:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 497:
      if (lookahead == 'e') ADVANCE(878);
      END_STATE();
    case 498:
      if (lookahead == 'e') ADVANCE(1096);
      if (lookahead == 'o') ADVANCE(1364);
      END_STATE();
    case 499:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 500:
      if (lookahead == 'e') ADVANCE(1164);
      END_STATE();
    case 501:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 502:
      if (lookahead == 'e') ADVANCE(774);
      END_STATE();
    case 503:
      if (lookahead == 'e') ADVANCE(1201);
      END_STATE();
    case 504:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 505:
      if (lookahead == 'e') ADVANCE(1202);
      END_STATE();
    case 506:
      if (lookahead == 'e') ADVANCE(624);
      END_STATE();
    case 507:
      if (lookahead == 'e') ADVANCE(1312);
      END_STATE();
    case 508:
      if (lookahead == 'e') ADVANCE(914);
      END_STATE();
    case 509:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 510:
      if (lookahead == 'e') ADVANCE(776);
      END_STATE();
    case 511:
      if (lookahead == 'e') ADVANCE(1136);
      END_STATE();
    case 512:
      if (lookahead == 'e') ADVANCE(1204);
      END_STATE();
    case 513:
      if (lookahead == 'e') ADVANCE(1129);
      END_STATE();
    case 514:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 515:
      if (lookahead == 'e') ADVANCE(1282);
      END_STATE();
    case 516:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 517:
      if (lookahead == 'e') ADVANCE(561);
      END_STATE();
    case 518:
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(971);
      END_STATE();
    case 519:
      if (lookahead == 'e') ADVANCE(1208);
      END_STATE();
    case 520:
      if (lookahead == 'e') ADVANCE(1237);
      END_STATE();
    case 521:
      if (lookahead == 'e') ADVANCE(1270);
      END_STATE();
    case 522:
      if (lookahead == 'e') ADVANCE(1211);
      END_STATE();
    case 523:
      if (lookahead == 'e') ADVANCE(1178);
      END_STATE();
    case 524:
      if (lookahead == 'e') ADVANCE(1212);
      END_STATE();
    case 525:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 526:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 527:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 528:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 529:
      if (lookahead == 'e') ADVANCE(1099);
      END_STATE();
    case 530:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 531:
      if (lookahead == 'e') ADVANCE(1162);
      END_STATE();
    case 532:
      if (lookahead == 'e') ADVANCE(1101);
      END_STATE();
    case 533:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 534:
      if (lookahead == 'e') ADVANCE(1102);
      END_STATE();
    case 535:
      if (lookahead == 'e') ADVANCE(1103);
      END_STATE();
    case 536:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 537:
      if (lookahead == 'e') ADVANCE(1105);
      END_STATE();
    case 538:
      if (lookahead == 'e') ADVANCE(1106);
      END_STATE();
    case 539:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 540:
      if (lookahead == 'e') ADVANCE(1108);
      END_STATE();
    case 541:
      if (lookahead == 'e') ADVANCE(1173);
      END_STATE();
    case 542:
      if (lookahead == 'e') ADVANCE(1141);
      END_STATE();
    case 543:
      if (lookahead == 'e') ADVANCE(1109);
      END_STATE();
    case 544:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 545:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 546:
      if (lookahead == 'e') ADVANCE(1230);
      END_STATE();
    case 547:
      if (lookahead == 'e') ADVANCE(1145);
      END_STATE();
    case 548:
      if (lookahead == 'e') ADVANCE(1415);
      END_STATE();
    case 549:
      if (lookahead == 'e') ADVANCE(880);
      END_STATE();
    case 550:
      if (lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 551:
      if (lookahead == 'e') ADVANCE(909);
      END_STATE();
    case 552:
      if (lookahead == 'e') ADVANCE(616);
      END_STATE();
    case 553:
      if (lookahead == 'e') ADVANCE(794);
      END_STATE();
    case 554:
      if (lookahead == 'e') ADVANCE(896);
      END_STATE();
    case 555:
      if (lookahead == 'e') ADVANCE(1146);
      END_STATE();
    case 556:
      if (lookahead == 'e') ADVANCE(1233);
      END_STATE();
    case 557:
      if (lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 558:
      if (lookahead == 'e') ADVANCE(796);
      END_STATE();
    case 559:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 560:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 561:
      if (lookahead == 'e') ADVANCE(938);
      END_STATE();
    case 562:
      if (lookahead == 'e') ADVANCE(1151);
      END_STATE();
    case 563:
      if (lookahead == 'e') ADVANCE(1147);
      END_STATE();
    case 564:
      if (lookahead == 'e') ADVANCE(920);
      END_STATE();
    case 565:
      if (lookahead == 'e') ADVANCE(647);
      END_STATE();
    case 566:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 567:
      if (lookahead == 'e') ADVANCE(805);
      END_STATE();
    case 568:
      if (lookahead == 'e') ADVANCE(1150);
      END_STATE();
    case 569:
      if (lookahead == 'e') ADVANCE(1236);
      END_STATE();
    case 570:
      if (lookahead == 'e') ADVANCE(1429);
      END_STATE();
    case 571:
      if (lookahead == 'e') ADVANCE(801);
      END_STATE();
    case 572:
      if (lookahead == 'e') ADVANCE(1154);
      END_STATE();
    case 573:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 574:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 575:
      if (lookahead == 'e') ADVANCE(1243);
      END_STATE();
    case 576:
      if (lookahead == 'e') ADVANCE(1252);
      END_STATE();
    case 577:
      if (lookahead == 'e') ADVANCE(903);
      END_STATE();
    case 578:
      if (lookahead == 'e') ADVANCE(1244);
      END_STATE();
    case 579:
      if (lookahead == 'e') ADVANCE(1253);
      END_STATE();
    case 580:
      if (lookahead == 'e') ADVANCE(1245);
      END_STATE();
    case 581:
      if (lookahead == 'e') ADVANCE(1261);
      END_STATE();
    case 582:
      if (lookahead == 'e') ADVANCE(612);
      END_STATE();
    case 583:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 584:
      if (lookahead == 'e') ADVANCE(1079);
      END_STATE();
    case 585:
      if (lookahead == 'e') ADVANCE(1318);
      END_STATE();
    case 586:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 587:
      if (lookahead == 'e') ADVANCE(1024);
      END_STATE();
    case 588:
      if (lookahead == 'e') ADVANCE(1414);
      END_STATE();
    case 589:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 590:
      if (lookahead == 'e') ADVANCE(933);
      END_STATE();
    case 591:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 592:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 593:
      if (lookahead == 'e') ADVANCE(936);
      if (lookahead == 'f') ADVANCE(1010);
      END_STATE();
    case 594:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 595:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 596:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 597:
      if (lookahead == 'f') ADVANCE(1513);
      END_STATE();
    case 598:
      if (lookahead == 'f') ADVANCE(597);
      if (lookahead == 'n') ADVANCE(1512);
      END_STATE();
    case 599:
      if (lookahead == 'f') ADVANCE(597);
      if (lookahead == 'n') ADVANCE(1512);
      if (lookahead == 'u') ADVANCE(1289);
      if (lookahead == 'v') ADVANCE(482);
      END_STATE();
    case 600:
      if (lookahead == 'f') ADVANCE(1291);
      END_STATE();
    case 601:
      if (lookahead == 'f') ADVANCE(1091);
      if (lookahead == 'r') ADVANCE(1092);
      END_STATE();
    case 602:
      if (lookahead == 'f') ADVANCE(729);
      if (lookahead == 'l') ADVANCE(186);
      if (lookahead == 'm') ADVANCE(999);
      if (lookahead == 'o') ADVANCE(1073);
      if (lookahead == 'r') ADVANCE(1368);
      if (lookahead == 'v') ADVANCE(219);
      END_STATE();
    case 603:
      if (lookahead == 'f') ADVANCE(615);
      END_STATE();
    case 604:
      if (lookahead == 'f') ADVANCE(693);
      END_STATE();
    case 605:
      if (lookahead == 'f') ADVANCE(1046);
      END_STATE();
    case 606:
      if (lookahead == 'f') ADVANCE(817);
      END_STATE();
    case 607:
      if (lookahead == 'f') ADVANCE(207);
      END_STATE();
    case 608:
      if (lookahead == 'f') ADVANCE(475);
      END_STATE();
    case 609:
      if (lookahead == 'f') ADVANCE(511);
      END_STATE();
    case 610:
      if (lookahead == 'f') ADVANCE(1035);
      END_STATE();
    case 611:
      if (lookahead == 'f') ADVANCE(984);
      END_STATE();
    case 612:
      if (lookahead == 'f') ADVANCE(555);
      END_STATE();
    case 613:
      if (lookahead == 'f') ADVANCE(994);
      END_STATE();
    case 614:
      if (lookahead == 'f') ADVANCE(1033);
      END_STATE();
    case 615:
      if (lookahead == 'f') ADVANCE(1258);
      END_STATE();
    case 616:
      if (lookahead == 'f') ADVANCE(1004);
      END_STATE();
    case 617:
      if (lookahead == 'f') ADVANCE(742);
      END_STATE();
    case 618:
      if (lookahead == 'f') ADVANCE(255);
      END_STATE();
    case 619:
      if (lookahead == 'f') ADVANCE(1012);
      END_STATE();
    case 620:
      if (lookahead == 'f') ADVANCE(1016);
      END_STATE();
    case 621:
      if (lookahead == 'f') ADVANCE(146);
      END_STATE();
    case 622:
      if (lookahead == 'f') ADVANCE(277);
      if (lookahead == 'r') ADVANCE(692);
      END_STATE();
    case 623:
      if (lookahead == 'g') ADVANCE(284);
      END_STATE();
    case 624:
      if (lookahead == 'g') ADVANCE(1532);
      END_STATE();
    case 625:
      if (lookahead == 'g') ADVANCE(662);
      END_STATE();
    case 626:
      if (lookahead == 'g') ADVANCE(1557);
      END_STATE();
    case 627:
      if (lookahead == 'g') ADVANCE(1579);
      END_STATE();
    case 628:
      if (lookahead == 'g') ADVANCE(1612);
      END_STATE();
    case 629:
      if (lookahead == 'g') ADVANCE(1679);
      END_STATE();
    case 630:
      if (lookahead == 'g') ADVANCE(1604);
      END_STATE();
    case 631:
      if (lookahead == 'g') ADVANCE(1564);
      END_STATE();
    case 632:
      if (lookahead == 'g') ADVANCE(1644);
      END_STATE();
    case 633:
      if (lookahead == 'g') ADVANCE(1652);
      END_STATE();
    case 634:
      if (lookahead == 'g') ADVANCE(154);
      END_STATE();
    case 635:
      if (lookahead == 'g') ADVANCE(922);
      END_STATE();
    case 636:
      if (lookahead == 'g') ADVANCE(701);
      END_STATE();
    case 637:
      if (lookahead == 'g') ADVANCE(1293);
      END_STATE();
    case 638:
      if (lookahead == 'g') ADVANCE(1205);
      END_STATE();
    case 639:
      if (lookahead == 'g') ADVANCE(1209);
      END_STATE();
    case 640:
      if (lookahead == 'g') ADVANCE(948);
      END_STATE();
    case 641:
      if (lookahead == 'g') ADVANCE(1171);
      if (lookahead == 't') ADVANCE(754);
      END_STATE();
    case 642:
      if (lookahead == 'g') ADVANCE(85);
      END_STATE();
    case 643:
      if (lookahead == 'g') ADVANCE(457);
      END_STATE();
    case 644:
      if (lookahead == 'g') ADVANCE(1217);
      END_STATE();
    case 645:
      if (lookahead == 'g') ADVANCE(471);
      END_STATE();
    case 646:
      if (lookahead == 'g') ADVANCE(1140);
      END_STATE();
    case 647:
      if (lookahead == 'g') ADVANCE(476);
      END_STATE();
    case 648:
      if (lookahead == 'g') ADVANCE(653);
      END_STATE();
    case 649:
      if (lookahead == 'g') ADVANCE(1194);
      END_STATE();
    case 650:
      if (lookahead == 'g') ADVANCE(504);
      END_STATE();
    case 651:
      if (lookahead == 'g') ADVANCE(519);
      END_STATE();
    case 652:
      if (lookahead == 'g') ADVANCE(563);
      END_STATE();
    case 653:
      if (lookahead == 'g') ADVANCE(717);
      END_STATE();
    case 654:
      if (lookahead == 'g') ADVANCE(547);
      END_STATE();
    case 655:
      if (lookahead == 'g') ADVANCE(929);
      END_STATE();
    case 656:
      if (lookahead == 'h') ADVANCE(405);
      END_STATE();
    case 657:
      if (lookahead == 'h') ADVANCE(1704);
      END_STATE();
    case 658:
      if (lookahead == 'h') ADVANCE(1599);
      END_STATE();
    case 659:
      if (lookahead == 'h') ADVANCE(1681);
      END_STATE();
    case 660:
      if (lookahead == 'h') ADVANCE(1659);
      END_STATE();
    case 661:
      if (lookahead == 'h') ADVANCE(1672);
      END_STATE();
    case 662:
      if (lookahead == 'h') ADVANCE(1095);
      END_STATE();
    case 663:
      if (lookahead == 'h') ADVANCE(205);
      END_STATE();
    case 664:
      if (lookahead == 'h') ADVANCE(997);
      END_STATE();
    case 665:
      if (lookahead == 'h') ADVANCE(972);
      END_STATE();
    case 666:
      if (lookahead == 'h') ADVANCE(573);
      END_STATE();
    case 667:
      if (lookahead == 'h') ADVANCE(245);
      END_STATE();
    case 668:
      if (lookahead == 'h') ADVANCE(979);
      END_STATE();
    case 669:
      if (lookahead == 'h') ADVANCE(120);
      END_STATE();
    case 670:
      if (lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 671:
      if (lookahead == 'h') ADVANCE(200);
      END_STATE();
    case 672:
      if (lookahead == 'h') ADVANCE(750);
      END_STATE();
    case 673:
      if (lookahead == 'h') ADVANCE(240);
      END_STATE();
    case 674:
      if (lookahead == 'h') ADVANCE(272);
      END_STATE();
    case 675:
      if (lookahead == 'h') ADVANCE(577);
      END_STATE();
    case 676:
      if (lookahead == 'i') ADVANCE(865);
      if (lookahead == 'l') ADVANCE(1362);
      if (lookahead == 'o') ADVANCE(1114);
      END_STATE();
    case 677:
      if (lookahead == 'i') ADVANCE(865);
      if (lookahead == 'l') ADVANCE(1362);
      if (lookahead == 'o') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1525);
      END_STATE();
    case 678:
      if (lookahead == 'i') ADVANCE(394);
      if (lookahead == 'o') ADVANCE(1405);
      END_STATE();
    case 679:
      if (lookahead == 'i') ADVANCE(322);
      END_STATE();
    case 680:
      if (lookahead == 'i') ADVANCE(1468);
      END_STATE();
    case 681:
      if (lookahead == 'i') ADVANCE(1408);
      END_STATE();
    case 682:
      if (lookahead == 'i') ADVANCE(844);
      END_STATE();
    case 683:
      if (lookahead == 'i') ADVANCE(1470);
      END_STATE();
    case 684:
      if (lookahead == 'i') ADVANCE(1406);
      END_STATE();
    case 685:
      if (lookahead == 'i') ADVANCE(635);
      if (lookahead == 'n') ADVANCE(570);
      if (lookahead == 'p') ADVANCE(250);
      if (lookahead == 's') ADVANCE(722);
      if (lookahead == 'x') ADVANCE(1125);
      END_STATE();
    case 686:
      if (lookahead == 'i') ADVANCE(1469);
      END_STATE();
    case 687:
      if (lookahead == 'i') ADVANCE(1327);
      END_STATE();
    case 688:
      if (lookahead == 'i') ADVANCE(849);
      END_STATE();
    case 689:
      if (lookahead == 'i') ADVANCE(866);
      if (lookahead == 'o') ADVANCE(1370);
      END_STATE();
    case 690:
      if (lookahead == 'i') ADVANCE(847);
      END_STATE();
    case 691:
      if (lookahead == 'i') ADVANCE(873);
      END_STATE();
    case 692:
      if (lookahead == 'i') ADVANCE(636);
      END_STATE();
    case 693:
      if (lookahead == 'i') ADVANCE(876);
      END_STATE();
    case 694:
      if (lookahead == 'i') ADVANCE(1231);
      END_STATE();
    case 695:
      if (lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 696:
      if (lookahead == 'i') ADVANCE(1072);
      END_STATE();
    case 697:
      if (lookahead == 'i') ADVANCE(1014);
      END_STATE();
    case 698:
      if (lookahead == 'i') ADVANCE(1304);
      END_STATE();
    case 699:
      if (lookahead == 'i') ADVANCE(1339);
      END_STATE();
    case 700:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 701:
      if (lookahead == 'i') ADVANCE(384);
      END_STATE();
    case 702:
      if (lookahead == 'i') ADVANCE(874);
      END_STATE();
    case 703:
      if (lookahead == 'i') ADVANCE(1292);
      END_STATE();
    case 704:
      if (lookahead == 'i') ADVANCE(625);
      END_STATE();
    case 705:
      if (lookahead == 'i') ADVANCE(1126);
      END_STATE();
    case 706:
      if (lookahead == 'i') ADVANCE(883);
      END_STATE();
    case 707:
      if (lookahead == 'i') ADVANCE(1294);
      END_STATE();
    case 708:
      if (lookahead == 'i') ADVANCE(887);
      END_STATE();
    case 709:
      if (lookahead == 'i') ADVANCE(1297);
      END_STATE();
    case 710:
      if (lookahead == 'i') ADVANCE(888);
      END_STATE();
    case 711:
      if (lookahead == 'i') ADVANCE(1301);
      END_STATE();
    case 712:
      if (lookahead == 'i') ADVANCE(1303);
      END_STATE();
    case 713:
      if (lookahead == 'i') ADVANCE(912);
      END_STATE();
    case 714:
      if (lookahead == 'i') ADVANCE(1238);
      END_STATE();
    case 715:
      if (lookahead == 'i') ADVANCE(891);
      END_STATE();
    case 716:
      if (lookahead == 'i') ADVANCE(949);
      END_STATE();
    case 717:
      if (lookahead == 'i') ADVANCE(892);
      END_STATE();
    case 718:
      if (lookahead == 'i') ADVANCE(864);
      if (lookahead == 'l') ADVANCE(1362);
      if (lookahead == 'o') ADVANCE(1114);
      END_STATE();
    case 719:
      if (lookahead == 'i') ADVANCE(1272);
      END_STATE();
    case 720:
      if (lookahead == 'i') ADVANCE(554);
      END_STATE();
    case 721:
      if (lookahead == 'i') ADVANCE(1407);
      END_STATE();
    case 722:
      if (lookahead == 'i') ADVANCE(1464);
      END_STATE();
    case 723:
      if (lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 724:
      if (lookahead == 'i') ADVANCE(918);
      END_STATE();
    case 725:
      if (lookahead == 'i') ADVANCE(973);
      END_STATE();
    case 726:
      if (lookahead == 'i') ADVANCE(1465);
      END_STATE();
    case 727:
      if (lookahead == 'i') ADVANCE(1299);
      END_STATE();
    case 728:
      if (lookahead == 'i') ADVANCE(853);
      END_STATE();
    case 729:
      if (lookahead == 'i') ADVANCE(790);
      END_STATE();
    case 730:
      if (lookahead == 'i') ADVANCE(976);
      END_STATE();
    case 731:
      if (lookahead == 'i') ADVANCE(1402);
      END_STATE();
    case 732:
      if (lookahead == 'i') ADVANCE(1466);
      END_STATE();
    case 733:
      if (lookahead == 'i') ADVANCE(854);
      END_STATE();
    case 734:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 735:
      if (lookahead == 'i') ADVANCE(1403);
      END_STATE();
    case 736:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 737:
      if (lookahead == 'i') ADVANCE(433);
      END_STATE();
    case 738:
      if (lookahead == 'i') ADVANCE(345);
      END_STATE();
    case 739:
      if (lookahead == 'i') ADVANCE(1404);
      END_STATE();
    case 740:
      if (lookahead == 'i') ADVANCE(393);
      if (lookahead == 'o') ADVANCE(1405);
      END_STATE();
    case 741:
      if (lookahead == 'i') ADVANCE(913);
      END_STATE();
    case 742:
      if (lookahead == 'i') ADVANCE(803);
      END_STATE();
    case 743:
      if (lookahead == 'i') ADVANCE(917);
      END_STATE();
    case 744:
      if (lookahead == 'i') ADVANCE(985);
      END_STATE();
    case 745:
      if (lookahead == 'i') ADVANCE(910);
      END_STATE();
    case 746:
      if (lookahead == 'i') ADVANCE(993);
      END_STATE();
    case 747:
      if (lookahead == 'i') ADVANCE(924);
      if (lookahead == 'o') ADVANCE(1152);
      END_STATE();
    case 748:
      if (lookahead == 'i') ADVANCE(1019);
      END_STATE();
    case 749:
      if (lookahead == 'i') ADVANCE(1409);
      END_STATE();
    case 750:
      if (lookahead == 'i') ADVANCE(826);
      END_STATE();
    case 751:
      if (lookahead == 'i') ADVANCE(1411);
      END_STATE();
    case 752:
      if (lookahead == 'i') ADVANCE(1336);
      END_STATE();
    case 753:
      if (lookahead == 'i') ADVANCE(1030);
      END_STATE();
    case 754:
      if (lookahead == 'i') ADVANCE(1343);
      END_STATE();
    case 755:
      if (lookahead == 'i') ADVANCE(655);
      if (lookahead == 'o') ADVANCE(603);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == 's') ADVANCE(340);
      END_STATE();
    case 756:
      if (lookahead == 'i') ADVANCE(1416);
      END_STATE();
    case 757:
      if (lookahead == 'i') ADVANCE(937);
      END_STATE();
    case 758:
      if (lookahead == 'i') ADVANCE(941);
      if (lookahead == 'z') ADVANCE(978);
      END_STATE();
    case 759:
      if (lookahead == 'i') ADVANCE(1417);
      END_STATE();
    case 760:
      if (lookahead == 'k') ADVANCE(1611);
      END_STATE();
    case 761:
      if (lookahead == 'k') ADVANCE(1676);
      END_STATE();
    case 762:
      if (lookahead == 'k') ADVANCE(1610);
      END_STATE();
    case 763:
      if (lookahead == 'k') ADVANCE(1574);
      END_STATE();
    case 764:
      if (lookahead == 'k') ADVANCE(604);
      END_STATE();
    case 765:
      if (lookahead == 'k') ADVANCE(1227);
      END_STATE();
    case 766:
      if (lookahead == 'k') ADVANCE(81);
      END_STATE();
    case 767:
      if (lookahead == 'k') ADVANCE(484);
      END_STATE();
    case 768:
      if (lookahead == 'k') ADVANCE(142);
      END_STATE();
    case 769:
      if (lookahead == 'k') ADVANCE(706);
      END_STATE();
    case 770:
      if (lookahead == 'k') ADVANCE(149);
      END_STATE();
    case 771:
      if (lookahead == 'k') ADVANCE(1273);
      END_STATE();
    case 772:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 773:
      if (lookahead == 'l') ADVANCE(1548);
      END_STATE();
    case 774:
      if (lookahead == 'l') ADVANCE(1617);
      END_STATE();
    case 775:
      if (lookahead == 'l') ADVANCE(1600);
      END_STATE();
    case 776:
      if (lookahead == 'l') ADVANCE(1627);
      END_STATE();
    case 777:
      if (lookahead == 'l') ADVANCE(1605);
      END_STATE();
    case 778:
      if (lookahead == 'l') ADVANCE(955);
      if (lookahead == 'o') ADVANCE(327);
      if (lookahead == 'u') ADVANCE(783);
      END_STATE();
    case 779:
      if (lookahead == 'l') ADVANCE(679);
      if (lookahead == 'o') ADVANCE(772);
      if (lookahead == 'u') ADVANCE(1115);
      END_STATE();
    case 780:
      if (lookahead == 'l') ADVANCE(679);
      if (lookahead == 'o') ADVANCE(772);
      if (lookahead == 'u') ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1525);
      END_STATE();
    case 781:
      if (lookahead == 'l') ADVANCE(945);
      if (lookahead == 'w') ADVANCE(183);
      END_STATE();
    case 782:
      if (lookahead == 'l') ADVANCE(1290);
      END_STATE();
    case 783:
      if (lookahead == 'l') ADVANCE(785);
      END_STATE();
    case 784:
      if (lookahead == 'l') ADVANCE(996);
      END_STATE();
    case 785:
      if (lookahead == 'l') ADVANCE(1223);
      END_STATE();
    case 786:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 787:
      if (lookahead == 'l') ADVANCE(443);
      END_STATE();
    case 788:
      if (lookahead == 'l') ADVANCE(793);
      END_STATE();
    case 789:
      if (lookahead == 'l') ADVANCE(445);
      END_STATE();
    case 790:
      if (lookahead == 'l') ADVANCE(446);
      END_STATE();
    case 791:
      if (lookahead == 'l') ADVANCE(811);
      END_STATE();
    case 792:
      if (lookahead == 'l') ADVANCE(777);
      END_STATE();
    case 793:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 794:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 795:
      if (lookahead == 'l') ADVANCE(958);
      END_STATE();
    case 796:
      if (lookahead == 'l') ADVANCE(1026);
      END_STATE();
    case 797:
      if (lookahead == 'l') ADVANCE(449);
      END_STATE();
    case 798:
      if (lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 799:
      if (lookahead == 'l') ADVANCE(970);
      END_STATE();
    case 800:
      if (lookahead == 'l') ADVANCE(1284);
      END_STATE();
    case 801:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 802:
      if (lookahead == 'l') ADVANCE(458);
      END_STATE();
    case 803:
      if (lookahead == 'l') ADVANCE(459);
      END_STATE();
    case 804:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 805:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 806:
      if (lookahead == 'l') ADVANCE(470);
      END_STATE();
    case 807:
      if (lookahead == 'l') ADVANCE(1457);
      END_STATE();
    case 808:
      if (lookahead == 'l') ADVANCE(736);
      END_STATE();
    case 809:
      if (lookahead == 'l') ADVANCE(1226);
      END_STATE();
    case 810:
      if (lookahead == 'l') ADVANCE(998);
      END_STATE();
    case 811:
      if (lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 812:
      if (lookahead == 'l') ADVANCE(795);
      END_STATE();
    case 813:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 814:
      if (lookahead == 'l') ADVANCE(702);
      END_STATE();
    case 815:
      if (lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 816:
      if (lookahead == 'l') ADVANCE(1002);
      END_STATE();
    case 817:
      if (lookahead == 'l') ADVANCE(1039);
      END_STATE();
    case 818:
      if (lookahead == 'l') ADVANCE(505);
      END_STATE();
    case 819:
      if (lookahead == 'l') ADVANCE(1011);
      END_STATE();
    case 820:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 821:
      if (lookahead == 'l') ADVANCE(1018);
      END_STATE();
    case 822:
      if (lookahead == 'l') ADVANCE(509);
      END_STATE();
    case 823:
      if (lookahead == 'l') ADVANCE(575);
      END_STATE();
    case 824:
      if (lookahead == 'l') ADVANCE(522);
      END_STATE();
    case 825:
      if (lookahead == 'l') ADVANCE(530);
      END_STATE();
    case 826:
      if (lookahead == 'l') ADVANCE(536);
      END_STATE();
    case 827:
      if (lookahead == 'l') ADVANCE(545);
      END_STATE();
    case 828:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 829:
      if (lookahead == 'l') ADVANCE(819);
      END_STATE();
    case 830:
      if (lookahead == 'l') ADVANCE(1008);
      END_STATE();
    case 831:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 832:
      if (lookahead == 'l') ADVANCE(576);
      END_STATE();
    case 833:
      if (lookahead == 'l') ADVANCE(821);
      END_STATE();
    case 834:
      if (lookahead == 'l') ADVANCE(1027);
      END_STATE();
    case 835:
      if (lookahead == 'l') ADVANCE(578);
      END_STATE();
    case 836:
      if (lookahead == 'l') ADVANCE(579);
      END_STATE();
    case 837:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 838:
      if (lookahead == 'm') ADVANCE(1613);
      END_STATE();
    case 839:
      if (lookahead == 'm') ADVANCE(273);
      END_STATE();
    case 840:
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 841:
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 842:
      if (lookahead == 'm') ADVANCE(180);
      END_STATE();
    case 843:
      if (lookahead == 'm') ADVANCE(784);
      END_STATE();
    case 844:
      if (lookahead == 'm') ADVANCE(198);
      END_STATE();
    case 845:
      if (lookahead == 'm') ADVANCE(299);
      END_STATE();
    case 846:
      if (lookahead == 'm') ADVANCE(1040);
      if (lookahead == 'r') ADVANCE(552);
      END_STATE();
    case 847:
      if (lookahead == 'm') ADVANCE(683);
      END_STATE();
    case 848:
      if (lookahead == 'm') ADVANCE(202);
      END_STATE();
    case 849:
      if (lookahead == 'm') ADVANCE(455);
      END_STATE();
    case 850:
      if (lookahead == 'm') ADVANCE(1214);
      END_STATE();
    case 851:
      if (lookahead == 'm') ADVANCE(1215);
      END_STATE();
    case 852:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 853:
      if (lookahead == 'm') ADVANCE(587);
      END_STATE();
    case 854:
      if (lookahead == 'm') ADVANCE(463);
      END_STATE();
    case 855:
      if (lookahead == 'm') ADVANCE(1083);
      END_STATE();
    case 856:
      if (lookahead == 'm') ADVANCE(1373);
      END_STATE();
    case 857:
      if (lookahead == 'm') ADVANCE(965);
      END_STATE();
    case 858:
      if (lookahead == 'm') ADVANCE(982);
      END_STATE();
    case 859:
      if (lookahead == 'm') ADVANCE(585);
      END_STATE();
    case 860:
      if (lookahead == 'm') ADVANCE(1034);
      END_STATE();
    case 861:
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == 'x') ADVANCE(474);
      END_STATE();
    case 862:
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == 'x') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1525);
      END_STATE();
    case 863:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 864:
      if (lookahead == 'n') ADVANCE(396);
      END_STATE();
    case 865:
      if (lookahead == 'n') ADVANCE(396);
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 866:
      if (lookahead == 'n') ADVANCE(1565);
      END_STATE();
    case 867:
      if (lookahead == 'n') ADVANCE(1552);
      END_STATE();
    case 868:
      if (lookahead == 'n') ADVANCE(1551);
      END_STATE();
    case 869:
      if (lookahead == 'n') ADVANCE(1630);
      END_STATE();
    case 870:
      if (lookahead == 'n') ADVANCE(1607);
      END_STATE();
    case 871:
      if (lookahead == 'n') ADVANCE(1224);
      END_STATE();
    case 872:
      if (lookahead == 'n') ADVANCE(687);
      if (lookahead == 'u') ADVANCE(1255);
      END_STATE();
    case 873:
      if (lookahead == 'n') ADVANCE(627);
      END_STATE();
    case 874:
      if (lookahead == 'n') ADVANCE(761);
      END_STATE();
    case 875:
      if (lookahead == 'n') ADVANCE(1247);
      END_STATE();
    case 876:
      if (lookahead == 'n') ADVANCE(652);
      END_STATE();
    case 877:
      if (lookahead == 'n') ADVANCE(398);
      END_STATE();
    case 878:
      if (lookahead == 'n') ADVANCE(637);
      END_STATE();
    case 879:
      if (lookahead == 'n') ADVANCE(1363);
      END_STATE();
    case 880:
      if (lookahead == 'n') ADVANCE(404);
      END_STATE();
    case 881:
      if (lookahead == 'n') ADVANCE(1221);
      END_STATE();
    case 882:
      if (lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 883:
      if (lookahead == 'n') ADVANCE(629);
      END_STATE();
    case 884:
      if (lookahead == 'n') ADVANCE(381);
      END_STATE();
    case 885:
      if (lookahead == 'n') ADVANCE(983);
      END_STATE();
    case 886:
      if (lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 887:
      if (lookahead == 'n') ADVANCE(630);
      END_STATE();
    case 888:
      if (lookahead == 'n') ADVANCE(631);
      END_STATE();
    case 889:
      if (lookahead == 'n') ADVANCE(1281);
      END_STATE();
    case 890:
      if (lookahead == 'n') ADVANCE(437);
      END_STATE();
    case 891:
      if (lookahead == 'n') ADVANCE(632);
      END_STATE();
    case 892:
      if (lookahead == 'n') ADVANCE(633);
      END_STATE();
    case 893:
      if (lookahead == 'n') ADVANCE(1203);
      END_STATE();
    case 894:
      if (lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 895:
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 896:
      if (lookahead == 'n') ADVANCE(1306);
      END_STATE();
    case 897:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 898:
      if (lookahead == 'n') ADVANCE(1213);
      END_STATE();
    case 899:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 900:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 901:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 902:
      if (lookahead == 'n') ADVANCE(464);
      END_STATE();
    case 903:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 904:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 905:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 906:
      if (lookahead == 'n') ADVANCE(489);
      END_STATE();
    case 907:
      if (lookahead == 'n') ADVANCE(490);
      if (lookahead == 's') ADVANCE(1322);
      END_STATE();
    case 908:
      if (lookahead == 'n') ADVANCE(643);
      END_STATE();
    case 909:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 910:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 911:
      if (lookahead == 'n') ADVANCE(407);
      END_STATE();
    case 912:
      if (lookahead == 'n') ADVANCE(644);
      END_STATE();
    case 913:
      if (lookahead == 'n') ADVANCE(408);
      END_STATE();
    case 914:
      if (lookahead == 'n') ADVANCE(1340);
      END_STATE();
    case 915:
      if (lookahead == 'n') ADVANCE(341);
      END_STATE();
    case 916:
      if (lookahead == 'n') ADVANCE(414);
      END_STATE();
    case 917:
      if (lookahead == 'n') ADVANCE(409);
      END_STATE();
    case 918:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 919:
      if (lookahead == 'n') ADVANCE(348);
      END_STATE();
    case 920:
      if (lookahead == 'n') ADVANCE(1241);
      END_STATE();
    case 921:
      if (lookahead == 'n') ADVANCE(713);
      END_STATE();
    case 922:
      if (lookahead == 'n') ADVANCE(987);
      END_STATE();
    case 923:
      if (lookahead == 'n') ADVANCE(423);
      if (lookahead == 'p') ADVANCE(583);
      if (lookahead == 's') ADVANCE(680);
      END_STATE();
    case 924:
      if (lookahead == 'n') ADVANCE(654);
      END_STATE();
    case 925:
      if (lookahead == 'n') ADVANCE(1387);
      END_STATE();
    case 926:
      if (lookahead == 'n') ADVANCE(360);
      END_STATE();
    case 927:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 928:
      if (lookahead == 'n') ADVANCE(1021);
      END_STATE();
    case 929:
      if (lookahead == 'n') ADVANCE(1036);
      END_STATE();
    case 930:
      if (lookahead == 'n') ADVANCE(1413);
      END_STATE();
    case 931:
      if (lookahead == 'n') ADVANCE(1341);
      END_STATE();
    case 932:
      if (lookahead == 'n') ADVANCE(429);
      END_STATE();
    case 933:
      if (lookahead == 'n') ADVANCE(436);
      END_STATE();
    case 934:
      if (lookahead == 'n') ADVANCE(752);
      END_STATE();
    case 935:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 936:
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 937:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 938:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 939:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 940:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 941:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 942:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 943:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 944:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 945:
      if (lookahead == 'o') ADVANCE(1424);
      END_STATE();
    case 946:
      if (lookahead == 'o') ADVANCE(1708);
      END_STATE();
    case 947:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 948:
      if (lookahead == 'o') ADVANCE(1643);
      END_STATE();
    case 949:
      if (lookahead == 'o') ADVANCE(1639);
      END_STATE();
    case 950:
      if (lookahead == 'o') ADVANCE(1510);
      END_STATE();
    case 951:
      if (lookahead == 'o') ADVANCE(1418);
      END_STATE();
    case 952:
      if (lookahead == 'o') ADVANCE(1419);
      END_STATE();
    case 953:
      if (lookahead == 'o') ADVANCE(1361);
      END_STATE();
    case 954:
      if (lookahead == 'o') ADVANCE(1093);
      END_STATE();
    case 955:
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 956:
      if (lookahead == 'o') ADVANCE(915);
      END_STATE();
    case 957:
      if (lookahead == 'o') ADVANCE(852);
      END_STATE();
    case 958:
      if (lookahead == 'o') ADVANCE(1420);
      END_STATE();
    case 959:
      if (lookahead == 'o') ADVANCE(638);
      END_STATE();
    case 960:
      if (lookahead == 'o') ADVANCE(1435);
      END_STATE();
    case 961:
      if (lookahead == 'o') ADVANCE(365);
      END_STATE();
    case 962:
      if (lookahead == 'o') ADVANCE(1432);
      END_STATE();
    case 963:
      if (lookahead == 'o') ADVANCE(1380);
      END_STATE();
    case 964:
      if (lookahead == 'o') ADVANCE(1422);
      END_STATE();
    case 965:
      if (lookahead == 'o') ADVANCE(1395);
      END_STATE();
    case 966:
      if (lookahead == 'o') ADVANCE(1118);
      END_STATE();
    case 967:
      if (lookahead == 'o') ADVANCE(621);
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 968:
      if (lookahead == 'o') ADVANCE(897);
      if (lookahead == 'p') ADVANCE(1190);
      END_STATE();
    case 969:
      if (lookahead == 'o') ADVANCE(1385);
      END_STATE();
    case 970:
      if (lookahead == 'o') ADVANCE(640);
      END_STATE();
    case 971:
      if (lookahead == 'o') ADVANCE(867);
      END_STATE();
    case 972:
      if (lookahead == 'o') ADVANCE(383);
      END_STATE();
    case 973:
      if (lookahead == 'o') ADVANCE(868);
      END_STATE();
    case 974:
      if (lookahead == 'o') ADVANCE(1124);
      END_STATE();
    case 975:
      if (lookahead == 'o') ADVANCE(1097);
      END_STATE();
    case 976:
      if (lookahead == 'o') ADVANCE(939);
      END_STATE();
    case 977:
      if (lookahead == 'o') ADVANCE(869);
      END_STATE();
    case 978:
      if (lookahead == 'o') ADVANCE(957);
      END_STATE();
    case 979:
      if (lookahead == 'o') ADVANCE(388);
      END_STATE();
    case 980:
      if (lookahead == 'o') ADVANCE(1098);
      END_STATE();
    case 981:
      if (lookahead == 'o') ADVANCE(902);
      END_STATE();
    case 982:
      if (lookahead == 'o') ADVANCE(934);
      END_STATE();
    case 983:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 984:
      if (lookahead == 'o') ADVANCE(1116);
      END_STATE();
    case 985:
      if (lookahead == 'o') ADVANCE(870);
      END_STATE();
    case 986:
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 987:
      if (lookahead == 'o') ADVANCE(1193);
      END_STATE();
    case 988:
      if (lookahead == 'o') ADVANCE(1134);
      END_STATE();
    case 989:
      if (lookahead == 'o') ADVANCE(1169);
      END_STATE();
    case 990:
      if (lookahead == 'o') ADVANCE(1100);
      END_STATE();
    case 991:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 992:
      if (lookahead == 'o') ADVANCE(1104);
      END_STATE();
    case 993:
      if (lookahead == 'o') ADVANCE(1107);
      END_STATE();
    case 994:
      if (lookahead == 'o') ADVANCE(1143);
      END_STATE();
    case 995:
      if (lookahead == 'o') ADVANCE(1111);
      END_STATE();
    case 996:
      if (lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 997:
      if (lookahead == 'o') ADVANCE(642);
      END_STATE();
    case 998:
      if (lookahead == 'o') ADVANCE(1437);
      END_STATE();
    case 999:
      if (lookahead == 'o') ADVANCE(415);
      END_STATE();
    case 1000:
      if (lookahead == 'o') ADVANCE(1372);
      END_STATE();
    case 1001:
      if (lookahead == 'o') ADVANCE(617);
      END_STATE();
    case 1002:
      if (lookahead == 'o') ADVANCE(639);
      END_STATE();
    case 1003:
      if (lookahead == 'o') ADVANCE(1068);
      END_STATE();
    case 1004:
      if (lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 1005:
      if (lookahead == 'o') ADVANCE(1067);
      END_STATE();
    case 1006:
      if (lookahead == 'o') ADVANCE(942);
      END_STATE();
    case 1007:
      if (lookahead == 'o') ADVANCE(1142);
      END_STATE();
    case 1008:
      if (lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 1009:
      if (lookahead == 'o') ADVANCE(1427);
      END_STATE();
    case 1010:
      if (lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 1011:
      if (lookahead == 'o') ADVANCE(1428);
      END_STATE();
    case 1012:
      if (lookahead == 'o') ADVANCE(356);
      END_STATE();
    case 1013:
      if (lookahead == 'o') ADVANCE(944);
      END_STATE();
    case 1014:
      if (lookahead == 'o') ADVANCE(893);
      END_STATE();
    case 1015:
      if (lookahead == 'o') ADVANCE(1371);
      END_STATE();
    case 1016:
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 1017:
      if (lookahead == 'o') ADVANCE(899);
      END_STATE();
    case 1018:
      if (lookahead == 'o') ADVANCE(1438);
      END_STATE();
    case 1019:
      if (lookahead == 'o') ADVANCE(898);
      END_STATE();
    case 1020:
      if (lookahead == 'o') ADVANCE(792);
      END_STATE();
    case 1021:
      if (lookahead == 'o') ADVANCE(1375);
      END_STATE();
    case 1022:
      if (lookahead == 'o') ADVANCE(900);
      END_STATE();
    case 1023:
      if (lookahead == 'o') ADVANCE(1155);
      END_STATE();
    case 1024:
      if (lookahead == 'o') ADVANCE(1376);
      END_STATE();
    case 1025:
      if (lookahead == 'o') ADVANCE(901);
      END_STATE();
    case 1026:
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 1027:
      if (lookahead == 'o') ADVANCE(353);
      END_STATE();
    case 1028:
      if (lookahead == 'o') ADVANCE(927);
      END_STATE();
    case 1029:
      if (lookahead == 'o') ADVANCE(904);
      END_STATE();
    case 1030:
      if (lookahead == 'o') ADVANCE(905);
      END_STATE();
    case 1031:
      if (lookahead == 'o') ADVANCE(1412);
      END_STATE();
    case 1032:
      if (lookahead == 'o') ADVANCE(1382);
      END_STATE();
    case 1033:
      if (lookahead == 'o') ADVANCE(1172);
      END_STATE();
    case 1034:
      if (lookahead == 'o') ADVANCE(1384);
      END_STATE();
    case 1035:
      if (lookahead == 'o') ADVANCE(931);
      END_STATE();
    case 1036:
      if (lookahead == 'o') ADVANCE(1191);
      END_STATE();
    case 1037:
      if (lookahead == 'o') ADVANCE(1084);
      END_STATE();
    case 1038:
      if (lookahead == 'o') ADVANCE(1388);
      END_STATE();
    case 1039:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 1040:
      if (lookahead == 'o') ADVANCE(1410);
      END_STATE();
    case 1041:
      if (lookahead == 'o') ADVANCE(1086);
      END_STATE();
    case 1042:
      if (lookahead == 'o') ADVANCE(1087);
      END_STATE();
    case 1043:
      if (lookahead == 'o') ADVANCE(1181);
      END_STATE();
    case 1044:
      if (lookahead == 'o') ADVANCE(1390);
      END_STATE();
    case 1045:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 1046:
      if (lookahead == 'o') ADVANCE(833);
      END_STATE();
    case 1047:
      if (lookahead == 'o') ADVANCE(1183);
      END_STATE();
    case 1048:
      if (lookahead == 'o') ADVANCE(1185);
      END_STATE();
    case 1049:
      if (lookahead == 'o') ADVANCE(1186);
      END_STATE();
    case 1050:
      if (lookahead == 'o') ADVANCE(1187);
      END_STATE();
    case 1051:
      if (lookahead == 'o') ADVANCE(1188);
      END_STATE();
    case 1052:
      if (lookahead == 'o') ADVANCE(1189);
      END_STATE();
    case 1053:
      if (lookahead == 'o') ADVANCE(1192);
      END_STATE();
    case 1054:
      if (lookahead == 'o') ADVANCE(1195);
      END_STATE();
    case 1055:
      if (lookahead == 'o') ADVANCE(943);
      END_STATE();
    case 1056:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 1057:
      if (lookahead == 'p') ADVANCE(1608);
      END_STATE();
    case 1058:
      if (lookahead == 'p') ADVANCE(807);
      END_STATE();
    case 1059:
      if (lookahead == 'p') ADVANCE(292);
      END_STATE();
    case 1060:
      if (lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 1061:
      if (lookahead == 'p') ADVANCE(1222);
      END_STATE();
    case 1062:
      if (lookahead == 'p') ADVANCE(1088);
      END_STATE();
    case 1063:
      if (lookahead == 'p') ADVANCE(1288);
      END_STATE();
    case 1064:
      if (lookahead == 'p') ADVANCE(850);
      END_STATE();
    case 1065:
      if (lookahead == 'p') ADVANCE(486);
      if (lookahead == 't') ADVANCE(1128);
      END_STATE();
    case 1066:
      if (lookahead == 'p') ADVANCE(264);
      END_STATE();
    case 1067:
      if (lookahead == 'p') ADVANCE(210);
      END_STATE();
    case 1068:
      if (lookahead == 'p') ADVANCE(1315);
      END_STATE();
    case 1069:
      if (lookahead == 'p') ADVANCE(1207);
      END_STATE();
    case 1070:
      if (lookahead == 'p') ADVANCE(960);
      END_STATE();
    case 1071:
      if (lookahead == 'p') ADVANCE(1123);
      END_STATE();
    case 1072:
      if (lookahead == 'p') ADVANCE(460);
      END_STATE();
    case 1073:
      if (lookahead == 'p') ADVANCE(1295);
      END_STATE();
    case 1074:
      if (lookahead == 'p') ADVANCE(1367);
      END_STATE();
    case 1075:
      if (lookahead == 'p') ADVANCE(851);
      END_STATE();
    case 1076:
      if (lookahead == 'p') ADVANCE(586);
      END_STATE();
    case 1077:
      if (lookahead == 'p') ADVANCE(815);
      END_STATE();
    case 1078:
      if (lookahead == 'p') ADVANCE(708);
      END_STATE();
    case 1079:
      if (lookahead == 'p') ADVANCE(1319);
      END_STATE();
    case 1080:
      if (lookahead == 'p') ADVANCE(988);
      END_STATE();
    case 1081:
      if (lookahead == 'p') ADVANCE(297);
      END_STATE();
    case 1082:
      if (lookahead == 'p') ADVANCE(1167);
      END_STATE();
    case 1083:
      if (lookahead == 'p') ADVANCE(825);
      END_STATE();
    case 1084:
      if (lookahead == 'p') ADVANCE(266);
      END_STATE();
    case 1085:
      if (lookahead == 'p') ADVANCE(1168);
      END_STATE();
    case 1086:
      if (lookahead == 'p') ADVANCE(270);
      END_STATE();
    case 1087:
      if (lookahead == 'p') ADVANCE(271);
      END_STATE();
    case 1088:
      if (lookahead == 'p') ADVANCE(1180);
      END_STATE();
    case 1089:
      if (lookahead == 'p') ADVANCE(269);
      END_STATE();
    case 1090:
      if (lookahead == 'p') ADVANCE(163);
      END_STATE();
    case 1091:
      if (lookahead == 'r') ADVANCE(1645);
      END_STATE();
    case 1092:
      if (lookahead == 'r') ADVANCE(1646);
      END_STATE();
    case 1093:
      if (lookahead == 'r') ADVANCE(765);
      END_STATE();
    case 1094:
      if (lookahead == 'r') ADVANCE(1584);
      END_STATE();
    case 1095:
      if (lookahead == 'r') ADVANCE(495);
      END_STATE();
    case 1096:
      if (lookahead == 'r') ADVANCE(1159);
      END_STATE();
    case 1097:
      if (lookahead == 'r') ADVANCE(1703);
      END_STATE();
    case 1098:
      if (lookahead == 'r') ADVANCE(1705);
      END_STATE();
    case 1099:
      if (lookahead == 'r') ADVANCE(1602);
      END_STATE();
    case 1100:
      if (lookahead == 'r') ADVANCE(1606);
      END_STATE();
    case 1101:
      if (lookahead == 'r') ADVANCE(1569);
      END_STATE();
    case 1102:
      if (lookahead == 'r') ADVANCE(1576);
      END_STATE();
    case 1103:
      if (lookahead == 'r') ADVANCE(1568);
      END_STATE();
    case 1104:
      if (lookahead == 'r') ADVANCE(1664);
      END_STATE();
    case 1105:
      if (lookahead == 'r') ADVANCE(1567);
      END_STATE();
    case 1106:
      if (lookahead == 'r') ADVANCE(1592);
      END_STATE();
    case 1107:
      if (lookahead == 'r') ADVANCE(1609);
      END_STATE();
    case 1108:
      if (lookahead == 'r') ADVANCE(1578);
      END_STATE();
    case 1109:
      if (lookahead == 'r') ADVANCE(1641);
      END_STATE();
    case 1110:
      if (lookahead == 'r') ADVANCE(1667);
      END_STATE();
    case 1111:
      if (lookahead == 'r') ADVANCE(1660);
      END_STATE();
    case 1112:
      if (lookahead == 'r') ADVANCE(487);
      END_STATE();
    case 1113:
      if (lookahead == 'r') ADVANCE(472);
      END_STATE();
    case 1114:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 1115:
      if (lookahead == 'r') ADVANCE(1254);
      END_STATE();
    case 1116:
      if (lookahead == 'r') ADVANCE(838);
      END_STATE();
    case 1117:
      if (lookahead == 'r') ADVANCE(1032);
      END_STATE();
    case 1118:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 1119:
      if (lookahead == 'r') ADVANCE(786);
      END_STATE();
    case 1120:
      if (lookahead == 'r') ADVANCE(700);
      END_STATE();
    case 1121:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 1122:
      if (lookahead == 'r') ADVANCE(1360);
      END_STATE();
    case 1123:
      if (lookahead == 'r') ADVANCE(1001);
      END_STATE();
    case 1124:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 1125:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 1126:
      if (lookahead == 'r') ADVANCE(492);
      END_STATE();
    case 1127:
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 1128:
      if (lookahead == 'r') ADVANCE(497);
      END_STATE();
    case 1129:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 1130:
      if (lookahead == 'r') ADVANCE(517);
      END_STATE();
    case 1131:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 1132:
      if (lookahead == 'r') ADVANCE(488);
      END_STATE();
    case 1133:
      if (lookahead == 'r') ADVANCE(737);
      END_STATE();
    case 1134:
      if (lookahead == 'r') ADVANCE(1329);
      END_STATE();
    case 1135:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 1136:
      if (lookahead == 'r') ADVANCE(1132);
      END_STATE();
    case 1137:
      if (lookahead == 'r') ADVANCE(921);
      END_STATE();
    case 1138:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 1139:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 1140:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 1141:
      if (lookahead == 'r') ADVANCE(1285);
      END_STATE();
    case 1142:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 1143:
      if (lookahead == 'r') ADVANCE(1298);
      END_STATE();
    case 1144:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 1145:
      if (lookahead == 'r') ADVANCE(1216);
      END_STATE();
    case 1146:
      if (lookahead == 'r') ADVANCE(1148);
      END_STATE();
    case 1147:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 1148:
      if (lookahead == 'r') ADVANCE(560);
      END_STATE();
    case 1149:
      if (lookahead == 'r') ADVANCE(590);
      END_STATE();
    case 1150:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 1151:
      if (lookahead == 'r') ADVANCE(1133);
      END_STATE();
    case 1152:
      if (lookahead == 'r') ADVANCE(588);
      END_STATE();
    case 1153:
      if (lookahead == 'r') ADVANCE(526);
      END_STATE();
    case 1154:
      if (lookahead == 'r') ADVANCE(516);
      END_STATE();
    case 1155:
      if (lookahead == 'r') ADVANCE(468);
      END_STATE();
    case 1156:
      if (lookahead == 'r') ADVANCE(546);
      END_STATE();
    case 1157:
      if (lookahead == 'r') ADVANCE(1069);
      END_STATE();
    case 1158:
      if (lookahead == 'r') ADVANCE(963);
      END_STATE();
    case 1159:
      if (lookahead == 'r') ADVANCE(1383);
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 1160:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 1161:
      if (lookahead == 'r') ADVANCE(503);
      END_STATE();
    case 1162:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 1163:
      if (lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 1164:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 1165:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 1166:
      if (lookahead == 'r') ADVANCE(975);
      END_STATE();
    case 1167:
      if (lookahead == 'r') ADVANCE(798);
      END_STATE();
    case 1168:
      if (lookahead == 'r') ADVANCE(581);
      END_STATE();
    case 1169:
      if (lookahead == 'r') ADVANCE(558);
      END_STATE();
    case 1170:
      if (lookahead == 'r') ADVANCE(420);
      END_STATE();
    case 1171:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 1172:
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 1173:
      if (lookahead == 'r') ADVANCE(715);
      END_STATE();
    case 1174:
      if (lookahead == 'r') ADVANCE(520);
      END_STATE();
    case 1175:
      if (lookahead == 'r') ADVANCE(521);
      END_STATE();
    case 1176:
      if (lookahead == 'r') ADVANCE(1262);
      END_STATE();
    case 1177:
      if (lookahead == 'r') ADVANCE(1020);
      END_STATE();
    case 1178:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 1179:
      if (lookahead == 'r') ADVANCE(565);
      END_STATE();
    case 1180:
      if (lookahead == 'r') ADVANCE(556);
      END_STATE();
    case 1181:
      if (lookahead == 'r') ADVANCE(425);
      END_STATE();
    case 1182:
      if (lookahead == 'r') ADVANCE(1263);
      END_STATE();
    case 1183:
      if (lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 1184:
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 1185:
      if (lookahead == 'r') ADVANCE(430);
      END_STATE();
    case 1186:
      if (lookahead == 'r') ADVANCE(431);
      END_STATE();
    case 1187:
      if (lookahead == 'r') ADVANCE(432);
      END_STATE();
    case 1188:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 1189:
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 1190:
      if (lookahead == 'r') ADVANCE(582);
      END_STATE();
    case 1191:
      if (lookahead == 'r') ADVANCE(591);
      END_STATE();
    case 1192:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 1193:
      if (lookahead == 'r') ADVANCE(592);
      END_STATE();
    case 1194:
      if (lookahead == 'r') ADVANCE(1044);
      END_STATE();
    case 1195:
      if (lookahead == 'r') ADVANCE(771);
      END_STATE();
    case 1196:
      if (lookahead == 's') ADVANCE(1509);
      END_STATE();
    case 1197:
      if (lookahead == 's') ADVANCE(1556);
      END_STATE();
    case 1198:
      if (lookahead == 's') ADVANCE(1688);
      END_STATE();
    case 1199:
      if (lookahead == 's') ADVANCE(1701);
      END_STATE();
    case 1200:
      if (lookahead == 's') ADVANCE(1300);
      END_STATE();
    case 1201:
      if (lookahead == 's') ADVANCE(1554);
      END_STATE();
    case 1202:
      if (lookahead == 's') ADVANCE(1621);
      END_STATE();
    case 1203:
      if (lookahead == 's') ADVANCE(1620);
      END_STATE();
    case 1204:
      if (lookahead == 's') ADVANCE(1586);
      END_STATE();
    case 1205:
      if (lookahead == 's') ADVANCE(1677);
      END_STATE();
    case 1206:
      if (lookahead == 's') ADVANCE(1632);
      END_STATE();
    case 1207:
      if (lookahead == 's') ADVANCE(1573);
      END_STATE();
    case 1208:
      if (lookahead == 's') ADVANCE(1580);
      END_STATE();
    case 1209:
      if (lookahead == 's') ADVANCE(1680);
      END_STATE();
    case 1210:
      if (lookahead == 's') ADVANCE(1669);
      END_STATE();
    case 1211:
      if (lookahead == 's') ADVANCE(1673);
      END_STATE();
    case 1212:
      if (lookahead == 's') ADVANCE(1651);
      END_STATE();
    case 1213:
      if (lookahead == 's') ADVANCE(1588);
      END_STATE();
    case 1214:
      if (lookahead == 's') ADVANCE(1648);
      END_STATE();
    case 1215:
      if (lookahead == 's') ADVANCE(1647);
      END_STATE();
    case 1216:
      if (lookahead == 's') ADVANCE(1635);
      END_STATE();
    case 1217:
      if (lookahead == 's') ADVANCE(1661);
      END_STATE();
    case 1218:
      if (lookahead == 's') ADVANCE(1650);
      END_STATE();
    case 1219:
      if (lookahead == 's') ADVANCE(1633);
      END_STATE();
    case 1220:
      if (lookahead == 's') ADVANCE(1431);
      END_STATE();
    case 1221:
      if (lookahead == 's') ADVANCE(611);
      END_STATE();
    case 1222:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 1223:
      if (lookahead == 's') ADVANCE(342);
      END_STATE();
    case 1224:
      if (lookahead == 's') ADVANCE(479);
      END_STATE();
    case 1225:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 1226:
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 1227:
      if (lookahead == 's') ADVANCE(1066);
      END_STATE();
    case 1228:
      if (lookahead == 's') ADVANCE(659);
      END_STATE();
    case 1229:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 1230:
      if (lookahead == 's') ADVANCE(1198);
      END_STATE();
    case 1231:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 1232:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 1233:
      if (lookahead == 's') ADVANCE(1246);
      END_STATE();
    case 1234:
      if (lookahead == 's') ADVANCE(1260);
      END_STATE();
    case 1235:
      if (lookahead == 's') ADVANCE(564);
      END_STATE();
    case 1236:
      if (lookahead == 's') ADVANCE(1267);
      END_STATE();
    case 1237:
      if (lookahead == 's') ADVANCE(686);
      END_STATE();
    case 1238:
      if (lookahead == 's') ADVANCE(1308);
      END_STATE();
    case 1239:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 1240:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 1241:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 1242:
      if (lookahead == 's') ADVANCE(456);
      END_STATE();
    case 1243:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 1244:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 1245:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 1246:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 1247:
      if (lookahead == 's') ADVANCE(727);
      END_STATE();
    case 1248:
      if (lookahead == 's') ADVANCE(1225);
      END_STATE();
    case 1249:
      if (lookahead == 's') ADVANCE(670);
      END_STATE();
    case 1250:
      if (lookahead == 's') ADVANCE(1076);
      END_STATE();
    case 1251:
      if (lookahead == 's') ADVANCE(343);
      END_STATE();
    case 1252:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 1253:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 1254:
      if (lookahead == 's') ADVANCE(974);
      END_STATE();
    case 1255:
      if (lookahead == 's') ADVANCE(494);
      END_STATE();
    case 1256:
      if (lookahead == 's') ADVANCE(726);
      END_STATE();
    case 1257:
      if (lookahead == 's') ADVANCE(346);
      END_STATE();
    case 1258:
      if (lookahead == 's') ADVANCE(515);
      END_STATE();
    case 1259:
      if (lookahead == 's') ADVANCE(732);
      END_STATE();
    case 1260:
      if (lookahead == 's') ADVANCE(512);
      END_STATE();
    case 1261:
      if (lookahead == 's') ADVANCE(1240);
      END_STATE();
    case 1262:
      if (lookahead == 's') ADVANCE(1007);
      END_STATE();
    case 1263:
      if (lookahead == 's') ADVANCE(1053);
      END_STATE();
    case 1264:
      if (lookahead == 's') ADVANCE(528);
      END_STATE();
    case 1265:
      if (lookahead == 's') ADVANCE(533);
      END_STATE();
    case 1266:
      if (lookahead == 's') ADVANCE(673);
      END_STATE();
    case 1267:
      if (lookahead == 's') ADVANCE(730);
      END_STATE();
    case 1268:
      if (lookahead == 's') ADVANCE(674);
      END_STATE();
    case 1269:
      if (lookahead == 's') ADVANCE(569);
      if (lookahead == 'w') ADVANCE(1054);
      END_STATE();
    case 1270:
      if (lookahead == 's') ADVANCE(1334);
      END_STATE();
    case 1271:
      if (lookahead == 's') ADVANCE(580);
      END_STATE();
    case 1272:
      if (lookahead == 's') ADVANCE(268);
      END_STATE();
    case 1273:
      if (lookahead == 's') ADVANCE(1089);
      END_STATE();
    case 1274:
      if (lookahead == 't') ADVANCE(1553);
      END_STATE();
    case 1275:
      if (lookahead == 't') ADVANCE(1687);
      END_STATE();
    case 1276:
      if (lookahead == 't') ADVANCE(518);
      END_STATE();
    case 1277:
      if (lookahead == 't') ADVANCE(1572);
      END_STATE();
    case 1278:
      if (lookahead == 't') ADVANCE(1614);
      END_STATE();
    case 1279:
      if (lookahead == 't') ADVANCE(1566);
      END_STATE();
    case 1280:
      if (lookahead == 't') ADVANCE(1618);
      END_STATE();
    case 1281:
      if (lookahead == 't') ADVANCE(1619);
      END_STATE();
    case 1282:
      if (lookahead == 't') ADVANCE(1596);
      END_STATE();
    case 1283:
      if (lookahead == 't') ADVANCE(1658);
      END_STATE();
    case 1284:
      if (lookahead == 't') ADVANCE(1623);
      END_STATE();
    case 1285:
      if (lookahead == 't') ADVANCE(1637);
      END_STATE();
    case 1286:
      if (lookahead == 't') ADVANCE(1571);
      END_STATE();
    case 1287:
      if (lookahead == 't') ADVANCE(946);
      END_STATE();
    case 1288:
      if (lookahead == 't') ADVANCE(657);
      END_STATE();
    case 1289:
      if (lookahead == 't') ADVANCE(1074);
      END_STATE();
    case 1290:
      if (lookahead == 't') ADVANCE(694);
      END_STATE();
    case 1291:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 1292:
      if (lookahead == 't') ADVANCE(1448);
      END_STATE();
    case 1293:
      if (lookahead == 't') ADVANCE(658);
      END_STATE();
    case 1294:
      if (lookahead == 't') ADVANCE(1450);
      END_STATE();
    case 1295:
      if (lookahead == 't') ADVANCE(697);
      END_STATE();
    case 1296:
      if (lookahead == 't') ADVANCE(1458);
      END_STATE();
    case 1297:
      if (lookahead == 't') ADVANCE(1451);
      END_STATE();
    case 1298:
      if (lookahead == 't') ADVANCE(661);
      END_STATE();
    case 1299:
      if (lookahead == 't') ADVANCE(681);
      END_STATE();
    case 1300:
      if (lookahead == 't') ADVANCE(422);
      if (lookahead == 'w') ADVANCE(252);
      END_STATE();
    case 1301:
      if (lookahead == 't') ADVANCE(1452);
      END_STATE();
    case 1302:
      if (lookahead == 't') ADVANCE(684);
      END_STATE();
    case 1303:
      if (lookahead == 't') ADVANCE(1454);
      END_STATE();
    case 1304:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 1305:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 1306:
      if (lookahead == 't') ADVANCE(1210);
      END_STATE();
    case 1307:
      if (lookahead == 't') ADVANCE(452);
      END_STATE();
    case 1308:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 1309:
      if (lookahead == 't') ADVANCE(461);
      END_STATE();
    case 1310:
      if (lookahead == 't') ADVANCE(1344);
      END_STATE();
    case 1311:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 1312:
      if (lookahead == 't') ADVANCE(665);
      END_STATE();
    case 1313:
      if (lookahead == 't') ADVANCE(725);
      END_STATE();
    case 1314:
      if (lookahead == 't') ADVANCE(991);
      END_STATE();
    case 1315:
      if (lookahead == 't') ADVANCE(690);
      END_STATE();
    case 1316:
      if (lookahead == 't') ADVANCE(1324);
      END_STATE();
    case 1317:
      if (lookahead == 't') ADVANCE(1392);
      END_STATE();
    case 1318:
      if (lookahead == 't') ADVANCE(668);
      END_STATE();
    case 1319:
      if (lookahead == 't') ADVANCE(753);
      END_STATE();
    case 1320:
      if (lookahead == 't') ADVANCE(1045);
      END_STATE();
    case 1321:
      if (lookahead == 't') ADVANCE(728);
      END_STATE();
    case 1322:
      if (lookahead == 't') ADVANCE(1389);
      END_STATE();
    case 1323:
      if (lookahead == 't') ADVANCE(716);
      END_STATE();
    case 1324:
      if (lookahead == 't') ADVANCE(977);
      END_STATE();
    case 1325:
      if (lookahead == 't') ADVANCE(733);
      END_STATE();
    case 1326:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 1327:
      if (lookahead == 't') ADVANCE(980);
      END_STATE();
    case 1328:
      if (lookahead == 't') ADVANCE(1000);
      END_STATE();
    case 1329:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 1330:
      if (lookahead == 't') ADVANCE(710);
      END_STATE();
    case 1331:
      if (lookahead == 't') ADVANCE(989);
      END_STATE();
    case 1332:
      if (lookahead == 't') ADVANCE(990);
      END_STATE();
    case 1333:
      if (lookahead == 't') ADVANCE(992);
      END_STATE();
    case 1334:
      if (lookahead == 't') ADVANCE(1023);
      END_STATE();
    case 1335:
      if (lookahead == 't') ADVANCE(544);
      END_STATE();
    case 1336:
      if (lookahead == 't') ADVANCE(995);
      END_STATE();
    case 1337:
      if (lookahead == 't') ADVANCE(731);
      END_STATE();
    case 1338:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 1339:
      if (lookahead == 't') ADVANCE(823);
      END_STATE();
    case 1340:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 1341:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 1342:
      if (lookahead == 't') ADVANCE(735);
      END_STATE();
    case 1343:
      if (lookahead == 't') ADVANCE(832);
      END_STATE();
    case 1344:
      if (lookahead == 't') ADVANCE(1017);
      END_STATE();
    case 1345:
      if (lookahead == 't') ADVANCE(744);
      END_STATE();
    case 1346:
      if (lookahead == 't') ADVANCE(739);
      END_STATE();
    case 1347:
      if (lookahead == 't') ADVANCE(1025);
      END_STATE();
    case 1348:
      if (lookahead == 't') ADVANCE(749);
      END_STATE();
    case 1349:
      if (lookahead == 't') ADVANCE(748);
      END_STATE();
    case 1350:
      if (lookahead == 't') ADVANCE(1347);
      END_STATE();
    case 1351:
      if (lookahead == 't') ADVANCE(751);
      END_STATE();
    case 1352:
      if (lookahead == 't') ADVANCE(756);
      END_STATE();
    case 1353:
      if (lookahead == 't') ADVANCE(759);
      END_STATE();
    case 1354:
      if (lookahead == 'u') ADVANCE(1287);
      END_STATE();
    case 1355:
      if (lookahead == 'u') ADVANCE(1289);
      if (lookahead == 'v') ADVANCE(482);
      END_STATE();
    case 1356:
      if (lookahead == 'u') ADVANCE(626);
      END_STATE();
    case 1357:
      if (lookahead == 'u') ADVANCE(877);
      END_STATE();
    case 1358:
      if (lookahead == 'u') ADVANCE(1274);
      END_STATE();
    case 1359:
      if (lookahead == 'u') ADVANCE(321);
      END_STATE();
    case 1360:
      if (lookahead == 'u') ADVANCE(440);
      END_STATE();
    case 1361:
      if (lookahead == 'u') ADVANCE(1059);
      END_STATE();
    case 1362:
      if (lookahead == 'u') ADVANCE(1094);
      END_STATE();
    case 1363:
      if (lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 1364:
      if (lookahead == 'u') ADVANCE(1277);
      END_STATE();
    case 1365:
      if (lookahead == 'u') ADVANCE(1163);
      END_STATE();
    case 1366:
      if (lookahead == 'u') ADVANCE(845);
      END_STATE();
    case 1367:
      if (lookahead == 'u') ADVANCE(1278);
      END_STATE();
    case 1368:
      if (lookahead == 'u') ADVANCE(818);
      END_STATE();
    case 1369:
      if (lookahead == 'u') ADVANCE(1310);
      END_STATE();
    case 1370:
      if (lookahead == 'u') ADVANCE(1279);
      END_STATE();
    case 1371:
      if (lookahead == 'u') ADVANCE(1280);
      END_STATE();
    case 1372:
      if (lookahead == 'u') ADVANCE(333);
      END_STATE();
    case 1373:
      if (lookahead == 'u') ADVANCE(837);
      END_STATE();
    case 1374:
      if (lookahead == 'u') ADVANCE(1206);
      END_STATE();
    case 1375:
      if (lookahead == 'u') ADVANCE(1283);
      END_STATE();
    case 1376:
      if (lookahead == 'u') ADVANCE(1286);
      END_STATE();
    case 1377:
      if (lookahead == 'u') ADVANCE(1218);
      END_STATE();
    case 1378:
      if (lookahead == 'u') ADVANCE(1219);
      END_STATE();
    case 1379:
      if (lookahead == 'u') ADVANCE(800);
      END_STATE();
    case 1380:
      if (lookahead == 'u') ADVANCE(1090);
      END_STATE();
    case 1381:
      if (lookahead == 'u') ADVANCE(1229);
      END_STATE();
    case 1382:
      if (lookahead == 'u') ADVANCE(884);
      END_STATE();
    case 1383:
      if (lookahead == 'u') ADVANCE(797);
      END_STATE();
    case 1384:
      if (lookahead == 'u') ADVANCE(1242);
      END_STATE();
    case 1385:
      if (lookahead == 'u') ADVANCE(1338);
      END_STATE();
    case 1386:
      if (lookahead == 'u') ADVANCE(1239);
      END_STATE();
    case 1387:
      if (lookahead == 'u') ADVANCE(241);
      END_STATE();
    case 1388:
      if (lookahead == 'u') ADVANCE(895);
      END_STATE();
    case 1389:
      if (lookahead == 'u') ADVANCE(1161);
      END_STATE();
    case 1390:
      if (lookahead == 'u') ADVANCE(1081);
      END_STATE();
    case 1391:
      if (lookahead == 'u') ADVANCE(1331);
      END_STATE();
    case 1392:
      if (lookahead == 'u') ADVANCE(1165);
      END_STATE();
    case 1393:
      if (lookahead == 'u') ADVANCE(1316);
      END_STATE();
    case 1394:
      if (lookahead == 'u') ADVANCE(1271);
      END_STATE();
    case 1395:
      if (lookahead == 'u') ADVANCE(1264);
      END_STATE();
    case 1396:
      if (lookahead == 'u') ADVANCE(1265);
      END_STATE();
    case 1397:
      if (lookahead == 'u') ADVANCE(1176);
      END_STATE();
    case 1398:
      if (lookahead == 'u') ADVANCE(1182);
      END_STATE();
    case 1399:
      if (lookahead == 'u') ADVANCE(1350);
      END_STATE();
    case 1400:
      if (lookahead == 'v') ADVANCE(746);
      END_STATE();
    case 1401:
      if (lookahead == 'v') ADVANCE(508);
      END_STATE();
    case 1402:
      if (lookahead == 'v') ADVANCE(454);
      END_STATE();
    case 1403:
      if (lookahead == 'v') ADVANCE(462);
      END_STATE();
    case 1404:
      if (lookahead == 'v') ADVANCE(465);
      END_STATE();
    case 1405:
      if (lookahead == 'v') ADVANCE(493);
      END_STATE();
    case 1406:
      if (lookahead == 'v') ADVANCE(242);
      END_STATE();
    case 1407:
      if (lookahead == 'v') ADVANCE(499);
      END_STATE();
    case 1408:
      if (lookahead == 'v') ADVANCE(703);
      END_STATE();
    case 1409:
      if (lookahead == 'v') ADVANCE(595);
      END_STATE();
    case 1410:
      if (lookahead == 'v') ADVANCE(527);
      END_STATE();
    case 1411:
      if (lookahead == 'v') ADVANCE(539);
      END_STATE();
    case 1412:
      if (lookahead == 'v') ADVANCE(562);
      END_STATE();
    case 1413:
      if (lookahead == 'v') ADVANCE(542);
      END_STATE();
    case 1414:
      if (lookahead == 'v') ADVANCE(543);
      END_STATE();
    case 1415:
      if (lookahead == 'v') ADVANCE(738);
      END_STATE();
    case 1416:
      if (lookahead == 'v') ADVANCE(589);
      END_STATE();
    case 1417:
      if (lookahead == 'v') ADVANCE(596);
      END_STATE();
    case 1418:
      if (lookahead == 'w') ADVANCE(1594);
      END_STATE();
    case 1419:
      if (lookahead == 'w') ADVANCE(1590);
      END_STATE();
    case 1420:
      if (lookahead == 'w') ADVANCE(1654);
      END_STATE();
    case 1421:
      if (lookahead == 'w') ADVANCE(1575);
      END_STATE();
    case 1422:
      if (lookahead == 'w') ADVANCE(1593);
      END_STATE();
    case 1423:
      if (lookahead == 'w') ADVANCE(1640);
      END_STATE();
    case 1424:
      if (lookahead == 'w') ADVANCE(58);
      END_STATE();
    case 1425:
      if (lookahead == 'w') ADVANCE(696);
      END_STATE();
    case 1426:
      if (lookahead == 'w') ADVANCE(741);
      END_STATE();
    case 1427:
      if (lookahead == 'w') ADVANCE(65);
      END_STATE();
    case 1428:
      if (lookahead == 'w') ADVANCE(74);
      END_STATE();
    case 1429:
      if (lookahead == 'w') ADVANCE(105);
      END_STATE();
    case 1430:
      if (lookahead == 'w') ADVANCE(675);
      END_STATE();
    case 1431:
      if (lookahead == 'w') ADVANCE(698);
      END_STATE();
    case 1432:
      if (lookahead == 'w') ADVANCE(413);
      END_STATE();
    case 1433:
      if (lookahead == 'w') ADVANCE(228);
      END_STATE();
    case 1434:
      if (lookahead == 'w') ADVANCE(229);
      END_STATE();
    case 1435:
      if (lookahead == 'w') ADVANCE(538);
      END_STATE();
    case 1436:
      if (lookahead == 'w') ADVANCE(743);
      END_STATE();
    case 1437:
      if (lookahead == 'w') ADVANCE(152);
      END_STATE();
    case 1438:
      if (lookahead == 'w') ADVANCE(151);
      END_STATE();
    case 1439:
      if (lookahead == 'x') ADVANCE(1524);
      END_STATE();
    case 1440:
      if (lookahead == 'x') ADVANCE(1524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1525);
      END_STATE();
    case 1441:
      if (lookahead == 'x') ADVANCE(1655);
      END_STATE();
    case 1442:
      if (lookahead == 'x') ADVANCE(1656);
      END_STATE();
    case 1443:
      if (lookahead == 'x') ADVANCE(1690);
      END_STATE();
    case 1444:
      if (lookahead == 'x') ADVANCE(347);
      END_STATE();
    case 1445:
      if (lookahead == 'y') ADVANCE(498);
      END_STATE();
    case 1446:
      if (lookahead == 'y') ADVANCE(1675);
      END_STATE();
    case 1447:
      if (lookahead == 'y') ADVANCE(1589);
      END_STATE();
    case 1448:
      if (lookahead == 'y') ADVANCE(1561);
      END_STATE();
    case 1449:
      if (lookahead == 'y') ADVANCE(1625);
      END_STATE();
    case 1450:
      if (lookahead == 'y') ADVANCE(1581);
      END_STATE();
    case 1451:
      if (lookahead == 'y') ADVANCE(1582);
      END_STATE();
    case 1452:
      if (lookahead == 'y') ADVANCE(1583);
      END_STATE();
    case 1453:
      if (lookahead == 'y') ADVANCE(1671);
      END_STATE();
    case 1454:
      if (lookahead == 'y') ADVANCE(1587);
      END_STATE();
    case 1455:
      if (lookahead == 'y') ADVANCE(153);
      END_STATE();
    case 1456:
      if (lookahead == 'y') ADVANCE(291);
      END_STATE();
    case 1457:
      if (lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 1458:
      if (lookahead == 'y') ADVANCE(1078);
      END_STATE();
    case 1459:
      if (lookahead == 'y') ADVANCE(374);
      END_STATE();
    case 1460:
      if (lookahead == 'y') ADVANCE(129);
      END_STATE();
    case 1461:
      if (lookahead == 'y') ADVANCE(1015);
      END_STATE();
    case 1462:
      if (lookahead == 'y') ADVANCE(1082);
      END_STATE();
    case 1463:
      if (lookahead == 'y') ADVANCE(1232);
      END_STATE();
    case 1464:
      if (lookahead == 'z') ADVANCE(447);
      END_STATE();
    case 1465:
      if (lookahead == 'z') ADVANCE(451);
      END_STATE();
    case 1466:
      if (lookahead == 'z') ADVANCE(467);
      END_STATE();
    case 1467:
      if (lookahead == 'z') ADVANCE(981);
      END_STATE();
    case 1468:
      if (lookahead == 'z') ADVANCE(514);
      END_STATE();
    case 1469:
      if (lookahead == 'z') ADVANCE(524);
      END_STATE();
    case 1470:
      if (lookahead == 'z') ADVANCE(276);
      END_STATE();
    case 1471:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1494);
      END_STATE();
    case 1472:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1493);
      END_STATE();
    case 1473:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1488);
      END_STATE();
    case 1474:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1491);
      END_STATE();
    case 1475:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1525);
      END_STATE();
    case 1476:
      if (eof) ADVANCE(1478);
      if (lookahead == '\n') ADVANCE(1547);
      if (lookahead == '#') ADVANCE(1479);
      if (lookahead == ',') ADVANCE(1693);
      if (lookahead == '0') ADVANCE(1487);
      if (lookahead == 'a') ADVANCE(316);
      if (lookahead == 'b') ADVANCE(718);
      if (lookahead == 'c') ADVANCE(779);
      if (lookahead == 'd') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(861);
      if (lookahead == 'f') ADVANCE(778);
      if (lookahead == 'g') ADVANCE(175);
      if (lookahead == 'h') ADVANCE(740);
      if (lookahead == 'i') ADVANCE(863);
      if (lookahead == 'k') ADVANCE(283);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == 'm') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(1355);
      if (lookahead == 'p') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(439);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == 'v') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(954);
      if (lookahead == '}') ADVANCE(1550);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(1473);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1476)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1488);
      END_STATE();
    case 1477:
      if (eof) ADVANCE(1478);
      if (lookahead == '#') ADVANCE(1479);
      if (lookahead == '$') ADVANCE(1544);
      if (lookahead == ',') ADVANCE(1693);
      if (lookahead == '.') ADVANCE(1472);
      if (lookahead == '0') ADVANCE(1516);
      if (lookahead == '1') ADVANCE(1519);
      if (lookahead == '=') ADVANCE(1562);
      if (lookahead == 'A') ADVANCE(36);
      if (lookahead == 'C') ADVANCE(28);
      if (lookahead == 'L') ADVANCE(42);
      if (lookahead == 'M') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(33);
      if (lookahead == 'W') ADVANCE(35);
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == 'b') ADVANCE(676);
      if (lookahead == 'c') ADVANCE(779);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead == 'e') ADVANCE(861);
      if (lookahead == 'f') ADVANCE(194);
      if (lookahead == 'g') ADVANCE(175);
      if (lookahead == 'h') ADVANCE(678);
      if (lookahead == 'i') ADVANCE(863);
      if (lookahead == 'k') ADVANCE(283);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == 'm') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(176);
      if (lookahead == 'o') ADVANCE(599);
      if (lookahead == 'p') ADVANCE(172);
      if (lookahead == 'r') ADVANCE(439);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(871);
      if (lookahead == 'v') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(954);
      if (lookahead == 'y') ADVANCE(473);
      if (lookahead == '{') ADVANCE(1549);
      if (lookahead == '}') ADVANCE(1550);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1477)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1486);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(1683);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1533);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1485);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(1699);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(1482);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1484);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1485);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1485);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(1493);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1486);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'x') ADVANCE(1524);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1488);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1488);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(sym__immediate_int);
      if (lookahead == '.') ADVANCE(1494);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1489);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(sym__immediate_int);
      if (lookahead == '.') ADVANCE(1494);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1489);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1525);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(sym__immediate_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1491);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(1493);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1492);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1493);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(sym__immediate_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1494);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(anon_sym_SHIFT);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(anon_sym_CAPS);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(anon_sym_CTRL);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(anon_sym_CONTROL);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(anon_sym_ALT);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(anon_sym_MOD2);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(anon_sym_MOD3);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(anon_sym_SUPER);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(anon_sym_WIN);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(anon_sym_LOGO);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(anon_sym_MOD4);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(anon_sym_MOD5);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '_') ADVANCE(296);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(1494);
      if (lookahead == 'x') ADVANCE(1524);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1489);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1525);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(1493);
      if (lookahead == 'x') ADVANCE(1524);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1486);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(1494);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1489);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1525);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(1493);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1486);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(anon_sym_rgb);
      if (lookahead == 'a') ADVANCE(1523);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(anon_sym_rgba);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(sym__hex_comp);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'P') ADVANCE(51);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'b') ADVANCE(1356);
      if (lookahead == 'c') ADVANCE(966);
      if (lookahead == 'g') ADVANCE(1532);
      if (lookahead == 's') ADVANCE(317);
      if (lookahead == 'v') ADVANCE(723);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'c') ADVANCE(480);
      if (lookahead == 't') ADVANCE(721);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'd') ADVANCE(1156);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'l') ADVANCE(1226);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'm') ADVANCE(180);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(anon_sym_deg);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(sym_str);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1533);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(1697);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1543);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(1539);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1543);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(1535);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1543);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1540);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1543);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1542);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1543);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(1538);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1543);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(1534);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1543);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(1689);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1543);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(1541);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1543);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1543);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1533);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(aux_sym_variable_reference_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1546);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(1547);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(anon_sym_general);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(anon_sym_animation);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(anon_sym_gestures);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(anon_sym_misc);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(anon_sym_binds);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(anon_sym_device);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(aux_sym_variable_section_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1560);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(anon_sym_sensitivity);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(anon_sym_border_size);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(anon_sym_no_border_on_floating);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(anon_sym_gaps_in);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(anon_sym_gaps_out);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(anon_sym_col_DOTinactive_border);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(anon_sym_col_DOTactive_border);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(anon_sym_col_DOTgroup_border);
      if (lookahead == '_') ADVANCE(279);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(anon_sym_col_DOTgroup_border_active);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(anon_sym_cursor_inactive_timeout);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(anon_sym_no_cursor_warps);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(anon_sym_no_focus_fallback);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(anon_sym_apply_sens_to_raw);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(anon_sym_resize_on_border);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(anon_sym_extend_border_grab_area);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(anon_sym_hover_icon_on_border);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(anon_sym_rounding);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(anon_sym_multisample_edges);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(anon_sym_active_opacity);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(anon_sym_inactive_opacity);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(anon_sym_fullscreen_opacity);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(anon_sym_blur);
      if (lookahead == '_') ADVANCE(685);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(anon_sym_blur_size);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(anon_sym_blur_passes);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(anon_sym_blur_ignore_opacity);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(anon_sym_blur_new_optimizations);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(anon_sym_blur_xray);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(anon_sym_drop_shadow);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(anon_sym_shadow_range);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(anon_sym_shadow_render_power);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(anon_sym_shadow_ignore_window);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(anon_sym_col_DOTshadow);
      if (lookahead == '_') ADVANCE(757);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(anon_sym_col_DOTshadow_inactive);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(anon_sym_shadow_offset);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(anon_sym_shadow_scale);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(anon_sym_dim_inactive);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(anon_sym_dim_strength);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(anon_sym_dim_special);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(anon_sym_dim_around);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(anon_sym_screen_shader);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(anon_sym_enabled);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(anon_sym_disable_while_typing);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(anon_sym_natural_scroll);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(anon_sym_scroll_factor);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(anon_sym_middle_button_emulation);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(anon_sym_tap_button_map);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(anon_sym_clickfinger_behavior);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(anon_sym_tap_DASHto_DASHclick);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(anon_sym_drag_lock);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(anon_sym_tap_DASHand_DASHdrag);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(anon_sym_transform);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(anon_sym_touchpad);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(anon_sym_touchdevice);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(anon_sym_kb_model);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(anon_sym_kb_layout);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(anon_sym_kb_variant);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(anon_sym_kb_options);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(anon_sym_kb_rules);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(anon_sym_kb_file);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(anon_sym_numlock_by_default);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(anon_sym_repeat_rate);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(anon_sym_repeat_delay);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(anon_sym_accel_profile);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(anon_sym_force_no_accel);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(anon_sym_left_handed);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(anon_sym_scroll_method);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(anon_sym_scroll_button);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(anon_sym_follow_mouse);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(anon_sym_mouse_refocus);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(anon_sym_float_switch_override_focus);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(anon_sym_workspace_swipe);
      if (lookahead == '_') ADVANCE(320);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_fingers);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_distance);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_invert);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_min_speed_to_force);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_cancel_ratio);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_create_new);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_forever);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(anon_sym_workspace_swipe_numbered);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(anon_sym_disable_hyprland_logo);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(anon_sym_disable_splash_rendering);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(anon_sym_vfr);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(anon_sym_vrr);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(anon_sym_mouse_move_enables_dpms);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(anon_sym_key_press_enables_dpms);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(anon_sym_always_follow_on_dnd);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(anon_sym_layers_hog_keyboard_focus);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(anon_sym_animate_manual_resizes);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(anon_sym_animate_mouse_windowdragging);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(anon_sym_disable_autoreload);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(anon_sym_enable_swallow);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(anon_sym_swallow_regex);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(anon_sym_swallow_exception_regex);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(anon_sym_focus_on_activate);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(anon_sym_no_direct_scanout);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(anon_sym_hide_cursor_on_touch);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(anon_sym_mouse_move_focuses_monitor);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(anon_sym_suppress_portal_warnings);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(anon_sym_render_ahead_of_time);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(anon_sym_render_ahead_safezone);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(anon_sym_cursor_zoom_factor);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(anon_sym_cursor_zoom_rigid);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(anon_sym_allow_session_lock_restore);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(anon_sym_render_titles_in_groupbar);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(anon_sym_groupbar_titles_font_size);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(anon_sym_groupbar_gradients);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(anon_sym_pass_mouse_when_bound);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(anon_sym_scroll_event_delay);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(anon_sym_workspace_back_and_forth);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(anon_sym_allow_workspace_cycles);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(anon_sym_focus_preferred_method);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(anon_sym_overlay);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(anon_sym_damage_blink);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(anon_sym_disable_logs);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(anon_sym_disable_time);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(anon_sym_damage_tracking);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(anon_sym_enable_stdout_logs);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(anon_sym_manual_crash);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '#') ADVANCE(1480);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1682);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1683);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1683);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '-') ADVANCE(956);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(anon_sym_exec_DASHonce);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(anon_sym_unset);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(anon_sym_address);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(anon_sym_address);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1543);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(anon_sym_0x2);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(aux_sym_layer_address_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1691);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(anon_sym_layerrule);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(anon_sym_env);
      if (lookahead == 'd') ADVANCE(1695);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(anon_sym_envd);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(anon_sym_desc);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(anon_sym_desc);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1543);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(aux_sym_monitor_desc_token1);
      if (lookahead == '#') ADVANCE(1483);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1698);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(1699);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(aux_sym_monitor_desc_token1);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(1699);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(anon_sym_preferred);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(anon_sym_highres);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(anon_sym_highrr);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(anon_sym_mirror);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(anon_sym_bitdepth);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(anon_sym_monitor);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(sym_by);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(sym_at);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(sym_auto);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(sym_disable);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(sym_disable);
      if (lookahead == '_') ADVANCE(203);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1476},
  [2] = {.lex_state = 1476},
  [3] = {.lex_state = 1476},
  [4] = {.lex_state = 1476},
  [5] = {.lex_state = 1476},
  [6] = {.lex_state = 1476},
  [7] = {.lex_state = 1476},
  [8] = {.lex_state = 1476},
  [9] = {.lex_state = 1476},
  [10] = {.lex_state = 1476},
  [11] = {.lex_state = 1476},
  [12] = {.lex_state = 1476},
  [13] = {.lex_state = 1476},
  [14] = {.lex_state = 1476},
  [15] = {.lex_state = 1476},
  [16] = {.lex_state = 1476},
  [17] = {.lex_state = 1476},
  [18] = {.lex_state = 1476},
  [19] = {.lex_state = 1476},
  [20] = {.lex_state = 1476},
  [21] = {.lex_state = 1476},
  [22] = {.lex_state = 1476},
  [23] = {.lex_state = 1476},
  [24] = {.lex_state = 1476},
  [25] = {.lex_state = 1476},
  [26] = {.lex_state = 1476},
  [27] = {.lex_state = 1476},
  [28] = {.lex_state = 1476},
  [29] = {.lex_state = 1476},
  [30] = {.lex_state = 1476},
  [31] = {.lex_state = 1476},
  [32] = {.lex_state = 1476},
  [33] = {.lex_state = 1476},
  [34] = {.lex_state = 1476},
  [35] = {.lex_state = 1476},
  [36] = {.lex_state = 1476},
  [37] = {.lex_state = 1476},
  [38] = {.lex_state = 1476},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 1476},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 1476},
  [48] = {.lex_state = 1476},
  [49] = {.lex_state = 1476},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 1476},
  [52] = {.lex_state = 1476},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 1476},
  [55] = {.lex_state = 1476},
  [56] = {.lex_state = 1476},
  [57] = {.lex_state = 1476},
  [58] = {.lex_state = 1476},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 1476},
  [61] = {.lex_state = 1476},
  [62] = {.lex_state = 1476},
  [63] = {.lex_state = 1476},
  [64] = {.lex_state = 1476},
  [65] = {.lex_state = 1476},
  [66] = {.lex_state = 1476},
  [67] = {.lex_state = 1476},
  [68] = {.lex_state = 1476},
  [69] = {.lex_state = 1476},
  [70] = {.lex_state = 1476},
  [71] = {.lex_state = 1476},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 1476},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 1476},
  [76] = {.lex_state = 1476},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 1476},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1476},
  [82] = {.lex_state = 1476},
  [83] = {.lex_state = 1476},
  [84] = {.lex_state = 1476},
  [85] = {.lex_state = 1476},
  [86] = {.lex_state = 1476},
  [87] = {.lex_state = 1476},
  [88] = {.lex_state = 1476},
  [89] = {.lex_state = 1476},
  [90] = {.lex_state = 1476},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 1476},
  [95] = {.lex_state = 1476},
  [96] = {.lex_state = 1476},
  [97] = {.lex_state = 1476},
  [98] = {.lex_state = 1476},
  [99] = {.lex_state = 1476},
  [100] = {.lex_state = 1476},
  [101] = {.lex_state = 1476},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 15},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 1476},
  [113] = {.lex_state = 1476},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 15},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 15},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 15},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 15},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1476},
  [128] = {.lex_state = 1476},
  [129] = {.lex_state = 1476},
  [130] = {.lex_state = 1476},
  [131] = {.lex_state = 1476},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 1476},
  [134] = {.lex_state = 1476},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1476},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 1476},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 1476},
  [142] = {.lex_state = 16},
  [143] = {.lex_state = 16},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 17},
  [148] = {.lex_state = 1476},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 1476},
  [155] = {.lex_state = 1484},
  [156] = {.lex_state = 1476},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 1476},
  [159] = {.lex_state = 1476},
  [160] = {.lex_state = 11},
  [161] = {.lex_state = 11},
  [162] = {.lex_state = 16},
  [163] = {.lex_state = 1682},
  [164] = {.lex_state = 1682},
  [165] = {.lex_state = 13},
  [166] = {.lex_state = 1476},
  [167] = {.lex_state = 1476},
  [168] = {.lex_state = 1476},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 1476},
  [171] = {.lex_state = 1476},
  [172] = {.lex_state = 1476},
  [173] = {.lex_state = 1476},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 1476},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 1476},
  [179] = {.lex_state = 14},
  [180] = {.lex_state = 1476},
  [181] = {.lex_state = 1476},
  [182] = {.lex_state = 1476},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 1476},
  [189] = {.lex_state = 1476},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 1476},
  [192] = {.lex_state = 1476},
  [193] = {.lex_state = 1476},
  [194] = {.lex_state = 1476},
  [195] = {.lex_state = 1476},
  [196] = {.lex_state = 1476},
  [197] = {.lex_state = 1476},
  [198] = {.lex_state = 1476},
  [199] = {.lex_state = 1476},
  [200] = {.lex_state = 1476},
  [201] = {.lex_state = 8},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 1476},
  [207] = {.lex_state = 1476},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 1476},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 1476},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 1691},
  [236] = {.lex_state = 10},
  [237] = {.lex_state = 10},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 4},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 1476},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 1476},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 4},
  [259] = {.lex_state = 4},
  [260] = {.lex_state = 1476},
  [261] = {.lex_state = 1476},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 4},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 6},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 6},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 1476},
  [287] = {.lex_state = 1476},
  [288] = {.lex_state = 17},
  [289] = {(TSStateId)(-1)},
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
    [anon_sym_desc] = ACTIONS(1),
    [anon_sym_preferred] = ACTIONS(1),
    [anon_sym_highres] = ACTIONS(1),
    [anon_sym_highrr] = ACTIONS(1),
    [anon_sym_mirror] = ACTIONS(1),
    [anon_sym_bitdepth] = ACTIONS(1),
    [anon_sym_monitor] = ACTIONS(1),
    [sym_by] = ACTIONS(1),
    [sym_at] = ACTIONS(1),
    [sym_auto] = ACTIONS(1),
    [sym_disable] = ACTIONS(1),
  },
  [1] = {
    [sym_config_file] = STATE(217),
    [sym_comment] = STATE(1),
    [sym_variable_section] = STATE(35),
    [sym_command] = STATE(35),
    [sym_command_exec] = STATE(139),
    [sym_command_exec_once] = STATE(139),
    [sym_command_source] = STATE(139),
    [sym_command_layerrule] = STATE(139),
    [sym_command_env] = STATE(139),
    [sym_command_envd] = STATE(139),
    [sym_command_monitor] = STATE(139),
    [aux_sym_config_file_repeat1] = STATE(11),
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
    STATE(5), 1,
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
    STATE(5), 1,
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
    STATE(5), 1,
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
  [280] = 12,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      sym__newline,
    ACTIONS(96), 1,
      anon_sym_shadow_offset,
    ACTIONS(98), 1,
      anon_sym_screen_shader,
    STATE(8), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_variable_section_repeat2,
    STATE(15), 1,
      sym__decoration_section_var,
    ACTIONS(94), 2,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
    ACTIONS(88), 5,
      anon_sym_rounding,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
    ACTIONS(92), 7,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_shadow_scale,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
    ACTIONS(90), 8,
      anon_sym_multisample_edges,
      anon_sym_blur,
      anon_sym_blur_ignore_opacity,
      anon_sym_blur_new_optimizations,
      anon_sym_blur_xray,
      anon_sym_drop_shadow,
      anon_sym_shadow_ignore_window,
      anon_sym_dim_inactive,
  [335] = 22,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      sym__newline,
    ACTIONS(105), 1,
      anon_sym_general,
    ACTIONS(108), 1,
      anon_sym_decoration,
    ACTIONS(111), 1,
      anon_sym_animation,
    ACTIONS(114), 1,
      anon_sym_input,
    ACTIONS(117), 1,
      anon_sym_gestures,
    ACTIONS(120), 1,
      anon_sym_misc,
    ACTIONS(123), 1,
      anon_sym_binds,
    ACTIONS(126), 1,
      anon_sym_debug,
    ACTIONS(129), 1,
      anon_sym_device,
    ACTIONS(132), 1,
      anon_sym_exec,
    ACTIONS(135), 1,
      anon_sym_exec_DASHonce,
    ACTIONS(138), 1,
      anon_sym_source,
    ACTIONS(141), 1,
      anon_sym_layerrule,
    ACTIONS(144), 1,
      anon_sym_env,
    ACTIONS(147), 1,
      anon_sym_envd,
    ACTIONS(150), 1,
      anon_sym_monitor,
    STATE(9), 2,
      sym_comment,
      aux_sym_config_file_repeat1,
    STATE(35), 2,
      sym_variable_section,
      sym_command,
    STATE(139), 7,
      sym_command_exec,
      sym_command_exec_once,
      sym_command_source,
      sym_command_layerrule,
      sym_command_env,
      sym_command_envd,
      sym_command_monitor,
  [410] = 12,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      sym__newline,
    ACTIONS(96), 1,
      anon_sym_shadow_offset,
    ACTIONS(98), 1,
      anon_sym_screen_shader,
    STATE(8), 1,
      aux_sym_variable_section_repeat2,
    STATE(10), 1,
      sym_comment,
    STATE(15), 1,
      sym__decoration_section_var,
    ACTIONS(94), 2,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
    ACTIONS(88), 5,
      anon_sym_rounding,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
    ACTIONS(92), 7,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_shadow_scale,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
    ACTIONS(90), 8,
      anon_sym_multisample_edges,
      anon_sym_blur,
      anon_sym_blur_ignore_opacity,
      anon_sym_blur_new_optimizations,
      anon_sym_blur_xray,
      anon_sym_drop_shadow,
      anon_sym_shadow_ignore_window,
      anon_sym_dim_inactive,
  [465] = 23,
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
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_config_file_repeat1,
    STATE(11), 1,
      sym_comment,
    STATE(35), 2,
      sym_variable_section,
      sym_command,
    STATE(139), 7,
      sym_command_exec,
      sym_command_exec_once,
      sym_command_source,
      sym_command_layerrule,
      sym_command_env,
      sym_command_envd,
      sym_command_monitor,
  [542] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(155), 1,
      sym__newline,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(172), 1,
      anon_sym_shadow_offset,
    ACTIONS(175), 1,
      anon_sym_screen_shader,
    STATE(15), 1,
      sym__decoration_section_var,
    ACTIONS(169), 2,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
    STATE(12), 2,
      sym_comment,
      aux_sym_variable_section_repeat2,
    ACTIONS(160), 5,
      anon_sym_rounding,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
    ACTIONS(166), 7,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_shadow_scale,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
    ACTIONS(163), 8,
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
  [632] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(182), 1,
      sym__newline,
    STATE(14), 1,
      sym_comment,
    ACTIONS(184), 25,
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
  [669] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(186), 1,
      sym__newline,
    STATE(15), 1,
      sym_comment,
    ACTIONS(188), 25,
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
  [706] = 13,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(190), 1,
      sym__newline,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    ACTIONS(194), 1,
      anon_sym_sensitivity,
    ACTIONS(198), 1,
      anon_sym_touchpad,
    ACTIONS(200), 1,
      anon_sym_touchdevice,
    STATE(16), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_variable_section_repeat4,
    STATE(25), 1,
      sym__input_variable_section,
    STATE(26), 1,
      sym__input_section_var,
    ACTIONS(196), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(204), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(202), 8,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_accel_profile,
      anon_sym_scroll_method,
  [761] = 12,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(206), 1,
      sym__newline,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 1,
      anon_sym_sensitivity,
    ACTIONS(217), 1,
      anon_sym_touchpad,
    ACTIONS(220), 1,
      anon_sym_touchdevice,
    STATE(25), 1,
      sym__input_variable_section,
    STATE(26), 1,
      sym__input_section_var,
    STATE(17), 2,
      sym_comment,
      aux_sym_variable_section_repeat4,
    ACTIONS(214), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(226), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(223), 8,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_accel_profile,
      anon_sym_scroll_method,
  [814] = 13,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(190), 1,
      sym__newline,
    ACTIONS(194), 1,
      anon_sym_sensitivity,
    ACTIONS(198), 1,
      anon_sym_touchpad,
    ACTIONS(200), 1,
      anon_sym_touchdevice,
    STATE(18), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_variable_section_repeat4,
    STATE(25), 1,
      sym__input_variable_section,
    STATE(26), 1,
      sym__input_section_var,
    ACTIONS(196), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(204), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(202), 8,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_accel_profile,
      anon_sym_scroll_method,
  [869] = 13,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(190), 1,
      sym__newline,
    ACTIONS(194), 1,
      anon_sym_sensitivity,
    ACTIONS(198), 1,
      anon_sym_touchpad,
    ACTIONS(200), 1,
      anon_sym_touchdevice,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym_variable_section_repeat4,
    STATE(19), 1,
      sym_comment,
    STATE(25), 1,
      sym__input_variable_section,
    STATE(26), 1,
      sym__input_section_var,
    ACTIONS(196), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(204), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(202), 8,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_accel_profile,
      anon_sym_scroll_method,
  [924] = 13,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(190), 1,
      sym__newline,
    ACTIONS(194), 1,
      anon_sym_sensitivity,
    ACTIONS(198), 1,
      anon_sym_touchpad,
    ACTIONS(200), 1,
      anon_sym_touchdevice,
    STATE(17), 1,
      aux_sym_variable_section_repeat4,
    STATE(20), 1,
      sym_comment,
    STATE(25), 1,
      sym__input_variable_section,
    STATE(26), 1,
      sym__input_section_var,
    ACTIONS(196), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(204), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(202), 8,
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
    ACTIONS(239), 1,
      sym__newline,
    STATE(23), 1,
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
  [1081] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      sym__newline,
    STATE(24), 1,
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
  [1115] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(247), 1,
      sym__newline,
    STATE(25), 1,
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
    STATE(30), 1,
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
    STATE(28), 1,
      sym_comment,
    STATE(30), 1,
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
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(271), 1,
      sym__newline,
    ACTIONS(273), 1,
      anon_sym_sensitivity,
    ACTIONS(281), 1,
      anon_sym_layout,
    STATE(28), 1,
      aux_sym_variable_section_repeat1,
    STATE(29), 1,
      sym_comment,
    STATE(30), 1,
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
  [1583] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    STATE(39), 1,
      sym_comment,
    ACTIONS(321), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(178), 2,
      sym_bool,
      sym_variable_reference,
    STATE(182), 2,
      sym__bool_literal,
      sym__bool_integer,
    ACTIONS(319), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1613] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    STATE(40), 1,
      sym_comment,
    ACTIONS(321), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(182), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(198), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(319), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1643] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_comment,
    ACTIONS(321), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(182), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(195), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(319), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1673] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    STATE(42), 1,
      sym_comment,
    ACTIONS(321), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(182), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(197), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(319), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1703] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(325), 1,
      sym__newline,
    ACTIONS(328), 1,
      anon_sym_RBRACE,
    ACTIONS(333), 1,
      anon_sym_scroll_factor,
    ACTIONS(336), 1,
      anon_sym_tap_button_map,
    STATE(61), 1,
      sym__touchpad_section_var,
    STATE(43), 2,
      sym_comment,
      aux_sym__input_variable_section_repeat1,
    ACTIONS(330), 7,
      anon_sym_disable_while_typing,
      anon_sym_natural_scroll,
      anon_sym_middle_button_emulation,
      anon_sym_clickfinger_behavior,
      anon_sym_tap_DASHto_DASHclick,
      anon_sym_drag_lock,
      anon_sym_tap_DASHand_DASHdrag,
  [1735] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    STATE(44), 1,
      sym_comment,
    ACTIONS(321), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(182), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(260), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(319), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1765] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_comment,
    ACTIONS(321), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(182), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(196), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(319), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1795] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    STATE(46), 1,
      sym_comment,
    ACTIONS(321), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(182), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(192), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(319), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1825] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(339), 1,
      sym__newline,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    ACTIONS(345), 1,
      anon_sym_scroll_factor,
    ACTIONS(347), 1,
      anon_sym_tap_button_map,
    STATE(43), 1,
      aux_sym__input_variable_section_repeat1,
    STATE(47), 1,
      sym_comment,
    STATE(61), 1,
      sym__touchpad_section_var,
    ACTIONS(343), 7,
      anon_sym_disable_while_typing,
      anon_sym_natural_scroll,
      anon_sym_middle_button_emulation,
      anon_sym_clickfinger_behavior,
      anon_sym_tap_DASHto_DASHclick,
      anon_sym_drag_lock,
      anon_sym_tap_DASHand_DASHdrag,
  [1859] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(349), 1,
      sym__newline,
    ACTIONS(355), 1,
      anon_sym_workspace_swipe_cancel_ratio,
    STATE(48), 1,
      sym_comment,
    STATE(51), 1,
      aux_sym_variable_section_repeat5,
    STATE(64), 1,
      sym__gestures_section_var,
    ACTIONS(353), 3,
      anon_sym_workspace_swipe_fingers,
      anon_sym_workspace_swipe_distance,
      anon_sym_workspace_swipe_min_speed_to_force,
    ACTIONS(351), 5,
      anon_sym_workspace_swipe,
      anon_sym_workspace_swipe_invert,
      anon_sym_workspace_swipe_create_new,
      anon_sym_workspace_swipe_forever,
      anon_sym_workspace_swipe_numbered,
  [1893] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(339), 1,
      sym__newline,
    ACTIONS(345), 1,
      anon_sym_scroll_factor,
    ACTIONS(347), 1,
      anon_sym_tap_button_map,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym__input_variable_section_repeat1,
    STATE(49), 1,
      sym_comment,
    STATE(61), 1,
      sym__touchpad_section_var,
    ACTIONS(343), 7,
      anon_sym_disable_while_typing,
      anon_sym_natural_scroll,
      anon_sym_middle_button_emulation,
      anon_sym_clickfinger_behavior,
      anon_sym_tap_DASHto_DASHclick,
      anon_sym_drag_lock,
      anon_sym_tap_DASHand_DASHdrag,
  [1927] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    STATE(50), 1,
      sym_comment,
    ACTIONS(321), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(182), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(189), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(319), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1957] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(349), 1,
      sym__newline,
    ACTIONS(355), 1,
      anon_sym_workspace_swipe_cancel_ratio,
    STATE(51), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_variable_section_repeat5,
    STATE(64), 1,
      sym__gestures_section_var,
    ACTIONS(353), 3,
      anon_sym_workspace_swipe_fingers,
      anon_sym_workspace_swipe_distance,
      anon_sym_workspace_swipe_min_speed_to_force,
    ACTIONS(351), 5,
      anon_sym_workspace_swipe,
      anon_sym_workspace_swipe_invert,
      anon_sym_workspace_swipe_create_new,
      anon_sym_workspace_swipe_forever,
      anon_sym_workspace_swipe_numbered,
  [1991] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(359), 1,
      sym__newline,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
    ACTIONS(370), 1,
      anon_sym_workspace_swipe_cancel_ratio,
    STATE(64), 1,
      sym__gestures_section_var,
    STATE(52), 2,
      sym_comment,
      aux_sym_variable_section_repeat5,
    ACTIONS(367), 3,
      anon_sym_workspace_swipe_fingers,
      anon_sym_workspace_swipe_distance,
      anon_sym_workspace_swipe_min_speed_to_force,
    ACTIONS(364), 5,
      anon_sym_workspace_swipe,
      anon_sym_workspace_swipe_invert,
      anon_sym_workspace_swipe_create_new,
      anon_sym_workspace_swipe_forever,
      anon_sym_workspace_swipe_numbered,
  [2023] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    STATE(53), 1,
      sym_comment,
    ACTIONS(321), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(182), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(191), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(319), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2053] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(373), 1,
      sym__newline,
    STATE(54), 1,
      sym_comment,
    ACTIONS(375), 10,
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
  [2075] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(377), 1,
      sym__newline,
    STATE(55), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym_variable_section_repeat8,
    STATE(71), 1,
      sym__debug_section_var,
    ACTIONS(381), 2,
      anon_sym_damage_tracking,
      anon_sym_manual_crash,
    ACTIONS(379), 5,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_enable_stdout_logs,
  [2105] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(377), 1,
      sym__newline,
    STATE(55), 1,
      aux_sym_variable_section_repeat8,
    STATE(56), 1,
      sym_comment,
    STATE(71), 1,
      sym__debug_section_var,
    ACTIONS(381), 2,
      anon_sym_damage_tracking,
      anon_sym_manual_crash,
    ACTIONS(379), 5,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_enable_stdout_logs,
  [2135] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(383), 1,
      sym__newline,
    STATE(57), 1,
      sym_comment,
    ACTIONS(385), 10,
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
  [2157] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(387), 1,
      sym__newline,
    STATE(58), 1,
      sym_comment,
    ACTIONS(389), 10,
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
  [2179] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    ACTIONS(391), 1,
      anon_sym_rgb,
    ACTIONS(393), 1,
      anon_sym_rgba,
    ACTIONS(395), 1,
      anon_sym_0x,
    STATE(59), 1,
      sym_comment,
    STATE(63), 1,
      aux_sym_gradient_repeat1,
    STATE(86), 1,
      sym_color,
    STATE(178), 2,
      sym_gradient,
      sym_variable_reference,
    STATE(87), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [2213] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(397), 1,
      sym__newline,
    STATE(60), 1,
      sym_comment,
    ACTIONS(399), 10,
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
  [2235] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym__newline,
    STATE(61), 1,
      sym_comment,
    ACTIONS(403), 10,
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
  [2257] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(405), 1,
      sym__newline,
    ACTIONS(408), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym__debug_section_var,
    ACTIONS(413), 2,
      anon_sym_damage_tracking,
      anon_sym_manual_crash,
    STATE(62), 2,
      sym_comment,
      aux_sym_variable_section_repeat8,
    ACTIONS(410), 5,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_enable_stdout_logs,
  [2285] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(391), 1,
      anon_sym_rgb,
    ACTIONS(416), 1,
      sym_int,
    ACTIONS(418), 1,
      anon_sym_rgba,
    ACTIONS(420), 1,
      anon_sym_0x,
    ACTIONS(422), 1,
      sym__newline,
    STATE(63), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym_gradient_repeat1,
    STATE(86), 1,
      sym_color,
    STATE(212), 1,
      sym_degree,
    STATE(87), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [2321] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(424), 1,
      sym__newline,
    STATE(64), 1,
      sym_comment,
    ACTIONS(426), 10,
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
  [2343] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(428), 1,
      sym_int,
    ACTIONS(430), 1,
      anon_sym_rgb,
    ACTIONS(433), 1,
      anon_sym_rgba,
    ACTIONS(436), 1,
      anon_sym_0x,
    ACTIONS(439), 1,
      sym__newline,
    STATE(86), 1,
      sym_color,
    STATE(65), 2,
      sym_comment,
      aux_sym_gradient_repeat1,
    STATE(87), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [2374] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(441), 1,
      sym__newline,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym__binds_section_var,
    ACTIONS(449), 2,
      anon_sym_scroll_event_delay,
      anon_sym_focus_preferred_method,
    STATE(66), 2,
      sym_comment,
      aux_sym_variable_section_repeat7,
    ACTIONS(446), 3,
      anon_sym_pass_mouse_when_bound,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
  [2400] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym__newline,
    STATE(67), 1,
      sym_comment,
    ACTIONS(454), 8,
      anon_sym_RBRACE,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_damage_tracking,
      anon_sym_enable_stdout_logs,
      anon_sym_manual_crash,
  [2420] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(456), 1,
      sym__newline,
    STATE(66), 1,
      aux_sym_variable_section_repeat7,
    STATE(68), 1,
      sym_comment,
    STATE(75), 1,
      sym__binds_section_var,
    ACTIONS(460), 2,
      anon_sym_scroll_event_delay,
      anon_sym_focus_preferred_method,
    ACTIONS(458), 3,
      anon_sym_pass_mouse_when_bound,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
  [2448] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(456), 1,
      sym__newline,
    STATE(68), 1,
      aux_sym_variable_section_repeat7,
    STATE(69), 1,
      sym_comment,
    STATE(75), 1,
      sym__binds_section_var,
    ACTIONS(460), 2,
      anon_sym_scroll_event_delay,
      anon_sym_focus_preferred_method,
    ACTIONS(458), 3,
      anon_sym_pass_mouse_when_bound,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
  [2476] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(462), 1,
      sym__newline,
    STATE(70), 1,
      sym_comment,
    ACTIONS(464), 8,
      anon_sym_RBRACE,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_damage_tracking,
      anon_sym_enable_stdout_logs,
      anon_sym_manual_crash,
  [2496] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(466), 1,
      sym__newline,
    STATE(71), 1,
      sym_comment,
    ACTIONS(468), 8,
      anon_sym_RBRACE,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_damage_tracking,
      anon_sym_enable_stdout_logs,
      anon_sym_manual_crash,
  [2516] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    ACTIONS(391), 1,
      anon_sym_rgb,
    ACTIONS(393), 1,
      anon_sym_rgba,
    ACTIONS(395), 1,
      anon_sym_0x,
    STATE(72), 1,
      sym_comment,
    STATE(189), 2,
      sym_color,
      sym_variable_reference,
    STATE(87), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [2544] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(470), 1,
      sym__newline,
    STATE(73), 1,
      sym_comment,
    ACTIONS(472), 6,
      anon_sym_RBRACE,
      anon_sym_pass_mouse_when_bound,
      anon_sym_scroll_event_delay,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
      anon_sym_focus_preferred_method,
  [2562] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(474), 1,
      sym_word,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(478), 1,
      anon_sym_desc,
    STATE(74), 1,
      sym_comment,
    STATE(149), 1,
      sym_monitor_desc,
    STATE(186), 1,
      sym__monitor_name,
    STATE(286), 1,
      sym__monitor_config,
    STATE(287), 1,
      sym__monitor_disable,
  [2590] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(480), 1,
      sym__newline,
    STATE(75), 1,
      sym_comment,
    ACTIONS(482), 6,
      anon_sym_RBRACE,
      anon_sym_pass_mouse_when_bound,
      anon_sym_scroll_event_delay,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
      anon_sym_focus_preferred_method,
  [2608] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(484), 1,
      sym__newline,
    STATE(76), 1,
      sym_comment,
    ACTIONS(486), 6,
      anon_sym_RBRACE,
      anon_sym_pass_mouse_when_bound,
      anon_sym_scroll_event_delay,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
      anon_sym_focus_preferred_method,
  [2626] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(488), 1,
      sym_int,
    ACTIONS(492), 1,
      sym_disable,
    STATE(77), 1,
      sym_comment,
    STATE(177), 2,
      sym_resolution,
      sym_auto_resolution,
    ACTIONS(490), 3,
      anon_sym_preferred,
      anon_sym_highres,
      anon_sym_highrr,
  [2648] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    ACTIONS(494), 1,
      sym__newline,
    ACTIONS(496), 1,
      anon_sym_transform,
    ACTIONS(498), 1,
      anon_sym_output,
    STATE(78), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym__input_variable_section_repeat2,
    STATE(99), 1,
      sym__touchdevice_section_var,
  [2673] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(488), 1,
      sym_int,
    STATE(79), 1,
      sym_comment,
    STATE(146), 2,
      sym_resolution,
      sym_auto_resolution,
    ACTIONS(490), 3,
      anon_sym_preferred,
      anon_sym_highres,
      anon_sym_highrr,
  [2692] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(500), 1,
      anon_sym_transform,
    ACTIONS(502), 1,
      anon_sym_mirror,
    ACTIONS(504), 1,
      anon_sym_bitdepth,
    STATE(80), 1,
      sym_comment,
    STATE(131), 3,
      sym_mirror,
      sym_bitdepth,
      sym_transform,
  [2713] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(506), 1,
      sym__newline,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
    ACTIONS(511), 1,
      anon_sym_transform,
    ACTIONS(514), 1,
      anon_sym_output,
    STATE(99), 1,
      sym__touchdevice_section_var,
    STATE(81), 2,
      sym_comment,
      aux_sym__input_variable_section_repeat2,
  [2736] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    ACTIONS(494), 1,
      sym__newline,
    ACTIONS(496), 1,
      anon_sym_transform,
    ACTIONS(498), 1,
      anon_sym_output,
    STATE(78), 1,
      aux_sym__input_variable_section_repeat2,
    STATE(82), 1,
      sym_comment,
    STATE(99), 1,
      sym__touchdevice_section_var,
  [2761] = 6,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(517), 1,
      sym__newline,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
    ACTIONS(522), 1,
      anon_sym_enabled,
    STATE(127), 1,
      sym__animation_section_var,
    STATE(83), 2,
      sym_comment,
      aux_sym_variable_section_repeat3,
  [2781] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(525), 1,
      sym__newline,
    ACTIONS(527), 1,
      anon_sym_enabled,
    STATE(83), 1,
      aux_sym_variable_section_repeat3,
    STATE(84), 1,
      sym_comment,
    STATE(127), 1,
      sym__animation_section_var,
  [2803] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(525), 1,
      sym__newline,
    ACTIONS(527), 1,
      anon_sym_enabled,
    STATE(84), 1,
      aux_sym_variable_section_repeat3,
    STATE(85), 1,
      sym_comment,
    STATE(127), 1,
      sym__animation_section_var,
  [2825] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(531), 1,
      sym__newline,
    STATE(86), 1,
      sym_comment,
    ACTIONS(529), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [2841] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(535), 1,
      sym__newline,
    STATE(87), 1,
      sym_comment,
    ACTIONS(533), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [2857] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(539), 1,
      sym__newline,
    STATE(88), 1,
      sym_comment,
    ACTIONS(537), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [2873] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(543), 1,
      sym__newline,
    STATE(89), 1,
      sym_comment,
    ACTIONS(541), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [2889] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(547), 1,
      sym__newline,
    STATE(90), 1,
      sym_comment,
    ACTIONS(545), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [2905] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(549), 1,
      sym_word,
    ACTIONS(551), 1,
      anon_sym_address,
    STATE(91), 1,
      sym_comment,
    STATE(170), 1,
      sym_layer_address,
    STATE(171), 1,
      sym_layer_identifier,
  [2924] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    ACTIONS(553), 1,
      sym_float,
    STATE(92), 1,
      sym_comment,
    STATE(189), 2,
      sym_vec2,
      sym_variable_reference,
  [2941] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(555), 1,
      sym_word,
    ACTIONS(557), 1,
      anon_sym_desc,
    STATE(93), 1,
      sym_comment,
    STATE(129), 1,
      sym__monitor_name,
    STATE(133), 1,
      sym_monitor_desc,
  [2960] = 6,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(559), 1,
      sym__newline,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      sym_comment,
    STATE(95), 1,
      aux_sym__monitor_config_repeat1,
    STATE(137), 1,
      sym__monitor_config_optional,
  [2979] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(563), 1,
      sym__newline,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      sym__monitor_config_optional,
    STATE(95), 2,
      sym_comment,
      aux_sym__monitor_config_repeat1,
  [2996] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(568), 1,
      sym__newline,
    STATE(96), 1,
      sym_comment,
    ACTIONS(570), 3,
      anon_sym_RBRACE,
      anon_sym_transform,
      anon_sym_output,
  [3011] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(572), 1,
      sym__newline,
    STATE(97), 1,
      sym_comment,
    ACTIONS(574), 3,
      anon_sym_RBRACE,
      anon_sym_transform,
      anon_sym_output,
  [3026] = 6,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    ACTIONS(576), 1,
      sym__newline,
    STATE(94), 1,
      aux_sym__monitor_config_repeat1,
    STATE(98), 1,
      sym_comment,
    STATE(137), 1,
      sym__monitor_config_optional,
  [3045] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(578), 1,
      sym__newline,
    STATE(99), 1,
      sym_comment,
    ACTIONS(580), 3,
      anon_sym_RBRACE,
      anon_sym_transform,
      anon_sym_output,
  [3060] = 6,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    ACTIONS(582), 1,
      sym__newline,
    STATE(95), 1,
      aux_sym__monitor_config_repeat1,
    STATE(100), 1,
      sym_comment,
    STATE(137), 1,
      sym__monitor_config_optional,
  [3079] = 6,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    ACTIONS(584), 1,
      sym__newline,
    STATE(100), 1,
      aux_sym__monitor_config_repeat1,
    STATE(101), 1,
      sym_comment,
    STATE(137), 1,
      sym__monitor_config_optional,
  [3098] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    ACTIONS(586), 1,
      sym_float,
    STATE(102), 1,
      sym_comment,
    STATE(260), 1,
      sym_variable_reference,
  [3114] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    ACTIONS(588), 1,
      sym_int,
    STATE(103), 1,
      sym_comment,
    STATE(198), 1,
      sym_variable_reference,
  [3130] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    ACTIONS(590), 1,
      sym_float,
    STATE(104), 1,
      sym_comment,
    STATE(189), 1,
      sym_variable_reference,
  [3146] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    ACTIONS(592), 1,
      sym_int,
    STATE(105), 1,
      sym_comment,
    STATE(195), 1,
      sym_variable_reference,
  [3162] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(594), 1,
      sym_str,
    ACTIONS(596), 1,
      anon_sym_DOLLAR,
    STATE(106), 1,
      sym_comment,
    STATE(261), 1,
      sym_variable_reference,
  [3178] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    ACTIONS(598), 1,
      sym_int,
    STATE(107), 1,
      sym_comment,
    STATE(261), 1,
      sym_variable_reference,
  [3194] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(596), 1,
      anon_sym_DOLLAR,
    ACTIONS(600), 1,
      sym_str,
    STATE(108), 1,
      sym_comment,
    STATE(260), 1,
      sym_variable_reference,
  [3210] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    ACTIONS(592), 1,
      sym_float,
    STATE(109), 1,
      sym_comment,
    STATE(195), 1,
      sym_variable_reference,
  [3226] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    ACTIONS(590), 1,
      sym_int,
    STATE(110), 1,
      sym_comment,
    STATE(189), 1,
      sym_variable_reference,
  [3242] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(602), 1,
      sym_int,
    ACTIONS(604), 1,
      sym_auto,
    STATE(111), 1,
      sym_comment,
    STATE(204), 1,
      sym_position,
  [3258] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(606), 1,
      sym__newline,
    STATE(112), 1,
      sym_comment,
    ACTIONS(608), 2,
      anon_sym_RBRACE,
      anon_sym_enabled,
  [3272] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(610), 1,
      sym__newline,
    STATE(113), 1,
      sym_comment,
    ACTIONS(612), 2,
      anon_sym_RBRACE,
      anon_sym_enabled,
  [3286] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(602), 1,
      sym_int,
    ACTIONS(614), 1,
      sym_auto,
    STATE(114), 1,
      sym_comment,
    STATE(239), 1,
      sym_position,
  [3302] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(596), 1,
      anon_sym_DOLLAR,
    ACTIONS(616), 1,
      sym_str,
    STATE(115), 1,
      sym_comment,
    STATE(178), 1,
      sym_variable_reference,
  [3318] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    ACTIONS(618), 1,
      sym_int,
    STATE(116), 1,
      sym_comment,
    STATE(192), 1,
      sym_variable_reference,
  [3334] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(596), 1,
      anon_sym_DOLLAR,
    ACTIONS(620), 1,
      sym_str,
    STATE(117), 1,
      sym_comment,
    STATE(192), 1,
      sym_variable_reference,
  [3350] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    ACTIONS(622), 1,
      sym_int,
    STATE(118), 1,
      sym_comment,
    STATE(178), 1,
      sym_variable_reference,
  [3366] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(596), 1,
      anon_sym_DOLLAR,
    ACTIONS(624), 1,
      sym_str,
    STATE(119), 1,
      sym_comment,
    STATE(189), 1,
      sym_variable_reference,
  [3382] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    ACTIONS(626), 1,
      sym_int,
    STATE(120), 1,
      sym_comment,
    STATE(197), 1,
      sym_variable_reference,
  [3398] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    ACTIONS(622), 1,
      sym_float,
    STATE(121), 1,
      sym_comment,
    STATE(178), 1,
      sym_variable_reference,
  [3414] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(122), 1,
      sym_comment,
    STATE(152), 1,
      sym_layer_rule,
    ACTIONS(628), 2,
      anon_sym_blur,
      anon_sym_unset,
  [3428] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    ACTIONS(630), 1,
      sym_int,
    STATE(123), 1,
      sym_comment,
    STATE(196), 1,
      sym_variable_reference,
  [3444] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    ACTIONS(618), 1,
      sym_float,
    STATE(124), 1,
      sym_comment,
    STATE(192), 1,
      sym_variable_reference,
  [3460] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(596), 1,
      anon_sym_DOLLAR,
    ACTIONS(632), 1,
      sym_str,
    STATE(125), 1,
      sym_comment,
    STATE(196), 1,
      sym_variable_reference,
  [3476] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    ACTIONS(630), 1,
      sym_float,
    STATE(126), 1,
      sym_comment,
    STATE(196), 1,
      sym_variable_reference,
  [3492] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(634), 1,
      sym__newline,
    STATE(127), 1,
      sym_comment,
    ACTIONS(636), 2,
      anon_sym_RBRACE,
      anon_sym_enabled,
  [3506] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(638), 1,
      sym__newline,
    ACTIONS(640), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      sym_comment,
  [3519] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(642), 1,
      sym__newline,
    ACTIONS(644), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      sym_comment,
  [3532] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(646), 1,
      sym__newline,
    ACTIONS(648), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      sym_comment,
  [3545] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(650), 1,
      sym__newline,
    ACTIONS(652), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      sym_comment,
  [3558] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(654), 1,
      anon_sym_COMMA,
    ACTIONS(656), 1,
      sym_at,
    STATE(132), 1,
      sym_comment,
  [3571] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(658), 1,
      sym__newline,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      sym_comment,
  [3584] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(662), 1,
      sym__newline,
    ACTIONS(664), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      sym_comment,
  [3597] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(135), 1,
      sym_comment,
    ACTIONS(666), 2,
      sym_float,
      sym_auto,
  [3608] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(136), 1,
      sym_comment,
    ACTIONS(668), 2,
      sym_float,
      sym_auto,
  [3619] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(670), 1,
      sym__newline,
    ACTIONS(672), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      sym_comment,
  [3632] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(674), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      sym_comment,
  [3642] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(676), 1,
      sym__newline,
    STATE(139), 1,
      sym_comment,
  [3652] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(678), 1,
      anon_sym_EQ,
    STATE(140), 1,
      sym_comment,
  [3662] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(680), 1,
      sym__newline,
    STATE(141), 1,
      sym_comment,
  [3672] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(682), 1,
      sym_str,
    STATE(142), 1,
      sym_comment,
  [3682] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(684), 1,
      sym_str,
    STATE(143), 1,
      sym_comment,
  [3692] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(686), 1,
      sym_by,
    STATE(144), 1,
      sym_comment,
  [3702] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(688), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      sym_comment,
  [3712] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      sym_comment,
  [3722] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(692), 1,
      aux_sym_monitor_desc_token1,
    STATE(147), 1,
      sym_comment,
  [3732] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(694), 1,
      sym__newline,
    STATE(148), 1,
      sym_comment,
  [3742] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(658), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      sym_comment,
  [3752] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(696), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      sym_comment,
  [3762] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(698), 1,
      anon_sym_COLON,
    STATE(151), 1,
      sym_comment,
  [3772] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(700), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      sym_comment,
  [3782] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(702), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      sym_comment,
  [3792] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(704), 1,
      sym__newline,
    STATE(154), 1,
      sym_comment,
  [3802] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(706), 1,
      aux_sym_comment_token1,
    STATE(155), 1,
      sym_comment,
  [3812] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(708), 1,
      sym__newline,
    STATE(156), 1,
      sym_comment,
  [3822] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(710), 1,
      anon_sym_LBRACE,
    STATE(157), 1,
      sym_comment,
  [3832] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(712), 1,
      sym__newline,
    STATE(158), 1,
      sym_comment,
  [3842] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(714), 1,
      sym__newline,
    STATE(159), 1,
      sym_comment,
  [3852] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(716), 1,
      sym_word,
    STATE(160), 1,
      sym_comment,
  [3862] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(718), 1,
      sym_word,
    STATE(161), 1,
      sym_comment,
  [3872] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(720), 1,
      sym_str,
    STATE(162), 1,
      sym_comment,
  [3882] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(722), 1,
      sym_shell_command,
    STATE(163), 1,
      sym_comment,
  [3892] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(724), 1,
      sym_shell_command,
    STATE(164), 1,
      sym_comment,
  [3902] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(726), 1,
      aux_sym_variable_section_token1,
    STATE(165), 1,
      sym_comment,
  [3912] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(728), 1,
      sym__newline,
    STATE(166), 1,
      sym_comment,
  [3922] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(730), 1,
      sym__newline,
    STATE(167), 1,
      sym_comment,
  [3932] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(732), 1,
      sym__newline,
    STATE(168), 1,
      sym_comment,
  [3942] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(734), 1,
      anon_sym_COLON,
    STATE(169), 1,
      sym_comment,
  [3952] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(736), 1,
      sym__newline,
    STATE(170), 1,
      sym_comment,
  [3962] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(738), 1,
      sym__newline,
    STATE(171), 1,
      sym_comment,
  [3972] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(740), 1,
      sym__newline,
    STATE(172), 1,
      sym_comment,
  [3982] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(742), 1,
      sym__newline,
    STATE(173), 1,
      sym_comment,
  [3992] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(744), 1,
      sym__immediate_int,
    STATE(174), 1,
      sym_comment,
  [4002] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(662), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      sym_comment,
  [4012] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(746), 1,
      sym__newline,
    STATE(176), 1,
      sym_comment,
  [4022] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(748), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      sym_comment,
  [4032] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(750), 1,
      sym__newline,
    STATE(178), 1,
      sym_comment,
  [4042] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(752), 1,
      aux_sym_variable_reference_token1,
    STATE(179), 1,
      sym_comment,
  [4052] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(754), 1,
      sym__newline,
    STATE(180), 1,
      sym_comment,
  [4062] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(756), 1,
      sym__newline,
    STATE(181), 1,
      sym_comment,
  [4072] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(758), 1,
      sym__newline,
    STATE(182), 1,
      sym_comment,
  [4082] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(760), 1,
      anon_sym_LPAREN,
    STATE(183), 1,
      sym_comment,
  [4092] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(762), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym_comment,
  [4102] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(764), 1,
      sym__hex_comp,
    STATE(185), 1,
      sym_comment,
  [4112] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(766), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      sym_comment,
  [4122] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(768), 1,
      anon_sym_EQ,
    STATE(187), 1,
      sym_comment,
  [4132] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(770), 1,
      sym__newline,
    STATE(188), 1,
      sym_comment,
  [4142] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(772), 1,
      sym__newline,
    STATE(189), 1,
      sym_comment,
  [4152] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(774), 1,
      sym_float,
    STATE(190), 1,
      sym_comment,
  [4162] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(776), 1,
      sym__newline,
    STATE(191), 1,
      sym_comment,
  [4172] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(778), 1,
      sym__newline,
    STATE(192), 1,
      sym_comment,
  [4182] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(780), 1,
      sym__newline,
    STATE(193), 1,
      sym_comment,
  [4192] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(782), 1,
      sym__newline,
    STATE(194), 1,
      sym_comment,
  [4202] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(784), 1,
      sym__newline,
    STATE(195), 1,
      sym_comment,
  [4212] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(786), 1,
      sym__newline,
    STATE(196), 1,
      sym_comment,
  [4222] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(788), 1,
      sym__newline,
    STATE(197), 1,
      sym_comment,
  [4232] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(790), 1,
      sym__newline,
    STATE(198), 1,
      sym_comment,
  [4242] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(792), 1,
      sym__newline,
    STATE(199), 1,
      sym_comment,
  [4252] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(794), 1,
      sym__newline,
    STATE(200), 1,
      sym_comment,
  [4262] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(796), 1,
      anon_sym_0x2,
    STATE(201), 1,
      sym_comment,
  [4272] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(798), 1,
      anon_sym_EQ,
    STATE(202), 1,
      sym_comment,
  [4282] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(800), 1,
      sym_by,
    STATE(203), 1,
      sym_comment,
  [4292] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(802), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      sym_comment,
  [4302] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(804), 1,
      anon_sym_EQ,
    STATE(205), 1,
      sym_comment,
  [4312] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(806), 1,
      sym__newline,
    STATE(206), 1,
      sym_comment,
  [4322] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(808), 1,
      sym__newline,
    STATE(207), 1,
      sym_comment,
  [4332] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(810), 1,
      sym__hex_comp,
    STATE(208), 1,
      sym_comment,
  [4342] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(812), 1,
      sym__hex_comp,
    STATE(209), 1,
      sym_comment,
  [4352] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(814), 1,
      sym__hex_comp,
    STATE(210), 1,
      sym_comment,
  [4362] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(816), 1,
      anon_sym_deg,
    STATE(211), 1,
      sym_comment,
  [4372] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(818), 1,
      sym__newline,
    STATE(212), 1,
      sym_comment,
  [4382] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(820), 1,
      anon_sym_COLON,
    STATE(213), 1,
      sym_comment,
  [4392] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(822), 1,
      anon_sym_EQ,
    STATE(214), 1,
      sym_comment,
  [4402] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym__newline,
    STATE(215), 1,
      sym_comment,
  [4412] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(826), 1,
      anon_sym_EQ,
    STATE(216), 1,
      sym_comment,
  [4422] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      ts_builtin_sym_end,
    STATE(217), 1,
      sym_comment,
  [4432] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(830), 1,
      anon_sym_EQ,
    STATE(218), 1,
      sym_comment,
  [4442] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(832), 1,
      anon_sym_EQ,
    STATE(219), 1,
      sym_comment,
  [4452] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(834), 1,
      anon_sym_EQ,
    STATE(220), 1,
      sym_comment,
  [4462] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(836), 1,
      anon_sym_EQ,
    STATE(221), 1,
      sym_comment,
  [4472] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(838), 1,
      anon_sym_EQ,
    STATE(222), 1,
      sym_comment,
  [4482] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(840), 1,
      anon_sym_EQ,
    STATE(223), 1,
      sym_comment,
  [4492] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      anon_sym_EQ,
    STATE(224), 1,
      sym_comment,
  [4502] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(844), 1,
      anon_sym_EQ,
    STATE(225), 1,
      sym_comment,
  [4512] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(846), 1,
      anon_sym_EQ,
    STATE(226), 1,
      sym_comment,
  [4522] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(848), 1,
      anon_sym_EQ,
    STATE(227), 1,
      sym_comment,
  [4532] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(850), 1,
      anon_sym_EQ,
    STATE(228), 1,
      sym_comment,
  [4542] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(852), 1,
      anon_sym_EQ,
    STATE(229), 1,
      sym_comment,
  [4552] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(854), 1,
      anon_sym_EQ,
    STATE(230), 1,
      sym_comment,
  [4562] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(856), 1,
      anon_sym_EQ,
    STATE(231), 1,
      sym_comment,
  [4572] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      anon_sym_COLON,
    STATE(232), 1,
      sym_comment,
  [4582] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    STATE(233), 1,
      sym_comment,
  [4592] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(862), 1,
      anon_sym_LBRACE,
    STATE(234), 1,
      sym_comment,
  [4602] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(864), 1,
      aux_sym_layer_address_token1,
    STATE(235), 1,
      sym_comment,
  [4612] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(866), 1,
      sym__immediate_int,
    STATE(236), 1,
      sym_comment,
  [4622] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(868), 1,
      sym__immediate_int,
    STATE(237), 1,
      sym_comment,
  [4632] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(870), 1,
      anon_sym_EQ,
    STATE(238), 1,
      sym_comment,
  [4642] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(872), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      sym_comment,
  [4652] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(874), 1,
      sym__hex_comp,
    STATE(240), 1,
      sym_comment,
  [4662] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(876), 1,
      sym__hex_comp,
    STATE(241), 1,
      sym_comment,
  [4672] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(878), 1,
      sym__hex_comp,
    STATE(242), 1,
      sym_comment,
  [4682] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(880), 1,
      sym__newline,
    STATE(243), 1,
      sym_comment,
  [4692] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(882), 1,
      anon_sym_LBRACE,
    STATE(244), 1,
      sym_comment,
  [4702] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(884), 1,
      anon_sym_EQ,
    STATE(245), 1,
      sym_comment,
  [4712] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(886), 1,
      anon_sym_EQ,
    STATE(246), 1,
      sym_comment,
  [4722] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(888), 1,
      anon_sym_LBRACE,
    STATE(247), 1,
      sym_comment,
  [4732] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(890), 1,
      anon_sym_LBRACE,
    STATE(248), 1,
      sym_comment,
  [4742] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(892), 1,
      anon_sym_EQ,
    STATE(249), 1,
      sym_comment,
  [4752] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(894), 1,
      anon_sym_EQ,
    STATE(250), 1,
      sym_comment,
  [4762] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    STATE(251), 1,
      sym_comment,
  [4772] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(898), 1,
      sym__newline,
    STATE(252), 1,
      sym_comment,
  [4782] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(900), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      sym_comment,
  [4792] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    STATE(254), 1,
      sym_comment,
  [4802] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(904), 1,
      anon_sym_LBRACE,
    STATE(255), 1,
      sym_comment,
  [4812] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(906), 1,
      anon_sym_LBRACE,
    STATE(256), 1,
      sym_comment,
  [4822] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(908), 1,
      sym__hex_comp,
    STATE(257), 1,
      sym_comment,
  [4832] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(910), 1,
      sym__hex_comp,
    STATE(258), 1,
      sym_comment,
  [4842] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(912), 1,
      sym__hex_comp,
    STATE(259), 1,
      sym_comment,
  [4852] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(914), 1,
      sym__newline,
    STATE(260), 1,
      sym_comment,
  [4862] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(916), 1,
      sym__newline,
    STATE(261), 1,
      sym_comment,
  [4872] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(918), 1,
      anon_sym_LBRACE,
    STATE(262), 1,
      sym_comment,
  [4882] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(920), 1,
      anon_sym_EQ,
    STATE(263), 1,
      sym_comment,
  [4892] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(922), 1,
      anon_sym_EQ,
    STATE(264), 1,
      sym_comment,
  [4902] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(924), 1,
      anon_sym_EQ,
    STATE(265), 1,
      sym_comment,
  [4912] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(926), 1,
      anon_sym_RPAREN,
    STATE(266), 1,
      sym_comment,
  [4922] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(928), 1,
      sym__hex_comp,
    STATE(267), 1,
      sym_comment,
  [4932] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(930), 1,
      anon_sym_EQ,
    STATE(268), 1,
      sym_comment,
  [4942] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(932), 1,
      anon_sym_LBRACE,
    STATE(269), 1,
      sym_comment,
  [4952] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(934), 1,
      anon_sym_EQ,
    STATE(270), 1,
      sym_comment,
  [4962] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(936), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      sym_comment,
  [4972] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(272), 1,
      sym_comment,
  [4982] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(940), 1,
      anon_sym_COMMA,
    STATE(273), 1,
      sym_comment,
  [4992] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(942), 1,
      anon_sym_EQ,
    STATE(274), 1,
      sym_comment,
  [5002] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(944), 1,
      anon_sym_EQ,
    STATE(275), 1,
      sym_comment,
  [5012] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(946), 1,
      anon_sym_EQ,
    STATE(276), 1,
      sym_comment,
  [5022] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(948), 1,
      anon_sym_EQ,
    STATE(277), 1,
      sym_comment,
  [5032] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(950), 1,
      anon_sym_RPAREN,
    STATE(278), 1,
      sym_comment,
  [5042] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(952), 1,
      sym_int,
    STATE(279), 1,
      sym_comment,
  [5052] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(954), 1,
      anon_sym_EQ,
    STATE(280), 1,
      sym_comment,
  [5062] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(956), 1,
      sym_int,
    STATE(281), 1,
      sym_comment,
  [5072] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(958), 1,
      anon_sym_EQ,
    STATE(282), 1,
      sym_comment,
  [5082] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(960), 1,
      anon_sym_EQ,
    STATE(283), 1,
      sym_comment,
  [5092] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(962), 1,
      anon_sym_EQ,
    STATE(284), 1,
      sym_comment,
  [5102] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(964), 1,
      anon_sym_EQ,
    STATE(285), 1,
      sym_comment,
  [5112] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(966), 1,
      sym__newline,
    STATE(286), 1,
      sym_comment,
  [5122] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(968), 1,
      sym__newline,
    STATE(287), 1,
      sym_comment,
  [5132] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      aux_sym_monitor_desc_token1,
    STATE(288), 1,
      sym_comment,
  [5142] = 1,
    ACTIONS(972), 1,
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
  [SMALL_STATE(9)] = 335,
  [SMALL_STATE(10)] = 410,
  [SMALL_STATE(11)] = 465,
  [SMALL_STATE(12)] = 542,
  [SMALL_STATE(13)] = 595,
  [SMALL_STATE(14)] = 632,
  [SMALL_STATE(15)] = 669,
  [SMALL_STATE(16)] = 706,
  [SMALL_STATE(17)] = 761,
  [SMALL_STATE(18)] = 814,
  [SMALL_STATE(19)] = 869,
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
  [SMALL_STATE(40)] = 1613,
  [SMALL_STATE(41)] = 1643,
  [SMALL_STATE(42)] = 1673,
  [SMALL_STATE(43)] = 1703,
  [SMALL_STATE(44)] = 1735,
  [SMALL_STATE(45)] = 1765,
  [SMALL_STATE(46)] = 1795,
  [SMALL_STATE(47)] = 1825,
  [SMALL_STATE(48)] = 1859,
  [SMALL_STATE(49)] = 1893,
  [SMALL_STATE(50)] = 1927,
  [SMALL_STATE(51)] = 1957,
  [SMALL_STATE(52)] = 1991,
  [SMALL_STATE(53)] = 2023,
  [SMALL_STATE(54)] = 2053,
  [SMALL_STATE(55)] = 2075,
  [SMALL_STATE(56)] = 2105,
  [SMALL_STATE(57)] = 2135,
  [SMALL_STATE(58)] = 2157,
  [SMALL_STATE(59)] = 2179,
  [SMALL_STATE(60)] = 2213,
  [SMALL_STATE(61)] = 2235,
  [SMALL_STATE(62)] = 2257,
  [SMALL_STATE(63)] = 2285,
  [SMALL_STATE(64)] = 2321,
  [SMALL_STATE(65)] = 2343,
  [SMALL_STATE(66)] = 2374,
  [SMALL_STATE(67)] = 2400,
  [SMALL_STATE(68)] = 2420,
  [SMALL_STATE(69)] = 2448,
  [SMALL_STATE(70)] = 2476,
  [SMALL_STATE(71)] = 2496,
  [SMALL_STATE(72)] = 2516,
  [SMALL_STATE(73)] = 2544,
  [SMALL_STATE(74)] = 2562,
  [SMALL_STATE(75)] = 2590,
  [SMALL_STATE(76)] = 2608,
  [SMALL_STATE(77)] = 2626,
  [SMALL_STATE(78)] = 2648,
  [SMALL_STATE(79)] = 2673,
  [SMALL_STATE(80)] = 2692,
  [SMALL_STATE(81)] = 2713,
  [SMALL_STATE(82)] = 2736,
  [SMALL_STATE(83)] = 2761,
  [SMALL_STATE(84)] = 2781,
  [SMALL_STATE(85)] = 2803,
  [SMALL_STATE(86)] = 2825,
  [SMALL_STATE(87)] = 2841,
  [SMALL_STATE(88)] = 2857,
  [SMALL_STATE(89)] = 2873,
  [SMALL_STATE(90)] = 2889,
  [SMALL_STATE(91)] = 2905,
  [SMALL_STATE(92)] = 2924,
  [SMALL_STATE(93)] = 2941,
  [SMALL_STATE(94)] = 2960,
  [SMALL_STATE(95)] = 2979,
  [SMALL_STATE(96)] = 2996,
  [SMALL_STATE(97)] = 3011,
  [SMALL_STATE(98)] = 3026,
  [SMALL_STATE(99)] = 3045,
  [SMALL_STATE(100)] = 3060,
  [SMALL_STATE(101)] = 3079,
  [SMALL_STATE(102)] = 3098,
  [SMALL_STATE(103)] = 3114,
  [SMALL_STATE(104)] = 3130,
  [SMALL_STATE(105)] = 3146,
  [SMALL_STATE(106)] = 3162,
  [SMALL_STATE(107)] = 3178,
  [SMALL_STATE(108)] = 3194,
  [SMALL_STATE(109)] = 3210,
  [SMALL_STATE(110)] = 3226,
  [SMALL_STATE(111)] = 3242,
  [SMALL_STATE(112)] = 3258,
  [SMALL_STATE(113)] = 3272,
  [SMALL_STATE(114)] = 3286,
  [SMALL_STATE(115)] = 3302,
  [SMALL_STATE(116)] = 3318,
  [SMALL_STATE(117)] = 3334,
  [SMALL_STATE(118)] = 3350,
  [SMALL_STATE(119)] = 3366,
  [SMALL_STATE(120)] = 3382,
  [SMALL_STATE(121)] = 3398,
  [SMALL_STATE(122)] = 3414,
  [SMALL_STATE(123)] = 3428,
  [SMALL_STATE(124)] = 3444,
  [SMALL_STATE(125)] = 3460,
  [SMALL_STATE(126)] = 3476,
  [SMALL_STATE(127)] = 3492,
  [SMALL_STATE(128)] = 3506,
  [SMALL_STATE(129)] = 3519,
  [SMALL_STATE(130)] = 3532,
  [SMALL_STATE(131)] = 3545,
  [SMALL_STATE(132)] = 3558,
  [SMALL_STATE(133)] = 3571,
  [SMALL_STATE(134)] = 3584,
  [SMALL_STATE(135)] = 3597,
  [SMALL_STATE(136)] = 3608,
  [SMALL_STATE(137)] = 3619,
  [SMALL_STATE(138)] = 3632,
  [SMALL_STATE(139)] = 3642,
  [SMALL_STATE(140)] = 3652,
  [SMALL_STATE(141)] = 3662,
  [SMALL_STATE(142)] = 3672,
  [SMALL_STATE(143)] = 3682,
  [SMALL_STATE(144)] = 3692,
  [SMALL_STATE(145)] = 3702,
  [SMALL_STATE(146)] = 3712,
  [SMALL_STATE(147)] = 3722,
  [SMALL_STATE(148)] = 3732,
  [SMALL_STATE(149)] = 3742,
  [SMALL_STATE(150)] = 3752,
  [SMALL_STATE(151)] = 3762,
  [SMALL_STATE(152)] = 3772,
  [SMALL_STATE(153)] = 3782,
  [SMALL_STATE(154)] = 3792,
  [SMALL_STATE(155)] = 3802,
  [SMALL_STATE(156)] = 3812,
  [SMALL_STATE(157)] = 3822,
  [SMALL_STATE(158)] = 3832,
  [SMALL_STATE(159)] = 3842,
  [SMALL_STATE(160)] = 3852,
  [SMALL_STATE(161)] = 3862,
  [SMALL_STATE(162)] = 3872,
  [SMALL_STATE(163)] = 3882,
  [SMALL_STATE(164)] = 3892,
  [SMALL_STATE(165)] = 3902,
  [SMALL_STATE(166)] = 3912,
  [SMALL_STATE(167)] = 3922,
  [SMALL_STATE(168)] = 3932,
  [SMALL_STATE(169)] = 3942,
  [SMALL_STATE(170)] = 3952,
  [SMALL_STATE(171)] = 3962,
  [SMALL_STATE(172)] = 3972,
  [SMALL_STATE(173)] = 3982,
  [SMALL_STATE(174)] = 3992,
  [SMALL_STATE(175)] = 4002,
  [SMALL_STATE(176)] = 4012,
  [SMALL_STATE(177)] = 4022,
  [SMALL_STATE(178)] = 4032,
  [SMALL_STATE(179)] = 4042,
  [SMALL_STATE(180)] = 4052,
  [SMALL_STATE(181)] = 4062,
  [SMALL_STATE(182)] = 4072,
  [SMALL_STATE(183)] = 4082,
  [SMALL_STATE(184)] = 4092,
  [SMALL_STATE(185)] = 4102,
  [SMALL_STATE(186)] = 4112,
  [SMALL_STATE(187)] = 4122,
  [SMALL_STATE(188)] = 4132,
  [SMALL_STATE(189)] = 4142,
  [SMALL_STATE(190)] = 4152,
  [SMALL_STATE(191)] = 4162,
  [SMALL_STATE(192)] = 4172,
  [SMALL_STATE(193)] = 4182,
  [SMALL_STATE(194)] = 4192,
  [SMALL_STATE(195)] = 4202,
  [SMALL_STATE(196)] = 4212,
  [SMALL_STATE(197)] = 4222,
  [SMALL_STATE(198)] = 4232,
  [SMALL_STATE(199)] = 4242,
  [SMALL_STATE(200)] = 4252,
  [SMALL_STATE(201)] = 4262,
  [SMALL_STATE(202)] = 4272,
  [SMALL_STATE(203)] = 4282,
  [SMALL_STATE(204)] = 4292,
  [SMALL_STATE(205)] = 4302,
  [SMALL_STATE(206)] = 4312,
  [SMALL_STATE(207)] = 4322,
  [SMALL_STATE(208)] = 4332,
  [SMALL_STATE(209)] = 4342,
  [SMALL_STATE(210)] = 4352,
  [SMALL_STATE(211)] = 4362,
  [SMALL_STATE(212)] = 4372,
  [SMALL_STATE(213)] = 4382,
  [SMALL_STATE(214)] = 4392,
  [SMALL_STATE(215)] = 4402,
  [SMALL_STATE(216)] = 4412,
  [SMALL_STATE(217)] = 4422,
  [SMALL_STATE(218)] = 4432,
  [SMALL_STATE(219)] = 4442,
  [SMALL_STATE(220)] = 4452,
  [SMALL_STATE(221)] = 4462,
  [SMALL_STATE(222)] = 4472,
  [SMALL_STATE(223)] = 4482,
  [SMALL_STATE(224)] = 4492,
  [SMALL_STATE(225)] = 4502,
  [SMALL_STATE(226)] = 4512,
  [SMALL_STATE(227)] = 4522,
  [SMALL_STATE(228)] = 4532,
  [SMALL_STATE(229)] = 4542,
  [SMALL_STATE(230)] = 4552,
  [SMALL_STATE(231)] = 4562,
  [SMALL_STATE(232)] = 4572,
  [SMALL_STATE(233)] = 4582,
  [SMALL_STATE(234)] = 4592,
  [SMALL_STATE(235)] = 4602,
  [SMALL_STATE(236)] = 4612,
  [SMALL_STATE(237)] = 4622,
  [SMALL_STATE(238)] = 4632,
  [SMALL_STATE(239)] = 4642,
  [SMALL_STATE(240)] = 4652,
  [SMALL_STATE(241)] = 4662,
  [SMALL_STATE(242)] = 4672,
  [SMALL_STATE(243)] = 4682,
  [SMALL_STATE(244)] = 4692,
  [SMALL_STATE(245)] = 4702,
  [SMALL_STATE(246)] = 4712,
  [SMALL_STATE(247)] = 4722,
  [SMALL_STATE(248)] = 4732,
  [SMALL_STATE(249)] = 4742,
  [SMALL_STATE(250)] = 4752,
  [SMALL_STATE(251)] = 4762,
  [SMALL_STATE(252)] = 4772,
  [SMALL_STATE(253)] = 4782,
  [SMALL_STATE(254)] = 4792,
  [SMALL_STATE(255)] = 4802,
  [SMALL_STATE(256)] = 4812,
  [SMALL_STATE(257)] = 4822,
  [SMALL_STATE(258)] = 4832,
  [SMALL_STATE(259)] = 4842,
  [SMALL_STATE(260)] = 4852,
  [SMALL_STATE(261)] = 4862,
  [SMALL_STATE(262)] = 4872,
  [SMALL_STATE(263)] = 4882,
  [SMALL_STATE(264)] = 4892,
  [SMALL_STATE(265)] = 4902,
  [SMALL_STATE(266)] = 4912,
  [SMALL_STATE(267)] = 4922,
  [SMALL_STATE(268)] = 4932,
  [SMALL_STATE(269)] = 4942,
  [SMALL_STATE(270)] = 4952,
  [SMALL_STATE(271)] = 4962,
  [SMALL_STATE(272)] = 4972,
  [SMALL_STATE(273)] = 4982,
  [SMALL_STATE(274)] = 4992,
  [SMALL_STATE(275)] = 5002,
  [SMALL_STATE(276)] = 5012,
  [SMALL_STATE(277)] = 5022,
  [SMALL_STATE(278)] = 5032,
  [SMALL_STATE(279)] = 5042,
  [SMALL_STATE(280)] = 5052,
  [SMALL_STATE(281)] = 5062,
  [SMALL_STATE(282)] = 5072,
  [SMALL_STATE(283)] = 5082,
  [SMALL_STATE(284)] = 5092,
  [SMALL_STATE(285)] = 5102,
  [SMALL_STATE(286)] = 5112,
  [SMALL_STATE(287)] = 5122,
  [SMALL_STATE(288)] = 5132,
  [SMALL_STATE(289)] = 5142,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(6),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(228),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(225),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(216),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(205),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat6, 1, .production_id = 4),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 1, .production_id = 4),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat6, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__misc_section_var, 4, .production_id = 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__misc_section_var, 4, .production_id = 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(35),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(269),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(262),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(251),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(248),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(247),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(244),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(234),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(233),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(232),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(231),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(230),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(229),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(224),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(223),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(219),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(218),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(13),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(277),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(276),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(275),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(274),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(270),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(268),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat2, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_section_var, 4, .production_id = 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_section_var, 4, .production_id = 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat2, 1, .production_id = 4),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 1, .production_id = 4),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(21),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(264),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(263),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(256),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(255),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(250),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(249),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat4, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_variable_section, 4, .production_id = 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_variable_section, 4, .production_id = 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_section_var, 4, .production_id = 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_section_var, 4, .production_id = 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_variable_section, 5, .production_id = 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_variable_section, 5, .production_id = 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat4, 1, .production_id = 4),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 1, .production_id = 4),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(31),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(285),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(284),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(283),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(282),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(280),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat1, 1, .production_id = 4),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 1, .production_id = 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat1, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__general_section_var, 4, .production_id = 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__general_section_var, 4, .production_id = 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_section, 5, .production_id = 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_section, 5, .production_id = 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_section, 7, .production_id = 9),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_section, 7, .production_id = 9),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_section, 4, .production_id = 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_section, 4, .production_id = 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_section, 6, .production_id = 9),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_section, 6, .production_id = 9),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat1, 2), SHIFT_REPEAT(60),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 2),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 2), SHIFT_REPEAT(220),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 2), SHIFT_REPEAT(221),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 2), SHIFT_REPEAT(222),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat5, 2), SHIFT_REPEAT(57),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 2),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 2), SHIFT_REPEAT(246),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 2), SHIFT_REPEAT(245),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 2), SHIFT_REPEAT(238),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gestures_section_var, 4, .production_id = 1),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gestures_section_var, 4, .production_id = 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat5, 1),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__touchpad_section_var, 4, .production_id = 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__touchpad_section_var, 4, .production_id = 1),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat1, 1),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat1, 1, .production_id = 4),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 1, .production_id = 4),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat8, 2), SHIFT_REPEAT(67),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 2),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 2), SHIFT_REPEAT(214),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 2), SHIFT_REPEAT(140),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gradient, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat5, 1, .production_id = 4),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 1, .production_id = 4),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(183),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(184),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(185),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 2),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat7, 2), SHIFT_REPEAT(76),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 2),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 2), SHIFT_REPEAT(202),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 2), SHIFT_REPEAT(187),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat8, 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug_section_var, 4, .production_id = 1),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__debug_section_var, 4, .production_id = 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat8, 1, .production_id = 4),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 1, .production_id = 4),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binds_section_var, 4, .production_id = 1),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binds_section_var, 4, .production_id = 1),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat7, 1, .production_id = 4),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 1, .production_id = 4),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat7, 1),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat2, 2), SHIFT_REPEAT(96),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 2),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 2), SHIFT_REPEAT(226),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 2), SHIFT_REPEAT(227),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat3, 2), SHIFT_REPEAT(112),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat3, 2),
  [522] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat3, 2), SHIFT_REPEAT(265),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 1),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_rgba, 7),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_rgba, 7),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_rgb, 6),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_rgb, 6),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_hex, 5),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_hex, 5),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__monitor_config, 8, .production_id = 16),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__monitor_config_repeat1, 2),
  [565] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__monitor_config_repeat1, 2), SHIFT_REPEAT(80),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat2, 1),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__touchdevice_section_var, 4, .production_id = 1),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__touchdevice_section_var, 4, .production_id = 1),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__monitor_config, 7, .production_id = 16),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat2, 1, .production_id = 4),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 1, .production_id = 4),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__monitor_config, 7, .production_id = 15),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__monitor_config, 6, .production_id = 15),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat3, 1),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat3, 1),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__animation_section_var, 4, .production_id = 1),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__animation_section_var, 4, .production_id = 1),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat3, 1, .production_id = 4),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat3, 1, .production_id = 4),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitdepth, 3, .production_id = 19),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bitdepth, 3, .production_id = 19),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mirror, 3, .production_id = 18),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mirror, 3, .production_id = 18),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform, 3, .production_id = 17),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transform, 3, .production_id = 17),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__monitor_config_optional, 2),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__monitor_config_optional, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resolution, 3, .production_id = 10),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__monitor_name, 1),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__monitor_name, 1),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monitor_desc, 3, .production_id = 8),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_monitor_desc, 3, .production_id = 8),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__monitor_config_repeat1, 1),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__monitor_config_repeat1, 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_resolution, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_exec_once, 3, .production_id = 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layer_rule, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_source, 3, .production_id = 1),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_exec, 3, .production_id = 1),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layer_identifier, 1, .production_id = 5),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layer_identifier, 1),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_layerrule, 5, .production_id = 6),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_env, 5, .production_id = 7),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_envd, 5, .production_id = 7),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__monitor_disable, 3, .production_id = 1),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_literal, 1),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_integer, 1),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_reference, 2),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gradient, 2),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec2, 2),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [828] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_degree, 2, .production_id = 11),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layer_address, 4, .production_id = 12),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resolution, 5, .production_id = 13),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position, 3, .production_id = 14),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_monitor, 3, .production_id = 3),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_monitor, 3, .production_id = 2),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
