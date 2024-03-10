/*
Author: urob
Source: https://github.com/urob/zmk-nodefree-config/blob/973f717c6bbde9cf452a4da88ac9a7f80cdd4bef/keypos_def/keypos_34keys.h

*        34 KEY MATRIX / LAYOUT MAPPING
* ╭────────────────────┬────────────────────╮
* │  0   1   2   3   4 │  5   6   7   8   9 │
* │ 10  11  12  13  14 │ 15  16  17  18  19 │
* │ 20  21  22  23  24 │ 25  26  27  28  29 │
* ╰───────────╮ 30  31 │ 32  33 ╭───────────╯
*             ╰────────┴────────╯            
* ╭─────────────────────┬─────────────────────╮
* │ LH4 LH3 LH2 LH1 LH0 │ RH0 RH1 RH2 RH3 RH4 │
* │ LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 │
* │ LL4 LL3 LL2 LL1 LL0 │ RL0 RL1 RL2 RL3 RL4 │
* ╰───────────╮ LT1 LT0 │ RT0 RT1 ╭───────────╯
*             ╰─────────┴─────────╯             
*/

#pragma once

#define LH0  4  // left-top row
#define LH1  3
#define LH2  2
#define LH3  1
#define LH4  0

#define RH0  5  // right-top row
#define RH1  6
#define RH2  7
#define RH3  8
#define RH4  9

#define LM0 14  // left-middle row
#define LM1 13
#define LM2 12
#define LM3 11
#define LM4 10

#define RM0 15  // right-middle row
#define RM1 16
#define RM2 17
#define RM3 18
#define RM4 19

#define LL0 24  // left-bottom row
#define LL1 23
#define LL2 22
#define LL3 21
#define LL4 20

#define RL0 25  // right-bottom row
#define RL1 26
#define RL2 27
#define RL3 28
#define RL4 29

#define LH0 31  // left thumb keys
#define LH1 30

#define RT0 32  // right thumb keys
#define RT1 33