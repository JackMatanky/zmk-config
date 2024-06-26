/*
Author: urob
Source: https://github.com/urob/zmk-nodefree-config/blob/973f717c6bbde9cf452a4da88ac9a7f80cdd4bef/keypos_def/keypos_34keys.h
                             
* 26 KEY MATRIX / LAYOUT MAPPING
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

// left-top row
#define LH1  3
#define LH2  2
#define LH3  1
#define LH4  0

// right-top row
#define RH1  4
#define RH2  5
#define RH3  6
#define RH4  7

// left-middle row
#define LM1 11
#define LM2 10
#define LM3 9
#define LM4 8

// right-middle row
#define RM1 12
#define RM2 13
#define RM3 14
#define RM4 15

// left-bottom row
#define LL1 18
#define LL2 17
#define LL3 16

// right-bottom row
#define RL1 19
#define RL2 20
#define RL3 21

// left thumb keys
#define LT0 23
#define LT1 22

// right thumb keys
#define RT0 24
#define RT1 25