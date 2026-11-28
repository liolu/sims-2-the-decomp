/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_020117d8(s32, s32, void *, void *);
void func_02018acc(void *);
void func_02019498(void *);
s32 func_0204c9f8(s32);

s32 func_0201ae8c(u8 *arg0, s32 arg1) {
    u8 fr[32];

    if (arg1 == 0) {
        if (arg0[0x3D] != 0) {
            arg0[0x50]             = 0;
            *(s32 *) (arg0 + 0x4C) = func_0204c9f8(0x64) + 0xF;
            func_02019498(fr);
            *(volatile u8 *) (fr + 16) = arg0[0x3C];
            func_020117d8(*(s32 *) (arg0 + 4), 1, fr, arg0);
            func_02018acc(fr);
        }
        return 0;
    }
    return 0;
}
