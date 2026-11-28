/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern void func_0204630c(void *p, s32 v, s32 n);
extern s32 func_0204c94c(u16 v);
extern void func_020d724c(s32 a, s32 b);

extern void func_020d8934(void);
extern u8 data_02136b78;
extern u8 data_021375f8;
extern u8 data_021423b8;
extern u8 data_02142708;

typedef struct {
    u32 w[3];
} T12;
extern s32 func_020d76cc(u16 a, s32 b, T12 c, s32 e);

s32 func_020d5544(s32 arg0, s32 arg1) {
    T12 b;
    T12 a;
    u8 *p;
    s32 ret;
    s32 idx;
    s32 v;
    s32 t;

    func_0204630c(&a, 0, 12);
    *(u8 *) &a                              = 7;
    b                                       = a;
    idx                                     = arg0 * 4;
    v                                       = *(u16 *) (&data_02136b78 + 2 + idx);
    ret                                     = v + func_0204c94c((u16) (*(u16 *) (&data_02136b78 + idx) - 1));
    p                                       = &data_021375f8 + ret * 4;
    *(volatile u8 *) (&data_021423b8 + 0xb) = *(volatile u8 *) (&data_021423b8 + 0xb) | 0x80;
    if (*(u8 *) &b >= 3 && *(u8 *) &b < 7 && b.w[2] == 0) {
        b.w[2] = *(u16 *) (p + 2);
    }
    ret = func_020d76cc(*(u16 *) p, 1, b, arg1);
    t   = *(u16 *) (p + 2);
    if (t != 0) {
        *(volatile u8 *) (&data_021423b8 + 0xb) = *(volatile u8 *) (&data_021423b8 + 0xb) | 0x80;
        func_020d724c(ret, t);
        if (*(volatile u8 *) (&data_021423b8 + 0xb) & 0x80) {
            if (*(volatile u8 *) (&data_021423b8 + 0xb) & 0x40) {
                if ((*(s32 *) (&data_02142708 + 0xc) & 0xc) == 0) {
                    func_020d8934();
                }
            }
            *(volatile u8 *) (&data_021423b8 + 0xb) = *(volatile u8 *) (&data_021423b8 + 0xb) & ~0xc0;
        }
    }
    if (*(volatile u8 *) (&data_021423b8 + 0xb) & 0x80) {
        if (*(volatile u8 *) (&data_021423b8 + 0xb) & 0x40) {
            if ((*(s32 *) (&data_02142708 + 0xc) & 0xc) == 0) {
                func_020d8934();
            }
        }
        *(volatile u8 *) (&data_021423b8 + 0xb) = *(volatile u8 *) (&data_021423b8 + 0xb) & ~0xc0;
    }
    return ret;
}
