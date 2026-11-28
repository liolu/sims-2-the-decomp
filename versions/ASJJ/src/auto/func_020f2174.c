/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_02142d30;
extern u8 data_0212ae3c[];
extern u8 data_0212ae3d[];
extern u8 data_0212ae3e[];
extern u8 data_0212ae3f[];
void func_020fc88c(u8 *);

void func_020f2174(u8 *arg0) {
    u8 *q;
    u8 *t;
    u8 *rr;
    u32 o;
    u32 m;
    s32 x;
    s32 y;
    s32 r5;
    u8 *r4p;
    u8 *r1p;
    u32 f;
    s32 z;

    q   = data_02142d30;
    t   = *(u8 **) (q + 0xD4);
    rr  = *(u8 **) q;
    o   = *(u16 *) (t + 6);
    m   = *(u16 *) (t + o);
    r4p = t + *(s32 *) (t + o + m * rr[1] + 4);
    f   = *(u16 *) r4p;
    r1p = r4p + 4;
    if ((f & 1) == 0) {
        r1p = r1p + 0xC;
    }
    if ((f & 2) == 0) {
        if ((f & 8) != 0) {
            r5 = (s32) (f & 0xF0) >> 4;
            x  = *(s16 *) r1p;
            y  = *(s16 *) (r1p + 2);
            func_020fc88c(arg0 + 0x28);
            z                                                  = (*(u16 *) r4p & 0x100) ? -0x1000 : 0x1000;
            *(s32 *) (arg0 + 0x28 + r5 * 4)                    = z;
            *(s32 *) (arg0 + 0x28 + data_0212ae3c[r5 * 4] * 4) = x;
            *(s32 *) (arg0 + 0x28 + data_0212ae3d[r5 * 4] * 4) = y;
            if (*(u16 *) r4p & 0x200) {
                y = -y;
            }
            *(s32 *) (arg0 + 0x28 + data_0212ae3e[r5 * 4] * 4) = y;
            if (*(u16 *) r4p & 0x400) {
                x = -x;
            }
            *(s32 *) (arg0 + 0x28 + data_0212ae3f[r5 * 4] * 4) = x;
        } else {
            *(s32 *) (arg0 + 0x28) = *(s16 *) (r4p + 2);
            *(s32 *) (arg0 + 0x2C) = *(s16 *) (r1p + 0);
            *(s32 *) (arg0 + 0x30) = *(s16 *) (r1p + 2);
            *(s32 *) (arg0 + 0x34) = *(s16 *) (r1p + 4);
            *(s32 *) (arg0 + 0x38) = *(s16 *) (r1p + 6);
            *(s32 *) (arg0 + 0x3C) = *(s16 *) (r1p + 8);
            *(s32 *) (arg0 + 0x40) = *(s16 *) (r1p + 10);
            *(s32 *) (arg0 + 0x44) = *(s16 *) (r1p + 12);
            *(s32 *) (arg0 + 0x48) = *(s16 *) (r1p + 14);
        }
    } else {
        *(u32 *) arg0 = *(u32 *) arg0 | 2;
    }
}
