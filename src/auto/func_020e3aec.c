/* compiler: 1.2/sp3 */
#include "m2c.h"

extern M2C_UNK data_02128dc0;

void func_020e3aec(s32 arg0, void *arg1, s32 arg2, u32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    u32 temp_r3;
    u8 var_r2;

    temp_r3 = ((arg3 >> 3) * arg5) + (arg2 - 1);
    if (temp_r3 <= 0x80U) {
        var_r2 = *((u8 *) &data_02128dc0 + temp_r3);
    } else if (temp_r3 >= 0x800U) {
        if (temp_r3 >= 0x2000U) {
            if (temp_r3 >= 0x4000U) {
                var_r2 = 0xF;
            } else {
                var_r2 = 0xE;
            }
        } else if (temp_r3 >= 0x1000U) {
            var_r2 = 0xD;
        } else {
            var_r2 = 0xC;
        }
    } else if (temp_r3 >= 0x200U) {
        if (temp_r3 >= 0x400U) {
            var_r2 = 0xB;
        } else {
            var_r2 = 0xA;
        }
    } else if (temp_r3 >= 0x100U) {
        var_r2 = 9;
    } else {
        var_r2 = 8;
    }
    *(s32 *) ((u8 *) arg1 + 0x28) = (s32) var_r2;
    *(s32 *) ((u8 *) arg1 + 0)    = 0;
    *(s32 *) ((u8 *) arg1 + 4)    = 0;
    *(s32 *) ((u8 *) arg1 + 8)    = arg4;
    if (arg6 != 0) {
        *(s32 *) ((u8 *) arg1 + 0xC) = (s32) (1 << (arg4 - 1));
    } else {
        *(s32 *) ((u8 *) arg1 + 0xC) = 0;
    }
    *(s32 *) ((u8 *) arg1 + 0x2C) = arg0;
}
