#include QMK_KEYBOARD_H

#define M_OSM_GUI   OSM(MOD_LGUI)
#define M_OSM_CTL   OSM(MOD_LCTL)
#define M_OSM_ALT   OSM(MOD_LALT)

#define M_LT_BSPC   LT(L_NUM, KC_BSPC)
#define M_LT_SPC    LT(L_NUM, KC_SPC)

#define M_ALT_BSPC  LALT(KC_BSPC)

#define M_CTL_RIGHT LCTL(KC_RIGHT)
#define M_CTL_LEFT  LCTL(KC_LEFT)

#define M_ALT_GUI_C LALT(LGUI(KC_C))
#define M_GUI_SPC   LGUI(KC_SPC)

enum layer_names {
  L_COLEMAK,
  L_NUM,
  L_FUNC,
  L_NAVI,
  L_MEDIA,
  L_BLANK
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [L_COLEMAK] = LAYOUT(
        // Row 1, LHS
        KC_Q,
        KC_W,
        KC_F,
        KC_P,
        KC_B,

        // Row 1, RHS
        KC_J,
        KC_L,
        KC_U,
        KC_Y,
        KC_SCLN,

        // Row 2, LHS
        KC_A,
        KC_R,
        KC_S,
        KC_T,
        KC_G,

        // Row 2, RHS
        KC_M,
        KC_N,
        KC_E,
        KC_I,
        KC_O,

        // Row 3, LHS
        KC_Z,
        KC_X,
        KC_C,
        KC_D,
        KC_V,

        // Thumb cluster row 1
        M_CTRL_RIGHT,
        M_ALT_GUI_C,

        // Row 3, RHS
        KC_K,
        KC_H,
        KC_COMM,
        KC_DOT,
        KC_SLSH,

        // Row 4, LHS
        M_OSM_GUI,
        M_OSM_CTRL,
        M_OSM_ALT,
        KC_ESC,
        M_LT_BSPC,

        // Thumb cluster row 2
        M_CTRL_LEFT,
        M_GUI_SPC,

        // Row 4, RHS
        M_LT_SPC,
        KC_ENT,
        M_OSM_ALT,
        M_OSM_CTRL,
        M_OSM_GUI),
    
    [L_NUM] = LAYOUT(
        // Row 1, LHS
        KC_NO,
        KC_NO,
        KC_RBRC,
        KC_LBRC,
        KC_NO,

        // Row 1, RHS
        KC_NO,
        KC_1,
        KC_2,
        KC_3,
        KC_DEL,

        // Row 2, LHS
        KC_NO,
        KC_MINS,
        KC_EQL,
        KC_QUOT,
        KC_NO,

        // Row 2, RHS
        KC_NO,
        KC_4,
        KC_5,
        KC_6,
        KC_0,

        // Row 3, LHS
        KC_NO,
        KC_COMM,
        KC_GRV,
        KC_BSLS,
        KC_NO,

        // Thumb cluster row 1
        M_CTL_RIGHT,
        KC_NO,

        // Row 3, RHS
        KC_NO,
        KC_7,
        KC_8,
        KC_9,
        KC_NO,

        // Row 4, LHS
        M_OSM_GUI,
        M_OSM_CTL,
        M_OSM_ALT,
        KC_ESC,
        M_ALT_BSPC,

        // Thumb cluster row 2
        M_CTL_LEFT,
        KC_NO,

        // Row 4, RHS
        KC_TAB,
        KC_ENT,
        M_OSM_ALT,
        M_OSM_CTL,
        M_OSM_GUI),
    
    [L_FUNC] = LAYOUT(
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                  KC_NO,  KC_F1,  KC_F2,   KC_F3,   KC_F4,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                  KC_NO,  KC_F5,  KC_F6,   KC_F7,   KC_F8,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_F9,  KC_F10,  KC_F11,  KC_F12,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO),

    [L_MEDIA] = LAYOUT(
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO),

    [L_BLANK] = LAYOUT(
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO)
};
