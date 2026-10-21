/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02050c08(M2C_UNK, s32, s32, u8 *);     /* extern */
s32 func_020518a4(u8 *);                            /* extern */
extern M2C_UNK data_0213dc48;
extern s32 data_027e0000;

void func_02051338(M2C_UNK arg0, s32 arg1, s32 arg2, u8 *arg3, s32 arg4) {
    s32 var_r5;
    s32 var_r6;
    u32 temp_r0;
    u32 temp_r0_2;
    u8 var_r1;
    u8 var_r1_2;

    var_r6 = arg1;
    var_r5 = arg2;
    if (arg4 == 1) {
        temp_r0 = func_020518a4(arg3) + 1;
        var_r6 -= (s32) (temp_r0 + (temp_r0 >> 0x1F)) >> 1;
    } else if (arg4 == 2) {
        var_r6 -= func_020518a4(arg3);
    }
    if (arg4 == 4) {
        var_r1 = 0;
        if (*arg3 != 0) {
            var_r1 = M2C_FIELD(*((M2C_UNK *) ((s8 *) &data_0213dc48 + (data_027e0000 * 0x44))), u8 *, 8);
        }
        temp_r0_2 = var_r1 + 1;
        var_r5 -= (s32) (temp_r0_2 + (temp_r0_2 >> 0x1F)) >> 1;
    } else if (arg4 == 8) {
        var_r1_2 = 0;
        if (*arg3 != 0) {
            var_r1_2 = M2C_FIELD(*((M2C_UNK *) ((s8 *) &data_0213dc48 + (data_027e0000 * 0x44))), u8 *, 8);
        }
        var_r5 -= var_r1_2;
    }
    func_02050c08(arg0, var_r6, var_r5, arg3);
}
