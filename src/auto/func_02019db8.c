/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02010f18(void *a, void *b, s32 c);
void func_01ffc270(void *a, void *b);
void func_01ffc328(void *a);
s32 func_020f5eb8(s32 a, s32 b, s32 c);
void func_020b9338(void *a);
void func_020b9154(void *a);
void func_02011090(void *a, s32 b, s32 c, s32 d, s32 e);
s32 func_0200aac4(void *a, s32 b);

void func_02019db8(u8 *arg0) {
    u8 fr[0x70];
    u8 *r5;
    s32 v34;
    s32 v38;
    s32 d;
    s32 v;
    s32 *t;
    s32 f2;
    s32 x;
    s32 y;
    s32 z;
    s32 dy;
    s32 dz;

    if (arg0[0x42] != 0) {
        return;
    }
    func_02010f18(*(void **) (arg0 + 4), arg0 + 0x28, 0);
    r5                   = *(u8 **) (arg0 + 4);
    t                    = (s32 *) (r5 + 0x78);
    z                    = t[2];
    *(s32 *) (fr + 0x38) = z;
    dz                   = *(s32 *) (arg0 + 0x30) - z;
    y                    = t[1];
    *(s32 *) (fr + 0x3C) = y;
    dy                   = *(s32 *) (arg0 + 0x2C) - y;
    x                    = *(s32 *) (r5 + 0x78);
    *(s32 *) (fr + 0x40) = x;
    *(s32 *) (fr + 0x58) = *(s32 *) (arg0 + 0x28) - x;
    *(s32 *) (fr + 0x5C) = dy;
    *(s32 *) (fr + 0x60) = dz;
    func_01ffc270(fr, fr + 0x58);

    v34                  = *(s32 *) (arg0 + 0x34);
    *(s32 *) (fr + 0x08) = v34;
    if (*(s32 *) fr > v34) {
        func_01ffc328(fr + 0x58);
        v                      = *(s32 *) (fr + 0x58);
        *(s32 *) (fr + 0x18)   = v;
        *(s32 *) (arg0 + 0x44) = v;
        v                      = *(s32 *) (fr + 0x5C);
        *(s32 *) (fr + 0x1C)   = v;
        *(s32 *) (arg0 + 0x48) = v;
        v                      = *(s32 *) (fr + 0x60);
        *(s32 *) (fr + 0x20)   = v;
        *(s32 *) (arg0 + 0x4C) = v;

        v38                  = *(s32 *) (arg0 + 0x38);
        *(s32 *) (fr + 0x0C) = v38;
        v34                  = *(s32 *) (arg0 + 0x34);
        *(s32 *) (fr + 0x50) = v34;
        *(s32 *) (fr + 0x24) = v34;
        f2 = *(volatile s32 *) fr; // volatile: target reloads the frame word (ldr r1,[sp,#4]) before the compare
        d  = *(s32 *) fr - v34;
        if (d < v38) {
            *(s32 *) (fr + 0x28)   = v34;
            d                      = f2 - v34;
            *(s32 *) (fr + 0x04)   = d;
            *(s32 *) (fr + 0x10)   = d;
            *(s32 *) (arg0 + 0x38) = d;
        }

        v38                    = *(s32 *) (arg0 + 0x38);
        *(s32 *) (fr + 0x54)   = v38;
        *(s32 *) (fr + 0x44)   = v38;
        *(s32 *) (fr + 0x48)   = v38;
        *(s32 *) (fr + 0x4C)   = v38;
        *(s32 *) (fr + 0x64)   = (s32) ((((long long) *(s32 *) (arg0 + 0x44) * v38) + 0x800) >> 12);
        *(s32 *) (fr + 0x68)   = (s32) ((((long long) *(s32 *) (arg0 + 0x48) * v38) + 0x800) >> 12);
        *(s32 *) (fr + 0x6C)   = (s32) ((((long long) *(s32 *) (arg0 + 0x4C) * v38) + 0x800) >> 12);
        *(s32 *) (arg0 + 0x44) = *(s32 *) (fr + 0x64);
        *(s32 *) (fr + 0x2C)   = *(s32 *) (fr + 0x68);
        *(s32 *) (arg0 + 0x48) = *(s32 *) (fr + 0x68);
        *(s32 *) (fr + 0x30)   = *(s32 *) (fr + 0x6C);
        *(s32 *) (arg0 + 0x4C) = *(s32 *) (fr + 0x6C);

        v38                    = *(s32 *) (arg0 + 0x38);
        *(s32 *) (fr + 0x14)   = v38;
        v34                    = *(s32 *) (arg0 + 0x34);
        d                      = *(s32 *) fr - v34;
        *(s32 *) (fr + 0x34)   = v34;
        v                      = func_020f5eb8(d, v38, v34);
        *(u16 *) (arg0 + 0x50) = (u16) (v >> 12);

        if (arg0[0x3E] != 0) {
            return;
        }
        r5 = *(u8 **) (arg0 + 4);
        if (((u32) (*(u16 *) (r5 + 0x1F8) << 31) >> 31) == 1) {
            return;
        }
        func_020b9338(r5 + 0x14C);
        func_020b9154(*(u8 **) (arg0 + 4) + 0x14C);
        v = *(u16 *) (arg0 + 0x40);
        if (v != 0x135) {
            func_02011090(*(void **) (arg0 + 4), v, 0, 1, 0);
            return;
        }
        if (arg0[0x3F] != 0) {
            v = func_0200aac4(*(void **) (arg0 + 4), 0);
            func_02011090(*(void **) (arg0 + 4), v, 0, 1, 0);
            return;
        }
        func_02011090(*(void **) (arg0 + 4), 3, 0, 1, 0);

    } else {
        *(u16 *) (arg0 + 0x50) = 0;
    }
}
