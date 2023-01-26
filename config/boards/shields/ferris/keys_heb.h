/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

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
#define HEB_TILDE   S(HEB_SCLN)   // ~
#define HEB_EXCL    S(HEB_N1)     // !
#define HEB_AT      S(HEB_N2)     // @
#define HEB_HASH    S(HEB_N3)     // #
#define HEB_DLLR    S(HEB_N4)     // $
#define HEB_PRCNT   S(HEB_N5)     // %
#define HEB_CARET   S(HEB_N6)     // ^
#define HEB_AMPS    S(HEB_N7)     // &
#define HEB_ASTRK   S(HEB_N8)     // *
#define HEB_RPAR    S(HEB_N9)     // )
#define HEB_LPAR    S(HEB_N0)     // (
#define HEB_UNDER   S(HEB_MINUS)  // _
#define HEB_PLUS    S(HEB_EQUAL)  // +
// Row 2
#define HEB_RBRC S(HEB_RBKT) // }
#define HEB_LBRC S(HEB_LBKT) // {
// Row 3
#define HEB_COLON S(HEB_FPE)  // :
#define HEB_DQT   S(HEB_COMMA) // "
#define HEB_PIPE  S(HEB_BSLH) // |
// Row 4
#define HEB_GT    S(HEB_TAV)   // >
#define HEB_LT    S(HEB_FTSDI) // <
#define HEB_QMARK S(HEB_DOT)   // ?

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
#define HEB_EURO ALGR(HEB_N3)    // €
#define HEB_SHKL ALGR(HEB_N4)    // ₪
#define HEB_DEG  ALGR(HEB_N5)    // °
#define HEB_MUL  ALGR(HEB_N8)    // ×
// Row 2
#define HEB_DVAV ALGR(HEB_TET)  // װ
// Row 3
#define HEB_VYOD ALGR(HEB_AYIN) // ױ
#define HEB_DYOD ALGR(HEB_YOD)  // ײ
// Row 4
#define HEB_DIV  ALGR(HEB_DOT)  // ÷