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
#define IL_SCLN  GRAVE   // ;
#define IL_N1    N1      // 1
#define IL_N2    N2      // 2
#define IL_N3    N3      // 3
#define IL_N4    N4      // 4
#define IL_N5    N5      // 5
#define IL_N6    N6      // 6
#define IL_N7    N7      // 7
#define IL_N8    N8      // 8
#define IL_N9    N9      // 9
#define IL_N0    N0      // 0
#define IL_MINUS MINUS   // -
#define IL_EQUAL EQUAL   // =
// Row 2
#define IL_FSLH  Q       // /
#define IL_SQT   W       // '
#define IL_QOF   E       // ק
#define IL_RESH  R       // ר
#define IL_ALEF  T       // א
#define IL_TET   Y       // ט
#define IL_VAV   U       // ו
#define IL_FNUN  I       // ן
#define IL_FMEM  O       // ם
#define IL_PE    P       // פ
#define IL_RBKT  LBKT    // ]
#define IL_LBKT  RBKT    // [
// Row 3
#define IL_SHIN  A        // ש
#define IL_DALT  S        // ד
#define IL_GIML  D        // ג
#define IL_KAF   F        // כ
#define IL_AYIN  G        // ע
#define IL_YOD   H        // י
#define IL_HET   J        // ח
#define IL_LAMD  K        // ל
#define IL_FKAF  L        // ך
#define IL_FPE   SEMI     // ף
#define IL_COMMA SQT      // ,
#define IL_BSLH  NUHS     // (backslash)
// Row 4
#define IL_ZAYN  Z       // ז
#define IL_SMKH  X       // ס
#define IL_BET   C       // ב
#define IL_HE    V       // ה
#define IL_NUN   B       // נ
#define IL_MEM   N       // מ
#define IL_TSDI  M       // צ
#define IL_TAV   COMMA   // ת
#define IL_FTSDI DOT     // ץ
#define IL_DOT   FSLH    // .

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
#define IL_TILDE   S(IL_SCLN)   // ~
#define IL_EXCL    S(IL_N1)     // !
#define IL_AT      S(IL_N2)     // @
#define IL_HASH    S(IL_N3)     // #
#define IL_DLLR    S(IL_N4)     // $
#define IL_PRCNT   S(IL_N5)     // %
#define IL_CARET   S(IL_N6)     // ^
#define IL_AMPS    S(IL_N7)     // &
#define IL_ASTRK   S(IL_N8)     // *
#define IL_RPAR    S(IL_N9)     // )
#define IL_LPAR    S(IL_N0)     // (
#define IL_UNDER   S(IL_MINUS)  // _
#define IL_PLUS    S(IL_EQUAL)  // +
// Row 2
#define IL_RBRC S(IL_RBKT) // }
#define IL_LBRC S(IL_LBKT) // {
// Row 3
#define IL_COLON S(IL_FPE)  // :
#define IL_DQT   S(IL_COMMA) // "
#define IL_PIPE  S(IL_BSLH) // |
// Row 4
#define IL_GT    S(IL_TAV)   // >
#define IL_LT    S(IL_FTSDI) // <
#define IL_QMARK S(IL_DOT)   // ?

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
#define IL_EURO ALGR(IL_N3)    // €
#define IL_SHKL ALGR(IL_N4)    // ₪
#define IL_DEG  ALGR(IL_N5)    // °
#define IL_MUL  ALGR(IL_N8)    // ×
// Row 2
#define IL_DVAV ALGR(IL_TET)  // װ
// Row 3
#define IL_VYOD ALGR(IL_AYIN) // ױ
#define IL_DYOD ALGR(IL_YOD)  // ײ
// Row 4
#define IL_DIV  ALGR(IL_DOT)  // ÷