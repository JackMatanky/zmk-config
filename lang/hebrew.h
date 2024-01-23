/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

/*
 * This file includes custom keycodes for the hebrew input language setting.
 * If you only type in english, you can delete this file and it's import.
 * If you wish to replace this file with your preferred language, use
 * the qmk version as reference:
 * https://github.com/qmk/qmk_firmware/tree/master/quantum/keymap_extras
 */

// #pragma once

// #include <dt-bindings/zmk/hid_usage.h>
// #include <dt-bindings/zmk/hid_usage_pages.h>
// #include <dt-bindings/zmk/modifiers.h>
// #include <dt-bindings/zmk/keys.h>

// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ; │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ / │ ' │ פ │ ם │ ן │ ו │ ט │ א │ ר │ ק │ ] │ [ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ ף │ ך │ ל │ ח │ י │ ע │ כ │ ג │ ד │ ש │ , │ \ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │ ץ │ ת │ צ │ מ │ נ │ ה │ ב │ ס │ ז │ . │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define H_SEMI  GRAVE   // ;
#define H_N1    N1      // 1
#define H_N2    N2      // 2
#define H_N3    N3      // 3
#define H_N4    N4      // 4
#define H_N5    N5      // 5
#define H_N6    N6      // 6
#define H_N7    N7      // 7
#define H_N8    N8      // 8
#define H_N9    N9      // 9
#define H_N0    N0      // 0
#define H_MINUS MINUS   // -
#define H_EQUAL EQUAL   // =


// Row 2
#define H_FSLH  Q       // /
#define H_SQT   W       // '
#define H_QOF   E       // ק
#define H_RESH  R       // ר
#define H_ALEF  T       // א
#define H_TET   Y       // ט
#define H_VAV   U       // ו
#define H_FNUN  I       // ן
#define H_FMEM  O       // ם
#define H_PE    P       // פ
#define H_RBKT  LBKT    // ]
#define H_LBKT  RBKT    // [

// Row 3
#define H_SHIN  A        // ש
#define H_DALT  S        // ד
#define H_GIML  D        // ג
#define H_KAF   F        // כ
#define H_AYIN  G        // ע
#define H_YOD   H        // י
#define H_HET   J        // ח
#define H_LAMD  K        // ל
#define H_FKAF  L        // ך
#define H_FPE   SEMI     // ף
#define H_COMMA SQT      // ,
#define H_BSLH  NUHS     // (backslash)

// Row 4
#define H_ZAYN  Z       // ז
#define H_SMKH  X       // ס
#define H_BET   C       // ב
#define H_HE    V       // ה
#define H_NUN   B       // נ
#define H_MEM   N       // מ
#define H_TSDI  M       // צ
#define H_TAV   COMMA   // ת
#define H_FTSDI DOT     // ץ
#define H_DOT   FSLH    // .

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ~ │ ! │ @ │ # │ $ │ % │ ^ │ & │ * │ ) │ ( │ _ │ + │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ } │ { │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ : │ " │ | │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │ > │ < │ ? │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// Row 1
#define H_TILDE   LS(GRAVE)  // ~
#define H_EXCL    LS(N1)     // !
#define H_AT      LS(N2)     // @
#define H_HASH    LS(N3)     // #
#define H_DLLR    LS(N4)     // $
#define H_PRCNT   LS(N5)     // %
#define H_CARET   LS(N6)     // ^
#define H_AMPS    LS(N7)     // &
#define H_ASTRK   LS(N8)     // *
#define H_RPAR    LS(N9)     // )
#define H_LPAR    LS(N0)     // (
#define H_UNDER   LS(MINUS)  // _
#define H_PLUS    LS(EQUAL)  // +

// Row 2
#define H_RBRC    LS(LBKT)   // }
#define H_LBRC    LS(RBKT)   // {

// Row 3
#define H_COLON   LS(SEMI)   // :
#define H_DQT     LS(SQT)    // "
#define H_PIPE    LS(NUHS)   // |

// Row 4
#define H_GT      LS(COMMA)  // >
#define H_LT      LS(DOT)    // <
#define H_QMARK   LS(FSLH)   // ?

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │   │ € │ ₪ │ ° │   │   │ × │   │   │   │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │ װ │   │   │   │   │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │ ײ │ ױ │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │ ÷ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define H_EURO RA(N3)    // €
#define H_SHKL RA(N4)    // ₪
#define H_DEG  RA(N5)    // °
#define H_MUL  RA(N8)    // ×

// Row 2
#define H_DVAV RA(Y)     // װ

// Row 3
#define H_VYOD RA(G)     // ױ
#define H_DYOD RA(H)     // ײ

// Row 4
#define H_DIV  RA(FSLH)  // ÷