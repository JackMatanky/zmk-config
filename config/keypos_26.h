/*
Author: urob
Source: https://github.com/urob/zmk-nodefree-config/blob/973f717c6bbde9cf452a4da88ac9a7f80cdd4bef/keypos_def/keypos_34keys.h
                             
* 32 KEY MATRIX / LAYOUT MAPPING
*     
* ╭────────────────────┬────────────────────╮ 
* │  0   1   2   3     │      4   5   6   7 │ 
* │  8   9  10  11     │     12  13  14  15 │
* ╰───╮ 16  17  18     │     19  20  21 ╭───╯
*     ╰───────╮ 22  23 │ 24  25 ╭───────╯
*             ╰────────┴────────╯             
* ╭─────────────────────┬─────────────────────╮
* │ LH4 LH3 LH2 LH1     │     RH1 RH2 RH3 RH4 │
* │ LM4 LM3 LM2 LM1     │     RM1 RM2 RM3 RM4 │
* ╰───╮ LL3 LL2 LL1     │     RL1 RL2 RL3 ╭───╯
*     ╰───────╮ LT1 LT0 │ RT0 RT1 ╭───────╯
*             ╰─────────┴─────────╯             
*/

#pragma once

#define LH1  3  // left-top row
#define LH2  2
#define LH3  1
#define LH4  0

#define RH1  4  // right-top row
#define RH2  5
#define RH3  6
#define RH4  7

#define LM1 11  // left-middle row
#define LM2 10
#define LM3 9
#define LM4 8

#define RM1 12  // right-middle row
#define RM2 13
#define RM3 14
#define RM4 15

#define LL1 18  // left-bottom row
#define LL2 17
#define LL3 16

#define RL1 19  // right-bottom row
#define RL2 20
#define RL3 21

#define LT0 23  // left thumb keys
#define LT1 22

#define RT0 24  // right thumb keys
#define RT1 25