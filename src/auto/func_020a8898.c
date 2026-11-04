/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046384(void *, s32, s32);
s32 func_02046880(s32, s32, s32);

void func_020a8898(u8 *arg0, s32 arg1) {
    s32 i;

    func_02046384(arg0, 0, 0x24);
    if (arg1 != 0) {
        *(u32 *) (arg0 + 0) = (*(u32 *) (arg0 + 0x88) >> 1) | 0x80000000U;
    } else {
        *(u32 *) (arg0 + 0) = *(u32 *) (arg0 + 0x88);
    }
    *(s32 *) (arg0 + 8)    = 0x7FC0;
    arg0[5]                = 2;
    *(s32 *) (arg0 + 0x14) = 0x2000;
    arg0[4]                = 0x40;
    arg0[6]                = 0x40;
    arg0[7]                = 0x20;
    arg0[0x24]             = 2;
    arg0[0x25]             = 0;
    arg0[0x26]             = 0;
    arg0[0x27]             = 0;
    *(s16 *) (arg0 + 0x28) = 0x100;
    arg0[0x2A]             = 0;
    arg0[0x2B]             = 0x3C;
    arg0[0x2C]             = 0x40;
    arg0[0x2D]             = 0x20;
    arg0[0x2E]             = 0;
    arg0[0x2F]             = 0;
    *(s32 *) (arg0 + 0x30) = func_02046880(0x78, 3, 4);
    *(s32 *) (arg0 + 0x34) = func_02046880(0x78, 3, 4);
    for (i = 0; i < 0x78; i++) {
        *(u8 *) (*(u8 **) (arg0 + 0x30) + i) = (u8) i;
        *(u8 *) (*(u8 **) (arg0 + 0x34) + i) = 1;
    }
    for (i = 0; i < 3; i++) {
        ((s32 *) arg0)[i + 14] = 0;
    }
}
