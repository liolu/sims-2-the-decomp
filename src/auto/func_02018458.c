/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0205186c(M2C_UNK);
s32 func_020518a4(M2C_UNK);

void func_02018458(void *arg0, M2C_UNK arg1, s16 arg2, s16 arg3, s32 arg4) {
    volatile s32 tmp[4];
    s16 var_r5;
    s16 var_r6;
    u32 temp_r0;
    u32 temp_r0_2;
    s32 a;
    s32 b;

    var_r6 = arg2;
    var_r5 = arg3;
    if (arg4 & 1) {
        temp_r0 = func_020518a4(arg1) + 1;
        var_r6 -= (s32) (temp_r0 + (temp_r0 >> 0x1F)) >> 1;
    }
    if (arg4 & 2) {
        var_r6 -= func_020518a4(arg1);
    }
    if (arg4 & 4) {
        temp_r0_2 = func_0205186c(arg1) + 1;
        var_r5 -= (s32) (temp_r0_2 + (temp_r0_2 >> 0x1F)) >> 1;
    }
    if (arg4 & 8) {
        var_r5 -= func_0205186c(arg1);
    }
    a                            = (s32) (var_r6 << 0xC);
    tmp[0]                       = a;
    tmp[2]                       = a;
    M2C_FIELD(arg0, s32 *, 0x50) = a;
    b                            = (s32) (var_r5 << 0xC);
    tmp[1]                       = b;
    tmp[3]                       = b;
    M2C_FIELD(arg0, s32 *, 0x54) = b;
}
