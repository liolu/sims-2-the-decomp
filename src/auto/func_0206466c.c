#include "m2c.h"
void func_0206466c(s32 arg0, s32 arg1, s32 arg2) {
    s32 v;
    s32 sh;
    u8 *p;
    if (arg2 != 0) {
        v = 1;
    } else {
        v = 0;
    }
    sh                          = arg1 & 0x1F;
    p                           = arg0 + ((arg1 >> 5) * 4);
    M2C_FIELD(p, s32 *, 0x4814) = (s32) ((~(1 << sh) & M2C_FIELD(p, s32 *, 0x4814)) | (v << sh));
}
