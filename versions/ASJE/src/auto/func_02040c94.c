#include "m2c.h"

extern s32 data_0213e2f4;

void func_02040c94(s32 arg0, void *arg1) {
    M2C_FIELD(((M2C_FIELD(arg1, u8 *, 0) * 0x2C) + data_0213e2f4), s32 *, 0x21EC) = (s32) M2C_FIELD(arg1, u8 *, 1);
}
