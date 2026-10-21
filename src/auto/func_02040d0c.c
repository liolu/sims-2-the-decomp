#include "m2c.h"

extern s32 data_0213e434;

void func_02040d0c(s32 arg0, void *arg1) {
    M2C_FIELD(((M2C_FIELD(arg1, u8 *, 0) * 0x2C) + data_0213e434), s32 *, 0x21EC) = (s32) M2C_FIELD(arg1, u8 *, 1);
}
