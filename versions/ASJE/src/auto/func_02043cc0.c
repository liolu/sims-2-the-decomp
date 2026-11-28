/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0203e328();                            /* extern */
M2C_UNK func_020fcea8();                            /* extern */
M2C_UNK func_020fcec0();                         /* extern */
s32 func_020ff61c();         /* extern */
s32 func_020ff688();   /* extern */
s32 func_020ff698();             /* extern */
M2C_UNK func_020ff6a8();                   /* extern */
s32 func_02104020();                                /* extern */
extern s32 data_021396ac;
extern M2C_UNK data_02139b6c;
extern s32 data_027e0004;
extern M2C_UNK data_027e007c;

s32 func_02043cc0(s32 arg0, s32 *arg1) {
    s32 temp_r0;
    s32 temp_r7;
    s32 var_r0_2;
    s32 var_r5;
    s32 var_r4;
    u8 var_r0;

    if (M2C_FIELD(&data_027e007c, u8 *, 0x45) == 1) {
        if (M2C_FIELD(&data_027e007c, s32 *, 0xC) & 1) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 != 0) {
            func_020ff6a8(&data_027e007c);
        }
        M2C_FIELD(&data_027e007c, u8 *, 0x45) = 0U;
    }
    M2C_FIELD(&data_027e007c, u8 *, 0x45) = 1U;
    if (func_020ff61c(&data_027e007c, arg0 * 4, 0) == 0) {
        var_r0_2 = 0;
        goto block_17;
    }
    if (func_020ff688(&data_027e007c, &data_02139b6c, 8) != 8) {
        var_r0_2 = 0;
        goto block_17;
    }
    var_r5                                = M2C_FIELD(&data_02139b6c, s32 *, 0);
    M2C_FIELD(&data_027e007c, u8 *, 0x45) = 0U;
    var_r4                                = M2C_FIELD(&data_02139b6c, s32 *, 4) - var_r5;
    if (var_r5 == -1) {
        temp_r0 = data_027e0004 & 0x40000000;
        if (temp_r0 != 0) {
            func_020fcec0(temp_r0);
            temp_r7 = func_02104020();
            func_020fcea8();
            if (temp_r7 != data_021396ac) {
                func_0203e328();
            loop_15:
                goto loop_15;
            }
        }
    }
    var_r0_2 = 1;
block_17:
    if (var_r0_2 == 0) {
        return 0;
    }
    M2C_FIELD(&data_027e007c, u8 *, 0x45) = 1U;
    if (func_020ff61c(&data_027e007c, var_r5, 0) == 0) {
        return 0;
    }
    temp_r0 = func_020ff698(&data_027e007c, *arg1, var_r4);
    if (temp_r0 == var_r4) {
        return 1;
    }
    return 0;
}
