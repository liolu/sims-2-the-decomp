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

void func_02083c90(u8 *a, s32 b);
void func_0203d23c(s32 a, U16One b);
U16Pair func_0203e270(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, U16Pair g, U8Quad h, s32 i);
void func_0203cd34(void *a);
void func_0203ded0(U16One a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, U16Pair h, U8Quad i, s32 j);
s32 func_0203b9b4(s32 a, s32 b);
void func_02046398(s32 a, s32 b, s32 c);
u16 *func_0203b9dc(s32 a);
s32 func_020445ec(s32 a);
void func_02050718(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02049c1c(s32 a, void *b);
void func_0203f0c4(s32 a, s32 b, s32 c);
void func_0203f288(s32 a, s32 b, s32 c, s32 d);
s32 func_020468a0(s32 a, s32 b, s32 c);
s32 func_0203f920(s32 a, s32 b, s32 c, void *d, s32 e);
s32 func_020524a8(s32 a);
void func_02050970(s32 a);
void func_02051b54(s32 a, s32 b, s32 c);
s32 func_02018570(void *a);
void func_02018518(s32 a, s32 b, s32 c);
void func_0201689c(s32 a, s32 b);
s32 func_02046ae0(s32 a, s32 b);
void func_02046958(s32 a, void *b, s32 c);
void func_0204eed8(s32 a, s32 b);
void func_0204ee8c(s32 a, s32 b);
void func_ov000_0214a430(u8 *a, s32 b);
void func_ov000_02149dc0(u8 *a, s32 b, s32 c);
extern u8 *data_0213df5c;
extern u8 *data_02139a84;
extern u16 data_ov000_0214e49c;
extern u16 data_ov000_0214e490;
extern u16 data_ov000_0214e488;
extern u8 data_ov000_0214e680[4];
extern u16 data_ov000_0214e494;
extern u8 data_ov000_0214e498;
extern u32 data_027e0000;
extern u8 data_ov000_0214e6ac;
extern u8 data_ov000_0214e4a0[2];
extern u8 data_ov000_0214e534;

void func_ov000_0214dd94(u8 *arg0) {
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

    e = data_0213df5c;
    if (e[0x52] < 0x32) {
        e[0x52] = e[0x52] + 1;
        e       = data_0213df5c;
        if (e[0x52] >= 0x32) {
            func_02083c90(e + 0x18, 0xa2);
            g                    = data_02139a84;
            *(s32 *) (g + 0xe38) = 0xc21;
            *(s32 *) (g + 0xe3c) = -1;
            g[0xe40]             = 0;
        }
    }
    func_0203d23c(3, *(U16One *) &data_ov000_0214e49c);
    pb    = (u8 *) &q1;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    ph    = (u16 *) &p1;
    ph[0] = 0;
    ph[1] = 0;
    func_0203e270(3, 0x220, 0, 0, 0, 0, p1, q1, 0);
    func_0203d23c(2, *(U16One *) &data_ov000_0214e490);
    pb    = (u8 *) &q2;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    ph    = (u16 *) &p2;
    ph[0] = 0;
    ph[1] = 0;
    func_0203e270(2, 0x21f, 1, 0, 0, 0, p2, q2, 1);
    func_0203cd34(&data_ov000_0214e488);
    q3              = *(U8Quad *) data_ov000_0214e680;
    ((u8 *) &q3)[1] = 0;
    ph              = (u16 *) &p3;
    ph[0]           = 0;
    ph[1]           = 0;
    func_0203ded0(*(U16One *) &data_ov000_0214e488, 0x225, 1, 0, 0, 0, 0, p3, q3, 1);
    func_0203d23c(1, *(U16One *) &data_ov000_0214e494);
    r                                = func_0203b9b4(((u32) (data_ov000_0214e494 << 27)) >> 29, 0);
    *(s32 *) (arg0 + 0xc000 + 0x9e0) = r;
    func_02046398(*(s32 *) (arg0 + 0xc000 + 0x9e0), 0, 0x6000);
    r = ((u32) (data_ov000_0214e494 << 19)) >> 27;
    i = 0;
    do {
        ph    = func_0203b9dc(r);
        ph[i] = i | 0x1000;
        i += 1;
    } while (i < 0x300);
    func_02046398((s32) (arg0 + 0x120), 0, 0xc000);
    func_02046398((s32) (arg0 + 0x28), 0, 0x30);
    *(s32 *) (arg0 + 0x118) = func_020445ec(0x13a3);
    *(s32 *) (arg0 + 0x11c) = func_020445ec(0x25);
    func_02050718(1, 0x2e, 0x2e, 0x2e, 0);
    func_02049c1c(0xa, &data_ov000_0214e498);
    func_0203f0c4((data_027e0000 << 10) + 0x5000000, 0, 4);

    func_0203f288(0x221, 0x20, 0x10, 0x10);
    r = func_020468a0(0x18, 3, 4);
    if (r != 0) {
        t1c   = 0x88;
        i     = func_020445ec(0x221);
        pbase = (data_027e0000 << 10) + 0x5000000;
        r     = func_0203f920(r, pbase + 0x34, i + 0x14, &data_ov000_0214e6ac, t1c);
    }
    *(s32 *) (arg0 + 0xc000 + 0x9e4) = r;
    t18                              = func_020524a8(0x1c);
    func_02050970(0);
    func_02051b54(3, 0, 0);
    r                                = func_02018570(&t18);
    *(s32 *) (arg0 + 0xc000 + 0x9e8) = r;
    func_02018518(*(s32 *) (arg0 + 0xc000 + 0x9e8), data_ov000_0214e4a0[0], data_ov000_0214e4a0[1]);
    func_0201689c(*(s32 *) (arg0 + 0xc000 + 0x9e8), 2);
    r = func_020468a0(8, 0, 4);
    if (r != 0) {
        r = func_02046ae0(r, 0xe);
    }
    *(s32 *) (arg0 + 0x24) = r;
    func_02046958(*(s32 *) (arg0 + 0x24), &data_ov000_0214e534, 0xe);
    i = 0;
    do {
        func_0201689c(((s32 *) **(s32 ***) (arg0 + 0x24))[i], 2);
        i += 1;
    } while (i < 10);
    i = 10;
    do {
        tbl = (s32 *) **(s32 ***) (arg0 + 0x24);
        ((u32 *) tbl[i])[1] &= ~1;
        func_0201689c(((s32 *) **(s32 ***) (arg0 + 0x24))[i], 0);
        i += 1;
    } while (i < 13);
    func_0201689c(((s32 *) **(s32 ***) (arg0 + 0x24))[0xd], 2);
    func_0204eed8(2, 0x3d);
    func_0204ee8c(0xe, 4);
    *(s32 *) (arg0 + 0xc000 + 0x9f0) = 0x1388;
    *(arg0 + 0xc000 + 0x9f7)         = 0;
    *(arg0 + 0xc000 + 0x9f4)         = 0;
    *(arg0 + 0xc000 + 0x9f5)         = 0;
    *(arg0 + 0xc000 + 0x9f6)         = 0;
    *(s32 *) (arg0 + 0xc000 + 0x9ec) = 0;
    *(arg0 + 0xc000 + 0x9ff)         = 3;
    func_ov000_0214a430(arg0, *(arg0 + 0xc000 + 0x9f6));
    i = 5;
    do {
        func_ov000_02149dc0(arg0, i, i == 5 ? 1 : 0);
        i += 1;
    } while (i < 10);
}
