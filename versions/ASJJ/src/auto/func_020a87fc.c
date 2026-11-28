/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02100e28(u16 *);
M2C_UNK func_02100f00();

s32 func_020a87fc(void *arg0, void *arg1) {
    u16 buf[4];
    u8 temp_r3;
    s32 temp_r0;
    s32 var_r0;

    *(u16 *) ((u8 *) arg1 + 2) = *(u16 *) arg1;
    *(u16 *) arg1              = (u16) ((((*(u16 *) 0x04000130) | (*(u16 *) 0x027fffa8)) ^ 0x2FFF) & 0x2FFF);
    *(s16 *) ((u8 *) arg1 + 4) = (s16) (*(u16 *) arg1 & (*(u16 *) arg1 ^ *(u16 *) ((u8 *) arg1 + 2)));
    *(s16 *) ((u8 *) arg1 + 6) = (s16) (*(u16 *) ((u8 *) arg1 + 2) & (*(u16 *) arg1 ^ *(u16 *) ((u8 *) arg1 + 2)));
    func_02100f00();
    temp_r0 = func_02100e28(buf);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    temp_r3                     = *(u8 *) ((u8 *) arg1 + 0xC);
    *(u8 *) ((u8 *) arg1 + 0xC) = 0;
    if (buf[2] == 1 && buf[3] == 0) {
        *(u16 *) ((u8 *) arg1 + 8)   = buf[0];
        *(u16 *) ((u8 *) arg1 + 0xA) = buf[1];
    }
    if (buf[2] == 1 && (buf[3] == 0 || (temp_r3 & 1))) {
        u8 *q                       = (u8 *) arg1 + 0xC;
        var_r0                      = *(u8 *) ((u8 *) arg1 + 0xC) | 1;
        *(u8 *) ((u8 *) arg1 + 0xC) = var_r0;
        if (!(temp_r3 & 1)) {
            var_r0 = *q | 2;
            *q     = var_r0;
        }
        return var_r0;
    }
    var_r0 = temp_r3 & 1;
    if (var_r0 != 0) {
        var_r0                      = *(u8 *) ((u8 *) arg1 + 0xC) | 4;
        *(u8 *) ((u8 *) arg1 + 0xC) = var_r0;
    }
    return var_r0;
}
