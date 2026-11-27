/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_0211f9c8[];
extern u8 data_0213e434[];

typedef struct {
    u16 v;
} S16;
typedef struct {
    u16 a, b;
} A16;
typedef struct {
    u8 a, b, c, d;
} B8;
typedef struct {
    S16 s;
    u16 pad;
    s32 w1c, w20, w24, w28, w2c, w30;
    B8 b34;
    s32 w38, w3c, w40, w44, w48, w4c, w50, w54, w58, w5c;
    A16 a60;
    s32 w64, w68, w6c, w70;
    A16 a74;
    B8 b78;
    s32 w7c, w80, w84, w88;
} FR;
typedef enum {
    Z0 = 0
} ZE;
struct VA {
    virtual void f0();
    virtual void f1();
};

extern "C" {
void func_0203de9c(S16, u16, u16, s32, s32, s32, s32, A16, B8, s32);
void func_0203e23c(s32, u16, u16, s32, s32, s32, A16, B8, s32);
void func_02051b80(S16);
void func_02051a50(s32, s32, s32);
void func_02051338(s32, s32, s32, s32, s32);
s32 func_02082810(s32);

void func_02071a90(u8 *arg0, s32 arg1) {
    FR f;
    ZE zz;
    u8 *hb;
    u16 *ha;
    u8 *p;
    s32 t;
    s32 r;
    s32 lr;
    s32 ip;

    p                           = arg0;
    *(u16 *) (p + 0x1a)         = arg1;
    t                           = *(volatile u8 *) (p + 0x18);
    *(volatile u8 *) (p + 0x18) = t;
    t                           = (((s32) (*(volatile u8 *) (p + 0x18)) * 2 + 2) * 8 - 8) << 12;
    f.w38                       = t;
    f.w64                       = t;
    *(s32 *) (p + 0x14)         = t;
    lr                          = *(s32 *) (p + 0x14);
    f.w7c                       = lr;
    f.w68                       = lr;
    if (*(s32 *) (p + 0xc) > lr) {
        f.w6c              = lr;
        *(s32 *) (p + 0xc) = lr;
    }
    *(u8 *) (p + 0x8) |= 1;
    *(volatile u8 *) (p + 0x18) = 6;
    t                           = (((s32) (*(volatile u8 *) (p + 0x18)) * 2 + 2) * 8 - 8) << 12;
    f.w20                       = t;
    f.w3c                       = t;
    *(s32 *) (p + 0x14)         = t;
    lr                          = *(s32 *) (p + 0x14);
    f.w80                       = lr;
    f.w40                       = lr;
    if (*(s32 *) (p + 0xc) > lr) {
        f.w44              = lr;
        *(s32 *) (p + 0xc) = lr;
    }
    *(u8 *) (p + 0x8) |= 1;
    lr                 = *(volatile s32 *) (p + 0x14);
    f.w1c              = lr;
    f.w24              = lr;
    ip                 = *(volatile s32 *) (p + 0x14);
    r                  = (s32) ((((long long) lr * ip) + 0x800) >> 12);
    f.w70              = ip;
    f.w28              = r;
    f.w48              = r;
    *(s32 *) (p + 0xc) = r;
    zz                 = Z0;
    f.w2c              = zz;
    f.w4c              = zz;
    r                  = *(s32 *) (p + 0xc);
    if (r < zz) {
        f.w30              = zz;
        f.w50              = zz;
        *(s32 *) (p + 0xc) = zz;
    } else {
        lr    = *(s32 *) (p + 0x14);
        f.w84 = lr;
        f.w54 = lr;
        if (r > lr) {
            f.w58              = lr;
            *(s32 *) (p + 0xc) = lr;
        }
    }
    r                   = *(s32 *) (p + 0xc);
    f.w5c               = r;
    *(s32 *) (p + 0x10) = r;
    *(u8 *) (p + 0x8) |= 1;
    hb    = &f.b78.a;
    ha    = &f.a74.a;
    hb[0] = 0;
    hb[1] = 0;
    hb[2] = 0;
    hb[3] = 0;
    ha[0] = 0;
    ha[1] = 0;
    f.s.v = *(u16 *) data_0211f9c8;
    func_0203de9c(f.s, *(u16 *) (p + 4), *(u16 *) (p + 6), 0, 0, 0, 0, f.a74, f.b78, 3);
    *(u8 *) (p + 0xa) = 0;
    f.b34.a           = 0;
    f.b34.b           = 0x16;
    f.b34.c           = 0x12;
    f.b34.d           = 2;
    f.a60.a           = 0;
    f.a60.b           = *(u8 *) (p + 0x9);
    func_0203e23c(2, *(u16 *) (p + 4), *(u16 *) (p + 6), (s32) * (s8 *) (p + 0xa) << 4, 0, 0, f.a60, f.b34, 0x105);
    func_02051b80(f.s);
    func_02051a50(0, 4, -1);
    r = *(s32 *) data_0213e434 + 0x21dc;
    r = func_02082810(*(u16 *) (p + 0x1a) * 0x2c + r);
    func_02051338(0xd3, 8, 4, r, 0);
    *(u8 *) (p + 0x8) |= 1;
    ((VA *) p)->f0();
}
}
