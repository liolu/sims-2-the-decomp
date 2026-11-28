/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_020117d8(s32, s32, void *, void *);
void func_02018ac4(void *);
void func_02019490(void *);
s32 func_0204ca7c(s32);

s32 func_0201ae74(u8 *arg0, s32 arg1) {
    u8 fr[32];

    if (arg1 == 0) {
        if (arg0[0x3D] != 0) {
            arg0[0x50]             = 0;
            *(s32 *) (arg0 + 0x4C) = func_0204ca7c(0x64) + 0xF;
            func_02019490(fr);
            *(volatile u8 *) (fr + 16) = arg0[0x3C];
            func_020117d8(*(s32 *) (arg0 + 4), 1, fr, arg0);
            func_02018ac4(fr);
        }
        return 0;
    }
    return 0;
}
