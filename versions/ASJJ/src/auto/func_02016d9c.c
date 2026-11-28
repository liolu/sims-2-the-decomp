/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_02049b14(u8 *, s32);
extern void func_0203f1ac(s32, s32, s32);
extern void func_0203f054(s32, s32, s32);
extern u8 data_027e0000;
extern u8 data_027e0004;

typedef struct {
    volatile s32 a;
    volatile s32 b;
    volatile u8 c;
} ST;

void func_02016d9c(u8 **arg0, s32 a1, u8 *arg2, ST a3) {
    u8 *o;
    u8 *p;
    s32 bits;
    s32 idx;
    s32 hv;
    s32 va;
    s32 vb;
    u32 vc;

    func_02049b14(*arg0, a1);
    o       = *arg0;
    o[0x19] = arg2[6];
    if (*(u8 **) (o + 0x20) != arg2) {
        *(u8 **) (o + 0x20) = arg2;
        *(s32 *) (o + 4)    = *(s32 *) (o + 4) | 0x80;
    }
    if (o[0x1B] != 0 || (*(s32 *) (o + 4) & 0x80) != 0) {
        o[0x1B] = 0;
        o[0x18] = o[0x19];
        p       = o + 0x18;
        if (p[2] != p[3] || (*(s32 *) (o + 4) & 0x80) != 0) {
            *(s32 *) (o + 4) = *(s32 *) (o + 4) | 0x80;
        }
    }
    *(s32 *) (o + 4) = *(s32 *) (o + 4) & ~0x400000;
    hv               = *(u16 *) (arg2 + 4);
    if (hv != 0xFFFF) {
        idx  = *(s32 *) &data_027e0000;
        bits = *(s32 *) &data_027e0004 & (0x20 << idx);
        if (bits != 0) {
            if (((*(u32 *) (o + 0x10) << 18) >> 31) == 1) {
                func_0203f1ac(hv, 0, 0x100);
            } else {
                func_0203f1ac(hv, ((*(u32 *) (o + 0x14) << 16) >> 28) << 4, 0x10);
            }
        } else {
            if (((*(u32 *) (o + 0x10) << 18) >> 31) == 1) {
                func_0203f054(hv, 0, 0x100);
            } else {
                func_0203f054(hv, ((*(u32 *) (o + 0x14) << 16) >> 28) << 4, 0x10);
            }
        }
    }
    va                  = a3.a;
    o                   = *(u8 *volatile *) arg0;
    vc                  = a3.c;
    *(s32 *) (o + 0x50) = va;
    vb                  = a3.b;
    o                   = *arg0;
    *(s32 *) (o + 0x54) = vb;
    o                   = *arg0;
    *(u32 *) (o + 0x14) = (*(u32 *) (o + 0x14) & ~0xc00) | ((vc & 3) << 10);
}
