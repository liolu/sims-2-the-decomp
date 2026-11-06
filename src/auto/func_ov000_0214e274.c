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

void func_02083dc8(u8 *a, s32 b);
void func_0203d208(s32 a, U16One b);
U16Pair func_0203e23c(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, U16Pair g, U8Quad h, s32 i);
void func_0203cd00(void *a);
void func_0203de9c(U16One a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, U16Pair h, U8Quad i, s32 j);
s32 func_0203b980(s32 a, s32 b);
void func_02046384(s32 a, s32 b, s32 c);
u16 *func_0203b9a8(s32 a);
s32 func_020445d8(s32 a);
void func_0205077c(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02049c08(s32 a, void *b);
void func_0203f05c(s32 a, s32 b, s32 c);
void func_0203f220(s32 a, s32 b, s32 c, s32 d);
s32 func_0204688c(s32 a, s32 b, s32 c);
s32 func_0203f8b8(s32 a, s32 b, s32 c, void *d, s32 e);
s32 func_02052258(s32 a);
void func_020509d4(s32 a);
void func_02051a50(s32 a, s32 b, s32 c);
s32 func_02018578(void *a);
void func_02018520(s32 a, s32 b, s32 c);
void func_020168a4(s32 a, s32 b);
s32 func_02046acc(s32 a, s32 b);
void func_02046944(s32 a, void *b, s32 c);
void func_0204ef3c(s32 a, s32 b);
void func_0204eef0(s32 a, s32 b);
void func_ov000_0214a910(u8 *a, s32 b);
void func_ov000_0214a2a0(u8 *a, s32 b, s32 c);
extern u8 *data_0213e434;
extern u8 *data_02139fa4;
extern u16 data_ov000_0214e97c;
extern u16 data_ov000_0214e970;
extern u16 data_ov000_0214e968;
extern u8 data_ov000_0214eb60[4];
extern u16 data_ov000_0214e974;
extern u8 data_ov000_0214e978;
extern u32 data_027e0000;
extern u8 data_ov000_0214eb8c;
extern u8 data_ov000_0214e980[2];
extern u8 data_ov000_0214ea14;

void func_ov000_0214e274(u8 *arg0) {
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

    e = data_0213e434;
    if (e[0x52] < 0x32) {
        e[0x52] = e[0x52] + 1;
        e       = data_0213e434;
        if (e[0x52] >= 0x32) {
            func_02083dc8(e + 0x18, 0xa2);
            g                    = data_02139fa4;
            *(s32 *) (g + 0xe38) = 0xc21;
            *(s32 *) (g + 0xe3c) = -1;
            g[0xe40]             = 0;
        }
    }
    func_0203d208(3, *(U16One *) &data_ov000_0214e97c);
    pb    = (u8 *) &q1;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    ph    = (u16 *) &p1;
    ph[0] = 0;
    ph[1] = 0;
    func_0203e23c(3, 0x220, 0, 0, 0, 0, p1, q1, 0);
    func_0203d208(2, *(U16One *) &data_ov000_0214e970);
    pb    = (u8 *) &q2;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    ph    = (u16 *) &p2;
    ph[0] = 0;
    ph[1] = 0;
    func_0203e23c(2, 0x21f, 1, 0, 0, 0, p2, q2, 1);
    func_0203cd00(&data_ov000_0214e968);
    q3              = *(U8Quad *) data_ov000_0214eb60;
    ((u8 *) &q3)[1] = 0;
    ph              = (u16 *) &p3;
    ph[0]           = 0;
    ph[1]           = 0;
    func_0203de9c(*(U16One *) &data_ov000_0214e968, 0x225, 1, 0, 0, 0, 0, p3, q3, 1);
    func_0203d208(1, *(U16One *) &data_ov000_0214e974);
    r                                = func_0203b980(((u32) (data_ov000_0214e974 << 27)) >> 29, 0);
    *(s32 *) (arg0 + 0xc000 + 0x9e0) = r;
    func_02046384(*(s32 *) (arg0 + 0xc000 + 0x9e0), 0, 0x6000);
    r = ((u32) (data_ov000_0214e974 << 19)) >> 27;
    i = 0;
    do {
        ph    = func_0203b9a8(r);
        ph[i] = i | 0x1000;
        i += 1;
    } while (i < 0x300);
    func_02046384((s32) (arg0 + 0x120), 0, 0xc000);
    func_02046384((s32) (arg0 + 0x28), 0, 0x30);
    *(s32 *) (arg0 + 0x118) = func_020445d8(0x13a3);
    *(s32 *) (arg0 + 0x11c) = func_020445d8(0x25);
    func_0205077c(1, 0x2e, 0x2e, 0x2e, 0);
    func_02049c08(0xa, &data_ov000_0214e978);
    func_0203f05c((data_027e0000 << 10) + 0x5000000, 0, 4);

    func_0203f220(0x221, 0x20, 0x10, 0x10);
    r = func_0204688c(0x18, 3, 4);
    if (r != 0) {
        t1c   = 0x88;
        i     = func_020445d8(0x221);
        pbase = (data_027e0000 << 10) + 0x5000000;
        r     = func_0203f8b8(r, pbase + 0x34, i + 0x14, &data_ov000_0214eb8c, t1c);
    }
    *(s32 *) (arg0 + 0xc000 + 0x9e4) = r;
    t18                              = func_02052258(0x1c);
    func_020509d4(0);
    func_02051a50(3, 0, 0);
    r                                = func_02018578(&t18);
    *(s32 *) (arg0 + 0xc000 + 0x9e8) = r;
    func_02018520(*(s32 *) (arg0 + 0xc000 + 0x9e8), data_ov000_0214e980[0], data_ov000_0214e980[1]);
    func_020168a4(*(s32 *) (arg0 + 0xc000 + 0x9e8), 2);
    r = func_0204688c(8, 0, 4);
    if (r != 0) {
        r = func_02046acc(r, 0xe);
    }
    *(s32 *) (arg0 + 0x24) = r;
    func_02046944(*(s32 *) (arg0 + 0x24), &data_ov000_0214ea14, 0xe);
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
    func_0204ef3c(2, 0x3d);
    func_0204eef0(0xe, 4);
    *(s32 *) (arg0 + 0xc000 + 0x9f0) = 0x1388;
    *(arg0 + 0xc000 + 0x9f7)         = 0;
    *(arg0 + 0xc000 + 0x9f4)         = 0;
    *(arg0 + 0xc000 + 0x9f5)         = 0;
    *(arg0 + 0xc000 + 0x9f6)         = 0;
    *(s32 *) (arg0 + 0xc000 + 0x9ec) = 0;
    *(arg0 + 0xc000 + 0x9ff)         = 3;
    func_ov000_0214a910(arg0, *(arg0 + 0xc000 + 0x9f6));
    i = 5;
    do {
        func_ov000_0214a2a0(arg0, i, i == 5 ? 1 : 0);
        i += 1;
    } while (i < 10);
}
