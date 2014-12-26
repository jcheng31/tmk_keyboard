static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Colemak
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  Esc   |   1  |   2  |   3  |   4  |   5  |   6  |           |  +L2 |   7  |   8  |   9  |   0  |   -  |   =    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |   \    |   Q  |   W  |   F  |   P  |   G  |  L1  |           |   [  |   J  |   L  |   U  |   Y  |   ;  |   ]    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | LCtrl  |   A  |   R  |   S  |   T  |   D  |------|           |------|   H  |   N  |   E  |   I  |   O  |   '    |
     * |--------+------+------+------+------+------| ~L3  |           | ~L3  |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   K  |   M  |   ,  |   .  |   /  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LGui |   `  |Pr.Scn| Del  | Caps |                                       | Left | Down |  Up  | Right| RGui |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | LCtrl| LAlt |       | RAlt |RCtrl |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | Home |       | PgUp |      |      |
     *                                 | BkSp | Tab  |------|       |------| Enter| Space|
     *                                 |      |      |  End |       | PgDn |      |      |
     *                                 `--------------------'       `--------------------'
     */
	KEYMAP( // Layer 0: Colemak
		// Left Hand
	    ESC, 1,   2,   3,   4,   5,   6,
	    BSLS,Q,   W,   F,   P,   G,   FN2,
	    LCTL,A,   R,   S,   T,   D,
	    LSFT,Z,   X,   C,   V,   B,   FN0,
	    LGUI,GRV, PSCR,DEL,CAPS,
	                                  LCTL, LALT,
	                                        HOME,
	                             BSPC, TAB, END,
	    // Right Hand
		    FN1,  7,   8,   9,   0,   MINS,   EQL,
		    LBRC, J,   L,   U,   Y,   SCLN,   RBRC,
		          H,   N,   E,   I,   O,	  QUOT,
		    FN0,  K,   M,   COMM,DOT, SLSH,   RSFT,
		               LEFT,DOWN, UP, RGHT,	  RGUI,
	    RALT, RCTL,
	    PGUP,
	    PGDN, ENT, SPC
	),

     /* Layer 1: QWERTY (Gaming)
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  Esc   |   1  |   2  |   3  |   4  |   5  |   6  |           |  +L2 |   7  |   8  |   9  |   0  |   -  |   =    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |   \    |   Q  |   W  |   E  |   R  |   T  |  L0  |           |   [  |   Y  |   U  |   I  |   O  |   P  |   ]    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | LCtrl  |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
     * |--------+------+------+------+------+------| ~L3  |           | ~L3  |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LGui |   `  |Pr.Scn| Del  | BkSp |                                       | Left | Down |  Up  | Right| RGui |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | LCtrl| LAlt |       | RAlt |RCtrl |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | Home |       | PgUp |      |      |
     *                                 |Space | Tab  |------|       |------| Enter| Space|
     *                                 |      |      |  End |       | PgDn |      |      |
     *                                 `--------------------'       `--------------------'
     */
	KEYMAP(
		// Left Hand
	    ESC, 1,   2,   3,   4,   5,   6,
	    BSLS,Q,   W,   E,   R,   T,   FN2,
	    LCTL,A,   S,   D,   F,   G,
	    LSFT,Z,   X,   C,   V,   B,   FN0,
	    LGUI,GRV, PSCR,DEL,BSPC,
	                                  LCTL,LALT,
	                                       HOME,
	                              SPC,TAB, END,
	    // Right Hand
		    FN1,  7,   8,   9,   0,   MINS,   EQL,
		    LBRC, Y,   U,   I,   O,   P,   RBRC,
		          H,   J,   K,   L,   SCLN,	  QUOT,
		    FN0,  N,   M,   COMM,DOT, SLSH,   RSFT,
		               LEFT,DOWN, UP, RGHT,	  RGUI,
	    RALT, RCTL,
	    PGUP,
	    PGDN, ENT, SPC
	),

 /* Layer 2: Numpad
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | Teensy |      |      |      |      |      |      |           |  -L2 |      |Num.Lk|   /  |   *  |   -  |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |  N7  |  N8  |  N9  |   +  |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |------|           |------|      |  N4  |  N5  |  N6  |   +  |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |  N1  |  N2  |  N3  | Enter|        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      | Del  |      |                                       |  N0  |  N0  |   .  | Enter|      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 | BkSp | Tab  |------|       |------| Enter| Space|
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     */
	KEYMAP( // Layer 2: Numpad
		// Left Hand
	    FN3, NO,  NO,  NO,  NO,  NO,  NO,
	     NO, NO,  NO,  NO,  NO,  NO,  NO,
	     NO, NO,  NO,  NO,  NO,  NO,
	     NO, NO,  NO,  NO,  NO,  NO,  NO,
	     NO, NO,  NO,  DEL, NO,
	                                  NO, NO,
	                                      NO,
	                           BSPC, TAB, NO,
	    // Right Hand
		    FN1,  NO,  NLCK, PSLS, PAST, PMNS, NO,
		     NO,  NO,  P7,   P8,   P9,   PPLS, NO,
		          NO,  P4,   P5,   P6,   PPLS, NO,
		     NO,  NO,  P1,   P2,   P3,   PENT, NO,
		               P0,   P0,  PDOT,  PENT, NO,
	    NO, NO,
	    NO,
	    NO, ENT, SPC
	),

     /* Layer 3: Function and Media Keys
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |           |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |------|           |------|      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      | TRNS |           | TRNS |      |      |      |      |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |Prev.T|VolDn |VolUp |Next T|      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------| Mute | Play |
     *                                 |      |      |      |       |      |      | Pause|
     *                                 `--------------------'       `--------------------'
     */
	KEYMAP( // Layer 3: Function and Media Keys
		// Left Hand
	     NO, F1,  F2,  F3,  F4,  F5,  F6,
	     NO, NO,  NO,  NO,  NO,  NO,  NO,
	     NO, NO,  NO,  NO,  NO,  NO,
	     NO, NO,  NO,  NO,  NO,  NO,  TRNS,
	     NO, NO,  NO,  NO, NO,
	                                  NO, NO,
	                                      NO,
	                              NO, NO, NO,
	    // Right Hand
		     F7,  F8,  F9,  F10, F11, F12, NO,
		     NO,  NO,  NO,  NO,  NO,  NO,  NO,
		          NO,  NO,  NO,  NO,  NO,  NO,
		     TRNS,  NO,  NO,  NO,  NO,  NO,  NO,
		             MPRV, VOLD, VOLU, MNXT,  NO,
	    NO, NO,
	    NO,
	    NO, MUTE, MPLY
	),
};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
};

static const uint16_t PROGMEM fn_actions[] = {
	ACTION_LAYER_MOMENTARY(3), // Hold for Function Layer
	ACTION_LAYER_INVERT(2, ON_PRESS), // Push to enable/disable Numpad Layer
	ACTION_LAYER_INVERT(1, ON_PRESS), // Push to enable/disable QWERTY Layer
	ACTION_FUNCTION(TEENSY_KEY) // Teensy
};


void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
    print("action_function called\n");
    print("id  = "); phex(id); print("\n");
    print("opt = "); phex(opt); print("\n");
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }
}