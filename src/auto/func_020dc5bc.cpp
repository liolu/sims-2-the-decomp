/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"

extern "C" void func_020dc5bc(u8 *arg0, s32 arg1) {
    s32 r3;
    s32 r2;

    r3 = *(s32 *) (arg0 + 0x274);
    if (r3 == 0) {
        return;
    }
    *(s32 *) (arg0 + 0x274) = 0;
    r3                      = arg1 - r3;
    r2                      = *(s32 *) (arg0 + 0x278);
    if ((u32) r3 > (u32) r2) {
        *(s32 *) (arg0 + 0x280) = r2;
        *(s32 *) (arg0 + 0x284) = *(s32 *) (arg0 + 0x27C);
        *(s32 *) (arg0 + 0x278) = r3;
        *(s32 *) (arg0 + 0x27C) = *(s32 *) (arg0 + 0xC);
        return;
    }
    if ((u32) r3 > *(u32 *) (arg0 + 0x280)) {
        *(s32 *) (arg0 + 0x280) = r3;
        *(s32 *) (arg0 + 0x284) = *(s32 *) (arg0 + 0xC);
    }
}
