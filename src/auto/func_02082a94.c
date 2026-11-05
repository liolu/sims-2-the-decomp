/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_02082a94(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 i;
    u8 *p;
    p = 0;
    for (i = 0; i < 3; i++) {
        if (arg0[0x78 + i * 4] == arg1) {
            p = arg0 + 0x78 + i * 4;
            break;
        }
    }
    if (p == 0) {
        for (i = 0; i < 3; i++) {
            if (arg0[0x78 + i * 4] == 0x3F) {
                p = arg0 + 0x78 + i * 4;
                break;
            }
        }
    }
    if (p == 0) {
        return;
    }
    if (arg2 == 0) {
        p[0]             = 0x3F;
        *(u16 *) (p + 2) = 0;
        p[1]             = 0;
        return;
    }
    p[0]             = (u8) arg1;
    *(u16 *) (p + 2) = (u16) arg2;
    p[1]             = (u8) arg3;
}
