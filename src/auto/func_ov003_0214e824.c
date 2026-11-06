/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
} Vec;
typedef struct {
    u8 b[12];
} T12;

s32 func_ov003_0214a50c(u8 *a, s32 b, u8 *c, s32 d, s32 e, s32 f);
void func_020d59bc(s32 a);
extern u8 data_ov003_02150bc8;
extern u32 *data_0213e434;

s32 func_ov003_0214e824(u8 *arg0, s32 arg1) {
    s32 fr[4];
    T12 buf;
    s32 r4;
    s32 d;
    u32 h16;
    s32 h18;
    u32 h14;
    s32 lim;
    s32 t;
    u8 *obj;
    s32 h16s;

    buf = *(T12 *) &data_ov003_02150bc8;
    r4  = func_ov003_0214a50c(*(u8 **) (arg0 + 4), 6, buf.b, 0x28, 0x38, 0);
    if (arg1 == 1) {
        h14 = *(u16 *) (arg0 + 0x14);
        lim = (u32) * (u16 *) (*(u8 **) (arg0 + 0x10) + h14 * 8 + 4) >> 1;
        h18 = *(u16 *) (arg0 + 0x18);
        r4  = -1;
        if (h18 < lim) {
            h16 = *(u16 *) (arg0 + 0x16);
            if (h18 >= h16) {
                d = h16 - h18;
                if (d < 0) {
                    d = -d;
                }
                if (d <= 2) {
                    r4 = h18 - h16;
                }
            }
        } else {
            h16s = *(u16 *) (arg0 + 0x16);
            d    = h18 - lim;
            if (d >= h16s) {
                t = h16s - d;
                if (t < 0) {
                    t = -t;
                }
                if (t <= 2) {
                    r4 = d - h16s + 3;
                }
            }
        }
        if (r4 == -1) {
            obj = *(u8 **) (*(u8 **) (arg0 + 8) + 0x20);
            *(u32 *) (obj + 4) &= ~1;
        } else {
            obj = *(u8 **) (*(u8 **) (arg0 + 8) + 0x20);
            *(u32 *) (obj + 4) |= 1;
        }
    }
    if (*(u16 *) (*(u8 **) (arg0 + 4) + 0x76) == 1) {
        if (*(u16 *) (arg0 + 0x14) == 5) {
            if (r4 > 3) {
                return -1;
            }
        }
    }
    if (*(volatile u16 *) (arg0 + 0x14) == 2 && r4 > 3) {
        if (r4 < 3) {
            t = r4 + *(u16 *) (arg0 + 0x16);
        } else {
            h14 = *(u16 *) (arg0 + 0x14);
            if (h14 <= 1) {
                lim = (u32) * (u16 *) (*(u8 **) (arg0 + 0x10) + h14 * 8 + 4) >> 1;
            } else {
                lim = (u32) * (u16 *) (*(u8 **) (arg0 + 0x10) + (h14 - 2) * 8 + 0x14) >> 1;
            }
            t = lim + ((r4 - 3) + *(u16 *) (arg0 + 0x16));
        }
        if (t > 8) {
            if ((**(u32 **) &data_0213e434 & 0x40000) == 0) {
                return -1;
            }
        }
    }
    if (r4 != -1) {
        if (arg1 == 0) {
            func_020d59bc(0x161);
        }
        obj = *(u8 **) (*(u8 **) (arg0 + 8) + 0x20);
        *(u32 *) (obj + 4) |= 1;
        ((Vec *) &fr[0])->x                                     = buf.b[r4 * 2] << 12;
        ((Vec *) &fr[2])->x                                     = ((Vec *) &fr[0])->x;
        *(s32 *) (*(u8 **) (*(u8 **) (arg0 + 8) + 0x20) + 0x50) = ((Vec *) &fr[0])->x;
        ((Vec *) &fr[0])->y                                     = buf.b[r4 * 2 + 1] << 12;
        ((Vec *) &fr[2])->y                                     = ((Vec *) &fr[0])->y;
        *(s32 *) (*(u8 **) (*(u8 **) (arg0 + 8) + 0x20) + 0x54) = ((Vec *) &fr[0])->y;
    }
    return r4;
}
