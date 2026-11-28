/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern void func_02046398(void *p, s32 v, s32 n);
extern s32 func_0204c9d0(u16 v);
extern void func_020d6e74(s32 a, s32 b);

extern void func_020d855c(void);
extern u8 data_021367a4;
extern u8 data_02137224;
extern u8 data_02142018;
extern u8 data_02142368;

typedef struct {
    u32 w[3];
} T12;
extern s32 func_020d72f4(u16 a, s32 b, T12 c, s32 e);

s32 func_020d516c(s32 arg0, s32 arg1) {
    T12 b;
    T12 a;
    u8 *p;
    s32 ret;
    s32 idx;
    s32 v;
    s32 t;

    func_02046398(&a, 0, 12);
    *(u8 *) &a                              = 7;
    b                                       = a;
    idx                                     = arg0 * 4;
    v                                       = *(u16 *) (&data_021367a4 + 2 + idx);
    ret                                     = v + func_0204c9d0((u16) (*(u16 *) (&data_021367a4 + idx) - 1));
    p                                       = &data_02137224 + ret * 4;
    *(volatile u8 *) (&data_02142018 + 0xb) = *(volatile u8 *) (&data_02142018 + 0xb) | 0x80;
    if (*(u8 *) &b >= 3 && *(u8 *) &b < 7 && b.w[2] == 0) {
        b.w[2] = *(u16 *) (p + 2);
    }
    ret = func_020d72f4(*(u16 *) p, 1, b, arg1);
    t   = *(u16 *) (p + 2);
    if (t != 0) {
        *(volatile u8 *) (&data_02142018 + 0xb) = *(volatile u8 *) (&data_02142018 + 0xb) | 0x80;
        func_020d6e74(ret, t);
        if (*(volatile u8 *) (&data_02142018 + 0xb) & 0x80) {
            if (*(volatile u8 *) (&data_02142018 + 0xb) & 0x40) {
                if ((*(s32 *) (&data_02142368 + 0xc) & 0xc) == 0) {
                    func_020d855c();
                }
            }
            *(volatile u8 *) (&data_02142018 + 0xb) = *(volatile u8 *) (&data_02142018 + 0xb) & ~0xc0;
        }
    }
    if (*(volatile u8 *) (&data_02142018 + 0xb) & 0x80) {
        if (*(volatile u8 *) (&data_02142018 + 0xb) & 0x40) {
            if ((*(s32 *) (&data_02142368 + 0xc) & 0xc) == 0) {
                func_020d855c();
            }
        }
        *(volatile u8 *) (&data_02142018 + 0xb) = *(volatile u8 *) (&data_02142018 + 0xb) & ~0xc0;
    }
    return ret;
}
