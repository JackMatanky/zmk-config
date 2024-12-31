/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 *
 * For more Windows shortcuts:
 * https://support.microsoft.com/en-us/windows/keyboard-shortcuts-in-windows-dcc61a57-8ff0-cffe-9796-cb9706c75eec
 */

// General Shortcuts
#define KB_CUT      LG(X)       // GUI + X
#define KB_COPY     LG(C)       // GUI + C
#define KB_PASTE    LG(V)       // GUI + V
#define KB_PASTE_V  LG(LS(V))   // GUI + SHIFT + V
#define KB_UNDO     LG(Z)       // GUI + Z
#define KB_REDO     LG(LS(Z))   // SHIFT + GUI + Z
#define BSPC_W      LC(LA(H))   // CTRL + ALT + H (Full word backspace)
#define DEL_W       LC(LA(D))   // CTRL + ALT + D (Full word delete)
#define CSCRN       LG(LS(N4))  // GUI + SHIFT + 4 (Screen Shot)
#define SWCH_LANG   LG(SPACE)   // GUI + TAB (Switch Language)

// App
#define SWCH_APP    LC(TAB)     // GUI + TAB         (Switch Apps)
#define EXIT_APP    LA(F4)      // ALT + F4          (Close or exit active item or app)

// Window
#define NEW_WIN     LG(N)       // CTRL + N          (New Window: File Explorer, Edge)
#define EXIT_WIN    LG(LS(W))   // CTRL + SHIFT + W  (Close Window: File Explorer, Edge)

// Tab
#define NEW_TAB     LG(T)       // CTRL + T          (New Tab: File Explorer, Edge)
#define OPEN_TAB    LG(LS(T))   // CTRL + SHIFT + T  (Open Tab: Edge)
#define EXIT_TAB    LG(W)       // CTRL + W          (Close Tab: File Explorer, Edge)
#define NEXT_TAB    LG(TAB)     // CTRL + T          (Next Tab: File Explorer, Edge)
#define PREV_TAB    LG(LS(TAB)) // CTRL + SHIFT + T  (Previous Tab: File Explorer, Edge)
#define FWD_TAB     LA(RIGHT)   // ALT + RIGHT ARROW (Forward Tab: File Explorer, Edge)
#define BWD_TAB     LA(LEFT)    // ALT + LEFT ARROW  (Backward Tab: File Explorer, Edge)

#define FILE_EXPL   LG(E)       // WIN + E (Open File Explorer)

// File Shortcuts
#define SAVE        LG(S)       // CTRL + S
#define SAVE_AS     LG(LS(S))   // CTRL + SHIFT + S
#define RENAME      F2          // F2
#define PRINT       LG(P)       // CTRL + P

// Browser Shortcuts
// Search Bar
#define EDIT_URL    LA(D)       // ALT + D or CTRL + L
#define SEARCH      LC(E)       // CTRL + E or CTRL + K
