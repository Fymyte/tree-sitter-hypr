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
#define STATE_COUNT 231
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 226
#define ALIAS_COUNT 0
#define TOKEN_COUNT 180
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 9

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
  sym_config_file = 180,
  sym_comment = 181,
  sym_vec2 = 182,
  sym_bool = 183,
  sym__bool_literal = 184,
  sym__bool_integer = 185,
  sym_color = 186,
  sym_color_rgb = 187,
  sym_color_rgba = 188,
  sym_color_hex = 189,
  sym_gradient = 190,
  sym_degree = 191,
  sym_word = 192,
  sym_variable_reference = 193,
  sym_variable_section = 194,
  sym__general_section_var = 195,
  sym__decoration_section_var = 196,
  sym__animation_section_var = 197,
  sym__touchpad_section_var = 198,
  sym__touchdevice_section_var = 199,
  sym__input_variable_section = 200,
  sym__input_section_var = 201,
  sym__gestures_section_var = 202,
  sym__misc_section_var = 203,
  sym__binds_section_var = 204,
  sym__debug_section_var = 205,
  sym_command = 206,
  sym_command_exec = 207,
  sym_command_exec_once = 208,
  sym_command_source = 209,
  sym_layer_rule = 210,
  sym_layer_address = 211,
  sym_layer_identifier = 212,
  sym_command_layerrule = 213,
  aux_sym_config_file_repeat1 = 214,
  aux_sym_gradient_repeat1 = 215,
  aux_sym_variable_section_repeat1 = 216,
  aux_sym_variable_section_repeat2 = 217,
  aux_sym_variable_section_repeat3 = 218,
  aux_sym_variable_section_repeat4 = 219,
  aux_sym_variable_section_repeat5 = 220,
  aux_sym_variable_section_repeat6 = 221,
  aux_sym_variable_section_repeat7 = 222,
  aux_sym_variable_section_repeat8 = 223,
  aux_sym__input_variable_section_repeat1 = 224,
  aux_sym__input_variable_section_repeat2 = 225,
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
  [sym_word] = "layer_namespace",
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
  field_address = 1,
  field_arguments = 2,
  field_name = 3,
  field_unit = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_address] = "address",
  [field_arguments] = "arguments",
  [field_name] = "name",
  [field_unit] = "unit",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 3},
  [5] = {.index = 7, .length = 4},
  [6] = {.index = 11, .length = 3},
  [7] = {.index = 14, .length = 1},
  [8] = {.index = 15, .length = 1},
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
    {field_arguments, 2},
    {field_arguments, 3},
    {field_name, 0},
  [7] =
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
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
      if (lookahead == 'e') ADVANCE(829);
      if (lookahead == 'f') ADVANCE(163);
      if (lookahead == 'g') ADVANCE(169);
      if (lookahead == 'h') ADVANCE(645);
      if (lookahead == 'i') ADVANCE(822);
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
      if (lookahead == 'd') ADVANCE(481);
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
      if (lookahead == '_') ADVANCE(610);
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
      if (lookahead == '_') ADVANCE(181);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(806);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(633);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(577);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(801);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(293);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(1375);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(280);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(1367);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(277);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(731);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(589);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(361);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(844);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(291);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(588);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(958);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(661);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(1034);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(1214);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(615);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(1167);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(1027);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(1205);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(1147);
      if (lookahead == 'd') ADVANCE(1535);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(408);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(319);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(382);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(923);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(200);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(203);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(1260);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(1199);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(775);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(1242);
      END_STATE();
    case 102:
      if (lookahead == '_') ADVANCE(1271);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(1198);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(472);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(460);
      END_STATE();
    case 106:
      if (lookahead == '_') ADVANCE(632);
      END_STATE();
    case 107:
      if (lookahead == '_') ADVANCE(819);
      END_STATE();
    case 108:
      if (lookahead == '_') ADVANCE(1024);
      END_STATE();
    case 109:
      if (lookahead == '_') ADVANCE(325);
      END_STATE();
    case 110:
      if (lookahead == '_') ADVANCE(821);
      END_STATE();
    case 111:
      if (lookahead == '_') ADVANCE(1206);
      END_STATE();
    case 112:
      if (lookahead == '_') ADVANCE(1203);
      END_STATE();
    case 113:
      if (lookahead == '_') ADVANCE(960);
      END_STATE();
    case 114:
      if (lookahead == '_') ADVANCE(620);
      END_STATE();
    case 115:
      if (lookahead == '_') ADVANCE(982);
      END_STATE();
    case 116:
      if (lookahead == '_') ADVANCE(395);
      END_STATE();
    case 117:
      if (lookahead == '_') ADVANCE(761);
      END_STATE();
    case 118:
      if (lookahead == '_') ADVANCE(863);
      END_STATE();
    case 119:
      if (lookahead == '_') ADVANCE(810);
      END_STATE();
    case 120:
      if (lookahead == '_') ADVANCE(1371);
      END_STATE();
    case 121:
      if (lookahead == '_') ADVANCE(583);
      END_STATE();
    case 122:
      if (lookahead == '_') ADVANCE(1127);
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
      if (lookahead == '_') ADVANCE(708);
      END_STATE();
    case 127:
      if (lookahead == '_') ADVANCE(1083);
      END_STATE();
    case 128:
      if (lookahead == '_') ADVANCE(405);
      END_STATE();
    case 129:
      if (lookahead == '_') ADVANCE(485);
      END_STATE();
    case 130:
      if (lookahead == '_') ADVANCE(585);
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
      if (lookahead == '_') ADVANCE(586);
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
      if (lookahead == 'a') ADVANCE(1194);
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
      if (lookahead == 'e') ADVANCE(867);
      if (lookahead == 'r') ADVANCE(911);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(1386);
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(621);
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
      if (lookahead == 'a') ADVANCE(636);
      if (lookahead == 't') ADVANCE(668);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(1387);
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
      if (lookahead == 'a') ADVANCE(579);
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
      if (lookahead == 'a') ADVANCE(782);
      END_STATE();
    case 203:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(607);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(848);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(1322);
      END_STATE();
    case 207:
      if (lookahead == 'a') ADVANCE(1252);
      END_STATE();
    case 208:
      if (lookahead == 'a') ADVANCE(368);
      END_STATE();
    case 209:
      if (lookahead == 'a') ADVANCE(868);
      if (lookahead == 'e') ADVANCE(893);
      END_STATE();
    case 210:
      if (lookahead == 'a') ADVANCE(739);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(1172);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(1196);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(877);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(887);
      if (lookahead == 'r') ADVANCE(538);
      END_STATE();
    case 215:
      if (lookahead == 'a') ADVANCE(1102);
      END_STATE();
    case 216:
      if (lookahead == 'a') ADVANCE(1278);
      END_STATE();
    case 217:
      if (lookahead == 'a') ADVANCE(1084);
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
      if (lookahead == 'a') ADVANCE(767);
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
      if (lookahead == 'a') ADVANCE(765);
      END_STATE();
    case 244:
      if (lookahead == 'a') ADVANCE(1085);
      END_STATE();
    case 245:
      if (lookahead == 'a') ADVANCE(756);
      END_STATE();
    case 246:
      if (lookahead == 'a') ADVANCE(847);
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
      if (lookahead == 'a') ADVANCE(875);
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
      if (lookahead == 'a') ADVANCE(886);
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
      if (lookahead == 'b') ADVANCE(778);
      if (lookahead == 't') ADVANCE(1077);
      END_STATE();
    case 277:
      if (lookahead == 'b') ADVANCE(536);
      END_STATE();
    case 278:
      if (lookahead == 'b') ADVANCE(125);
      END_STATE();
    case 279:
      if (lookahead == 'b') ADVANCE(244);
      END_STATE();
    case 280:
      if (lookahead == 'b') ADVANCE(1401);
      END_STATE();
    case 281:
      if (lookahead == 'b') ADVANCE(945);
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
      if (lookahead == 'i') ADVANCE(890);
      if (lookahead == 'm') ADVANCE(688);
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
      if (lookahead == 'c') ADVANCE(639);
      END_STATE();
    case 314:
      if (lookahead == 'c') ADVANCE(726);
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
      if (lookahead == 'c') ADVANCE(697);
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
      if (lookahead == 'c') ADVANCE(1098);
      END_STATE();
    case 326:
      if (lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 327:
      if (lookahead == 'c') ADVANCE(1126);
      END_STATE();
    case 328:
      if (lookahead == 'c') ADVANCE(213);
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
      if (lookahead == 'c') ADVANCE(673);
      END_STATE();
    case 337:
      if (lookahead == 'c') ADVANCE(1316);
      END_STATE();
    case 338:
      if (lookahead == 'c') ADVANCE(734);
      END_STATE();
    case 339:
      if (lookahead == 'c') ADVANCE(675);
      END_STATE();
    case 340:
      if (lookahead == 'c') ADVANCE(1336);
      END_STATE();
    case 341:
      if (lookahead == 'c') ADVANCE(487);
      END_STATE();
    case 342:
      if (lookahead == 'c') ADVANCE(677);
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
      if (lookahead == 'c') ADVANCE(506);
      END_STATE();
    case 349:
      if (lookahead == 'c') ADVANCE(531);
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
      if (lookahead == 'c') ADVANCE(1268);
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
      if (lookahead == 'd') ADVANCE(1099);
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
      if (lookahead == 'd') ADVANCE(522);
      if (lookahead == 'p') ADVANCE(191);
      END_STATE();
    case 382:
      if (lookahead == 'd') ADVANCE(1020);
      END_STATE();
    case 383:
      if (lookahead == 'd') ADVANCE(909);
      END_STATE();
    case 384:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 385:
      if (lookahead == 'd') ADVANCE(910);
      END_STATE();
    case 386:
      if (lookahead == 'd') ADVANCE(706);
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
      if (lookahead == 'd') ADVANCE(110);
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
      if (lookahead == 'd') ADVANCE(526);
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 397:
      if (lookahead == 'd') ADVANCE(964);
      END_STATE();
    case 398:
      if (lookahead == 'd') ADVANCE(117);
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
      if (lookahead == 'd') ADVANCE(532);
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
      if (lookahead == 'd') ADVANCE(1086);
      END_STATE();
    case 407:
      if (lookahead == 'd') ADVANCE(496);
      END_STATE();
    case 408:
      if (lookahead == 'd') ADVANCE(852);
      END_STATE();
    case 409:
      if (lookahead == 'd') ADVANCE(497);
      END_STATE();
    case 410:
      if (lookahead == 'd') ADVANCE(499);
      END_STATE();
    case 411:
      if (lookahead == 'd') ADVANCE(502);
      END_STATE();
    case 412:
      if (lookahead == 'd') ADVANCE(503);
      END_STATE();
    case 413:
      if (lookahead == 'd') ADVANCE(507);
      END_STATE();
    case 414:
      if (lookahead == 'd') ADVANCE(511);
      END_STATE();
    case 415:
      if (lookahead == 'd') ADVANCE(567);
      END_STATE();
    case 416:
      if (lookahead == 'd') ADVANCE(512);
      END_STATE();
    case 417:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 418:
      if (lookahead == 'd') ADVANCE(550);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(888);
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
      if (lookahead == 'e') ADVANCE(91);
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
      if (lookahead == 't') ADVANCE(524);
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
      if (lookahead == 'e') ADVANCE(884);
      END_STATE();
    case 455:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 456:
      if (lookahead == 'e') ADVANCE(584);
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
      if (lookahead == 'e') ADVANCE(578);
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
      if (lookahead == 'e') ADVANCE(80);
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
      if (lookahead == 'e') ADVANCE(83);
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
      if (lookahead == 'e') ADVANCE(1256);
      END_STATE();
    case 481:
      if (lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 482:
      if (lookahead == 'e') ADVANCE(873);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(1151);
      END_STATE();
    case 485:
      if (lookahead == 'e') ADVANCE(891);
      END_STATE();
    case 486:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 487:
      if (lookahead == 'e') ADVANCE(740);
      END_STATE();
    case 488:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 489:
      if (lookahead == 'e') ADVANCE(1228);
      END_STATE();
    case 490:
      if (lookahead == 'e') ADVANCE(769);
      END_STATE();
    case 491:
      if (lookahead == 'e') ADVANCE(855);
      END_STATE();
    case 492:
      if (lookahead == 'e') ADVANCE(1106);
      END_STATE();
    case 493:
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(930);
      END_STATE();
    case 494:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 495:
      if (lookahead == 'e') ADVANCE(1155);
      END_STATE();
    case 496:
      if (lookahead == 'e') ADVANCE(1051);
      END_STATE();
    case 497:
      if (lookahead == 'e') ADVANCE(1109);
      END_STATE();
    case 498:
      if (lookahead == 'e') ADVANCE(1217);
      END_STATE();
    case 499:
      if (lookahead == 'e') ADVANCE(1053);
      END_STATE();
    case 500:
      if (lookahead == 'e') ADVANCE(1158);
      END_STATE();
    case 501:
      if (lookahead == 'e') ADVANCE(1159);
      END_STATE();
    case 502:
      if (lookahead == 'e') ADVANCE(1054);
      END_STATE();
    case 503:
      if (lookahead == 'e') ADVANCE(1055);
      END_STATE();
    case 504:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 505:
      if (lookahead == 'e') ADVANCE(1091);
      END_STATE();
    case 506:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 507:
      if (lookahead == 'e') ADVANCE(1057);
      END_STATE();
    case 508:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 509:
      if (lookahead == 'e') ADVANCE(1058);
      END_STATE();
    case 510:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 511:
      if (lookahead == 'e') ADVANCE(1060);
      END_STATE();
    case 512:
      if (lookahead == 'e') ADVANCE(1123);
      END_STATE();
    case 513:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 514:
      if (lookahead == 'e') ADVANCE(1088);
      END_STATE();
    case 515:
      if (lookahead == 'e') ADVANCE(1061);
      END_STATE();
    case 516:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 517:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 518:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 519:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 520:
      if (lookahead == 'e') ADVANCE(1178);
      END_STATE();
    case 521:
      if (lookahead == 'e') ADVANCE(1090);
      END_STATE();
    case 522:
      if (lookahead == 'e') ADVANCE(1358);
      END_STATE();
    case 523:
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead == 'o') ADVANCE(753);
      END_STATE();
    case 524:
      if (lookahead == 'e') ADVANCE(837);
      END_STATE();
    case 525:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 526:
      if (lookahead == 'e') ADVANCE(757);
      END_STATE();
    case 527:
      if (lookahead == 'e') ADVANCE(1182);
      END_STATE();
    case 528:
      if (lookahead == 'e') ADVANCE(616);
      END_STATE();
    case 529:
      if (lookahead == 'e') ADVANCE(1184);
      END_STATE();
    case 530:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 531:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 532:
      if (lookahead == 'e') ADVANCE(1079);
      END_STATE();
    case 533:
      if (lookahead == 'e') ADVANCE(899);
      END_STATE();
    case 534:
      if (lookahead == 'e') ADVANCE(882);
      END_STATE();
    case 535:
      if (lookahead == 'e') ADVANCE(619);
      END_STATE();
    case 536:
      if (lookahead == 'e') ADVANCE(638);
      END_STATE();
    case 537:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 538:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 539:
      if (lookahead == 'e') ADVANCE(764);
      END_STATE();
    case 540:
      if (lookahead == 'e') ADVANCE(776);
      END_STATE();
    case 541:
      if (lookahead == 'e') ADVANCE(1195);
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
      if (lookahead == 'e') ADVANCE(1096);
      END_STATE();
    case 546:
      if (lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 547:
      if (lookahead == 'e') ADVANCE(1093);
      END_STATE();
    case 548:
      if (lookahead == 'e') ADVANCE(965);
      END_STATE();
    case 549:
      if (lookahead == 'e') ADVANCE(1191);
      END_STATE();
    case 550:
      if (lookahead == 'e') ADVANCE(1095);
      END_STATE();
    case 551:
      if (lookahead == 'e') ADVANCE(1200);
      END_STATE();
    case 552:
      if (lookahead == 'e') ADVANCE(864);
      END_STATE();
    case 553:
      if (lookahead == 'e') ADVANCE(1192);
      END_STATE();
    case 554:
      if (lookahead == 'e') ADVANCE(1201);
      END_STATE();
    case 555:
      if (lookahead == 'e') ADVANCE(1197);
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
      if (lookahead == 'f') ADVANCE(689);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == 'm') ADVANCE(962);
      if (lookahead == 'o') ADVANCE(1031);
      if (lookahead == 'r') ADVANCE(1312);
      if (lookahead == 'v') ADVANCE(201);
      END_STATE();
    case 576:
      if (lookahead == 'f') ADVANCE(582);
      END_STATE();
    case 577:
      if (lookahead == 'f') ADVANCE(999);
      END_STATE();
    case 578:
      if (lookahead == 'f') ADVANCE(206);
      END_STATE();
    case 579:
      if (lookahead == 'f') ADVANCE(452);
      END_STATE();
    case 580:
      if (lookahead == 'f') ADVANCE(663);
      END_STATE();
    case 581:
      if (lookahead == 'f') ADVANCE(934);
      END_STATE();
    case 582:
      if (lookahead == 'f') ADVANCE(1186);
      END_STATE();
    case 583:
      if (lookahead == 'f') ADVANCE(987);
      END_STATE();
    case 584:
      if (lookahead == 'f') ADVANCE(492);
      END_STATE();
    case 585:
      if (lookahead == 'f') ADVANCE(949);
      END_STATE();
    case 586:
      if (lookahead == 'f') ADVANCE(986);
      END_STATE();
    case 587:
      if (lookahead == 'f') ADVANCE(702);
      END_STATE();
    case 588:
      if (lookahead == 'f') ADVANCE(780);
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
      if (lookahead == 'g') ADVANCE(1234);
      END_STATE();
    case 609:
      if (lookahead == 'g') ADVANCE(1152);
      END_STATE();
    case 610:
      if (lookahead == 'g') ADVANCE(1119);
      if (lookahead == 't') ADVANCE(718);
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
      if (lookahead == 'g') ADVANCE(1101);
      END_STATE();
    case 616:
      if (lookahead == 'g') ADVANCE(450);
      END_STATE();
    case 617:
      if (lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 618:
      if (lookahead == 'g') ADVANCE(1164);
      END_STATE();
    case 619:
      if (lookahead == 'g') ADVANCE(453);
      END_STATE();
    case 620:
      if (lookahead == 'g') ADVANCE(1141);
      END_STATE();
    case 621:
      if (lookahead == 'g') ADVANCE(479);
      END_STATE();
    case 622:
      if (lookahead == 'g') ADVANCE(547);
      END_STATE();
    case 623:
      if (lookahead == 'g') ADVANCE(495);
      END_STATE();
    case 624:
      if (lookahead == 'g') ADVANCE(684);
      END_STATE();
    case 625:
      if (lookahead == 'g') ADVANCE(521);
      END_STATE();
    case 626:
      if (lookahead == 'g') ADVANCE(889);
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
      if (lookahead == 'h') ADVANCE(935);
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
      if (lookahead == 'o') ADVANCE(1100);
      END_STATE();
    case 652:
      if (lookahead == 'i') ADVANCE(830);
      if (lookahead == 'l') ADVANCE(1304);
      if (lookahead == 'o') ADVANCE(1100);
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
      if (lookahead == 'i') ADVANCE(823);
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
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 671:
      if (lookahead == 'i') ADVANCE(1237);
      END_STATE();
    case 672:
      if (lookahead == 'i') ADVANCE(833);
      END_STATE();
    case 673:
      if (lookahead == 'i') ADVANCE(1238);
      END_STATE();
    case 674:
      if (lookahead == 'i') ADVANCE(843);
      END_STATE();
    case 675:
      if (lookahead == 'i') ADVANCE(1243);
      END_STATE();
    case 676:
      if (lookahead == 'i') ADVANCE(846);
      END_STATE();
    case 677:
      if (lookahead == 'i') ADVANCE(1247);
      END_STATE();
    case 678:
      if (lookahead == 'i') ADVANCE(849);
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
      if (lookahead == 'i') ADVANCE(851);
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
      if (lookahead == 'i') ADVANCE(878);
      END_STATE();
    case 689:
      if (lookahead == 'i') ADVANCE(752);
      END_STATE();
    case 690:
      if (lookahead == 'i') ADVANCE(1406);
      END_STATE();
    case 691:
      if (lookahead == 'i') ADVANCE(1245);
      END_STATE();
    case 692:
      if (lookahead == 'i') ADVANCE(815);
      END_STATE();
    case 693:
      if (lookahead == 'i') ADVANCE(932);
      END_STATE();
    case 694:
      if (lookahead == 'i') ADVANCE(1345);
      END_STATE();
    case 695:
      if (lookahead == 'i') ADVANCE(1407);
      END_STATE();
    case 696:
      if (lookahead == 'i') ADVANCE(816);
      END_STATE();
    case 697:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 698:
      if (lookahead == 'i') ADVANCE(936);
      END_STATE();
    case 699:
      if (lookahead == 'i') ADVANCE(1346);
      END_STATE();
    case 700:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 701:
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 702:
      if (lookahead == 'i') ADVANCE(766);
      END_STATE();
    case 703:
      if (lookahead == 'i') ADVANCE(1347);
      END_STATE();
    case 704:
      if (lookahead == 'i') ADVANCE(871);
      END_STATE();
    case 705:
      if (lookahead == 'i') ADVANCE(876);
      END_STATE();
    case 706:
      if (lookahead == 'i') ADVANCE(491);
      END_STATE();
    case 707:
      if (lookahead == 'i') ADVANCE(946);
      END_STATE();
    case 708:
      if (lookahead == 'i') ADVANCE(869);
      END_STATE();
    case 709:
      if (lookahead == 'i') ADVANCE(948);
      END_STATE();
    case 710:
      if (lookahead == 'i') ADVANCE(415);
      END_STATE();
    case 711:
      if (lookahead == 'i') ADVANCE(885);
      if (lookahead == 'o') ADVANCE(1094);
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
      if (lookahead == 'k') ADVANCE(580);
      END_STATE();
    case 729:
      if (lookahead == 'k') ADVANCE(1176);
      END_STATE();
    case 730:
      if (lookahead == 'k') ADVANCE(74);
      END_STATE();
    case 731:
      if (lookahead == 'k') ADVANCE(462);
      END_STATE();
    case 732:
      if (lookahead == 'k') ADVANCE(137);
      END_STATE();
    case 733:
      if (lookahead == 'k') ADVANCE(674);
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
      if (lookahead == 'l') ADVANCE(1235);
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
      if (lookahead == 'l') ADVANCE(182);
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
      if (lookahead == 'l') ADVANCE(928);
      END_STATE();
    case 762:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 763:
      if (lookahead == 'l') ADVANCE(1230);
      END_STATE();
    case 764:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 765:
      if (lookahead == 'l') ADVANCE(437);
      END_STATE();
    case 766:
      if (lookahead == 'l') ADVANCE(438);
      END_STATE();
    case 767:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 768:
      if (lookahead == 'l') ADVANCE(1398);
      END_STATE();
    case 769:
      if (lookahead == 'l') ADVANCE(976);
      END_STATE();
    case 770:
      if (lookahead == 'l') ADVANCE(700);
      END_STATE();
    case 771:
      if (lookahead == 'l') ADVANCE(1173);
      END_STATE();
    case 772:
      if (lookahead == 'l') ADVANCE(954);
      END_STATE();
    case 773:
      if (lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 774:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 775:
      if (lookahead == 'l') ADVANCE(957);
      END_STATE();
    case 776:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 777:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 778:
      if (lookahead == 'l') ADVANCE(672);
      END_STATE();
    case 779:
      if (lookahead == 'l') ADVANCE(478);
      END_STATE();
    case 780:
      if (lookahead == 'l') ADVANCE(991);
      END_STATE();
    case 781:
      if (lookahead == 'l') ADVANCE(966);
      END_STATE();
    case 782:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 783:
      if (lookahead == 'l') ADVANCE(970);
      END_STATE();
    case 784:
      if (lookahead == 'l') ADVANCE(483);
      END_STATE();
    case 785:
      if (lookahead == 'l') ADVANCE(549);
      END_STATE();
    case 786:
      if (lookahead == 'l') ADVANCE(494);
      END_STATE();
    case 787:
      if (lookahead == 'l') ADVANCE(500);
      END_STATE();
    case 788:
      if (lookahead == 'l') ADVANCE(513);
      END_STATE();
    case 789:
      if (lookahead == 'l') ADVANCE(517);
      END_STATE();
    case 790:
      if (lookahead == 'l') ADVANCE(108);
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
      if (lookahead == 'l') ADVANCE(783);
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
      if (lookahead == 'r') ADVANCE(525);
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
      if (lookahead == 'm') ADVANCE(944);
      END_STATE();
    case 820:
      if (lookahead == 'm') ADVANCE(983);
      END_STATE();
    case 821:
      if (lookahead == 'm') ADVANCE(559);
      END_STATE();
    case 822:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 823:
      if (lookahead == 'n') ADVANCE(1497);
      END_STATE();
    case 824:
      if (lookahead == 'n') ADVANCE(1484);
      END_STATE();
    case 825:
      if (lookahead == 'n') ADVANCE(1483);
      END_STATE();
    case 826:
      if (lookahead == 'n') ADVANCE(1562);
      END_STATE();
    case 827:
      if (lookahead == 'n') ADVANCE(1539);
      END_STATE();
    case 828:
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == 'x') ADVANCE(449);
      END_STATE();
    case 829:
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == 'x') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1460);
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
      if (lookahead == 'n') ADVANCE(1174);
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
      if (lookahead == 'n') ADVANCE(943);
      END_STATE();
    case 845:
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 846:
      if (lookahead == 'n') ADVANCE(601);
      END_STATE();
    case 847:
      if (lookahead == 'n') ADVANCE(398);
      END_STATE();
    case 848:
      if (lookahead == 'n') ADVANCE(1227);
      END_STATE();
    case 849:
      if (lookahead == 'n') ADVANCE(602);
      END_STATE();
    case 850:
      if (lookahead == 'n') ADVANCE(603);
      END_STATE();
    case 851:
      if (lookahead == 'n') ADVANCE(604);
      END_STATE();
    case 852:
      if (lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 853:
      if (lookahead == 'n') ADVANCE(1150);
      END_STATE();
    case 854:
      if (lookahead == 'n') ADVANCE(370);
      END_STATE();
    case 855:
      if (lookahead == 'n') ADVANCE(1253);
      END_STATE();
    case 856:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 857:
      if (lookahead == 'n') ADVANCE(1160);
      END_STATE();
    case 858:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 859:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 860:
      if (lookahead == 'n') ADVANCE(443);
      END_STATE();
    case 861:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 862:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 863:
      if (lookahead == 'n') ADVANCE(466);
      END_STATE();
    case 864:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 865:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 866:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 867:
      if (lookahead == 'n') ADVANCE(464);
      if (lookahead == 's') ADVANCE(1266);
      END_STATE();
    case 868:
      if (lookahead == 'n') ADVANCE(614);
      END_STATE();
    case 869:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 870:
      if (lookahead == 'n') ADVANCE(618);
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
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 876:
      if (lookahead == 'n') ADVANCE(389);
      END_STATE();
    case 877:
      if (lookahead == 'n') ADVANCE(961);
      END_STATE();
    case 878:
      if (lookahead == 'n') ADVANCE(103);
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
      if (lookahead == 'n') ADVANCE(1190);
      END_STATE();
    case 883:
      if (lookahead == 'n') ADVANCE(682);
      END_STATE();
    case 884:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 885:
      if (lookahead == 'n') ADVANCE(625);
      END_STATE();
    case 886:
      if (lookahead == 'n') ADVANCE(1331);
      END_STATE();
    case 887:
      if (lookahead == 'n') ADVANCE(347);
      END_STATE();
    case 888:
      if (lookahead == 'n') ADVANCE(402);
      if (lookahead == 'p') ADVANCE(557);
      if (lookahead == 's') ADVANCE(647);
      END_STATE();
    case 889:
      if (lookahead == 'n') ADVANCE(988);
      END_STATE();
    case 890:
      if (lookahead == 'n') ADVANCE(1356);
      END_STATE();
    case 891:
      if (lookahead == 'n') ADVANCE(235);
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
      if (lookahead == 'o') ADVANCE(1368);
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
      if (lookahead == 'o') ADVANCE(609);
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
      if (lookahead == 'o') ADVANCE(613);
      END_STATE();
    case 929:
      if (lookahead == 'o') ADVANCE(1313);
      END_STATE();
    case 930:
      if (lookahead == 'o') ADVANCE(824);
      END_STATE();
    case 931:
      if (lookahead == 'o') ADVANCE(1329);
      END_STATE();
    case 932:
      if (lookahead == 'o') ADVANCE(825);
      END_STATE();
    case 933:
      if (lookahead == 'o') ADVANCE(914);
      END_STATE();
    case 934:
      if (lookahead == 'o') ADVANCE(1066);
      END_STATE();
    case 935:
      if (lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 936:
      if (lookahead == 'o') ADVANCE(895);
      END_STATE();
    case 937:
      if (lookahead == 'o') ADVANCE(826);
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
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 944:
      if (lookahead == 'o') ADVANCE(879);
      END_STATE();
    case 945:
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 946:
      if (lookahead == 'o') ADVANCE(827);
      END_STATE();
    case 947:
      if (lookahead == 'o') ADVANCE(1056);
      END_STATE();
    case 948:
      if (lookahead == 'o') ADVANCE(1059);
      END_STATE();
    case 949:
      if (lookahead == 'o') ADVANCE(1089);
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
      if (lookahead == 'o') ADVANCE(617);
      END_STATE();
    case 954:
      if (lookahead == 'o') ADVANCE(1380);
      END_STATE();
    case 955:
      if (lookahead == 'o') ADVANCE(587);
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
      if (lookahead == 'o') ADVANCE(853);
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
      if (lookahead == 'o') ADVANCE(1097);
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
      if (lookahead == 'o') ADVANCE(866);
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
      if (lookahead == 'p') ADVANCE(768);
      END_STATE();
    case 1015:
      if (lookahead == 'p') ADVANCE(279);
      END_STATE();
    case 1016:
      if (lookahead == 'p') ADVANCE(86);
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
      if (lookahead == 'p') ADVANCE(1240);
      END_STATE();
    case 1032:
      if (lookahead == 'p') ADVANCE(813);
      END_STATE();
    case 1033:
      if (lookahead == 'p') ADVANCE(676);
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
      if (lookahead == 'r') ADVANCE(523);
      END_STATE();
    case 1065:
      if (lookahead == 'r') ADVANCE(1202);
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
      if (lookahead == 'r') ADVANCE(84);
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
      if (lookahead == 'r') ADVANCE(710);
      END_STATE();
    case 1083:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 1084:
      if (lookahead == 'r') ADVANCE(883);
      END_STATE();
    case 1085:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 1086:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 1087:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 1088:
      if (lookahead == 'r') ADVANCE(1231);
      END_STATE();
    case 1089:
      if (lookahead == 'r') ADVANCE(1239);
      END_STATE();
    case 1090:
      if (lookahead == 'r') ADVANCE(1163);
      END_STATE();
    case 1091:
      if (lookahead == 'r') ADVANCE(1082);
      END_STATE();
    case 1092:
      if (lookahead == 'r') ADVANCE(530);
      END_STATE();
    case 1093:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 1094:
      if (lookahead == 'r') ADVANCE(561);
      END_STATE();
    case 1095:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 1096:
      if (lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 1097:
      if (lookahead == 'r') ADVANCE(447);
      END_STATE();
    case 1098:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 1099:
      if (lookahead == 'r') ADVANCE(520);
      END_STATE();
    case 1100:
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 1101:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 1102:
      if (lookahead == 'r') ADVANCE(1028);
      END_STATE();
    case 1103:
      if (lookahead == 'r') ADVANCE(926);
      END_STATE();
    case 1104:
      if (lookahead == 'r') ADVANCE(1326);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 1105:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 1106:
      if (lookahead == 'r') ADVANCE(1092);
      END_STATE();
    case 1107:
      if (lookahead == 'r') ADVANCE(476);
      END_STATE();
    case 1108:
      if (lookahead == 'r') ADVANCE(984);
      END_STATE();
    case 1109:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 1110:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 1111:
      if (lookahead == 'r') ADVANCE(475);
      END_STATE();
    case 1112:
      if (lookahead == 'r') ADVANCE(90);
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
      if (lookahead == 'r') ADVANCE(490);
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
      if (lookahead == 'r') ADVANCE(529);
      END_STATE();
    case 1122:
      if (lookahead == 'r') ADVANCE(563);
      END_STATE();
    case 1123:
      if (lookahead == 'r') ADVANCE(683);
      END_STATE();
    case 1124:
      if (lookahead == 'r') ADVANCE(498);
      END_STATE();
    case 1125:
      if (lookahead == 'r') ADVANCE(1208);
      END_STATE();
    case 1126:
      if (lookahead == 'r') ADVANCE(972);
      END_STATE();
    case 1127:
      if (lookahead == 'r') ADVANCE(535);
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
      if (lookahead == 's') ADVANCE(1241);
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
      if (lookahead == 's') ADVANCE(581);
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
      if (lookahead == 's') ADVANCE(629);
      END_STATE();
    case 1173:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 1174:
      if (lookahead == 's') ADVANCE(691);
      END_STATE();
    case 1175:
      if (lookahead == 's') ADVANCE(68);
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
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 1181:
      if (lookahead == 's') ADVANCE(534);
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
      if (lookahead == 's') ADVANCE(489);
      END_STATE();
    case 1187:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 1188:
      if (lookahead == 's') ADVANCE(1254);
      END_STATE();
    case 1189:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 1190:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 1191:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 1192:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 1193:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 1194:
      if (lookahead == 's') ADVANCE(1175);
      END_STATE();
    case 1195:
      if (lookahead == 's') ADVANCE(1215);
      END_STATE();
    case 1196:
      if (lookahead == 's') ADVANCE(640);
      END_STATE();
    case 1197:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 1198:
      if (lookahead == 's') ADVANCE(1030);
      END_STATE();
    case 1199:
      if (lookahead == 's') ADVANCE(328);
      END_STATE();
    case 1200:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 1201:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 1202:
      if (lookahead == 's') ADVANCE(959);
      END_STATE();
    case 1203:
      if (lookahead == 's') ADVANCE(634);
      END_STATE();
    case 1204:
      if (lookahead == 's') ADVANCE(473);
      END_STATE();
    case 1205:
      if (lookahead == 's') ADVANCE(690);
      END_STATE();
    case 1206:
      if (lookahead == 's') ADVANCE(327);
      END_STATE();
    case 1207:
      if (lookahead == 's') ADVANCE(695);
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
      if (lookahead == 's') ADVANCE(510);
      END_STATE();
    case 1213:
      if (lookahead == 's') ADVANCE(516);
      END_STATE();
    case 1214:
      if (lookahead == 's') ADVANCE(643);
      END_STATE();
    case 1215:
      if (lookahead == 's') ADVANCE(698);
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
      if (lookahead == 't') ADVANCE(493);
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
      if (lookahead == 't') ADVANCE(628);
      END_STATE();
    case 1235:
      if (lookahead == 't') ADVANCE(662);
      END_STATE();
    case 1236:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 1237:
      if (lookahead == 't') ADVANCE(1389);
      END_STATE();
    case 1238:
      if (lookahead == 't') ADVANCE(1391);
      END_STATE();
    case 1239:
      if (lookahead == 't') ADVANCE(631);
      END_STATE();
    case 1240:
      if (lookahead == 't') ADVANCE(664);
      END_STATE();
    case 1241:
      if (lookahead == 't') ADVANCE(403);
      if (lookahead == 'w') ADVANCE(241);
      END_STATE();
    case 1242:
      if (lookahead == 't') ADVANCE(1399);
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
      if (lookahead == 't') ADVANCE(693);
      END_STATE();
    case 1247:
      if (lookahead == 't') ADVANCE(1393);
      END_STATE();
    case 1248:
      if (lookahead == 't') ADVANCE(313);
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
      if (lookahead == 't') ADVANCE(635);
      END_STATE();
    case 1257:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 1258:
      if (lookahead == 't') ADVANCE(88);
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
      if (lookahead == 't') ADVANCE(692);
      END_STATE();
    case 1266:
      if (lookahead == 't') ADVANCE(1333);
      END_STATE();
    case 1267:
      if (lookahead == 't') ADVANCE(696);
      END_STATE();
    case 1268:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 1269:
      if (lookahead == 't') ADVANCE(937);
      END_STATE();
    case 1270:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 1271:
      if (lookahead == 't') ADVANCE(956);
      END_STATE();
    case 1272:
      if (lookahead == 't') ADVANCE(678);
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
      if (lookahead == 't') ADVANCE(519);
      END_STATE();
    case 1279:
      if (lookahead == 't') ADVANCE(694);
      END_STATE();
    case 1280:
      if (lookahead == 't') ADVANCE(785);
      END_STATE();
    case 1281:
      if (lookahead == 't') ADVANCE(1269);
      END_STATE();
    case 1282:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 1283:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 1284:
      if (lookahead == 't') ADVANCE(699);
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
      if (lookahead == 't') ADVANCE(703);
      END_STATE();
    case 1289:
      if (lookahead == 't') ADVANCE(707);
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
      if (lookahead == 'u') ADVANCE(779);
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
      if (lookahead == 'u') ADVANCE(763);
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
      if (lookahead == 'u') ADVANCE(1257);
      END_STATE();
    case 1330:
      if (lookahead == 'u') ADVANCE(1187);
      END_STATE();
    case 1331:
      if (lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 1332:
      if (lookahead == 'u') ADVANCE(854);
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
      if (lookahead == 'v') ADVANCE(709);
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
      if (lookahead == 'v') ADVANCE(482);
      END_STATE();
    case 1352:
      if (lookahead == 'v') ADVANCE(568);
      END_STATE();
    case 1353:
      if (lookahead == 'v') ADVANCE(508);
      END_STATE();
    case 1354:
      if (lookahead == 'v') ADVANCE(505);
      END_STATE();
    case 1355:
      if (lookahead == 'v') ADVANCE(518);
      END_STATE();
    case 1356:
      if (lookahead == 'v') ADVANCE(514);
      END_STATE();
    case 1357:
      if (lookahead == 'v') ADVANCE(515);
      END_STATE();
    case 1358:
      if (lookahead == 'v') ADVANCE(701);
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
      if (lookahead == 'w') ADVANCE(644);
      END_STATE();
    case 1368:
      if (lookahead == 'w') ADVANCE(51);
      END_STATE();
    case 1369:
      if (lookahead == 'w') ADVANCE(666);
      END_STATE();
    case 1370:
      if (lookahead == 'w') ADVANCE(665);
      END_STATE();
    case 1371:
      if (lookahead == 'w') ADVANCE(704);
      END_STATE();
    case 1372:
      if (lookahead == 'w') ADVANCE(58);
      END_STATE();
    case 1373:
      if (lookahead == 'w') ADVANCE(60);
      END_STATE();
    case 1374:
      if (lookahead == 'w') ADVANCE(95);
      END_STATE();
    case 1375:
      if (lookahead == 'w') ADVANCE(215);
      END_STATE();
    case 1376:
      if (lookahead == 'w') ADVANCE(217);
      END_STATE();
    case 1377:
      if (lookahead == 'w') ADVANCE(509);
      END_STATE();
    case 1378:
      if (lookahead == 'w') ADVANCE(705);
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
      if (lookahead == 'y') ADVANCE(281);
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
      if (lookahead == 'y') ADVANCE(929);
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
      if (lookahead == 'z') ADVANCE(488);
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
      if (lookahead == 'e') ADVANCE(828);
      if (lookahead == 'f') ADVANCE(742);
      if (lookahead == 'g') ADVANCE(169);
      if (lookahead == 'h') ADVANCE(645);
      if (lookahead == 'i') ADVANCE(822);
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
      if (lookahead == 'e') ADVANCE(828);
      if (lookahead == 'f') ADVANCE(185);
      if (lookahead == 'g') ADVANCE(169);
      if (lookahead == 'h') ADVANCE(645);
      if (lookahead == 'i') ADVANCE(822);
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
      if (lookahead == 'd') ADVANCE(1099);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'l') ADVANCE(1173);
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
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 1415},
  [49] = {.lex_state = 1415},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 1415},
  [53] = {.lex_state = 1415},
  [54] = {.lex_state = 1415},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 1415},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 1415},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 1415},
  [64] = {.lex_state = 1415},
  [65] = {.lex_state = 1415},
  [66] = {.lex_state = 1415},
  [67] = {.lex_state = 1415},
  [68] = {.lex_state = 1415},
  [69] = {.lex_state = 1415},
  [70] = {.lex_state = 1415},
  [71] = {.lex_state = 1415},
  [72] = {.lex_state = 1415},
  [73] = {.lex_state = 1415},
  [74] = {.lex_state = 1415},
  [75] = {.lex_state = 1415},
  [76] = {.lex_state = 1415},
  [77] = {.lex_state = 1415},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 1415},
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
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 1415},
  [92] = {.lex_state = 1415},
  [93] = {.lex_state = 1415},
  [94] = {.lex_state = 1415},
  [95] = {.lex_state = 1415},
  [96] = {.lex_state = 1415},
  [97] = {.lex_state = 1415},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1415},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 1415},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 1415},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 1415},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 1415},
  [127] = {.lex_state = 1422},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 1415},
  [131] = {.lex_state = 1415},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
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
  [151] = {.lex_state = 1415},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 1415},
  [154] = {.lex_state = 1415},
  [155] = {.lex_state = 1415},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 1415},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1415},
  [165] = {.lex_state = 1415},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 1415},
  [169] = {.lex_state = 1415},
  [170] = {.lex_state = 1415},
  [171] = {.lex_state = 1415},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 5},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 1415},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 1415},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 1415},
  [202] = {.lex_state = 1415},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 1623},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 1415},
  [209] = {.lex_state = 11},
  [210] = {.lex_state = 1614},
  [211] = {.lex_state = 1614},
  [212] = {.lex_state = 9},
  [213] = {.lex_state = 1415},
  [214] = {.lex_state = 1415},
  [215] = {.lex_state = 1415},
  [216] = {.lex_state = 1415},
  [217] = {.lex_state = 1415},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 1415},
  [222] = {.lex_state = 1415},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 5},
  [225] = {.lex_state = 1415},
  [226] = {.lex_state = 1415},
  [227] = {.lex_state = 1415},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {(TSStateId)(-1)},
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
  },
  [1] = {
    [sym_config_file] = STATE(228),
    [sym_comment] = STATE(1),
    [sym_variable_section] = STATE(34),
    [sym_command] = STATE(34),
    [sym_command_exec] = STATE(37),
    [sym_command_exec_once] = STATE(37),
    [sym_command_source] = STATE(37),
    [sym_command_layerrule] = STATE(37),
    [aux_sym_config_file_repeat1] = STATE(25),
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
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      sym__newline,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      anon_sym_cursor_zoom_factor,
    STATE(2), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_variable_section_repeat6,
    STATE(6), 1,
      sym__misc_section_var,
    ACTIONS(45), 2,
      anon_sym_swallow_regex,
      anon_sym_swallow_exception_regex,
    ACTIONS(43), 3,
      anon_sym_vrr,
      anon_sym_render_ahead_safezone,
      anon_sym_groupbar_titles_font_size,
    ACTIONS(41), 21,
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
    ACTIONS(37), 1,
      sym__newline,
    ACTIONS(47), 1,
      anon_sym_cursor_zoom_factor,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_variable_section_repeat6,
    STATE(3), 1,
      sym_comment,
    STATE(6), 1,
      sym__misc_section_var,
    ACTIONS(45), 2,
      anon_sym_swallow_regex,
      anon_sym_swallow_exception_regex,
    ACTIONS(43), 3,
      anon_sym_vrr,
      anon_sym_render_ahead_safezone,
      anon_sym_groupbar_titles_font_size,
    ACTIONS(41), 21,
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
    ACTIONS(51), 1,
      sym__newline,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 1,
      anon_sym_cursor_zoom_factor,
    STATE(6), 1,
      sym__misc_section_var,
    ACTIONS(62), 2,
      anon_sym_swallow_regex,
      anon_sym_swallow_exception_regex,
    STATE(4), 2,
      sym_comment,
      aux_sym_variable_section_repeat6,
    ACTIONS(59), 3,
      anon_sym_vrr,
      anon_sym_render_ahead_safezone,
      anon_sym_groupbar_titles_font_size,
    ACTIONS(56), 21,
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
    ACTIONS(68), 1,
      sym__newline,
    STATE(5), 1,
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
  [200] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(72), 1,
      sym__newline,
    STATE(6), 1,
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
  [240] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(76), 1,
      sym__newline,
    STATE(7), 1,
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
  [280] = 12,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(80), 1,
      sym__newline,
    ACTIONS(90), 1,
      anon_sym_shadow_offset,
    ACTIONS(92), 1,
      anon_sym_screen_shader,
    STATE(8), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_variable_section_repeat2,
    STATE(17), 1,
      sym__decoration_section_var,
    ACTIONS(88), 2,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
    ACTIONS(82), 5,
      anon_sym_rounding,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
    ACTIONS(86), 7,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_shadow_scale,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
    ACTIONS(84), 8,
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
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(80), 1,
      sym__newline,
    ACTIONS(90), 1,
      anon_sym_shadow_offset,
    ACTIONS(92), 1,
      anon_sym_screen_shader,
    STATE(8), 1,
      aux_sym_variable_section_repeat2,
    STATE(9), 1,
      sym_comment,
    STATE(17), 1,
      sym__decoration_section_var,
    ACTIONS(88), 2,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
    ACTIONS(82), 5,
      anon_sym_rounding,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
    ACTIONS(86), 7,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_shadow_scale,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
    ACTIONS(84), 8,
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
    ACTIONS(94), 1,
      sym__newline,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(111), 1,
      anon_sym_shadow_offset,
    ACTIONS(114), 1,
      anon_sym_screen_shader,
    STATE(17), 1,
      sym__decoration_section_var,
    ACTIONS(108), 2,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
    STATE(10), 2,
      sym_comment,
      aux_sym_variable_section_repeat2,
    ACTIONS(99), 5,
      anon_sym_rounding,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
    ACTIONS(105), 7,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_shadow_scale,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
    ACTIONS(102), 8,
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
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(117), 1,
      sym__newline,
    ACTIONS(119), 1,
      anon_sym_sensitivity,
    ACTIONS(123), 1,
      anon_sym_touchpad,
    ACTIONS(125), 1,
      anon_sym_touchdevice,
    STATE(11), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_variable_section_repeat4,
    STATE(19), 1,
      sym__input_section_var,
    STATE(21), 1,
      sym__input_variable_section,
    ACTIONS(121), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(129), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(127), 8,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_accel_profile,
      anon_sym_scroll_method,
  [498] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(131), 1,
      sym__newline,
    STATE(12), 1,
      sym_comment,
    ACTIONS(133), 25,
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
  [535] = 12,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(135), 1,
      sym__newline,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    ACTIONS(140), 1,
      anon_sym_sensitivity,
    ACTIONS(146), 1,
      anon_sym_touchpad,
    ACTIONS(149), 1,
      anon_sym_touchdevice,
    STATE(19), 1,
      sym__input_section_var,
    STATE(21), 1,
      sym__input_variable_section,
    STATE(13), 2,
      sym_comment,
      aux_sym_variable_section_repeat4,
    ACTIONS(143), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(155), 5,
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
  [588] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(158), 1,
      sym__newline,
    STATE(14), 1,
      sym_comment,
    ACTIONS(160), 25,
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
  [625] = 13,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      sym__newline,
    ACTIONS(119), 1,
      anon_sym_sensitivity,
    ACTIONS(123), 1,
      anon_sym_touchpad,
    ACTIONS(125), 1,
      anon_sym_touchdevice,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_variable_section_repeat4,
    STATE(19), 1,
      sym__input_section_var,
    STATE(21), 1,
      sym__input_variable_section,
    ACTIONS(121), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(129), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(127), 8,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_accel_profile,
      anon_sym_scroll_method,
  [680] = 13,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      sym__newline,
    ACTIONS(119), 1,
      anon_sym_sensitivity,
    ACTIONS(123), 1,
      anon_sym_touchpad,
    ACTIONS(125), 1,
      anon_sym_touchdevice,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym_variable_section_repeat4,
    STATE(16), 1,
      sym_comment,
    STATE(19), 1,
      sym__input_section_var,
    STATE(21), 1,
      sym__input_variable_section,
    ACTIONS(121), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(129), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(127), 8,
      anon_sym_kb_model,
      anon_sym_kb_layout,
      anon_sym_kb_variant,
      anon_sym_kb_options,
      anon_sym_kb_rules,
      anon_sym_kb_file,
      anon_sym_accel_profile,
      anon_sym_scroll_method,
  [735] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(166), 1,
      sym__newline,
    STATE(17), 1,
      sym_comment,
    ACTIONS(168), 25,
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
  [772] = 13,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(117), 1,
      sym__newline,
    ACTIONS(119), 1,
      anon_sym_sensitivity,
    ACTIONS(123), 1,
      anon_sym_touchpad,
    ACTIONS(125), 1,
      anon_sym_touchdevice,
    STATE(11), 1,
      aux_sym_variable_section_repeat4,
    STATE(18), 1,
      sym_comment,
    STATE(19), 1,
      sym__input_section_var,
    STATE(21), 1,
      sym__input_variable_section,
    ACTIONS(121), 5,
      anon_sym_natural_scroll,
      anon_sym_numlock_by_default,
      anon_sym_force_no_accel,
      anon_sym_left_handed,
      anon_sym_mouse_refocus,
    ACTIONS(129), 5,
      anon_sym_repeat_rate,
      anon_sym_repeat_delay,
      anon_sym_scroll_button,
      anon_sym_follow_mouse,
      anon_sym_float_switch_override_focus,
    ACTIONS(127), 8,
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
    ACTIONS(170), 1,
      sym__newline,
    STATE(19), 1,
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
  [861] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(174), 1,
      sym__newline,
    STATE(20), 1,
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
    ACTIONS(178), 1,
      sym__newline,
    STATE(22), 1,
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
  [963] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(182), 1,
      sym__newline,
    STATE(23), 1,
      sym_comment,
    ACTIONS(184), 22,
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
    ACTIONS(186), 1,
      sym__newline,
    STATE(24), 1,
      sym_comment,
    ACTIONS(188), 22,
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
  [1031] = 20,
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
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_config_file_repeat1,
    STATE(34), 2,
      sym_variable_section,
      sym_command,
    STATE(37), 4,
      sym_command_exec,
      sym_command_exec_once,
      sym_command_source,
      sym_command_layerrule,
  [1096] = 19,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 1,
      sym__newline,
    ACTIONS(197), 1,
      anon_sym_general,
    ACTIONS(200), 1,
      anon_sym_decoration,
    ACTIONS(203), 1,
      anon_sym_animation,
    ACTIONS(206), 1,
      anon_sym_input,
    ACTIONS(209), 1,
      anon_sym_gestures,
    ACTIONS(212), 1,
      anon_sym_misc,
    ACTIONS(215), 1,
      anon_sym_binds,
    ACTIONS(218), 1,
      anon_sym_debug,
    ACTIONS(221), 1,
      anon_sym_device,
    ACTIONS(224), 1,
      anon_sym_exec,
    ACTIONS(227), 1,
      anon_sym_exec_DASHonce,
    ACTIONS(230), 1,
      anon_sym_source,
    ACTIONS(233), 1,
      anon_sym_layerrule,
    STATE(26), 2,
      sym_comment,
      aux_sym_config_file_repeat1,
    STATE(34), 2,
      sym_variable_section,
      sym_command,
    STATE(37), 4,
      sym_command_exec,
      sym_command_exec_once,
      sym_command_source,
      sym_command_layerrule,
  [1159] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(236), 1,
      sym__newline,
    ACTIONS(238), 1,
      anon_sym_sensitivity,
    ACTIONS(246), 1,
      anon_sym_layout,
    STATE(27), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_variable_section_repeat1,
    STATE(31), 1,
      sym__general_section_var,
    ACTIONS(244), 4,
      anon_sym_col_DOTinactive_border,
      anon_sym_col_DOTactive_border,
      anon_sym_col_DOTgroup_border,
      anon_sym_col_DOTgroup_border_active,
    ACTIONS(240), 5,
      anon_sym_border_size,
      anon_sym_gaps_in,
      anon_sym_gaps_out,
      anon_sym_cursor_inactive_timeout,
      anon_sym_extend_border_grab_area,
    ACTIONS(242), 6,
      anon_sym_no_border_on_floating,
      anon_sym_no_cursor_warps,
      anon_sym_no_focus_fallback,
      anon_sym_apply_sens_to_raw,
      anon_sym_resize_on_border,
      anon_sym_hover_icon_on_border,
  [1205] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(236), 1,
      sym__newline,
    ACTIONS(238), 1,
      anon_sym_sensitivity,
    ACTIONS(246), 1,
      anon_sym_layout,
    STATE(28), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_variable_section_repeat1,
    STATE(31), 1,
      sym__general_section_var,
    ACTIONS(244), 4,
      anon_sym_col_DOTinactive_border,
      anon_sym_col_DOTactive_border,
      anon_sym_col_DOTgroup_border,
      anon_sym_col_DOTgroup_border_active,
    ACTIONS(240), 5,
      anon_sym_border_size,
      anon_sym_gaps_in,
      anon_sym_gaps_out,
      anon_sym_cursor_inactive_timeout,
      anon_sym_extend_border_grab_area,
    ACTIONS(242), 6,
      anon_sym_no_border_on_floating,
      anon_sym_no_cursor_warps,
      anon_sym_no_focus_fallback,
      anon_sym_apply_sens_to_raw,
      anon_sym_resize_on_border,
      anon_sym_hover_icon_on_border,
  [1251] = 10,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(248), 1,
      sym__newline,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 1,
      anon_sym_sensitivity,
    ACTIONS(265), 1,
      anon_sym_layout,
    STATE(31), 1,
      sym__general_section_var,
    STATE(29), 2,
      sym_comment,
      aux_sym_variable_section_repeat1,
    ACTIONS(262), 4,
      anon_sym_col_DOTinactive_border,
      anon_sym_col_DOTactive_border,
      anon_sym_col_DOTgroup_border,
      anon_sym_col_DOTgroup_border_active,
    ACTIONS(256), 5,
      anon_sym_border_size,
      anon_sym_gaps_in,
      anon_sym_gaps_out,
      anon_sym_cursor_inactive_timeout,
      anon_sym_extend_border_grab_area,
    ACTIONS(259), 6,
      anon_sym_no_border_on_floating,
      anon_sym_no_cursor_warps,
      anon_sym_no_focus_fallback,
      anon_sym_apply_sens_to_raw,
      anon_sym_resize_on_border,
      anon_sym_hover_icon_on_border,
  [1295] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(268), 1,
      sym__newline,
    STATE(30), 1,
      sym_comment,
    ACTIONS(270), 18,
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
  [1325] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(272), 1,
      sym__newline,
    STATE(31), 1,
      sym_comment,
    ACTIONS(274), 18,
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
  [1355] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(276), 1,
      sym__newline,
    STATE(32), 1,
      sym_comment,
    ACTIONS(278), 18,
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
  [1385] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(33), 1,
      sym_comment,
    ACTIONS(280), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(282), 13,
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
  [1411] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(34), 1,
      sym_comment,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(286), 13,
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
  [1437] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(35), 1,
      sym_comment,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(290), 13,
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
  [1463] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(36), 1,
      sym_comment,
    ACTIONS(292), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(294), 13,
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
  [1489] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(37), 1,
      sym_comment,
    ACTIONS(296), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(298), 13,
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
  [1515] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(302), 13,
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
  [1541] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(304), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(306), 13,
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
  [1567] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(40), 1,
      sym_comment,
    ACTIONS(308), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(310), 13,
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
  [1593] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(41), 1,
      sym_comment,
    ACTIONS(312), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(314), 13,
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
  [1619] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(42), 1,
      sym_comment,
    ACTIONS(316), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(318), 13,
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
  [1645] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(43), 1,
      sym_comment,
    ACTIONS(320), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(322), 13,
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
  [1671] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(44), 1,
      sym_comment,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(326), 13,
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
  [1697] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(45), 1,
      sym_comment,
    ACTIONS(328), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(330), 13,
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
  [1723] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    STATE(46), 1,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(155), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(169), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(332), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1753] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    STATE(47), 1,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(155), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(164), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(332), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1783] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(338), 1,
      sym__newline,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    ACTIONS(346), 1,
      anon_sym_scroll_factor,
    ACTIONS(349), 1,
      anon_sym_tap_button_map,
    STATE(65), 1,
      sym__touchpad_section_var,
    STATE(48), 2,
      sym_comment,
      aux_sym__input_variable_section_repeat1,
    ACTIONS(343), 7,
      anon_sym_disable_while_typing,
      anon_sym_natural_scroll,
      anon_sym_middle_button_emulation,
      anon_sym_clickfinger_behavior,
      anon_sym_tap_DASHto_DASHclick,
      anon_sym_drag_lock,
      anon_sym_tap_DASHand_DASHdrag,
  [1815] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(352), 1,
      sym__newline,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    ACTIONS(358), 1,
      anon_sym_scroll_factor,
    ACTIONS(360), 1,
      anon_sym_tap_button_map,
    STATE(49), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym__input_variable_section_repeat1,
    STATE(65), 1,
      sym__touchpad_section_var,
    ACTIONS(356), 7,
      anon_sym_disable_while_typing,
      anon_sym_natural_scroll,
      anon_sym_middle_button_emulation,
      anon_sym_clickfinger_behavior,
      anon_sym_tap_DASHto_DASHclick,
      anon_sym_drag_lock,
      anon_sym_tap_DASHand_DASHdrag,
  [1849] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    STATE(50), 1,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(155), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(165), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(332), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1879] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    STATE(51), 1,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(155), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(221), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(332), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1909] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(362), 1,
      sym__newline,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    ACTIONS(373), 1,
      anon_sym_workspace_swipe_cancel_ratio,
    STATE(68), 1,
      sym__gestures_section_var,
    STATE(52), 2,
      sym_comment,
      aux_sym_variable_section_repeat5,
    ACTIONS(370), 3,
      anon_sym_workspace_swipe_fingers,
      anon_sym_workspace_swipe_distance,
      anon_sym_workspace_swipe_min_speed_to_force,
    ACTIONS(367), 5,
      anon_sym_workspace_swipe,
      anon_sym_workspace_swipe_invert,
      anon_sym_workspace_swipe_create_new,
      anon_sym_workspace_swipe_forever,
      anon_sym_workspace_swipe_numbered,
  [1941] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(376), 1,
      sym__newline,
    ACTIONS(382), 1,
      anon_sym_workspace_swipe_cancel_ratio,
    STATE(53), 1,
      sym_comment,
    STATE(54), 1,
      aux_sym_variable_section_repeat5,
    STATE(68), 1,
      sym__gestures_section_var,
    ACTIONS(380), 3,
      anon_sym_workspace_swipe_fingers,
      anon_sym_workspace_swipe_distance,
      anon_sym_workspace_swipe_min_speed_to_force,
    ACTIONS(378), 5,
      anon_sym_workspace_swipe,
      anon_sym_workspace_swipe_invert,
      anon_sym_workspace_swipe_create_new,
      anon_sym_workspace_swipe_forever,
      anon_sym_workspace_swipe_numbered,
  [1975] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(376), 1,
      sym__newline,
    ACTIONS(382), 1,
      anon_sym_workspace_swipe_cancel_ratio,
    STATE(52), 1,
      aux_sym_variable_section_repeat5,
    STATE(54), 1,
      sym_comment,
    STATE(68), 1,
      sym__gestures_section_var,
    ACTIONS(380), 3,
      anon_sym_workspace_swipe_fingers,
      anon_sym_workspace_swipe_distance,
      anon_sym_workspace_swipe_min_speed_to_force,
    ACTIONS(378), 5,
      anon_sym_workspace_swipe,
      anon_sym_workspace_swipe_invert,
      anon_sym_workspace_swipe_create_new,
      anon_sym_workspace_swipe_forever,
      anon_sym_workspace_swipe_numbered,
  [2009] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    STATE(55), 1,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(155), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(162), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(332), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2039] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    STATE(56), 1,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(155), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(168), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(332), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2069] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    STATE(57), 1,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(155), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(170), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(332), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2099] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(352), 1,
      sym__newline,
    ACTIONS(358), 1,
      anon_sym_scroll_factor,
    ACTIONS(360), 1,
      anon_sym_tap_button_map,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym__input_variable_section_repeat1,
    STATE(58), 1,
      sym_comment,
    STATE(65), 1,
      sym__touchpad_section_var,
    ACTIONS(356), 7,
      anon_sym_disable_while_typing,
      anon_sym_natural_scroll,
      anon_sym_middle_button_emulation,
      anon_sym_clickfinger_behavior,
      anon_sym_tap_DASHto_DASHclick,
      anon_sym_drag_lock,
      anon_sym_tap_DASHand_DASHdrag,
  [2133] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    STATE(59), 1,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(151), 2,
      sym_bool,
      sym_variable_reference,
    STATE(155), 2,
      sym__bool_literal,
      sym__bool_integer,
    ACTIONS(332), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2163] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    STATE(60), 1,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(155), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(171), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(332), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2193] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(386), 1,
      sym__newline,
    STATE(61), 1,
      sym_comment,
    ACTIONS(388), 10,
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
  [2215] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    ACTIONS(390), 1,
      anon_sym_rgb,
    ACTIONS(392), 1,
      anon_sym_rgba,
    ACTIONS(394), 1,
      anon_sym_0x,
    STATE(62), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_gradient_repeat1,
    STATE(94), 1,
      sym_color,
    STATE(151), 2,
      sym_gradient,
      sym_variable_reference,
    STATE(86), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [2249] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(396), 1,
      sym__newline,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      sym__debug_section_var,
    ACTIONS(404), 2,
      anon_sym_damage_tracking,
      anon_sym_manual_crash,
    STATE(63), 2,
      sym_comment,
      aux_sym_variable_section_repeat8,
    ACTIONS(401), 5,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_enable_stdout_logs,
  [2277] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(407), 1,
      sym__newline,
    STATE(64), 1,
      sym_comment,
    ACTIONS(409), 10,
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
  [2299] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(411), 1,
      sym__newline,
    STATE(65), 1,
      sym_comment,
    ACTIONS(413), 10,
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
  [2321] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(415), 1,
      sym__newline,
    STATE(66), 1,
      sym_comment,
    ACTIONS(417), 10,
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
  [2343] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(419), 1,
      sym__newline,
    STATE(67), 1,
      sym_comment,
    ACTIONS(421), 10,
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
  [2365] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(423), 1,
      sym__newline,
    STATE(68), 1,
      sym_comment,
    ACTIONS(425), 10,
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
  [2387] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(427), 1,
      sym__newline,
    STATE(69), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym_variable_section_repeat8,
    STATE(76), 1,
      sym__debug_section_var,
    ACTIONS(431), 2,
      anon_sym_damage_tracking,
      anon_sym_manual_crash,
    ACTIONS(429), 5,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_enable_stdout_logs,
  [2417] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(427), 1,
      sym__newline,
    STATE(63), 1,
      aux_sym_variable_section_repeat8,
    STATE(70), 1,
      sym_comment,
    STATE(76), 1,
      sym__debug_section_var,
    ACTIONS(431), 2,
      anon_sym_damage_tracking,
      anon_sym_manual_crash,
    ACTIONS(429), 5,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_enable_stdout_logs,
  [2447] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(390), 1,
      anon_sym_rgb,
    ACTIONS(433), 1,
      sym_int,
    ACTIONS(435), 1,
      anon_sym_rgba,
    ACTIONS(437), 1,
      anon_sym_0x,
    ACTIONS(439), 1,
      sym__newline,
    STATE(71), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_gradient_repeat1,
    STATE(94), 1,
      sym_color,
    STATE(181), 1,
      sym_degree,
    STATE(86), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [2483] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(441), 1,
      sym_int,
    ACTIONS(443), 1,
      anon_sym_rgb,
    ACTIONS(446), 1,
      anon_sym_rgba,
    ACTIONS(449), 1,
      anon_sym_0x,
    ACTIONS(452), 1,
      sym__newline,
    STATE(94), 1,
      sym_color,
    STATE(72), 2,
      sym_comment,
      aux_sym_gradient_repeat1,
    STATE(86), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [2514] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(454), 1,
      sym__newline,
    STATE(73), 1,
      sym_comment,
    ACTIONS(456), 8,
      anon_sym_RBRACE,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_damage_tracking,
      anon_sym_enable_stdout_logs,
      anon_sym_manual_crash,
  [2534] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(458), 1,
      sym__newline,
    STATE(74), 1,
      sym_comment,
    ACTIONS(460), 8,
      anon_sym_RBRACE,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_damage_tracking,
      anon_sym_enable_stdout_logs,
      anon_sym_manual_crash,
  [2554] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(462), 1,
      sym__newline,
    STATE(75), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_variable_section_repeat7,
    STATE(80), 1,
      sym__binds_section_var,
    ACTIONS(466), 2,
      anon_sym_scroll_event_delay,
      anon_sym_focus_preferred_method,
    ACTIONS(464), 3,
      anon_sym_pass_mouse_when_bound,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
  [2582] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(468), 1,
      sym__newline,
    STATE(76), 1,
      sym_comment,
    ACTIONS(470), 8,
      anon_sym_RBRACE,
      anon_sym_overlay,
      anon_sym_damage_blink,
      anon_sym_disable_logs,
      anon_sym_disable_time,
      anon_sym_damage_tracking,
      anon_sym_enable_stdout_logs,
      anon_sym_manual_crash,
  [2602] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(462), 1,
      sym__newline,
    STATE(75), 1,
      aux_sym_variable_section_repeat7,
    STATE(77), 1,
      sym_comment,
    STATE(80), 1,
      sym__binds_section_var,
    ACTIONS(466), 2,
      anon_sym_scroll_event_delay,
      anon_sym_focus_preferred_method,
    ACTIONS(464), 3,
      anon_sym_pass_mouse_when_bound,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
  [2630] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    ACTIONS(390), 1,
      anon_sym_rgb,
    ACTIONS(392), 1,
      anon_sym_rgba,
    ACTIONS(394), 1,
      anon_sym_0x,
    STATE(78), 1,
      sym_comment,
    STATE(162), 2,
      sym_color,
      sym_variable_reference,
    STATE(86), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [2658] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(472), 1,
      sym__newline,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      sym__binds_section_var,
    ACTIONS(480), 2,
      anon_sym_scroll_event_delay,
      anon_sym_focus_preferred_method,
    STATE(79), 2,
      sym_comment,
      aux_sym_variable_section_repeat7,
    ACTIONS(477), 3,
      anon_sym_pass_mouse_when_bound,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
  [2684] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(483), 1,
      sym__newline,
    STATE(80), 1,
      sym_comment,
    ACTIONS(485), 6,
      anon_sym_RBRACE,
      anon_sym_pass_mouse_when_bound,
      anon_sym_scroll_event_delay,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
      anon_sym_focus_preferred_method,
  [2702] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(487), 1,
      sym__newline,
    STATE(81), 1,
      sym_comment,
    ACTIONS(489), 6,
      anon_sym_RBRACE,
      anon_sym_pass_mouse_when_bound,
      anon_sym_scroll_event_delay,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
      anon_sym_focus_preferred_method,
  [2720] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(491), 1,
      sym__newline,
    STATE(82), 1,
      sym_comment,
    ACTIONS(493), 6,
      anon_sym_RBRACE,
      anon_sym_pass_mouse_when_bound,
      anon_sym_scroll_event_delay,
      anon_sym_workspace_back_and_forth,
      anon_sym_allow_workspace_cycles,
      anon_sym_focus_preferred_method,
  [2738] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    ACTIONS(495), 1,
      sym__newline,
    ACTIONS(497), 1,
      anon_sym_transform,
    ACTIONS(499), 1,
      anon_sym_output,
    STATE(83), 1,
      sym_comment,
    STATE(85), 1,
      aux_sym__input_variable_section_repeat2,
    STATE(95), 1,
      sym__touchdevice_section_var,
  [2763] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(501), 1,
      sym__newline,
    ACTIONS(504), 1,
      anon_sym_RBRACE,
    ACTIONS(506), 1,
      anon_sym_transform,
    ACTIONS(509), 1,
      anon_sym_output,
    STATE(95), 1,
      sym__touchdevice_section_var,
    STATE(84), 2,
      sym_comment,
      aux_sym__input_variable_section_repeat2,
  [2786] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    ACTIONS(495), 1,
      sym__newline,
    ACTIONS(497), 1,
      anon_sym_transform,
    ACTIONS(499), 1,
      anon_sym_output,
    STATE(84), 1,
      aux_sym__input_variable_section_repeat2,
    STATE(85), 1,
      sym_comment,
    STATE(95), 1,
      sym__touchdevice_section_var,
  [2811] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(514), 1,
      sym__newline,
    STATE(86), 1,
      sym_comment,
    ACTIONS(512), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [2827] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(518), 1,
      sym__newline,
    STATE(87), 1,
      sym_comment,
    ACTIONS(516), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [2843] = 6,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(520), 1,
      sym__newline,
    ACTIONS(523), 1,
      anon_sym_RBRACE,
    ACTIONS(525), 1,
      anon_sym_enabled,
    STATE(122), 1,
      sym__animation_section_var,
    STATE(88), 2,
      sym_comment,
      aux_sym_variable_section_repeat3,
  [2863] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(530), 1,
      sym__newline,
    STATE(89), 1,
      sym_comment,
    ACTIONS(528), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [2879] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(532), 1,
      aux_sym_word_token1,
    ACTIONS(534), 1,
      anon_sym_address,
    STATE(42), 1,
      sym_layer_identifier,
    STATE(90), 1,
      sym_comment,
    STATE(35), 2,
      sym_word,
      sym_layer_address,
  [2899] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(538), 1,
      sym__newline,
    STATE(91), 1,
      sym_comment,
    ACTIONS(536), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [2915] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(540), 1,
      sym__newline,
    ACTIONS(542), 1,
      anon_sym_enabled,
    STATE(92), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_variable_section_repeat3,
    STATE(122), 1,
      sym__animation_section_var,
  [2937] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(540), 1,
      sym__newline,
    ACTIONS(542), 1,
      anon_sym_enabled,
    STATE(88), 1,
      aux_sym_variable_section_repeat3,
    STATE(93), 1,
      sym_comment,
    STATE(122), 1,
      sym__animation_section_var,
  [2959] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(546), 1,
      sym__newline,
    STATE(94), 1,
      sym_comment,
    ACTIONS(544), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [2975] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(548), 1,
      sym__newline,
    STATE(95), 1,
      sym_comment,
    ACTIONS(550), 3,
      anon_sym_RBRACE,
      anon_sym_transform,
      anon_sym_output,
  [2990] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(552), 1,
      sym__newline,
    STATE(96), 1,
      sym_comment,
    ACTIONS(554), 3,
      anon_sym_RBRACE,
      anon_sym_transform,
      anon_sym_output,
  [3005] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(556), 1,
      sym__newline,
    STATE(97), 1,
      sym_comment,
    ACTIONS(558), 3,
      anon_sym_RBRACE,
      anon_sym_transform,
      anon_sym_output,
  [3020] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    ACTIONS(560), 1,
      sym_float,
    STATE(98), 1,
      sym_comment,
    STATE(162), 2,
      sym_vec2,
      sym_variable_reference,
  [3037] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    ACTIONS(562), 1,
      sym_int,
    STATE(99), 1,
      sym_comment,
    STATE(170), 1,
      sym_variable_reference,
  [3053] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    ACTIONS(564), 1,
      sym_float,
    STATE(100), 1,
      sym_comment,
    STATE(165), 1,
      sym_variable_reference,
  [3069] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(101), 1,
      sym_comment,
    STATE(198), 1,
      sym_layer_rule,
    ACTIONS(566), 2,
      anon_sym_blur,
      anon_sym_unset,
  [3083] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(568), 1,
      sym__newline,
    STATE(102), 1,
      sym_comment,
    ACTIONS(570), 2,
      anon_sym_RBRACE,
      anon_sym_enabled,
  [3097] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    ACTIONS(572), 1,
      sym_float,
    STATE(103), 1,
      sym_comment,
    STATE(221), 1,
      sym_variable_reference,
  [3113] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    ACTIONS(574), 1,
      sym_int,
    STATE(104), 1,
      sym_comment,
    STATE(168), 1,
      sym_variable_reference,
  [3129] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(576), 1,
      sym_str,
    ACTIONS(578), 1,
      anon_sym_DOLLAR,
    STATE(105), 1,
      sym_comment,
    STATE(221), 1,
      sym_variable_reference,
  [3145] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    ACTIONS(580), 1,
      sym_int,
    STATE(106), 1,
      sym_comment,
    STATE(222), 1,
      sym_variable_reference,
  [3161] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    ACTIONS(574), 1,
      sym_float,
    STATE(107), 1,
      sym_comment,
    STATE(168), 1,
      sym_variable_reference,
  [3177] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    ACTIONS(582), 1,
      sym_float,
    STATE(108), 1,
      sym_comment,
    STATE(151), 1,
      sym_variable_reference,
  [3193] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    ACTIONS(582), 1,
      sym_int,
    STATE(109), 1,
      sym_comment,
    STATE(151), 1,
      sym_variable_reference,
  [3209] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(578), 1,
      anon_sym_DOLLAR,
    ACTIONS(584), 1,
      sym_str,
    STATE(110), 1,
      sym_comment,
    STATE(222), 1,
      sym_variable_reference,
  [3225] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    ACTIONS(586), 1,
      sym_int,
    STATE(111), 1,
      sym_comment,
    STATE(169), 1,
      sym_variable_reference,
  [3241] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(578), 1,
      anon_sym_DOLLAR,
    ACTIONS(588), 1,
      sym_str,
    STATE(112), 1,
      sym_comment,
    STATE(151), 1,
      sym_variable_reference,
  [3257] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(578), 1,
      anon_sym_DOLLAR,
    ACTIONS(590), 1,
      sym_str,
    STATE(113), 1,
      sym_comment,
    STATE(169), 1,
      sym_variable_reference,
  [3273] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(578), 1,
      anon_sym_DOLLAR,
    ACTIONS(592), 1,
      sym_str,
    STATE(114), 1,
      sym_comment,
    STATE(165), 1,
      sym_variable_reference,
  [3289] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    ACTIONS(594), 1,
      sym_int,
    STATE(115), 1,
      sym_comment,
    STATE(162), 1,
      sym_variable_reference,
  [3305] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    ACTIONS(586), 1,
      sym_float,
    STATE(116), 1,
      sym_comment,
    STATE(169), 1,
      sym_variable_reference,
  [3321] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    ACTIONS(594), 1,
      sym_float,
    STATE(117), 1,
      sym_comment,
    STATE(162), 1,
      sym_variable_reference,
  [3337] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    ACTIONS(596), 1,
      sym_int,
    STATE(118), 1,
      sym_comment,
    STATE(171), 1,
      sym_variable_reference,
  [3353] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(598), 1,
      sym__newline,
    STATE(119), 1,
      sym_comment,
    ACTIONS(600), 2,
      anon_sym_RBRACE,
      anon_sym_enabled,
  [3367] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(578), 1,
      anon_sym_DOLLAR,
    ACTIONS(602), 1,
      sym_str,
    STATE(120), 1,
      sym_comment,
    STATE(162), 1,
      sym_variable_reference,
  [3383] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    ACTIONS(564), 1,
      sym_int,
    STATE(121), 1,
      sym_comment,
    STATE(165), 1,
      sym_variable_reference,
  [3399] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(604), 1,
      sym__newline,
    STATE(122), 1,
      sym_comment,
    ACTIONS(606), 2,
      anon_sym_RBRACE,
      anon_sym_enabled,
  [3413] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(608), 1,
      anon_sym_EQ,
    STATE(123), 1,
      sym_comment,
  [3423] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(610), 1,
      sym__newline,
    STATE(124), 1,
      sym_comment,
  [3433] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(612), 1,
      anon_sym_EQ,
    STATE(125), 1,
      sym_comment,
  [3443] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(614), 1,
      sym__newline,
    STATE(126), 1,
      sym_comment,
  [3453] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(616), 1,
      aux_sym_comment_token1,
    STATE(127), 1,
      sym_comment,
  [3463] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(618), 1,
      anon_sym_EQ,
    STATE(128), 1,
      sym_comment,
  [3473] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(620), 1,
      anon_sym_EQ,
    STATE(129), 1,
      sym_comment,
  [3483] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(622), 1,
      sym__newline,
    STATE(130), 1,
      sym_comment,
  [3493] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(624), 1,
      sym__newline,
    STATE(131), 1,
      sym_comment,
  [3503] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(626), 1,
      anon_sym_COLON,
    STATE(132), 1,
      sym_comment,
  [3513] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(628), 1,
      anon_sym_EQ,
    STATE(133), 1,
      sym_comment,
  [3523] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(630), 1,
      anon_sym_EQ,
    STATE(134), 1,
      sym_comment,
  [3533] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(632), 1,
      anon_sym_EQ,
    STATE(135), 1,
      sym_comment,
  [3543] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(634), 1,
      anon_sym_EQ,
    STATE(136), 1,
      sym_comment,
  [3553] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(636), 1,
      anon_sym_EQ,
    STATE(137), 1,
      sym_comment,
  [3563] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(638), 1,
      anon_sym_EQ,
    STATE(138), 1,
      sym_comment,
  [3573] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      anon_sym_LBRACE,
    STATE(139), 1,
      sym_comment,
  [3583] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(642), 1,
      anon_sym_EQ,
    STATE(140), 1,
      sym_comment,
  [3593] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(644), 1,
      anon_sym_EQ,
    STATE(141), 1,
      sym_comment,
  [3603] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(646), 1,
      anon_sym_EQ,
    STATE(142), 1,
      sym_comment,
  [3613] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(648), 1,
      anon_sym_EQ,
    STATE(143), 1,
      sym_comment,
  [3623] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(650), 1,
      anon_sym_EQ,
    STATE(144), 1,
      sym_comment,
  [3633] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(652), 1,
      anon_sym_EQ,
    STATE(145), 1,
      sym_comment,
  [3643] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(654), 1,
      anon_sym_LBRACE,
    STATE(146), 1,
      sym_comment,
  [3653] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(656), 1,
      anon_sym_LBRACE,
    STATE(147), 1,
      sym_comment,
  [3663] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(658), 1,
      anon_sym_COLON,
    STATE(148), 1,
      sym_comment,
  [3673] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(660), 1,
      anon_sym_LBRACE,
    STATE(149), 1,
      sym_comment,
  [3683] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(662), 1,
      anon_sym_EQ,
    STATE(150), 1,
      sym_comment,
  [3693] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(664), 1,
      sym__newline,
    STATE(151), 1,
      sym_comment,
  [3703] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(666), 1,
      aux_sym_word_token1,
    STATE(152), 1,
      sym_comment,
  [3713] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(668), 1,
      sym__newline,
    STATE(153), 1,
      sym_comment,
  [3723] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(670), 1,
      sym__newline,
    STATE(154), 1,
      sym_comment,
  [3733] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(672), 1,
      sym__newline,
    STATE(155), 1,
      sym_comment,
  [3743] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
    STATE(156), 1,
      sym_comment,
  [3753] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(676), 1,
      anon_sym_LPAREN,
    STATE(157), 1,
      sym_comment,
  [3763] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(678), 1,
      sym__hex_comp,
    STATE(158), 1,
      sym_comment,
  [3773] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(680), 1,
      anon_sym_EQ,
    STATE(159), 1,
      sym_comment,
  [3783] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(682), 1,
      anon_sym_EQ,
    STATE(160), 1,
      sym_comment,
  [3793] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(684), 1,
      anon_sym_EQ,
    STATE(161), 1,
      sym_comment,
  [3803] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(686), 1,
      sym__newline,
    STATE(162), 1,
      sym_comment,
  [3813] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(688), 1,
      sym_float,
    STATE(163), 1,
      sym_comment,
  [3823] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(690), 1,
      sym__newline,
    STATE(164), 1,
      sym_comment,
  [3833] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(692), 1,
      sym__newline,
    STATE(165), 1,
      sym_comment,
  [3843] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(694), 1,
      anon_sym_EQ,
    STATE(166), 1,
      sym_comment,
  [3853] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(696), 1,
      anon_sym_EQ,
    STATE(167), 1,
      sym_comment,
  [3863] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(698), 1,
      sym__newline,
    STATE(168), 1,
      sym_comment,
  [3873] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(700), 1,
      sym__newline,
    STATE(169), 1,
      sym_comment,
  [3883] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(702), 1,
      sym__newline,
    STATE(170), 1,
      sym_comment,
  [3893] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(704), 1,
      sym__newline,
    STATE(171), 1,
      sym_comment,
  [3903] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(706), 1,
      anon_sym_EQ,
    STATE(172), 1,
      sym_comment,
  [3913] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(708), 1,
      anon_sym_LBRACE,
    STATE(173), 1,
      sym_comment,
  [3923] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(710), 1,
      anon_sym_0x2,
    STATE(174), 1,
      sym_comment,
  [3933] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(712), 1,
      anon_sym_LBRACE,
    STATE(175), 1,
      sym_comment,
  [3943] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(714), 1,
      anon_sym_EQ,
    STATE(176), 1,
      sym_comment,
  [3953] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(716), 1,
      sym__hex_comp,
    STATE(177), 1,
      sym_comment,
  [3963] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(718), 1,
      sym__hex_comp,
    STATE(178), 1,
      sym_comment,
  [3973] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(720), 1,
      sym__hex_comp,
    STATE(179), 1,
      sym_comment,
  [3983] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(722), 1,
      anon_sym_deg,
    STATE(180), 1,
      sym_comment,
  [3993] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(724), 1,
      sym__newline,
    STATE(181), 1,
      sym_comment,
  [4003] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(726), 1,
      anon_sym_EQ,
    STATE(182), 1,
      sym_comment,
  [4013] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(728), 1,
      anon_sym_LBRACE,
    STATE(183), 1,
      sym_comment,
  [4023] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(730), 1,
      sym__newline,
    STATE(184), 1,
      sym_comment,
  [4033] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(732), 1,
      anon_sym_EQ,
    STATE(185), 1,
      sym_comment,
  [4043] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(734), 1,
      anon_sym_LBRACE,
    STATE(186), 1,
      sym_comment,
  [4053] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(736), 1,
      anon_sym_EQ,
    STATE(187), 1,
      sym_comment,
  [4063] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(738), 1,
      anon_sym_LBRACE,
    STATE(188), 1,
      sym_comment,
  [4073] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(740), 1,
      anon_sym_EQ,
    STATE(189), 1,
      sym_comment,
  [4083] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(742), 1,
      anon_sym_EQ,
    STATE(190), 1,
      sym_comment,
  [4093] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(744), 1,
      anon_sym_EQ,
    STATE(191), 1,
      sym_comment,
  [4103] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(746), 1,
      anon_sym_EQ,
    STATE(192), 1,
      sym_comment,
  [4113] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(748), 1,
      anon_sym_EQ,
    STATE(193), 1,
      sym_comment,
  [4123] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(750), 1,
      anon_sym_EQ,
    STATE(194), 1,
      sym_comment,
  [4133] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(752), 1,
      anon_sym_EQ,
    STATE(195), 1,
      sym_comment,
  [4143] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(754), 1,
      anon_sym_EQ,
    STATE(196), 1,
      sym_comment,
  [4153] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(756), 1,
      anon_sym_EQ,
    STATE(197), 1,
      sym_comment,
  [4163] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(758), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      sym_comment,
  [4173] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(760), 1,
      anon_sym_COMMA,
    STATE(199), 1,
      sym_comment,
  [4183] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(762), 1,
      anon_sym_LBRACE,
    STATE(200), 1,
      sym_comment,
  [4193] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(764), 1,
      sym__newline,
    STATE(201), 1,
      sym_comment,
  [4203] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(766), 1,
      sym__newline,
    STATE(202), 1,
      sym_comment,
  [4213] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(768), 1,
      anon_sym_LBRACE,
    STATE(203), 1,
      sym_comment,
  [4223] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(770), 1,
      aux_sym_layer_address_token1,
    STATE(204), 1,
      sym_comment,
  [4233] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(772), 1,
      sym__hex_comp,
    STATE(205), 1,
      sym_comment,
  [4243] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(774), 1,
      sym__hex_comp,
    STATE(206), 1,
      sym_comment,
  [4253] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(776), 1,
      sym__hex_comp,
    STATE(207), 1,
      sym_comment,
  [4263] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(778), 1,
      sym__newline,
    STATE(208), 1,
      sym_comment,
  [4273] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(780), 1,
      sym_str,
    STATE(209), 1,
      sym_comment,
  [4283] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(782), 1,
      sym_shell_command,
    STATE(210), 1,
      sym_comment,
  [4293] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(784), 1,
      sym_shell_command,
    STATE(211), 1,
      sym_comment,
  [4303] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(786), 1,
      aux_sym_variable_section_token1,
    STATE(212), 1,
      sym_comment,
  [4313] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(788), 1,
      sym__newline,
    STATE(213), 1,
      sym_comment,
  [4323] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(790), 1,
      sym__newline,
    STATE(214), 1,
      sym_comment,
  [4333] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(792), 1,
      sym__newline,
    STATE(215), 1,
      sym_comment,
  [4343] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(794), 1,
      sym__newline,
    STATE(216), 1,
      sym_comment,
  [4353] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(796), 1,
      sym__newline,
    STATE(217), 1,
      sym_comment,
  [4363] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(798), 1,
      sym__hex_comp,
    STATE(218), 1,
      sym_comment,
  [4373] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(800), 1,
      sym__hex_comp,
    STATE(219), 1,
      sym_comment,
  [4383] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(802), 1,
      sym__hex_comp,
    STATE(220), 1,
      sym_comment,
  [4393] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(804), 1,
      sym__newline,
    STATE(221), 1,
      sym_comment,
  [4403] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(806), 1,
      sym__newline,
    STATE(222), 1,
      sym_comment,
  [4413] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      sym_comment,
  [4423] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(810), 1,
      sym__hex_comp,
    STATE(224), 1,
      sym_comment,
  [4433] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(812), 1,
      sym__newline,
    STATE(225), 1,
      sym_comment,
  [4443] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(814), 1,
      sym__newline,
    STATE(226), 1,
      sym_comment,
  [4453] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(816), 1,
      sym__newline,
    STATE(227), 1,
      sym_comment,
  [4463] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(818), 1,
      ts_builtin_sym_end,
    STATE(228), 1,
      sym_comment,
  [4473] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(820), 1,
      anon_sym_RPAREN,
    STATE(229), 1,
      sym_comment,
  [4483] = 1,
    ACTIONS(822), 1,
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
  [SMALL_STATE(9)] = 335,
  [SMALL_STATE(10)] = 390,
  [SMALL_STATE(11)] = 443,
  [SMALL_STATE(12)] = 498,
  [SMALL_STATE(13)] = 535,
  [SMALL_STATE(14)] = 588,
  [SMALL_STATE(15)] = 625,
  [SMALL_STATE(16)] = 680,
  [SMALL_STATE(17)] = 735,
  [SMALL_STATE(18)] = 772,
  [SMALL_STATE(19)] = 827,
  [SMALL_STATE(20)] = 861,
  [SMALL_STATE(21)] = 895,
  [SMALL_STATE(22)] = 929,
  [SMALL_STATE(23)] = 963,
  [SMALL_STATE(24)] = 997,
  [SMALL_STATE(25)] = 1031,
  [SMALL_STATE(26)] = 1096,
  [SMALL_STATE(27)] = 1159,
  [SMALL_STATE(28)] = 1205,
  [SMALL_STATE(29)] = 1251,
  [SMALL_STATE(30)] = 1295,
  [SMALL_STATE(31)] = 1325,
  [SMALL_STATE(32)] = 1355,
  [SMALL_STATE(33)] = 1385,
  [SMALL_STATE(34)] = 1411,
  [SMALL_STATE(35)] = 1437,
  [SMALL_STATE(36)] = 1463,
  [SMALL_STATE(37)] = 1489,
  [SMALL_STATE(38)] = 1515,
  [SMALL_STATE(39)] = 1541,
  [SMALL_STATE(40)] = 1567,
  [SMALL_STATE(41)] = 1593,
  [SMALL_STATE(42)] = 1619,
  [SMALL_STATE(43)] = 1645,
  [SMALL_STATE(44)] = 1671,
  [SMALL_STATE(45)] = 1697,
  [SMALL_STATE(46)] = 1723,
  [SMALL_STATE(47)] = 1753,
  [SMALL_STATE(48)] = 1783,
  [SMALL_STATE(49)] = 1815,
  [SMALL_STATE(50)] = 1849,
  [SMALL_STATE(51)] = 1879,
  [SMALL_STATE(52)] = 1909,
  [SMALL_STATE(53)] = 1941,
  [SMALL_STATE(54)] = 1975,
  [SMALL_STATE(55)] = 2009,
  [SMALL_STATE(56)] = 2039,
  [SMALL_STATE(57)] = 2069,
  [SMALL_STATE(58)] = 2099,
  [SMALL_STATE(59)] = 2133,
  [SMALL_STATE(60)] = 2163,
  [SMALL_STATE(61)] = 2193,
  [SMALL_STATE(62)] = 2215,
  [SMALL_STATE(63)] = 2249,
  [SMALL_STATE(64)] = 2277,
  [SMALL_STATE(65)] = 2299,
  [SMALL_STATE(66)] = 2321,
  [SMALL_STATE(67)] = 2343,
  [SMALL_STATE(68)] = 2365,
  [SMALL_STATE(69)] = 2387,
  [SMALL_STATE(70)] = 2417,
  [SMALL_STATE(71)] = 2447,
  [SMALL_STATE(72)] = 2483,
  [SMALL_STATE(73)] = 2514,
  [SMALL_STATE(74)] = 2534,
  [SMALL_STATE(75)] = 2554,
  [SMALL_STATE(76)] = 2582,
  [SMALL_STATE(77)] = 2602,
  [SMALL_STATE(78)] = 2630,
  [SMALL_STATE(79)] = 2658,
  [SMALL_STATE(80)] = 2684,
  [SMALL_STATE(81)] = 2702,
  [SMALL_STATE(82)] = 2720,
  [SMALL_STATE(83)] = 2738,
  [SMALL_STATE(84)] = 2763,
  [SMALL_STATE(85)] = 2786,
  [SMALL_STATE(86)] = 2811,
  [SMALL_STATE(87)] = 2827,
  [SMALL_STATE(88)] = 2843,
  [SMALL_STATE(89)] = 2863,
  [SMALL_STATE(90)] = 2879,
  [SMALL_STATE(91)] = 2899,
  [SMALL_STATE(92)] = 2915,
  [SMALL_STATE(93)] = 2937,
  [SMALL_STATE(94)] = 2959,
  [SMALL_STATE(95)] = 2975,
  [SMALL_STATE(96)] = 2990,
  [SMALL_STATE(97)] = 3005,
  [SMALL_STATE(98)] = 3020,
  [SMALL_STATE(99)] = 3037,
  [SMALL_STATE(100)] = 3053,
  [SMALL_STATE(101)] = 3069,
  [SMALL_STATE(102)] = 3083,
  [SMALL_STATE(103)] = 3097,
  [SMALL_STATE(104)] = 3113,
  [SMALL_STATE(105)] = 3129,
  [SMALL_STATE(106)] = 3145,
  [SMALL_STATE(107)] = 3161,
  [SMALL_STATE(108)] = 3177,
  [SMALL_STATE(109)] = 3193,
  [SMALL_STATE(110)] = 3209,
  [SMALL_STATE(111)] = 3225,
  [SMALL_STATE(112)] = 3241,
  [SMALL_STATE(113)] = 3257,
  [SMALL_STATE(114)] = 3273,
  [SMALL_STATE(115)] = 3289,
  [SMALL_STATE(116)] = 3305,
  [SMALL_STATE(117)] = 3321,
  [SMALL_STATE(118)] = 3337,
  [SMALL_STATE(119)] = 3353,
  [SMALL_STATE(120)] = 3367,
  [SMALL_STATE(121)] = 3383,
  [SMALL_STATE(122)] = 3399,
  [SMALL_STATE(123)] = 3413,
  [SMALL_STATE(124)] = 3423,
  [SMALL_STATE(125)] = 3433,
  [SMALL_STATE(126)] = 3443,
  [SMALL_STATE(127)] = 3453,
  [SMALL_STATE(128)] = 3463,
  [SMALL_STATE(129)] = 3473,
  [SMALL_STATE(130)] = 3483,
  [SMALL_STATE(131)] = 3493,
  [SMALL_STATE(132)] = 3503,
  [SMALL_STATE(133)] = 3513,
  [SMALL_STATE(134)] = 3523,
  [SMALL_STATE(135)] = 3533,
  [SMALL_STATE(136)] = 3543,
  [SMALL_STATE(137)] = 3553,
  [SMALL_STATE(138)] = 3563,
  [SMALL_STATE(139)] = 3573,
  [SMALL_STATE(140)] = 3583,
  [SMALL_STATE(141)] = 3593,
  [SMALL_STATE(142)] = 3603,
  [SMALL_STATE(143)] = 3613,
  [SMALL_STATE(144)] = 3623,
  [SMALL_STATE(145)] = 3633,
  [SMALL_STATE(146)] = 3643,
  [SMALL_STATE(147)] = 3653,
  [SMALL_STATE(148)] = 3663,
  [SMALL_STATE(149)] = 3673,
  [SMALL_STATE(150)] = 3683,
  [SMALL_STATE(151)] = 3693,
  [SMALL_STATE(152)] = 3703,
  [SMALL_STATE(153)] = 3713,
  [SMALL_STATE(154)] = 3723,
  [SMALL_STATE(155)] = 3733,
  [SMALL_STATE(156)] = 3743,
  [SMALL_STATE(157)] = 3753,
  [SMALL_STATE(158)] = 3763,
  [SMALL_STATE(159)] = 3773,
  [SMALL_STATE(160)] = 3783,
  [SMALL_STATE(161)] = 3793,
  [SMALL_STATE(162)] = 3803,
  [SMALL_STATE(163)] = 3813,
  [SMALL_STATE(164)] = 3823,
  [SMALL_STATE(165)] = 3833,
  [SMALL_STATE(166)] = 3843,
  [SMALL_STATE(167)] = 3853,
  [SMALL_STATE(168)] = 3863,
  [SMALL_STATE(169)] = 3873,
  [SMALL_STATE(170)] = 3883,
  [SMALL_STATE(171)] = 3893,
  [SMALL_STATE(172)] = 3903,
  [SMALL_STATE(173)] = 3913,
  [SMALL_STATE(174)] = 3923,
  [SMALL_STATE(175)] = 3933,
  [SMALL_STATE(176)] = 3943,
  [SMALL_STATE(177)] = 3953,
  [SMALL_STATE(178)] = 3963,
  [SMALL_STATE(179)] = 3973,
  [SMALL_STATE(180)] = 3983,
  [SMALL_STATE(181)] = 3993,
  [SMALL_STATE(182)] = 4003,
  [SMALL_STATE(183)] = 4013,
  [SMALL_STATE(184)] = 4023,
  [SMALL_STATE(185)] = 4033,
  [SMALL_STATE(186)] = 4043,
  [SMALL_STATE(187)] = 4053,
  [SMALL_STATE(188)] = 4063,
  [SMALL_STATE(189)] = 4073,
  [SMALL_STATE(190)] = 4083,
  [SMALL_STATE(191)] = 4093,
  [SMALL_STATE(192)] = 4103,
  [SMALL_STATE(193)] = 4113,
  [SMALL_STATE(194)] = 4123,
  [SMALL_STATE(195)] = 4133,
  [SMALL_STATE(196)] = 4143,
  [SMALL_STATE(197)] = 4153,
  [SMALL_STATE(198)] = 4163,
  [SMALL_STATE(199)] = 4173,
  [SMALL_STATE(200)] = 4183,
  [SMALL_STATE(201)] = 4193,
  [SMALL_STATE(202)] = 4203,
  [SMALL_STATE(203)] = 4213,
  [SMALL_STATE(204)] = 4223,
  [SMALL_STATE(205)] = 4233,
  [SMALL_STATE(206)] = 4243,
  [SMALL_STATE(207)] = 4253,
  [SMALL_STATE(208)] = 4263,
  [SMALL_STATE(209)] = 4273,
  [SMALL_STATE(210)] = 4283,
  [SMALL_STATE(211)] = 4293,
  [SMALL_STATE(212)] = 4303,
  [SMALL_STATE(213)] = 4313,
  [SMALL_STATE(214)] = 4323,
  [SMALL_STATE(215)] = 4333,
  [SMALL_STATE(216)] = 4343,
  [SMALL_STATE(217)] = 4353,
  [SMALL_STATE(218)] = 4363,
  [SMALL_STATE(219)] = 4373,
  [SMALL_STATE(220)] = 4383,
  [SMALL_STATE(221)] = 4393,
  [SMALL_STATE(222)] = 4403,
  [SMALL_STATE(223)] = 4413,
  [SMALL_STATE(224)] = 4423,
  [SMALL_STATE(225)] = 4433,
  [SMALL_STATE(226)] = 4443,
  [SMALL_STATE(227)] = 4453,
  [SMALL_STATE(228)] = 4463,
  [SMALL_STATE(229)] = 4473,
  [SMALL_STATE(230)] = 4483,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(7),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(140),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(138),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(137),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 2), SHIFT_REPEAT(136),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__misc_section_var, 4, .production_id = 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__misc_section_var, 4, .production_id = 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat6, 1, .production_id = 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 1, .production_id = 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat6, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat6, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(12),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(185),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(182),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(172),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(167),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(166),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(161),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat2, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 1),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(24),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(159),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(150),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(149),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(147),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(123),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 2), SHIFT_REPEAT(144),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_section_var, 4, .production_id = 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_section_var, 4, .production_id = 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat2, 1, .production_id = 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 1, .production_id = 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat4, 1, .production_id = 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 1, .production_id = 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_variable_section, 5, .production_id = 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_variable_section, 5, .production_id = 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_section_var, 4, .production_id = 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_section_var, 4, .production_id = 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_variable_section, 4, .production_id = 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_variable_section, 4, .production_id = 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat4, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat4, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(34),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(200),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(188),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(186),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(183),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(175),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(173),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(146),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(139),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(132),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(129),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(128),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(145),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(133),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(32),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(197),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(194),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(193),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(192),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(187),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__general_section_var, 4, .production_id = 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__general_section_var, 4, .production_id = 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat1, 1, .production_id = 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 1, .production_id = 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat1, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_section, 5, .production_id = 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_section, 5, .production_id = 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layer_identifier, 1),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_layer_identifier, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_section, 6, .production_id = 6),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_section, 6, .production_id = 6),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_section, 4, .production_id = 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_section, 4, .production_id = 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_source, 3, .production_id = 1),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_source, 3, .production_id = 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layer_address, 4, .production_id = 8),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_layer_address, 4, .production_id = 8),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_layerrule, 5, .production_id = 5),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_layerrule, 5, .production_id = 5),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_exec_once, 4, .production_id = 4),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_exec_once, 4, .production_id = 4),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_exec, 4, .production_id = 4),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_exec, 4, .production_id = 4),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_section, 7, .production_id = 6),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_section, 7, .production_id = 6),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat1, 2), SHIFT_REPEAT(66),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 2),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 2), SHIFT_REPEAT(189),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 2), SHIFT_REPEAT(190),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 2), SHIFT_REPEAT(191),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat5, 2), SHIFT_REPEAT(61),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 2),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 2), SHIFT_REPEAT(143),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 2), SHIFT_REPEAT(142),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 2), SHIFT_REPEAT(141),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat5, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 1),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat8, 2), SHIFT_REPEAT(74),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 2),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 2), SHIFT_REPEAT(176),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 2), SHIFT_REPEAT(125),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gestures_section_var, 4, .production_id = 2),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gestures_section_var, 4, .production_id = 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat1, 1, .production_id = 3),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 1, .production_id = 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat1, 1),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat1, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__touchpad_section_var, 4, .production_id = 2),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__touchpad_section_var, 4, .production_id = 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat5, 1, .production_id = 3),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat5, 1, .production_id = 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gradient, 1),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2),
  [443] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(156),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(157),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(158),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug_section_var, 4, .production_id = 2),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__debug_section_var, 4, .production_id = 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat8, 1),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat8, 1, .production_id = 3),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat8, 1, .production_id = 3),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat7, 2), SHIFT_REPEAT(81),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 2),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 2), SHIFT_REPEAT(135),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 2), SHIFT_REPEAT(134),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat7, 1, .production_id = 3),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 1, .production_id = 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat7, 1),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat7, 1),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binds_section_var, 4, .production_id = 2),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binds_section_var, 4, .production_id = 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat2, 2), SHIFT_REPEAT(96),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 2),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 2), SHIFT_REPEAT(195),
  [509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 2), SHIFT_REPEAT(196),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_rgb, 6),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_rgb, 6),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat3, 2), SHIFT_REPEAT(102),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat3, 2),
  [525] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat3, 2), SHIFT_REPEAT(160),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_hex, 5),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_hex, 5),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_rgba, 7),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_rgba, 7),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat2, 1, .production_id = 3),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 1, .production_id = 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_variable_section_repeat2, 1),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_variable_section_repeat2, 1),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__touchdevice_section_var, 4, .production_id = 2),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__touchdevice_section_var, 4, .production_id = 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat3, 1),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat3, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__animation_section_var, 4, .production_id = 2),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__animation_section_var, 4, .production_id = 2),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat3, 1, .production_id = 3),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat3, 1, .production_id = 3),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_reference, 2),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_literal, 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_integer, 1),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gradient, 2),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec2, 2),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layer_rule, 1),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_degree, 2, .production_id = 7),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [818] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
