/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 v;
} S16;

extern void func_0203cd5c(s32);
extern void func_0203d000(s32);
extern void func_0203d02c(s32);
extern void func_0203d0e4(s32, S16);
extern void func_02050a3c(u8 *);
extern s32 func_020512c0(s32, s32, s32, u8 *, s32);
extern s32 func_020513ac(s32, s32, s32, s32, u8 **, s32, s32 *);
extern void func_020519d8(s32, s32, s32);
extern void func_02051d18(s32, u8 *);
extern u8 *func_020521e0(s32);
extern u8 *func_0208af58(s32);
extern u8 *func_0208af88(s32);
extern u8 *data_0213e2f4;
extern s16 data_ov002_0214bfa0[];
extern S16 data_ov002_0214bf94[];

void func_ov002_0214a768(u8 *arg0, s32 *arg1) {
    s32 spC;
    u8 *sp10;
    s32 sp14;
    u8 *sp18;
    u8 b1[32];
    u8 b2[32];
    u8 b3[32];
    u8 i;
    s32 k;
    u32 u;
    s32 t;
    u8 *p;
    s16 hv;
    u8 *g;

    func_0203cd5c(0);
    func_020519d8(3, 0, -1);
    arg0[0x25d] = 0;
    arg0[0x26d] = 0;
    arg0[0x26e] = 0;
    *arg1       = func_020512c0(*arg1, 10, 7, func_020521e0(0x9d6), 0);
    func_02051d18(*(s32 *) (data_0213e2f4 + 0x2000 + 0xf60), b1);
    func_02050a3c(b1);
    *arg1 = func_020512c0(*arg1, 0x9d, 7, func_020521e0(0x1c), 0);
    k     = arg0[0x26c];
    *arg1 = func_020512c0(*arg1, data_ov002_0214bfa0[k * 2], data_ov002_0214bfa0[k * 2 + 1], func_020521e0(0x957), 1);
    if (arg0[0x26c] == 0) {
        *arg1 = func_020512c0(*arg1, 0x93, 0xa3, func_020521e0(0x958), 1);
    }
    if (arg0[0x26c] == 0) {
        if (*(s32 *) (arg0 + 0x268) > 0) {
            arg0[0x26d] = 1;
        }
    }
    if (arg0[0x26c] == 0) {
        u = arg0[0x264];
        if (u > 4) {
            if (*(s32 *) (arg0 + 0x268) < (s32) (u - 3)) {
                arg0[0x26e] = 1;
            }
        }
    }
    func_0203d000(1);
    if (*(s32 *) (arg0 + 0x258) == 1) {
        if (arg0[0x26c] == 0) {
            func_0203d02c(1);
            func_0203d0e4(1, data_ov002_0214bf94[0]);
        }
        p     = func_0208af88(*(s32 *) (arg0 + *(s32 *) (arg0 + 0x254) * 4 + 0x3c));
        *arg1 = func_020512c0(*arg1, 10, 0x1b, func_020521e0(*(u16 *) (p + 8)), 0);
        spC   = 0x7fffffff;
        sp10  = func_020521e0(*(s32 *) (arg0 + *(s32 *) (arg0 + 0x254) * 4 + 0x3c) + 0x2fb);
        i     = 0;
        func_020519d8(0, 0, -1);
        if (*sp10 != 0) {
            do {
                *arg1 = func_020513ac(*arg1, 10, i * 10 + 0x2b, 0xeb, &sp10, 0, &spC);
                i     = i + 1;
            } while (*sp10 != 0);
        }
        func_020519d8(3, 0, -1);
        p = func_0208af58(*(s32 *) (arg0 + *(s32 *) (arg0 + 0x254) * 4 + 0x3c) - 0x3b);
        t = *(s16 *) (p + 0xe) * 2;
        if (*(s32 *) (arg0 + *(s32 *) (arg0 + 0x254) * 4 + 0x3c) == 0x16d) {
            g = data_0213e2f4 + 0x47f0;
            if (*(s32 *) (g + 4) == 8) {
                if ((u16) * (s32 *) (g + 8) == 7) {
                    t = t / 2;
                }
            }
        }
        if (*(s32 *) (data_0213e2f4 + 0x2000 + 0xf60) >= t) {
            if (*(s32 *) (data_0213e2f4 + 0x2000 + 0x15c) < 6) {
                arg0[0x25d] = 1;
            }
        }
        func_02051d18(t, b2);
        func_02050a3c(b2);
        *arg1 = func_020512c0(*arg1, 0x9d, 0x1b, func_020521e0(0x1c), 0);
    }
    if (*(s32 *) (arg0 + 0x258) != 2) {
        return;
    }
    if (arg0[0x26c] == 0) {
        func_0203d02c(1);
        func_0203d0e4(1, data_ov002_0214bf94[1]);
    }
    p     = func_0208af88(*(u16 *) (data_0213e2f4 + *(s32 *) (arg0 + 0x254) * 2 + 0x28) + 0x3b);
    *arg1 = func_020512c0(*arg1, 10, 0x1b, func_020521e0(*(u16 *) (p + 8)), 0);
    sp14  = 0x7fffffff;
    sp18  = func_020521e0(*(u16 *) (data_0213e2f4 + *(s32 *) (arg0 + 0x254) * 2 + 0x28) + 0x336);
    func_020519d8(0, 0, -1);
    i = 0;
    if (*sp18 != 0) {
        do {
            *arg1 = func_020513ac(*arg1, 10, i * 10 + 0x2b, 0xeb, &sp18, 0, &sp14);
            i     = i + 1;
        } while (*sp18 != 0);
    }
    func_020519d8(3, 0, -1);
    p  = func_0208af58(*(u16 *) (data_0213e2f4 + *(s32 *) (arg0 + 0x254) * 2 + 0x28));
    hv = *(s16 *) (p + 0xe);
    func_02051d18(hv, b3);
    func_02050a3c(b3);
    *arg1 = func_020512c0(*arg1, 0x9d, 0x1b, func_020521e0(0x1c), 0);
    if (hv <= 0) {
        return;
    }
    if (*(s32 *) (arg0 + 0x260) == 0x33) {
        arg0[0x25d] = 1;
    }
}
