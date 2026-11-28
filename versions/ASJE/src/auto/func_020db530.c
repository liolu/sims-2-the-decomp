/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"

void func_020fad58(s32, u32);
void func_02107fcc(s32, s32, u32);
void func_02108030(s32, s32, u32);

void func_020db530(u8 *arg0) {
    s32 r6;
    u32 r5;
    u32 r4;
    u32 t1;
    s32 old;

    r5 = *(u32 *) (arg0 + 0x9C);
    r6 = *(s32 *) (arg0 + 0x94);
    if (*(s32 *) (arg0 + 0xA4) == 0) {
        volatile u8 *p;
        s32 t;
        old                          = *(s32 *) (arg0 + 0xA0);
        p                            = arg0 + 0x7C;
        t                            = *(volatile s32 *) (p + 0x24);
        r5                           = r5 >> 2;
        *(volatile s32 *) (p + 0x24) = t + 1;
        r6 += r5 * old;
        if (*(s32 *) (arg0 + 0xA0) >= 4) {
            *(s32 *) (arg0 + 0xA0) = 0;
        }
    }
    if (*(s32 *) (arg0 + 0x64) == 0 || *(s32 *) (arg0 + 0x84) == 1) {
    zero:
        func_02107fcc(r6, 0, r5);
        func_020fad58(r6, r5);
        return;
    }
    do {
        if (*(s32 *) (arg0 + 0x38) == *(s32 *) (arg0 + 0x30)) {
            *(s32 *) (arg0 + 0x38) = *(s32 *) (arg0 + 0x2C);
        }
        t1 = *(u32 *) (arg0 + 0x38);
        r4 = *(u32 *) (arg0 + 0x30) - t1;
        if (r4 > r5) {
            r4 = r5;
        }
        if (r4 > *(u32 *) (arg0 + 0x40)) {
            if (*(u32 *) (arg0 + 0x40) == 0) {
                *(s32 *) (arg0 + 0x5C) = 1;
                goto zero;
            }
            r4 = *(u32 *) (arg0 + 0x40);
        }
        func_02108030(r6, t1, r4);
        *(u32 *) (arg0 + 0x40) = *(u32 *) (arg0 + 0x40) - r4;
        *(s32 *) (arg0 + 0x38) = *(s32 *) (arg0 + 0x38) + r4;
        func_020fad58(r6, r4);
        r6 += r4;
        r5 -= r4;
    } while (r5 != 0);
    *(s32 *) (arg0 + 0xA4) = 0;
}
