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
#define HEB_SCLN  GRAVE   // ;
#define HEB_N1    N1      // 1
#define HEB_N2    N2      // 2
#define HEB_N3    N3      // 3
#define HEB_N4    N4      // 4
#define HEB_N5    N5      // 5
#define HEB_N6    N6      // 6
#define HEB_N7    N7      // 7
#define HEB_N8    N8      // 8
#define HEB_N9    N9      // 9
#define HEB_N0    N0      // 0
#define HEB_MINUS MINUS   // -
#define HEB_EQUAL EQUAL   // =


// Row 2
#define HEB_FSLH  Q       // /
#define HEB_SQT   W       // '
#define HEB_QOF   E       // ק
#define HEB_RESH  R       // ר
#define HEB_ALEF  T       // א
#define HEB_TET   Y       // ט
#define HEB_VAV   U       // ו
#define HEB_FNUN  I       // ן
#define HEB_FMEM  O       // ם
#define HEB_PE    P       // פ
#define HEB_RBKT  LBKT    // ]
#define HEB_LBKT  RBKT    // [

// Row 3
#define HEB_SHIN  A        // ש
#define HEB_DALT  S        // ד
#define HEB_GIML  D        // ג
#define HEB_KAF   F        // כ
#define HEB_AYIN  G        // ע
#define HEB_YOD   H        // י
#define HEB_HET   J        // ח
#define HEB_LAMD  K        // ל
#define HEB_FKAF  L        // ך
#define HEB_FPE   SEMI     // ף
#define HEB_COMMA SQT      // ,
#define HEB_BSLH  NUHS     // (backslash)

// Row 4
#define HEB_ZAYN  Z       // ז
#define HEB_SMKH  X       // ס
#define HEB_BET   C       // ב
#define HEB_HE    V       // ה
#define HEB_NUN   B       // נ
#define HEB_MEM   N       // מ
#define HEB_TSDI  M       // צ
#define HEB_TAV   COMMA   // ת
#define HEB_FTSDI DOT     // ץ
#define HEB_DOT   FSLH    // .

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
#define HEB_TILDE   LS(GRAVE)  // ~
#define HEB_EXCL    LS(N1)     // !
#define HEB_AT      LS(N2)     // @
#define HEB_HASH    LS(N3)     // #
#define HEB_DLLR    LS(N4)     // $
#define HEB_PRCNT   LS(N5)     // %
#define HEB_CARET   LS(N6)     // ^
#define HEB_AMPS    LS(N7)     // &
#define HEB_ASTRK   LS(N8)     // *
#define HEB_RPAR    LS(N9)     // )
#define HEB_LPAR    LS(N0)     // (
#define HEB_UNDER   LS(MINUS)  // _
#define HEB_PLUS    LS(EQUAL)  // +

// Row 2
#define HEB_RBRC    LS(LBKT)   // }
#define HEB_LBRC    LS(RBKT)   // {

// Row 3
#define HEB_COLON   LS(SEMI)   // :
#define HEB_DQT     LS(SQT)    // "
#define HEB_PIPE    LS(NUHS)   // |

// Row 4
#define HEB_GT      LS(COMMA)  // >
#define HEB_LT      LS(DOT)    // <
#define HEB_QMARK   LS(FSLH)   // ?

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
#define HEB_EURO RA(N3)    // €
#define HEB_SHKL RA(N4)    // ₪
#define HEB_DEG  RA(N5)    // °
#define HEB_MUL  RA(N8)    // ×

// Row 2
#define HEB_DVAV RA(Y)     // װ

// Row 3
#define HEB_VYOD RA(G)     // ױ
#define HEB_DYOD RA(H)     // ײ

// Row 4
#define HEB_DIV  RA(FSLH)  // ÷