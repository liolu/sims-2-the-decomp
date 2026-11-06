/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 v;
} H;
typedef struct {
    u16 a, b;
} HH;
typedef struct {
    u8 a, b, c, d;
} B4;
typedef struct {
    s32 v;
} W;
typedef struct {
    s32 a, b;
} WW;
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9(u8 v);
};

extern "C" {
extern H data_ov015_0214a9bc;
extern u16 data_ov015_0214a9c0[];
extern u8 data_ov015_0214a9b8[];
extern H data_ov015_0214a9b0;
extern H data_ov015_0214a9b4;
extern u8 data_0212fff8[];
extern u8 data_ov015_0214a9c4[];

void func_0203cfb0(s32);
void func_0203cec4(s32);
void func_0203d208(s32, H);
void func_0203e23c(s32, s32, s32, s32, s32, s32, HH, B4, s32);
void func_0203cc08(s32, s32);
void func_0203c234(s32, s32, s32);
u8 *func_0204688c(s32, s32, s32);
u8 *func_020170c4(u8 *, s32);
void func_02049b00(u8 *, s32);
void func_0205077c(s32, s32, s32, s32, s32);
void func_02017768(u8 *, s32);
void func_02017380(u8 *, W, W, W, W);
void func_ov015_02149b8c(u8 *);
void func_ov015_02149cd0(u8 *);

void func_ov015_0214a3c4(u8 *arg0) {
    u8 *r4;
    u8 *p;
    s32 b3f;
    struct {
        s32 v1[4];
        W a, b, c, d;
        s32 v2[4];
        HH hh;
        B4 bb;
    } fr;
    s32 x, y;
    u8 *pp;

    func_0203cfb0(0);
    func_0203cec4(0x1000);
    func_0203d208(3, data_ov015_0214a9bc);

    pp                = (u8 *) &fr.bb;
    pp[0]             = 0;
    pp[1]             = 0;
    pp[2]             = 0;
    pp[3]             = 0;
    pp                = (u8 *) &fr.hh;
    *(u16 *) pp       = 0;
    *(u16 *) (pp + 2) = 0;
    b3f               = arg0[0x3f];
    func_0203e23c(3, data_ov015_0214a9c0[b3f], 1, data_ov015_0214a9b8[b3f], 0, 0, fr.hh, fr.bb, 0x100);

    if (arg0[0x3f] == 0) {
        func_0203d208(2, data_ov015_0214a9b0);
        func_0203cc08(2, 0);
        func_0203c234(2, -168, -32);
    } else {
        r4 = func_0204688c(0x74, 0, 4);
        if (r4 != NULL) {
            r4 = func_020170c4(r4, 0);
        }
        *(u8 **) (arg0 + 0x30) = r4;
        func_02049b00(*(u8 **) (arg0 + 0x30), 3);
        p = *(u8 **) (arg0 + 0x30);
        *(s32 *) (p + 4) &= ~1;
        x                                        = 0xcf000;
        fr.v1[0]                                 = x;
        fr.v2[0]                                 = x;
        *(s32 *) (*(u8 **) (arg0 + 0x30) + 0x50) = x;
        y                                        = 0x29000;
        fr.v1[1]                                 = y;
        fr.v2[1]                                 = y;
        *(s32 *) (*(u8 **) (arg0 + 0x30) + 0x54) = y;
    }

    func_0203d208(0, data_ov015_0214a9b4);
    func_0203cc08(0, 0);
    func_0205077c(0x20, 4, 6, 0x2e, 0);

    r4 = func_0204688c(0xa0, 0, 4);
    if (r4 != NULL) {
        func_02017768(r4, 0);
        *(u8 **) r4          = data_0212fff8;
        *(u8 **) (r4 + 0x90) = data_ov015_0214a9c4;
        *(s32 *) (r4 + 0x94) = 1;
        *(s32 *) (r4 + 0x98) = 0;
        r4[0x9c]             = 1;
        r4[0x9d]             = 0;
        ((VA *) r4)->f9(r4[0x9d]);
    }
    *(u8 **) (arg0 + 0x2c)                   = r4;
    x                                        = 0xea000;
    fr.v1[2]                                 = x;
    fr.v2[2]                                 = x;
    *(s32 *) (*(u8 **) (arg0 + 0x2c) + 0x50) = x;
    y                                        = 0xaa000;
    fr.v1[3]                                 = y;
    fr.v2[3]                                 = y;
    *(s32 *) (*(u8 **) (arg0 + 0x2c) + 0x54) = y;
    fr.d.v                                   = 0x30000;
    fr.c.v                                   = 0x30000;
    fr.b.v                                   = -0x1a000;
    fr.a.v                                   = -0x1a000;
    func_02017380(*(u8 **) (arg0 + 0x2c), fr.a, fr.b, fr.c, fr.d);
    func_ov015_02149b8c(arg0);
    func_ov015_02149cd0(arg0);
}
}
