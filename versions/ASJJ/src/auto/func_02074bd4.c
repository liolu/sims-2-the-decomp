/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 data_0211f634;

void func_02074bd4(void *arg0) {
    s32 var_r2;
    u8 *var_r1;
    s32 var_r3;
    s32 temp_r2;
    volatile s32 fr[8];

    var_r3                        = 0;
    temp_r2                       = data_0211f634 << 0xC;
    fr[0]                         = temp_r2;
    fr[4]                         = temp_r2;
    *(s32 *) ((u8 *) arg0 + 4)    = temp_r2;
    fr[1]                         = temp_r2;
    fr[5]                         = temp_r2;
    *(s32 *) ((u8 *) arg0 + 0)    = temp_r2;
    *(s32 *) ((u8 *) arg0 + 8)    = 0;
    fr[2]                         = 0;
    fr[6]                         = 0;
    *(s32 *) ((u8 *) arg0 + 0xC)  = 0;
    *(s32 *) ((u8 *) arg0 + 0x50) = -1;
    *(s32 *) ((u8 *) arg0 + 0x4C) = 0;
    *(s8 *) ((u8 *) arg0 + 0x74)  = 0;
    *(s8 *) ((u8 *) arg0 + 0x75)  = 0;
    *(s32 *) ((u8 *) arg0 + 0x6C) = -1;
    fr[3]                         = 0x1E0000;
    do {
        temp_r2                     = fr[3];
        fr[7]                       = temp_r2;
        ((s32 *) arg0)[var_r3 + 21] = temp_r2;
        var_r3 += 1;
    } while (var_r3 <= 5);
    var_r1 = (u8 *) arg0 + 0x10;
    var_r2 = 0;
    do {
        *(s32 *) (var_r1 + 8) = 0;
        *(s32 *) (var_r1 + 0) = 0;
        var_r2 += 1;
        *(s32 *) (var_r1 + 4) = 0;
        var_r1 += 0xC;
    } while (var_r2 < 5);
}
