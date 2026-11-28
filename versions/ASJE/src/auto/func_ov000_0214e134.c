/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 v;
} U16One;
typedef struct {
    u16 a, b;
} U16Pair;
typedef struct {
    u8 a, b, c, d;
} U8Quad;

void func_02083d50(u8 *a, s32 b);
void func_0203d190(s32 a, U16One b);
U16Pair func_0203e1c4(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, U16Pair g, U8Quad h, s32 i);
void func_0203cc88(void *a);
void func_0203de24(U16One a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, U16Pair h, U8Quad i, s32 j);
s32 func_0203b908(s32 a, s32 b);
void func_0204630c(s32 a, s32 b, s32 c);
u16 *func_0203b930(s32 a);
s32 func_02044560(s32 a);
void func_02050704(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02049b90(s32 a, void *b);
void func_0203efe4(s32 a, s32 b, s32 c);
void func_0203f1a8(s32 a, s32 b, s32 c, s32 d);
s32 func_02046814(s32 a, s32 b, s32 c);
s32 func_0203f840(s32 a, s32 b, s32 c, void *d, s32 e);
s32 func_020521e0(s32 a);
void func_0205095c(s32 a);
void func_020519d8(s32 a, s32 b, s32 c);
s32 func_02018578(void *a);
void func_02018520(s32 a, s32 b, s32 c);
void func_020168a4(s32 a, s32 b);
s32 func_02046a54(s32 a, s32 b);
void func_020468cc(s32 a, void *b, s32 c);
void func_0204eec4(s32 a, s32 b);
void func_0204ee78(s32 a, s32 b);
void func_ov000_0214a7d0(u8 *a, s32 b);
void func_ov000_0214a160(u8 *a, s32 b, s32 c);
extern u8 *data_0213e2f4;
extern u8 *data_02139e64;
extern u16 data_ov000_0214e83c;
extern u16 data_ov000_0214e830;
extern u16 data_ov000_0214e828;
extern u8 data_ov000_0214ea20[4];
extern u16 data_ov000_0214e834;
extern u8 data_ov000_0214e838;
extern u32 data_027e0000;
extern u8 data_ov000_0214ea4c;
extern u8 data_ov000_0214e840[2];
extern u8 data_ov000_0214e8d4;

void func_ov000_0214e134(u8 *arg0) {
    s32 t18;
    volatile s32 t1c;
    U8Quad q3;
    U16Pair p1;
    U8Quad q1;
    U16Pair p2;
    U8Quad q2;
    U16Pair p3;
    u8 *e;
    u8 *pb;
    u16 *ph;
    s32 i;
    s32 r;
    s32 *tbl;
    s32 pbase;
    u8 *g;

    e = data_0213e2f4;
    if (e[0x52] < 0x32) {
        e[0x52] = e[0x52] + 1;
        e       = data_0213e2f4;
        if (e[0x52] >= 0x32) {
            func_02083d50(e + 0x18, 0xa2);
            g                    = data_02139e64;
            *(s32 *) (g + 0xe38) = 0xc21;
            *(s32 *) (g + 0xe3c) = -1;
            g[0xe40]             = 0;
        }
    }
    func_0203d190(3, *(U16One *) &data_ov000_0214e83c);
    pb    = (u8 *) &q1;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    ph    = (u16 *) &p1;
    ph[0] = 0;
    ph[1] = 0;
    func_0203e1c4(3, 0x220, 0, 0, 0, 0, p1, q1, 0);
    func_0203d190(2, *(U16One *) &data_ov000_0214e830);
    pb    = (u8 *) &q2;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    ph    = (u16 *) &p2;
    ph[0] = 0;
    ph[1] = 0;
    func_0203e1c4(2, 0x21f, 1, 0, 0, 0, p2, q2, 1);
    func_0203cc88(&data_ov000_0214e828);
    q3              = *(U8Quad *) data_ov000_0214ea20;
    ((u8 *) &q3)[1] = 0;
    ph              = (u16 *) &p3;
    ph[0]           = 0;
    ph[1]           = 0;
    func_0203de24(*(U16One *) &data_ov000_0214e828, 0x225, 1, 0, 0, 0, 0, p3, q3, 1);
    func_0203d190(1, *(U16One *) &data_ov000_0214e834);
    r                                = func_0203b908(((u32) (data_ov000_0214e834 << 27)) >> 29, 0);
    *(s32 *) (arg0 + 0xc000 + 0x9e0) = r;
    func_0204630c(*(s32 *) (arg0 + 0xc000 + 0x9e0), 0, 0x6000);
    r = ((u32) (data_ov000_0214e834 << 19)) >> 27;
    i = 0;
    do {
        ph    = func_0203b930(r);
        ph[i] = i | 0x1000;
        i += 1;
    } while (i < 0x300);
    func_0204630c((s32) (arg0 + 0x120), 0, 0xc000);
    func_0204630c((s32) (arg0 + 0x28), 0, 0x30);
    *(s32 *) (arg0 + 0x118) = func_02044560(0x13a3);
    *(s32 *) (arg0 + 0x11c) = func_02044560(0x25);
    func_02050704(1, 0x2e, 0x2e, 0x2e, 0);
    func_02049b90(0xa, &data_ov000_0214e838);
    func_0203efe4((data_027e0000 << 10) + 0x5000000, 0, 4);

    func_0203f1a8(0x221, 0x20, 0x10, 0x10);
    r = func_02046814(0x18, 3, 4);
    if (r != 0) {
        t1c   = 0x88;
        i     = func_02044560(0x221);
        pbase = (data_027e0000 << 10) + 0x5000000;
        r     = func_0203f840(r, pbase + 0x34, i + 0x14, &data_ov000_0214ea4c, t1c);
    }
    *(s32 *) (arg0 + 0xc000 + 0x9e4) = r;
    t18                              = func_020521e0(0x1c);
    func_0205095c(0);
    func_020519d8(3, 0, 0);
    r                                = func_02018578(&t18);
    *(s32 *) (arg0 + 0xc000 + 0x9e8) = r;
    func_02018520(*(s32 *) (arg0 + 0xc000 + 0x9e8), data_ov000_0214e840[0], data_ov000_0214e840[1]);
    func_020168a4(*(s32 *) (arg0 + 0xc000 + 0x9e8), 2);
    r = func_02046814(8, 0, 4);
    if (r != 0) {
        r = func_02046a54(r, 0xe);
    }
    *(s32 *) (arg0 + 0x24) = r;
    func_020468cc(*(s32 *) (arg0 + 0x24), &data_ov000_0214e8d4, 0xe);
    i = 0;
    do {
        func_020168a4(((s32 *) **(s32 ***) (arg0 + 0x24))[i], 2);
        i += 1;
    } while (i < 10);
    i = 10;
    do {
        tbl = (s32 *) **(s32 ***) (arg0 + 0x24);
        ((u32 *) tbl[i])[1] &= ~1;
        func_020168a4(((s32 *) **(s32 ***) (arg0 + 0x24))[i], 0);
        i += 1;
    } while (i < 13);
    func_020168a4(((s32 *) **(s32 ***) (arg0 + 0x24))[0xd], 2);
    func_0204eec4(2, 0x3d);
    func_0204ee78(0xe, 4);
    *(s32 *) (arg0 + 0xc000 + 0x9f0) = 0x1388;
    *(arg0 + 0xc000 + 0x9f7)         = 0;
    *(arg0 + 0xc000 + 0x9f4)         = 0;
    *(arg0 + 0xc000 + 0x9f5)         = 0;
    *(arg0 + 0xc000 + 0x9f6)         = 0;
    *(s32 *) (arg0 + 0xc000 + 0x9ec) = 0;
    *(arg0 + 0xc000 + 0x9ff)         = 3;
    func_ov000_0214a7d0(arg0, *(arg0 + 0xc000 + 0x9f6));
    i = 5;
    do {
        func_ov000_0214a160(arg0, i, i == 5 ? 1 : 0);
        i += 1;
    } while (i < 10);
}
