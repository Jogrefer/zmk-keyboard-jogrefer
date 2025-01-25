/*
        ╭──────────────────────────────────────────╮   ╭──────────────────────────────────────────╮
        │  LTT6  LTT5  LTT4  LTT3  LTT2  LTT1      │   │      RTT1  RTT2  RTT3  RTT4  RTT5  RTT6  │
        │  0     1     2     3     4     5         │   │      6     7     8     9     10    11    │
        │  LT6   LT5   LT4   LT3   LT2   LT1       ╰─┬─╯      RT1   RT2   RT3   RT4   RT5   RT6   │
        │  12    13    14    15    16    17          │        18    19    20    21    22    23    │
        │  LM6   LM5   LM4   LM3   LM2   LM1   LM0   │  RM0   RM1   RM2   RM3   RM4   RM5   RM6   │
        │  24    25    26    27    28    29    30    │  31    32    33    34    35    36    37    │
        │  LB6   LB5   LB4   LB3   LB2   LB1   LB0   │  RB0   RB1   RB2   RB3   RB4   RB5   RB6   │
        │  38    39    40    41    42    43    44    │  45    46    47    48    49    50    51    │
        │  LBB6  LBB5  LBB4  LBB3  LBB2  LBB1  LBB0  │  RBB0  RBB1  RBB2  RBB3  RBB4  RBB5  RBB6  │
        │  52    53    54    55    56    57    58    │  59    60    61    62    63    64    65    │
        ╰────────────────────────────────────────────┴────────────────────────────────────────────╯
*/

#pragma once

#define LTT6  0   // Left Top Top
#define LTT5  1
#define LTT4  2
#define LTT3  3
#define LTT2  4
#define LTT1  5

#define RTT1  6   // Right Top Top
#define RTT2  7
#define RTT3  8
#define RTT4  9
#define RTT5  10
#define RTT6  11

#define LT6  12   // Left Top
#define LT5  13
#define LT4  14
#define LT3  15
#define LT2  16
#define LT1  17

#define RT1  18   // Right Top
#define RT2  19
#define RT3  20
#define RT4  21
#define RT5  22
#define RT6  23

#define LM6  24   // Left Middle
#define LM5  25
#define LM4  26
#define LM3  27
#define LM2  28
#define LM1  29
#define LM0  30

#define RM0  31   // Right Middle
#define RM1  32
#define RM2  33
#define RM3  34
#define RM4  35
#define RM5  36
#define RM6  37

#define LB6  38   // Left Bottom
#define LB5  39
#define LB4  40
#define LB3  41
#define LB2  42
#define LB1  43
#define LB0  44

#define RB0  45   // Right Bottom
#define RB1  46
#define RB2  47
#define RB3  48
#define RB4  49
#define RB5  50
#define RB6  51

#define LBB6  52   // Left Bottom Bottom
#define LBB5  53
#define LBB4  54
#define LBB3  55
#define LBB2  56
#define LBB1  57
#define LBB0  58

#define RBB0  59   // Right Bottom Bottom
#define RBB1  60
#define RBB2  61
#define RBB3  62
#define RBB4  63
#define RBB5  64
#define RBB6  65

#define KEYS_L  LTT6 LTT5 LTT4 LTT3 LTT2 LTT1 LT6 LT5 LT4 LT3 LT2 LT1 LM6 LM5 LM4 LM3 LM2 LM1 LM0 LB6 LB5 LB4 LB3 LB2 LB1 LB0   // Left
#define KEYS_R  RTT1 RTT2 RTT3 RTT4 RTT5 RTT6 RT1 RT2 RT3 RT4 RT5 RT6 RM0 RM1 RM2 RM3 RM4 RM5 RM6 RB0 RB1 RB2 RB3 RB4 RB5 RB6   // Right
#define THUMBS  LBB6 LBB5 LBB4 LBB3 LBB2 LBB1 LBB0 RBB0 RBB1 RBB2 RBB3 RBB4 RBB5 RBB6                                           // Thumbs

#define LAYER_JOGREFER( \
  k00, k01, k02, k03, k04, k05,           k06, k07, k08, k09, k10, k11, \
  k12, k13, k14, k15, k16, k17,           k18, k19, k20, k21, k22, k23, \
  k24, k25, k26, k27, k28, k29, k30, k31, k32, k33, k34, k35, k36, k37, \
  k38, k39, k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k50, k51  \
  k52, k53, k54, k55, k56, k57, k58, k59, k60, k61, k62, k63, k64, k65  \
)