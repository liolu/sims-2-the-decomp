/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 v;
} U16One;
typedef struct {
    s32 v;
} W;
typedef struct {
    u8 pad[0x1fa];
    u16 a, b, c;
    u8 pad2[0x400 - 0x200];
} Row;
typedef struct {
    u16 a, b;
} U16Pair;
typedef struct {
    u8 a, b, c, d;
} U8Quad;

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
    virtual void f9(s32 a);
};

extern "C" {

void func_020d544c(s32 a);
void func_02046384(u8 *a, s32 b, s32 c);
void func_0203cec4(s32 a);
void func_0203d208(s32 a, U16One b);
void func_0203cc08(s32 a, s32 b);
void func_0203e23c(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, U16Pair g, U8Quad h, s32 i);
void func_020843e8(s32 a, s32 b, s32 c, s32 d);
void func_02049c74(void);
void func_02049c08(s32 a, s32 b);
u8 *func_0204688c(s32 a, s32 b, s32 c);
void func_02017768(u8 *a, s32 b);
void func_020172bc(u8 *a, W b);
u8 *func_ov010_0214d854(u8 *a);
u8 *func_ov010_0214d044(u8 *a);
u8 *func_ov010_0214baf0(u8 *a, s32 b);
u8 *func_ov010_0214b754(u8 *a, s32 b);
u8 *func_ov010_0214b9a0(u8 *a, s32 b, s32 c);
void func_0203e9e8(void *a);
void func_ov010_0214a024(u8 *a);
s32 func_0204cbb4(s32 a, s32 b);
void func_ov010_0214fdec(u8 *a);
u8 *func_020170c4(u8 *a, s32 b);
void func_02049b00(u8 *a, s32 b);
void func_02016708(u8 *a, void *b);
void func_020168a4(u8 *a, s32 b);
void func_ov010_02151e28(u8 *a, s32 b);
void func_0200fb30(u8 *a, s32 b, s32 c);
void func_02011090(u8 *a, s32 b, s32 c, s32 d, s32 e);

extern u8 data_ov010_02152ee4;
extern u16 data_ov010_02152b54;
extern u16 data_ov010_02152b64;
extern u16 data_ov010_02152b4c;
extern u16 data_ov010_02152b14;
extern s32 data_ov010_02152d4c[];
extern u32 data_027e0000;
extern u8 data_0212fff8;
extern u8 data_ov010_02152c68;
extern u8 data_ov010_02152e28;
extern u8 data_ov010_02152c58;
extern u8 *data_02139fa4;
extern u8 data_ov010_02152ee0;
extern u8 data_ov010_02152bbc;
extern u8 *data_0213e580;

void func_ov010_02151eb4(u8 *arg0) {
    volatile s32 w14;
    volatile s32 v18[2];
    volatile s32 v20[2];
    volatile s32 v28[2];
    volatile s32 v30[2];
    U16Pair p1;
    U8Quad q1;
    U16Pair p2;
    U8Quad q2;
    u32 k;
    u8 *c;
    s32 v;
    u32 k2;
    u8 *c2;
    s32 v2;
    u8 *pb;
    u16 *ph;
    u8 *o;
    s32 z;
    s32 j;
    s32 i;
    u8 *p;
    s32 ok;
    s32 x;
    s32 sb;
    s32 *q;
    u32 bb;
    u8 *gb0;
    u8 *gb1;
    u8 *gb2;

    func_020d544c(0x29);
    data_ov010_02152ee4 = 4;
    func_02046384(arg0 + 0x30, 0, 0x1bc);
    arg0[0x1f0]                    = 0;
    arg0[0x1f1]                    = 0;
    *(u16 *) (arg0 + 0x100 + 0xf2) = 0;
    arg0[0x1f7]                    = 0;
    arg0[0x1ff]                    = 0;
    arg0[0x207]                    = 0;
    func_0203cec4(0x1000);
    func_0203d208(3, *(U16One *) &data_ov010_02152b54);
    func_0203d208(2, *(U16One *) &data_ov010_02152b64);
    func_0203d208(1, *(U16One *) &data_ov010_02152b4c);
    func_0203d208(0, *(U16One *) &data_ov010_02152b14);
    func_0203cc08(2, 0);
    func_0203cc08(1, 0);
    func_0203cc08(0, 0);
    pb    = (u8 *) &q1;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    ph    = (u16 *) &p1;
    ph[0] = 0;
    ph[1] = 0;
    func_0203e23c(3, 0x305, 1, 0, 0, 0, p1, q1, 0);
    pb    = (u8 *) &q2;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    ph    = (u16 *) &p2;
    ph[0] = 0;
    ph[1] = 0;
    func_0203e23c(2, 0x306, 0x191, 0, 0, 0, p2, q2, 0);
    func_020843e8(1, 0x15d6, 1, 4);
    func_02049c74();
    i = 0;
    do {
        func_02049c08(i, data_ov010_02152d4c[i]);
        i += 1;
    } while (i < 0x10);
    gb0                                                   = (u8 *) 0x5000200;
    *(u16 *) (gb0 + 0x100 + 0xfa + (data_027e0000 << 10)) = *(u16 *) ((data_027e0000 << 10) + 0x5000000 + 2);
    *(u16 *) (gb0 + 0x100 + 0xfc + (data_027e0000 << 10)) = *(u16 *) ((data_027e0000 << 10) + 0x5000000 + 4);
    *(u16 *) (gb0 + 0x100 + 0xfe + (data_027e0000 << 10)) = *(u16 *) ((data_027e0000 << 10) + 0x5000000 + 6);
    o                                                     = func_0204688c(0xa0, 3, 4);
    if (o != 0) {
        func_02017768(o, 0);
        *(u8 **) o          = &data_0212fff8;
        *(u8 **) (o + 0x90) = &data_ov010_02152c68;
        *(s32 *) (o + 0x94) = 0xe;
        *(s32 *) (o + 0x98) = 0;
        o[0x9c]             = 1;
        o[0x9d]             = 0;
        ((VA *) o)->f9(o[0x9d]);
        *(u8 **) o = &data_ov010_02152e28;
    }
    *(u8 **) (arg0 + 0x1ec) = o;
    w14                     = 0xa000;
    func_020172bc(*(u8 **) (arg0 + 0x1ec), *(W *) &w14);
    v18[0]                                    = 0xf1000;
    v28[0]                                    = 0xf1000;
    *(s32 *) (*(u8 **) (arg0 + 0x1ec) + 0x50) = 0xf1000;
    v18[1]                                    = 0xb1000;
    v28[1]                                    = 0xb1000;
    *(s32 *) (*(u8 **) (arg0 + 0x1ec) + 0x54) = 0xb1000;
    *(u8 **) (arg0 + 0x1b0)                   = func_ov010_0214d854(arg0);
    *(u8 **) (arg0 + 0x1b4)                   = func_ov010_0214d044(arg0);
    i                                         = 0;
    p                                         = arg0;
    z                                         = i;
    do {
        *(u8 **) (p + 0x30) = func_ov010_0214baf0(arg0, i);
        *(u8 **) (p + 0x34) = func_ov010_0214b754(arg0, i);
        j                   = z;
        do {
            ((u8 **) (p + 0x38))[j] = func_ov010_0214b9a0(arg0, i, j);
            j += 1;
        } while (j < 4);
        i += 1;
        p += 0x2c;
    } while (i < 6);
    func_0203e9e8(&data_ov010_02152c58);
    q = *(s32 **) (data_02139fa4 + 0xda8);
    if (q != 0) {
        x = q[1];
    } else {
        x = 0x32;
    }
    if (x == 2) {
        arg0[0x1ea] |= 1;
        *(s32 *) (arg0 + 0x1c) = 0;
        func_ov010_0214a024(arg0);
    } else {
        *(s32 *) (arg0 + 0x1c) = 1;
        sb                     = *(s8 *) (arg0 + 0x200 + 0xf);
        if (sb == 1) {
            arg0[0x183]             = 1;
            ok                      = 0;
            *(s32 *) (arg0 + 0x178) = ok;
            do {
                *(s32 *) (arg0 + 0x178) = 0;
                *(s32 *) (arg0 + 0x178) = func_0204cbb4(0, 0x38) + 0x143;
                if (*(s32 *) (arg0 + 0x178) != 0x17b) {
                    if ((arg0[0x15b] & 1) == 0 || *(s32 *) (arg0 + 0x150) != *(s32 *) (arg0 + 0x178)) {
                        ok = 1;
                    }
                }
            } while (ok == 0);
            arg0[0x1ab] = 1;
            z = ok                  = 0;
            *(s32 *) (arg0 + 0x1a0) = ok;
            do {
                *(s32 *) (arg0 + 0x1a0) = 0;
                *(s32 *) (arg0 + 0x1a0) = func_0204cbb4(0, 0x38) + 0x143;
                v                       = *(s32 *) (arg0 + 0x1a0);
                if (v != 0x17b) {
                    for (k = z, c = arg0; k < 2; k++) {
                        if ((c[0x15b] & 1) == 0 || *(s32 *) (c + 0x150) != v) {
                            ok = 1;
                        }
                        c += 0x28;
                    }
                }
            } while (ok == 0);
        } else if (sb == 2) {
            arg0[0x1ab] = 1;
            z = ok                  = 0;
            *(s32 *) (arg0 + 0x1a0) = ok;
            do {
                *(s32 *) (arg0 + 0x1a0) = 0;
                *(s32 *) (arg0 + 0x1a0) = func_0204cbb4(0, 0x38) + 0x143;
                v2                      = *(s32 *) (arg0 + 0x1a0);
                if (v2 != 0x17b) {
                    for (k2 = z, c2 = arg0; k2 < 2; k2++) {
                        if ((c2[0x15b] & 1) == 0 || *(s32 *) (c2 + 0x150) != v2) {
                            ok = 1;
                        }
                        c2 += 0x28;
                    }
                }
            } while (ok == 0);
            *(s32 *) (arg0 + 0x178) = 0x6df;
        } else {
            *(s32 *) (arg0 + 0x178) = 0x6df;
            *(s32 *) (arg0 + 0x1a0) = 0x6e0;
        }
        *(s32 *) (arg0 + 0x150) = 0x6de;
        func_ov010_0214fdec(arg0);
        *(s32 *) (arg0 + 0x1c) = 4;
    }
    if (data_ov010_02152ee0 != 0) {
        arg0[0x1e7] = *(s8 *) (arg0 + 0x200 + 0xf);
        if (arg0[0x1e7] != 0) {
            arg0[0x1e7] = arg0[0x1e7] - 1;
        }
    } else {
        arg0[0x1e7] = 0;
    }
    if (data_ov010_02152ee0 != 0) {
        *(s32 *) (arg0 + 0x2c) = 0;
        o                      = func_0204688c(0x74, 0, 4);
        if (o != 0) {
            o = func_020170c4(o, 0);
        }
        *(u8 **) (arg0 + 0x24) = o;
        func_02049b00(*(u8 **) (arg0 + 0x24), 0xf);
        func_02016708(*(u8 **) (arg0 + 0x24), &data_ov010_02152bbc);
        o = *(u8 **) (arg0 + 0x24);
        *(u32 *) (o + 4) |= 0x10;
        func_020168a4(*(u8 **) (arg0 + 0x24), 0);
        v20[0]                                   = 0;
        v30[0]                                   = 0;
        *(s32 *) (*(u8 **) (arg0 + 0x24) + 0x50) = 0;
        v20[1]                                   = 0xb1000;
        v30[1]                                   = 0xb1000;
        *(s32 *) (*(u8 **) (arg0 + 0x24) + 0x54) = 0xb1000;
        func_ov010_02151e28(arg0, 1);
    } else {
        func_0200fb30(*(u8 **) (data_0213e580 + 0xf8), 1, 0);
        func_02011090(*(u8 **) (data_0213e580 + 0xf8), 0, 1, 1, 0);
        *(s32 *) (arg0 + 0x24) = 0;
    }
}
}
