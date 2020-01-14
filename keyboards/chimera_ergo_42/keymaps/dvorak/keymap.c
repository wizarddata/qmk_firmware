// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include "chimera_ergo_42.h"
#include "keymap_steno.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum chimera_ergo_42_layers
{
	_DVORAK,
	_NUM,
	_SYMBOLS,
	_STN,
};


#define KC_INCL M(0)
#define KC_PULL M(1)
#define KC_PUSH M(2)
#define KC_SCAP M(3)
#define KC_SCOF M(4)
#define KC_LGHT M(5)
#define KC_ONUM MO(_NUM)
#define KC_OSYM MO(_SYMBOLS)
#define KC_ALLU LSFT(LCTL(KC_UP))
#define KC_ALLL LSFT(LCTL(KC_LEFT))
#define KC_ALLR LSFT(LCTL(KC_RIGHT))
#define KC_ALLD LSFT(LCTL(KC_DOWN))
#define KC_COPY LCTL(KC_C)
#define KC_PST  LCTL(KC_V)
#define KC_CUT  LCTL(KC_X)
#define KC_CALD LCTL(LALT(KC_DEL))
#define KC_WINL LGUI(KC_LEFT)
#define KC_WINR LGUI(KC_RIGHT)
#define KC_WINU LGUI(KC_UP)
#define KC_DVOR DF(_DVORAK)
#define KC_STN TG(_STN)
#define STN_STN TG(_STN)
#define KC_WVDL LCTL(LGUI(KC_LEFT))
#define KC_WVDR LCTL(LGUI(KC_RIGHT))

#define LONGPRESS_DELAY 5000
#define LAYER_TOGGLE_DELAY 5000

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define KC_ KC_TRNS 
#define STN_ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_DVORAK] = KC_KEYMAP(
  //,----+----+----+----+----+----.     ,----+----+----+----+----+----.
     DEL ,QUOT,COMM, DOT, P  , Y  ,       F  , G  , C  , R  , L  ,EQL ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
     TAB , A  , O  , E  , U  , I  ,       D  , H  , T  , N  , S  ,SLSH,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
     LCTL,SCLN, Q  , J  , K  , X  ,       B  , M  , W  , V  , Z  ,MINS,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
                    BSPC,ONUM,LSFT,      SPC ,OSYM,ENT
  // \------------------+----+----/      \---+----+----+--------------/
  ),

  [_NUM] = KC_KEYMAP(
  //,----+----+----+----+----+----.     ,----+----+----+----+----+----.
     ESC ,CUT ,ALLL,ALLD,ALLU,ALLR,       F1 , F2 , F3 , F4 , F5 , F6 ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
     VOLU,PST ,LEFT,DOWN, UP ,RGHT,       F7 , F8 , F9 ,F10 ,F11 ,F12 ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
     VOLD,COPY,HOME,PGDN,PGUP,END ,      F13 ,F14 ,F15 ,F16 ,F17 ,F18 ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
                        ,    ,    ,      CALD,    ,    
  // \------------------+----+----/      \---+----+----+--------------/
  ),

  [_SYMBOLS] = KC_KEYMAP(
  //,----+----+----+----+----+----.     ,----+----+----+----+----+----.
     WINU,WINL,WINR,WVDL,WVDR,CAPS,      LGUI,LALT,LBRC,RBRC,BSLS,GRV ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
     MINS, 1  , 2  , 3  , 4  , 5  ,       6  , 7  , 8  , 9  , 0  ,SLSH,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
     STN ,EXLM,  AT,HASH, DLR,PERC,      CIRC,AMPR,ASTR,LPRN,RPRN,TILD,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
                        ,    ,    ,          ,INS ,
  // \------------------+----+----/      \---+----+----+--------------/
  ),

  [_STN] = STN_KEYMAP(  
  //,----+----+----+----+----+----.     ,----+----+----+----+----+----.
      N1 , N2 , N3 , N4 , N5 , N6 ,       N7 , N8 , N9 , NA , NB , NC ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
      FN , S1 , TL , PL , HL ,ST1 ,      ST3 , FR , PR , LR , TR , DR ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
     STN , S2 , KL , WL , RL ,ST2 ,      ST4 , RR , BR , GR , SR , ZR ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
                    RE1 , A  , O  ,       E  , U  ,RE2                 
  //\-------------------+----+----/     \----+----+----+----+----+----/
  ),


};


const uint16_t PROGMEM fn_actions[] = {

};
/*
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  switch(id) {
    // include some kind of library or header
    case 0:
      if (record->event.pressed) {
        SEND_STRING("#include <>");
        return MACRO( T(LEFT), END);
      }
      break;
    case 1:
      if (record->event.pressed) {
        SEND_STRING("git pull");
        return MACRO( T(ENT), END );
      }
      break;
    case 2:
      if (record->event.pressed){
        SEND_STRING("git push");
        return MACRO( T(ENT), END );
      }
      break;
    case 3:
      if (record->event.pressed){
        layer_on(_CAPS);
        register_code(KC_CAPSLOCK);
        unregister_code(KC_CAPSLOCK);
      }
      break;
    case 4:
      if (record->event.pressed){
        layer_off(_CAPS);
        register_code(KC_CAPSLOCK);
        unregister_code(KC_CAPSLOCK);
      }
      break;
    case 5:
      if (record->event.pressed){
        set_led_green;
      }
      break;
  }
  return MACRO_NONE;
};
*/ 


void matrix_scan_user(void) {
    uint8_t layer = biton32(layer_state);
    
    switch (layer) {
    	case _DVORAK:
    	    set_led_green;
    	    break;
  /*    case _QWERTY:
  	    set_led_white;
	    break; */
        case _NUM:
            set_led_blue;
            break;
        case _SYMBOLS:
            set_led_red;
            break;
        case _STN:
	    set_led_magenta;
	    break;
 /*       case _GW :
	    set_led_cyan;
	    break;*/
       default:
            set_led_green;
            break;
    }
};
