#include "m2c.h"

extern void *data_0213e2f4;

void func_02075ab4(void *arg0) {
    M2C_FIELD(arg0, s16 *, 8)   = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0)   = (s32) M2C_FIELD(data_0213e2f4, s32 *, 0x480C);
}
