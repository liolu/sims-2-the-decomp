/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"

s32 func_020da994();
M2C_UNK func_020ddf34(void *);

void func_020dde08(u8 *arg0, s32 arg1) {
    s32 *t;
    s32 a, b, c;
    s32 r;
    s32 i;
    s32 j;

    *(s32 *) (arg0 + 0x2F8) = 0;
    i                       = arg1;
    if (i != 0) {
        i -= 1;
    }
    if (*(s32 *) (arg0 + 0x2E8) != 0) {
        func_020ddf34(arg0);
    }
    *(s32 *) (arg0 + 0x10) = *(s32 *) (arg0 + 0xC);
    if (i == 0) {
        r = func_020da994();
        if (*(s32 *) (arg0 + 0x2D8) == 0) {
            *(s32 *) (arg0 + 0x2D8) = r;
        }
        if ((u32) (r - *(s32 *) (arg0 + 0x2D8)) > 0x493E0U) {
            *(s32 *) (arg0 + 0x2D8) = r;
            *(s32 *) (arg0 + 0x2DC) = 1;
        }
    }
    a = *(s32 *) (arg0 + 0xE8);
    if (a != 0) {
        t                      = *(s32 **) (arg0 + 0xEC);
        b                      = t[i] & ~1;
        c                      = *t & ~1;
        *(s32 *) (arg0 + 0xE4) = a + (b - c);
    } else {
        t = *(s32 **) (arg0 + 0xEC);
        j = i + 1;
        b = t[i] & ~1;
        c = t[j] & ~1;
        (*(void (**)(u8 *, s32, s32, s32, s32))(arg0 + 0xF4))(arg0 + 0xF0, i, b, *(s32 *) (arg0 + 0xE4), c - b);
    }
    if (*(s32 *) (arg0 + 0x2E8) != 0) {
        func_020ddf34(arg0);
    }
    *(s32 *) (arg0 + 0xC) = i + 1;
}
