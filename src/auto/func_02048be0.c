/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern volatile s32 data_04000000;
extern s32 func_020dc404(u8 *a);
extern void func_020dc8d4(u8 *a);
extern s32 func_020dc854(u8 *a);
extern void func_020dc6e8(u8 *a);
extern void func_02048a1c(u8 *a);
extern void func_020dd15c(u8 *a, u8 *b, s32 c, s32 d, s32 e, s32 f, s32 g);
extern void func_0204625c(s32 a, u8 *b, u8 *c, s32 d, s32 e);

u8 func_02048be0(u8 *arg0, s32 arg1) {
    u8 *ipp;
    s32 i;
    s32 idx;
    u8 *base2;
    u8 *q;
    s32 t0;
    s32 t1;
    s32 t2;

    if (func_020dc404(*(u8 **) (arg0 + 0x10)) == 0 || arg1 == 1) {
        func_020dc8d4(*(u8 **) (arg0 + 0x10));
        if (arg0[3] != 0) {
            func_02048a1c(arg0);
        }
        if (func_020dc854(*(u8 **) (arg0 + 0x10)) == 0 || arg0[5] == 0) {
            t0 = *(s32 *) (arg0 + 0x34) >> 12;
            t1 = *(s32 *) (arg0 + 0x38) >> 12;
            t2 = *(s32 *) (arg0 + 0x8) | 0x80009;
            func_020dd15c(*(u8 **) (arg0 + 0x10), *(u8 **) (arg0 + 0x18), 0x200, 0xc0, t0, t1, t2);
            if (arg0[1] != 0) {
                base2 = *(u8 **) (*(u8 **) (arg0 + 0x10) + 0xb8);
                idx   = *(s32 *) (base2 + 0x14);
                ipp   = *(u8 **) (base2 + idx * 0x30 + 0x40);
                i     = 0;
                do {
                    if (ipp[i] != 0) {
                        ((u16 *) *(u8 **) (arg0 + 0x18))[i] |= 0x8000;
                    }
                    i++;
                } while (i < 0xc000);
            } else if (arg0[0] == 0) {
                i = 0;
                do {
                    ((u16 *) *(u8 **) (arg0 + 0x18))[i] |= 0x8000;
                    i++;
                } while (i < 0xc000);
            }
            if (arg0[0] == 1) {
                *(volatile s32 *) 0x4000000 = *(volatile s32 *) 0x4000000 ^ 0x40000;
                *(s32 *) (arg0 + 0x18) ^= 0x20000;
            } else {
                func_0204625c(3, *(u8 **) (arg0 + 0x18), *(u8 **) (arg0 + 0x1c), 0x18000, 0x10);
            }
        }
        q = *(u8 **) (arg0 + 0x10);
        if (*(s32 *) (q + 0xc) == *(s32 *) (q + 0x8)) {
            *(s32 *) (q + 0xc) = 0;
            arg0[4]            = 1;
        }
        func_020dc6e8(*(u8 **) (arg0 + 0x10));
    }
    return arg0[4];
}
