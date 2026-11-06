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

extern "C" {
extern H data_ov012_0214a980;
extern H data_ov012_0214a984;
extern H data_ov012_0214a968;
extern u8 *data_0213e434;
extern u8 data_ov012_0214a990[];
extern u8 data_ov012_0214a988[];

void func_0203cfb0(s32);
void func_0203cec4(s32);
u16 func_02077e4c(u8 *, u32);
u8 *func_0208afe8(u32);
void func_0203d208(s32, H);
void func_0203cc08(s32, s32);
void func_0203e23c(s32, s32, s32, s32, s32, s32, HH, B4, s32);
void func_02051b80(H);
void func_0205077c(s32, s32, s32, s32, s32);
void func_ov012_02149d74(u8 *);
void func_02016f40(u8 *, s32, void *, W, s32, s32);

void func_ov012_0214a684(u8 *arg0) {
    u8 *r4;
    u8 *pp;
    s32 x, y;
    struct {
        H h14, h16, h18;
        W p1c;
        volatile s32 p20;
        W p24;
        volatile s32 p28;
        HH hh1;
        B4 bb1;
        HH hh2;
        B4 bb2;
    } fr;

    fr.h14 = data_ov012_0214a980;
    fr.h16 = data_ov012_0214a984;
    func_0203cfb0(0);
    func_0203cec4(0x1000);
    *(u16 *) (arg0 + 0x32) = func_02077e4c(data_0213e434 + 0x21dc, *(u16 *) (arg0 + 0x30));
    if (*(u16 *) (arg0 + 0x32) == 0x3f) {
        *(u16 *) (arg0 + 0x32) = 0x2d;
    } else {
        arg0[0x25] = 1;
    }
    r4 = func_0208afe8(*(u16 *) (arg0 + 0x32));
    func_0203d208(1, fr.h16);
    func_0203cc08(1, 0);
    pp       = (u8 *) &fr.bb1;
    pp[0]    = 0;
    pp[1]    = 0;
    pp[2]    = 0;
    pp[3]    = 0;
    fr.hh1.a = 0x15;
    fr.hh1.b = 4;
    func_0203e23c(1, *(u16 *) (r4 + 0xa), 1, 0, 0, 0x100, fr.hh1, fr.bb1, 0);
    func_0203d208(3, fr.h14);
    pp                = (u8 *) &fr.bb2;
    pp[0]             = 0;
    pp[1]             = 0;
    pp[2]             = 0;
    pp[3]             = 0;
    pp                = (u8 *) &fr.hh2;
    *(u16 *) pp       = 0;
    *(u16 *) (pp + 2) = 0;
    func_0203e23c(3, 0x142b, 1, 0x10, 0, 0x10, fr.hh2, fr.bb2, 0x100);
    fr.h18 = data_ov012_0214a968;
    func_0203d208(0, fr.h18);
    func_02051b80(fr.h18);
    func_0205077c(0x20, 0x21, 0x2e, 0x2e, 0);
    arg0[0x24] = 1;
    func_ov012_02149d74(arg0);
    y        = 0xaa000;
    x        = 0xea000;
    fr.p20   = y;
    fr.p1c.v = x;
    func_02016f40(arg0 + 0x28, 1, data_ov012_0214a990, fr.p1c, y, 0);
    fr.p28   = y;
    fr.p24.v = x;
    func_02016f40(arg0 + 0x2c, 2, data_ov012_0214a988, fr.p24, y, 0);
    *(u32 *) (*(u8 **) (arg0 + 0x28) + 4) &= ~1;
    arg0[0x34] = 0;
    arg0[0x35] = 0;
    arg0[0x37] = 0;
    arg0[0x36] = 0;
}
}
