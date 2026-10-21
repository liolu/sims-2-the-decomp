/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02078420(void *);                      /* extern */

void *func_020825b0(void *arg0) {
    void *var_r5;
    void *var_r6;

    var_r6 = arg0;
    do {
        M2C_FIELD(var_r6, s32 *, 0)    = 0x80000000;
        M2C_FIELD(var_r6, s32 *, 0x14) = 0;
        M2C_FIELD(var_r6, s32 *, 0x20) = 0x80000000;
        M2C_FIELD(var_r6, s8 *, 0x1A)  = 0;
        M2C_FIELD(var_r6, s8 *, 0x1B)  = 3;
        M2C_FIELD(var_r6, s8 *, 0x1C)  = 0;
        M2C_FIELD(var_r6, s8 *, 0x1D)  = 0;
        M2C_FIELD(var_r6, s32 *, 0x14) = 0;
        M2C_FIELD(var_r6, s8 *, 0x28)  = 0;
        M2C_FIELD(var_r6, s32 *, 4)    = 0x21;
        M2C_FIELD(var_r6, s32 *, 8)    = 0x21;
        M2C_FIELD(var_r6, s32 *, 0xC)  = -1;
        M2C_FIELD(var_r6, s32 *, 0x10) = 0;
        M2C_FIELD(var_r6, s32 *, 0)    = 0x80000000;
        M2C_FIELD(var_r6, s32 *, 0x24) = 0;
        M2C_FIELD(var_r6, s32 *, 0x14) = (s32) (M2C_FIELD(var_r6, s32 *, 0x14) & ~1);
        var_r6 += 0x2C;
    } while (var_r6 != (arg0 + 0x9CC));
    var_r5 = arg0 + 0xA0C;
    do {
        M2C_FIELD(var_r5, s32 *, 0)    = 0x80000000;
        M2C_FIELD(var_r5, s32 *, 4)    = 0x80000000;
        M2C_FIELD(var_r5, s32 *, 8)    = 0x80000000;
        M2C_FIELD(var_r5, s32 *, 0x20) = 0;
        M2C_FIELD(var_r5, s16 *, 0x24) = 0;
        M2C_FIELD(var_r5, s8 *, 0x26)  = 1;
        M2C_FIELD(var_r5, s8 *, 0x27)  = 0;
        M2C_FIELD(var_r5, s32 *, 0x28) = 0x47;
        M2C_FIELD(var_r5, s32 *, 0xC)  = 0;
        M2C_FIELD(var_r5, s32 *, 0x10) = 0;
        M2C_FIELD(var_r5, s32 *, 0x14) = 0;
        M2C_FIELD(var_r5, s32 *, 0x18) = 0;
        M2C_FIELD(var_r5, s8 *, 0x1D)  = 0;
        M2C_FIELD(var_r5, s8 *, 0x1C)  = 0;
        M2C_FIELD(var_r5, s8 *, 0x1E)  = 0;
        M2C_FIELD(var_r5, s8 *, 0x1F)  = 0;
        M2C_FIELD(var_r5, s8 *, 0x44)  = 0;
        M2C_FIELD(var_r5, s32 *, 0x48) = -1;
        M2C_FIELD(var_r5, s16 *, 0x3C) = 0;
        M2C_FIELD(var_r5, s32 *, 0x2C) = 0;
        M2C_FIELD(var_r5, s16 *, 0x30) = 0;
        M2C_FIELD(var_r5, s16 *, 0x32) = 0;
        M2C_FIELD(var_r5, s8 *, 0x34)  = 0;
        M2C_FIELD(var_r5, s8 *, 0x35)  = 1;
        M2C_FIELD(var_r5, s8 *, 0x36)  = 0;
        M2C_FIELD(var_r5, s32 *, 0x38) = 0;
        var_r5 += 0x4C;
    } while (var_r5 != (arg0 + 0xD04));
    func_02078420(arg0);
    return arg0;
}
