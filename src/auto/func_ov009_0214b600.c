/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 v;
} W;
extern u8 data_0213a278[];
extern u32 data_027e20d0;
extern void func_0204891c(void *, W, s32);

s32 func_ov009_0214b600(u8 *arg0, s32 sel) {
    struct {
        s32 a;
        s32 b;
    } fr;
    s32 tmp;
    s64 prod;
    u32 t;
    u8 *p;
    s32 i;
    s32 z;

    switch (sel) {
        case 1:
            *(volatile u16 *) 0x04001040 = z = 0;
            *(volatile u16 *) 0x04001044     = z;
            tmp                              = *(s32 *) (arg0 + 0xc);
            fr.b                             = tmp;
            fr.a = (s32) ((((s64) (s32) ((0x14 - *(u16 *) (arg0 + 0x10)) << 12)) * tmp + 0x800) >> 12);
            func_0204891c(data_0213a278, *(W *) &fr, z);
            *(u16 *) (arg0 + 0x10) -= 1;
            break;
        case 0:
            *(volatile u16 *) 0x04001040 = 0;
            *(volatile u16 *) 0x04001044 = 0;
            *(u16 *) (arg0 + 0x10) -= 1;
            break;
        case 2:
            t                            = *(u16 *) (arg0 + 0x10) << 2;
            *(volatile u16 *) 0x04001040 = 0x55AC;
            *(volatile u16 *) 0x04001044 = (u16) (((t + 0x23) << 8) | (0x7B - t));
            *(u16 *) (arg0 + 0x10) -= 1;
            break;
        case 3:
            *(volatile u16 *) 0x04001040 = 0x55AC;
            *(volatile u16 *) 0x04001044 = 0x237B;
            break;
        case 4:
            t                            = 0x2C - (*(u16 *) (arg0 + 0x10) << 2);
            *(volatile u16 *) 0x04001040 = 0x55AC;
            *(volatile u16 *) 0x04001044 = (u16) (((t + 0x23) << 8) | (0x7B - t));
            *(u16 *) (arg0 + 0x10) -= 1;
            break;
        case 5:
            if (*(u16 *) (arg0 + 0x10) < 0x40) {
                *(volatile u32 *) 0x04001000 &= ~0x2000;
                *(volatile u16 *) 0x0400104a |= 0x10;
            }
            p = *(u8 **) (arg0 + 0x28);
            ((u32 *) p)[1] &= ~1;
            data_027e20d0 = 0;
            p             = *(u8 **) (arg0 + 0x50);
            if ((*(u16 *) (arg0 + 0x10) & 7) != 0) {
                ((u32 *) p)[1] |= 1;
            } else {
                ((u32 *) p)[1] &= ~1;
            }
            p = *(u8 **) (arg0 + 0x54);
            if (p != 0) {
                if ((*(u16 *) (arg0 + 0x10) & 7) != 0) {
                    ((u32 *) p)[1] |= 1;
                } else {
                    ((u32 *) p)[1] &= ~1;
                }
            }
            *(u16 *) (arg0 + 0x10) -= 1;
            if (*(u16 *) (arg0 + 0x10) <= 1) {
                for (i = 0; i < 4; i++) {
                    p = ((u8 **) (arg0 + 0x4C))[i];
                    if (p != 0) {
                        ((u32 *) p)[1] &= ~1;
                    }
                }
            }
            break;
        default:
            break;
    }
    return *(u16 *) (arg0 + 0x10) == 0;
}
