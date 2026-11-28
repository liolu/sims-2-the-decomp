/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02018a98(void *, M2C_UNK);
M2C_UNK func_02018ac8();

void *func_02039844(void *arg0) {
    volatile s32 t[9];
    s32 var_r0;
    s32 v;
    u8 *t2;

    func_02018ac8();
    *(s32 *) ((u8 *) arg0 + 0x10) = 0;
    *(s32 *) ((u8 *) arg0 + 0x14) = 0;
    *(s32 *) ((u8 *) arg0 + 0x18) = 0;
    func_02018a98(arg0, 0x14);
    t[6]                          = 0;
    t[7]                          = 0;
    t[8]                          = 0;
    *(s32 *) ((u8 *) arg0 + 0x10) = 0;
    v                             = t[7];
    t[4]                          = v;
    *(s32 *) ((u8 *) arg0 + 0x14) = v;
    v                             = t[8];
    t[5]                          = v;
    *(s32 *) ((u8 *) arg0 + 0x18) = v;
    t[0]                          = 0xA000;
    t[2]                          = 0xA000;
    *(s32 *) ((u8 *) arg0 + 0x1C) = 0xA000;
    t[1]                          = 0x4CC;
    t[3]                          = 0x4CC;
    *(s32 *) ((u8 *) arg0 + 0x20) = 0x4CC;
    *(s8 *) ((u8 *) arg0 + 0x25)  = 0;
    *(s8 *) ((u8 *) arg0 + 0x26)  = 0;
    *(s8 *) ((u8 *) arg0 + 0x27)  = 0;
    *(s8 *) ((u8 *) arg0 + 0x28)  = 1;
    *(s8 *) ((u8 *) arg0 + 0x29)  = 0;
    *(s8 *) ((u8 *) arg0 + 0x2A)  = -1;
    *(s32 *) ((u8 *) arg0 + 0x2C) = -1;
    *(s32 *) ((u8 *) arg0 + 0x30) = 1;
    *(s8 *) ((u8 *) arg0 + 0x34)  = 6;
    *(s8 *) ((u8 *) arg0 + 0x35)  = -1;
    *(s16 *) ((u8 *) arg0 + 0x36) = 0x14B;
    *(s32 *) ((u8 *) arg0 + 0x44) = 0;
    *(s16 *) ((u8 *) arg0 + 0x38) = 0;
    *(s16 *) ((u8 *) arg0 + 0x3A) = 0;
    *(s16 *) ((u8 *) arg0 + 0x3C) = 0x2A0;
    *(s16 *) ((u8 *) arg0 + 0x3E) = 0x2A0;
    *(s16 *) ((u8 *) arg0 + 0x40) = 0x2A0;
    *(s16 *) ((u8 *) arg0 + 0x4C) = 4;
    *(s16 *) ((u8 *) arg0 + 0x4E) = 5;
    *(s16 *) ((u8 *) arg0 + 0x50) = 0x135;
    *(s16 *) ((u8 *) arg0 + 0x52) = 0x135;
    *(s16 *) ((u8 *) arg0 + 0x54) = 6;
    *(s8 *) ((u8 *) arg0 + 0x56)  = 0;
    *(s8 *) ((u8 *) arg0 + 0x24)  = 0;
    *(s8 *) ((u8 *) arg0 + 0x57)  = 0;
    var_r0                        = 0;
    do {
        ((s16 *) ((u8 *) arg0 + 0x48))[var_r0] = 0x14B;
        var_r0 += 1;
    } while (var_r0 < 2);
    return arg0;
}
