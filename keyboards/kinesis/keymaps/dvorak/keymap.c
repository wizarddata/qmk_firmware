#include QMK_KEYBOARD_H

#define _DVORAK 0 // Base Dvorak layer
#define _NUM 1 // Number Layer
#define _MEDIA 2  // Media layer

#define KC_XXXX KC_NO
#define KC_ KC_TRNS 
#define KC_TMED MO(_MEDIA)
#define KC_TNUM MO(_NUM)
#define KC_ALLU LSFT(LCTL(KC_UP))
#define KC_ALLL LSFT(LCTL(KC_LEFT))
#define KC_ALLR LSFT(LCTL(KC_RIGHT))
#define KC_ALLD LSFT(LCTL(KC_DOWN))
#define KC_COPY LCTL(KC_C)
#define KC_PST LCTL(KC_V)
#define KC_CUT LCTL(KC_X)
#define KC_CALD LCTL(LALT(KC_DEL))
#define KC_WINL LGUI(KC_LEFT)
#define KC_WINR LGUI(KC_RIGHT)
#define KC_WINU LGUI(KC_UP)
#define KC_WIND LGUI(KC_DOWN)
#define KC_LOCK LGUI(KC_L)
#define KC_PDFL LSFT(LCTL(KC_TAB))
#define KC_PDFR LCTL(KC_TAB)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_DVORAK] = LAYOUT(
        // left hand
         ESC,    F1,  F2,   F3,   F4,   F5,   F6,   F7,   F8,
        WINL,    1,    2,    3,    4,    5,
        MINS, QUOT, COMM,  DOT,    P,    Y,
         TAB,    A,    O,    E,    U,    I,
        LCTL, SCLN,    Q,    J,    K,    X,
              WINU,  GRV,  DEL, BSPC,
        // left thumb
                              LSFT, LGUI,
                                    PGUP,
                        LSFT, TMED, PGDN,
        // right hand
          F9,  F10,  F11,  F12, CALD,  INS,  F23,  F24, CAPS,
           6,    7,    8,    9,    0, WINR,
           F,    G,    C,    R,    L,  EQL,
           D,    H,    T,    N,    S, SLSH,
           B,    M,    W,    V,    Z, LALT,
               ENT, LBRC, RBRC, BSLS,
        // right thumb
        VOLD, VOLU,
        END,
        HOME, TNUM,  SPC
    ),

[_NUM] = LAYOUT(
        // left hand
            ,     ,     ,     ,     ,     ,     ,     ,     ,
            ,     ,     ,     ,     ,     ,
            ,     ,     ,     ,     ,     ,
        MINS,    1,    2,    3,    4,    5,
            , EXLM,   AT,  HASH,  DLR, PERC,
                  ,     ,     ,     ,
        // left thumb
                                  ,     ,
                                        ,
                            ,     ,     ,
        // right hand
            ,     ,     ,     ,     ,     ,     ,     ,     ,
            ,     ,     ,     ,     ,     ,
            ,     ,     ,     ,     ,     ,
           6,    7,    8,    9,    0,     ,
        CIRC, AMPR, ASTR, LPRN, RPRN,     ,
                  ,     ,     ,     ,
        // right thumb
            ,     ,
            ,
            ,     ,     
    ),

[_MEDIA] = LAYOUT(
       // left hand
           ,     ,     ,     ,     ,     ,     ,     ,     ,
           ,     ,     ,     ,     ,     ,
           ,  CUT, ALLL, ALLD, ALLU, ALLR,
           ,  PST, LEFT, DOWN, UP,   RGHT,
           , COPY, HOME, PGDN, PGUP, END,
                 ,     , PDFL, PDFR,
        // left thumb
                                               ,     ,
                                                     ,
                                         ,     ,     ,
       // right hand
           ,     ,     ,     ,     ,     ,     ,     ,     ,
           ,     ,     ,     ,     ,     ,
           ,     ,     ,     ,     ,     ,
           ,     ,     ,     ,     ,     ,
           ,     ,     ,     ,     ,     ,
                 ,     ,     ,     ,
       // right thumb
           ,     ,
           ,
           ,     ,    
)
};


const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}
