/* compiler: 1.2/sp2p3 */
#include "m2c.h"

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

typedef struct {
    u16 v;
} W16;
typedef struct {
    s32 v;
} W32;
typedef struct {
    u16 a, b;
} S16;
typedef struct {
    u8 a, b, c, d;
} S8;
typedef struct {
    s32 w[4];
} Row;

extern u8 *data_0213e580;
extern u8 data_ov013_0214adb0;
extern u8 data_ov013_0214adb4;
extern u16 data_ov013_0214adbc[];
extern Row data_ov013_0214b004[];
extern u8 data_0212fff8;
extern u8 data_ov013_0214ae0c;
extern u8 *data_02139fa4;

s32 func_0200fb30(u8 *, s32, s32);
void func_02011090(u8 *, s32, s32, s32, s32);
void func_02046384(u8 *, s32, s32);
u8 *func_020465f8(s32, s32, s32);
void func_0203cfb0(s32);
void func_0203cec4(s32);
void func_0203d208(s32, W16);
void func_0203cc08(s32, s32);
void func_02051b80(W16);
void func_02051a50(s32, s32, s32);
void func_0203e23c(s32, s32, s32, s32, s32, s32, S16, S8, s32);
void func_0205077c(s32, s32, s32, s32, s32);
u8 *func_02052258(s32);
void func_02051338(s32, s32, s32, u8 *, s32);
void func_ov013_0214a530(u8 *);
void func_ov013_0214a1a4(u8 *);
u8 *func_0204688c(s32, s32, s32);
void func_02017768(u8 *, s32);
void func_02017380(u8 *, W32, W32, W32, s32);
void func_02058b3c(u8 *);

void func_ov013_0214a9f0(u8 *arg0) {
    u8 fr[0x24];
    u8 *pb;
    u16 *ph;
    u8 *o;
    u8 *g;
    u16 i;
    Row *row;
    s32 tx;
    s32 ty;
    u8 *o2;
    s32 *sp4;
    s32 *dp;

    func_0200fb30(*(u8 **) (data_0213e580 + 0xF8), 1, 0);
    func_02011090(*(u8 **) (data_0213e580 + 0xF8), 0, 1, 1, 0);
    *(s32 *) (arg0 + 0xE0) = *(s32 *) (arg0 + 8);
    func_02046384(arg0 + 0x24, 0, 0x60);
    func_02046384(arg0 + 0x84, 0, 0x20);
    *(s32 *) (arg0 + 0xC8) = -1;
    *(s32 *) (arg0 + 0xCC) = -1;
    *(s32 *) (arg0 + 0xD0) = 0;
    *(u16 *) (arg0 + 0xD8) = 0;
    *(u8 **) (arg0 + 0xD4) = func_020465f8(0x20, 3, 4);
    func_0203cfb0(0);
    func_0203cec4(0x1000);
    *(u16 *) fr = *(u16 *) &data_ov013_0214adb0;
    func_0203d208(1, *(W16 *) fr);
    func_0203cc08(1, 0);
    func_02051b80(*(W16 *) fr);
    func_02051a50(3, 0, -1);
    func_0203d208(2, *(W16 *) &data_ov013_0214adb4);
    pb    = fr + 0x20;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    ph    = (u16 *) (fr + 0x1C);
    ph[0] = 0;
    ph[1] = 0;
    func_0203e23c(2, data_ov013_0214adbc[*(s32 *) (arg0 + 0xE0)], 2, 0, 0, 0x100, *(S16 *) (fr + 0x1C), *(S8 *) (fr + 0x20),
                  0);
    func_0205077c(0x20, 0x2E, 0x2E, 0x2E, 0);
    func_02051338(1, data_ov013_0214b004[*(s32 *) (arg0 + 0xE0)].w[0], 0xE, func_02052258(*(s32 *) (arg0 + 0xE0) + 0x13A), 1);
    *(u16 *) (arg0 + 0xD8) = 0;
    func_ov013_0214a530(arg0);
    i = 0;
    do {
        if (*(s32 *) (arg0 + i * 4 + 0x84) != 0) {
            *(s32 *) (arg0 + i * 4 + 0x84) = 0;
        }
        i = i + 1;
    } while (i < 8);
    func_ov013_0214a1a4(arg0);
    arg0[0xDA]             = 0;
    arg0[0xDB]             = 1;
    *(s32 *) (arg0 + 0xD0) = 1;
    arg0[0xDC]             = 0;
    arg0[0xDD]             = 1;
    *(u16 *) (arg0 + 0xDE) = 0xFFFF;
    o                      = func_0204688c(0xA0, 0, 4);
    if (o != 0) {
        func_02017768(o, 0);
        *(u8 **) o          = &data_0212fff8;
        *(u8 **) (o + 0x90) = &data_ov013_0214ae0c;
        *(s32 *) (o + 0x94) = 9;
        *(s32 *) (o + 0x98) = 0;
        o[0x9C]             = 1;
        o[0x9D]             = 0;
        ((VA *) o)->f9(o[0x9D]);
    }
    *(u8 **) (arg0 + 0xC4) = o;
    o2                     = *(u8 **) (arg0 + 0xC4);
    row                    = &data_ov013_0214b004[*(s32 *) (arg0 + 0xE0)];
    sp4                    = row->w + 1;
    dp                     = (s32 *) (o2 + 0x50);
    tx                     = sp4[0];
    *(s32 *) (fr + 0x14)   = tx;
    dp[0]                  = tx;
    ty                     = sp4[1];
    *(s32 *) (fr + 0x18)   = ty;
    dp[1]                  = ty;
    *(s32 *) (fr + 0x10)   = 0x10000;
    *(s32 *) (fr + 0xC)    = 0x10000;
    *(s32 *) (fr + 8)      = -0x10000;
    *(s32 *) (fr + 4)      = -0x10000;
    func_02017380(*(u8 **) (arg0 + 0xC4), *(W32 *) (fr + 4), *(W32 *) (fr + 8), *(W32 *) (fr + 0xC), 0x10000);
    o                    = *(u8 **) (arg0 + 0xC4);
    *(s32 *) (o + 0x14)  = (*(s32 *) (o + 0x14) & ~0xC00) | 0x400;
    g                    = data_02139fa4;
    *(s32 *) (g + 0xD90) = 0;
    *(s32 *) (g + 0xD94) = 2;
    *(s32 *) (g + 0xD98) = 0x1D;
    *(s32 *) (g + 0xDA0) = 0;
    *(s32 *) (g + 0xD9C) = 0;
    g[0xDA4]             = 1;
    g[0xDA5]             = 0;
    *(s32 *) (g + 8)     = 0;
    func_02058b3c(g);
    arg0[0xE4] = 0;
}
}
