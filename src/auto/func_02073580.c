#include "m2c.h"
void func_02073580(s32 arg0, s32 arg1, s32 arg2) {
    s32 sh;
    void *p;
    sh                         = arg1 & 0x1F;
    p                          = arg0 + ((arg1 >> 5) * 4);
    M2C_FIELD(p, s32 *, 0x210) = (s32) ((~(1 << sh) & M2C_FIELD(p, s32 *, 0x210)) | (arg2 << sh));
}
