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
extern H data_ov011_02149ff8;
extern H data_ov011_02149ffc;
extern H data_ov011_0214a000;
extern u8 *data_0213e434;
extern u8 data_0212fff8[];
extern u8 data_ov011_0214a004[];

void func_0203cfb0(s32);
void func_0203cec4(s32);
void func_0203d208(s32, H);
void func_0203cc08(s32, s32);
void func_0203e23c(s32, s32, s32, s32, s32, s32, HH, B4, s32);
void func_02051b80(H);
void func_02051a50(s32, s32, s32);
void func_02050af0(u8 *, s32);
s32 func_02052258(u32);
void func_0205166c(s32, s32, s32, s32, s32, s32);
u8 *func_0204688c(s32, s32, s32);
void func_02017768(u8 *, s32);
void func_020172bc(u8 *, W);

void func_ov011_02149cac(u8 *arg0) {
    u8 *r4;
    u8 *pp;
    u16 h;
    s32 x, y;
    struct {
        H h14;
        volatile s32 v18;
        volatile s32 v1c;
        W w20;
        volatile s32 v24;
        volatile s32 v28;
        HH hh1;
        B4 bb1;
        HH hh2;
        B4 bb2;
    } fr;

    func_0203cfb0(0);
    func_0203cec4(0x1000);
    func_0203d208(3, data_ov011_02149ff8);
    pp                = (u8 *) &fr.bb1;
    pp[0]             = 0;
    pp[1]             = 0;
    pp[2]             = 0;
    pp[3]             = 0;
    pp                = (u8 *) &fr.hh1;
    *(u16 *) pp       = 0;
    *(u16 *) (pp + 2) = 0;
    func_0203e23c(3, 0x1042, 1, 0, 0, 0, fr.hh1, fr.bb1, 0);
    func_0203d208(2, data_ov011_02149ffc);
    pp                = (u8 *) &fr.bb2;
    pp[0]             = 0;
    pp[1]             = 0;
    pp[2]             = 0;
    pp[3]             = 0;
    pp                = (u8 *) &fr.hh2;
    *(u16 *) pp       = 0;
    *(u16 *) (pp + 2) = 0;
    func_0203e23c(2, 0x1041, 1, 0, 0, 0, fr.hh2, fr.bb2, 0);
    fr.h14 = data_ov011_0214a000;
    func_0203d208(0, fr.h14);
    func_0203cc08(0, 0);
    func_02051b80(fr.h14);
    func_02051a50(7, 0, -1);
    h = *(u16 *) (arg0 + 0x2c);
    if (h == 0x4a8 || h == 0x509 || h == 0x657) {
        func_02050af0(data_0213e434 + 0x53, 0);
    }
    func_0205166c(0x80, 0x80, 0xa, 0xe3, func_02052258(*(u16 *) (arg0 + 0x2c)), 1);
    r4 = func_0204688c(0xa0, 0, 4);
    if (r4 != NULL) {
        func_02017768(r4, 0);
        *(u8 **) r4          = data_0212fff8;
        *(u8 **) (r4 + 0x90) = data_ov011_0214a004;
        *(s32 *) (r4 + 0x94) = 1;
        *(s32 *) (r4 + 0x98) = 0;
        r4[0x9c]             = 1;
        r4[0x9d]             = 0;
        ((VA *) r4)->f9(r4[0x9d]);
    }
    *(u8 **) (arg0 + 0x24)                   = r4;
    x                                        = 0xea000;
    fr.v18                                   = x;
    fr.v24                                   = x;
    *(s32 *) (*(u8 **) (arg0 + 0x24) + 0x50) = x;
    y                                        = 0xab000;
    fr.v1c                                   = y;
    fr.v28                                   = y;
    *(s32 *) (*(u8 **) (arg0 + 0x24) + 0x54) = y;
    fr.w20.v                                 = 0x1c000;
    func_020172bc(*(u8 **) (arg0 + 0x24), fr.w20);
}
}
