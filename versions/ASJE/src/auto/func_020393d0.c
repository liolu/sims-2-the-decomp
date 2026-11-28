/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02011090(void *o, s32 a, s32 b, s32 c, s32 d);
void func_020f0c80(void *p, s32 v, s32 n);

s32 func_020393d0(u8 *arg0, s32 mode) {
    volatile s32 fr[13];
    s32 r;
    s32 v;
    s32 t;
    s32 changed;
    enum {
        ZERO = 0
    } z;
    s32 a0;
    s32 c;
    s32 b;
    s32 a;
    u8 *r3;
    u8 *o;

    switch (mode) {
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
            r = mode - 0x2a;
            v = 0x135;
            switch (r) {
                case 0:
                    v = 0x27;
                    break;
                case 1:
                    v = 0x28;
                    break;
                case 2:
                    v = 0x29;
                    break;
                case 3:
                    v = 0x2a;
                    break;
            }
            func_02011090(*(void **) (arg0 + 0x5c), v, 1, 1, 0);
            return 0;
        case 0x2e:
            o      = *(u8 **) (arg0 + 4);
            a0     = *(volatile s32 *) (o + 0x90);
            a      = -a0;
            fr[0]  = a;
            fr[3]  = a;
            fr[10] = a;
            b      = *(volatile s32 *) (o + 0x94);
            fr[11] = b;
            c      = *(volatile s32 *) (o + 0x98);
            fr[12] = c;
            if ((t = *(volatile s32 *) (o + 0x90), fr[4] = t, a != t) ||
                (t = *(volatile s32 *) (o + 0x94), fr[5] = t, b != t) ||
                (t = *(volatile s32 *) (o + 0x98), fr[6] = t, c != t)) {
                changed = 1;
            } else {
                changed = 0;
            }
            if (changed != 0) {
                t                            = fr[10];
                fr[7]                        = t;
                *(volatile s32 *) (o + 0x90) = t;
                t                            = fr[11];
                fr[8]                        = t;
                *(volatile s32 *) (o + 0x94) = t;
                t                            = fr[12];
                fr[9]                        = t;
                *(volatile s32 *) (o + 0x98) = t;
                o[0xdc]                      = 1;
            }
            z     = 0;
            fr[1] = z;
            fr[2] = z;
            o     = *(u8 **) (arg0 + 4);
            if (*(volatile s32 *) (o + 0x90) < z) {
                r3 = *(u8 **) (o + 0x1a8);
                func_020f0c80(r3 + *(s32 *) (r3 + *(u16 *) (r3 + 0xe) + 0xc), 0, 0xc0);
            } else {
                r3 = *(u8 **) (o + 0x1a8);
                func_020f0c80(r3 + *(s32 *) (r3 + *(u16 *) (r3 + 0xe) + 0xc), 1, 0xc0);
            }
            return 2;
        case 4:
            func_02011090(*(void **) (arg0 + 4), 0, 1, 1, 0);
            arg0[0x13] = 1;
            return 0;
        default:
            return 0;
    }
}
