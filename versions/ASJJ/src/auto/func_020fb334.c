#include "m2c.h"

extern u16 data_02145e10;

void func_020fb334(s32 arg0) {
    data_02145e10 |= 1 << arg0;
}
