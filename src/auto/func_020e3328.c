#include "m2c.h"
M2C_UNK lbl_020e33ac(M2C_UNK, s32, s32, void *);

void func_020e3328(s32 arg0, M2C_UNK arg1, void *arg2) {
    s32 var_r4;
    s32 var_r5;
    u8 *var_r6;
    u32 var_r7;

    var_r6 = (u8 *) arg2;
    var_r5 = (s32) arg2 + 0x100;
    var_r4 = (s32) arg2 + 0x140;
    var_r7 = 0;
    do {
        lbl_020e33ac(arg1, var_r4, var_r5, var_r6);
        var_r7 += 1;
        var_r6 += 0x10;
        var_r5 += 4;
        var_r4 += 4;
    } while (var_r7 < 0x10U);
    lbl_020e33ac(arg1, arg0 + 0x24, arg0 + 0x20, (void *) (arg0 + 0x10));
    *(s32 *) ((u8 *) arg2 + 0x180) = 0;
}
