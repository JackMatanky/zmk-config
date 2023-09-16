/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 * 
 * For more Windows shortcuts: 
 * https://support.microsoft.com/en-us/windows/keyboard-shortcuts-in-windows-dcc61a57-8ff0-cffe-9796-cb9706c75eec
 */

// General Shortcuts
#define CUT         LC(X)       // CTRL + X
#define COPY        LC(C)       // CTRL + C
#define PASTE       LC(V)       // CTRL + V
#define UNDO        LC(Z)       // CTRL + Z
#define REDO        LC(Y)       // CTRL + Y
#define BSPC_W      LC(BSPC)    // CTRL + BACKSPACE  (Full word backspace)
#define CSCRN       LG(LS(S))   // WIN + SHIFT + S   (Screen Shot)
#define SWCH_LANG   LG(SPACE)   // ALT + TAB         (Switch Apps)

// App
#define SWCH_APP    LA(TAB)     // ALT + TAB         (Switch Apps)
#define EXIT_APP    LA(F4)      // ALT + F4          (Close or exit active item or app)

// Window
#define NEW_WIN     LC(N)       // CTRL + N          (New Window: File Explorer, Edge)
#define EXIT_WIN    LC(LS(W))   // CTRL + SHIFT + W  (Close Window: File Explorer, Edge)

// Tab
#define NEW_TAB     LC(T)       // CTRL + T          (New Tab: File Explorer, Edge)
#define OPEN_TAB    LC(LS(T))   // CTRL + SHIFT + T  (Open Tab: Edge)
#define EXIT_TAB    LC(W)       // CTRL + W          (Close Tab: File Explorer, Edge)
#define NEXT_TAB    LC(TAB)     // CTRL + T          (Next Tab: File Explorer, Edge)
#define PREV_TAB    LC(LS(TAB)) // CTRL + SHIFT + T  (Previous Tab: File Explorer, Edge)
#define FWD_TAB     LA(RIGHT)   // ALT + RIGHT ARROW (Forward Tab: File Explorer, Edge)
#define BWD_TAB     LA(LEFT)    // ALT + LEFT ARROW  (Backward Tab: File Explorer, Edge)

#define FILE_EXPL   LG(E)       // WIN + E (Open File Explorer)

// File Shortcuts
#define SAVE        LC(S)       // CTRL + S
#define SAVE_AS     LC(LS(S))   // CTRL + SHIFT + S
#define RENAME      F2          // F2
#define PRINT       LC(P)       // CTRL + P

// Browser Shortcuts
// Search Bar
#define EDIT_URL    LA(D)       // ALT + D or CTRL + L
#define SEARCH      LC(E)       // CTRL + E or CTRL + K