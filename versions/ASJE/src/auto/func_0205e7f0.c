/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0205e7f0(void *arg0) {
    s32 temp_r4;
    u8 var_r5;
    void *var_ip;

    var_ip = arg0 + 8;
    do {
        M2C_FIELD(var_ip, s32 *, 0)    = 0x80000000;
        M2C_FIELD(var_ip, s32 *, 0x18) = 0;
        M2C_FIELD(var_ip, s16 *, 0x1C) = 0;
        M2C_FIELD(var_ip, s8 *, 0x1E)  = 1;
        M2C_FIELD(var_ip, s8 *, 0x1F)  = 0;
        M2C_FIELD(var_ip, s32 *, 0x20) = 0x47;
        M2C_FIELD(var_ip, s32 *, 4)    = 0;
        M2C_FIELD(var_ip, s32 *, 8)    = 0;
        M2C_FIELD(var_ip, s32 *, 0xC)  = 0;
        M2C_FIELD(var_ip, s32 *, 0x10) = 0;
        M2C_FIELD(var_ip, s8 *, 0x15)  = 0;
        M2C_FIELD(var_ip, s8 *, 0x14)  = 0;
        M2C_FIELD(var_ip, s8 *, 0x16)  = 0;
        M2C_FIELD(var_ip, s8 *, 0x17)  = 0;
        var_ip += 0x24;
    } while (var_ip != (arg0 + 0x170));
    M2C_FIELD(arg0, s32 *, 0x170) = 0x80000000;
    M2C_FIELD(arg0, s32 *, 0x188) = 0;
    M2C_FIELD(arg0, s16 *, 0x18C) = 0;
    M2C_FIELD(arg0, s8 *, 0x18E)  = 1;
    M2C_FIELD(arg0, s8 *, 0x18F)  = 0;
    M2C_FIELD(arg0, s32 *, 0x190) = 0x47;
    M2C_FIELD(arg0, s32 *, 0x174) = 0;
    M2C_FIELD(arg0, s32 *, 0x178) = 0;
    M2C_FIELD(arg0, s32 *, 0x17C) = 0;
    M2C_FIELD(arg0, s32 *, 0x180) = 0;
    M2C_FIELD(arg0, s8 *, 0x185)  = 0;
    M2C_FIELD(arg0, s8 *, 0x184)  = 0;
    M2C_FIELD(arg0, s8 *, 0x186)  = 0;
    M2C_FIELD(arg0, s8 *, 0x187)  = 0;
    M2C_FIELD(arg0, s8 *, 0)      = 0;
    M2C_FIELD(arg0, s8 *, 5)      = 1;
    M2C_FIELD(arg0, s8 *, 0x18E)  = 0;
    M2C_FIELD(arg0, s8 *, 4)      = 0;
    M2C_FIELD(arg0, s16 *, 0x18C) = 0;
    M2C_FIELD(arg0, s16 *, 2)     = 0;
    M2C_FIELD(arg0, s32 *, 0x188) = 0;
    M2C_FIELD(arg0, s8 *, 0x195)  = 0;
    M2C_FIELD(arg0, s32 *, 0x174) = 0;
    M2C_FIELD(arg0, s32 *, 0x178) = 0;
    M2C_FIELD(arg0, s32 *, 0x17C) = 0;
    M2C_FIELD(arg0, s32 *, 0x180) = 0;
    M2C_FIELD(arg0, s8 *, 0x184)  = 0;
    M2C_FIELD(arg0, s8 *, 0x185)  = 0;
    M2C_FIELD(arg0, s8 *, 0x186)  = 0;
    M2C_FIELD(arg0, s8 *, 0x187)  = 0;
    var_r5                        = 0;
    do {
        temp_r4                         = (var_r5 * 0x24) + (s32) arg0;
        M2C_FIELD(temp_r4, s32 *, 8)    = 0x80000000;
        M2C_FIELD(temp_r4, s32 *, 0x20) = 0;
        M2C_FIELD(temp_r4, s16 *, 0x24) = 0;
        M2C_FIELD(temp_r4, s8 *, 0x26)  = 0;
        M2C_FIELD(temp_r4, s32 *, 0xC)  = 0;
        M2C_FIELD(temp_r4, s32 *, 0x10) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x14) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x18) = 0;
        M2C_FIELD(temp_r4, s8 *, 0x27)  = 1;
        M2C_FIELD(temp_r4, s8 *, 0x1C)  = 0;
        M2C_FIELD(temp_r4, s8 *, 0x1D)  = 0;
        M2C_FIELD(temp_r4, s8 *, 0x1E)  = 0;
        var_r5 += 1;
        M2C_FIELD(temp_r4, s8 *, 0x1F) = 0;
    } while ((u32) var_r5 < 0xAU);
}
