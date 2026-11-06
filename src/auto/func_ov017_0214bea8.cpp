/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u16 v;
} S16;
typedef struct {
    u16 x, y;
} HH;
typedef struct {
    u8 a, b, c, d;
} B4;
typedef struct {
    volatile s32 p18;
    volatile s32 p1c;
    volatile s32 v[0x18];
    HH h80;
    B4 b84;
    HH h88;
    B4 b8c;
    u8 buf90[0x34];
    volatile s32 c4;
    volatile s32 c8;
    s32 cc;
    s32 d0;
    u8 d4;
    u8 padd5[3];
    s32 d8;
    s32 dc;
} Fr;
extern "C" {
extern S16 data_ov017_0214c604;
extern S16 data_ov017_0214c4b0;
extern u8 *data_0213e580;
extern u8 data_ov017_0214c610[];
extern u8 data_ov017_0214c614[];
extern S16 data_ov017_0214c4a0;
extern u8 data_ov017_0214c600[];
extern u8 data_ov017_0214c62c[];
extern u8 data_ov017_0214c60c[];
extern u8 data_ov017_0214c61c[];
extern u8 data_ov017_0214c608[];
extern u8 data_ov017_0214c624[];

void func_0203cfb0(...);
void func_0203cec4(...);
void func_0203d208(s32, S16);
void func_0203e23c(s32, s32, s32, s32, s32, s32, HH, B4, s32);
void func_02049c74(...);
void func_0205077c(...);
void func_02051a50(...);
void func_02018af8(...);
u8 *func_020d59bc(...);
void func_0204ef3c(...);
void func_0204eef0(...);
u8 *func_02046880(...);
void func_02101d74(...);
void func_021023e8(...);
void func_021023d0(...);
u8 *func_0204688c(...);
u8 *func_020170c4(...);
void func_020499a8(...);
void func_02016708(...);
void func_020168a4(...);
void func_02016688(...);
void func_02051d90(...);
void func_02050ab4(...);
u8 *func_02052258(...);
u8 *func_02018578(...);

void func_ov017_0214bea8(u8 *arg0) {
    u16 s14;
    Fr fr;
    u8 *pp;
    u8 *o;
    u8 *g;
    u8 *r;
    u32 i;
    s32 z;
    s32 t;

    s14 = data_ov017_0214c604.v;
    func_0203cfb0(0);
    func_0203cec4(0x1000);
    func_0203d208(2, data_ov017_0214c4b0);
    pp              = (u8 *) &fr.b84;
    z               = 0;
    pp[0]           = z;
    pp[1]           = z;
    pp[2]           = z;
    pp[3]           = z;
    pp              = (u8 *) &fr.h80;
    ((u16 *) pp)[0] = z;
    ((u16 *) pp)[1] = z;
    func_0203e23c(2, 0x2106, 1, 0x20, 0x20, 0, fr.h80, fr.b84, 1);
    func_0203d208(3, *(S16 *) &s14);
    pp              = (u8 *) &fr.b8c;
    z               = 0;
    pp[0]           = z;
    pp[1]           = z;
    pp[2]           = z;
    pp[3]           = z;
    pp              = (u8 *) &fr.h88;
    ((u16 *) pp)[0] = z;
    ((u16 *) pp)[1] = z;
    func_0203e23c(3, 0x211d, 1, 0x10, 0x10, 0xf0, fr.h88, fr.b8c, z);
    func_02049c74();
    func_0205077c(0x20, 0x21, 6, 0x2e, 0);
    func_02051a50(3, 0, 0);
    arg0[0x24] = 0;
    g          = *(u8 **) (data_0213e580 + 0xf8);
    if (g != 0) {
        func_02018af8(g + 0x128, 0x1d, arg0 + 0x24, 2);
    }
    *(u8 **) (arg0 + 0x18c) = func_020d59bc(0x114);
    i                       = 0;
    z                       = 0;
    do {
        (arg0 + i * 0x1c)[0x40] = z;
        i                       = (u8) (i + 1);
    } while (i < 10);
    *(u16 *) (arg0 + 0x26) = 10;
    arg0[0x15c]            = 4;
    func_0204ef3c(1, 0x1e);
    func_0204eef0(arg0[0x15c], (u16) (0x10 - arg0[0x15c]));
    arg0[0x158]             = 0;
    arg0[0x159]             = 0;
    arg0[0x15a]             = 0;
    arg0[0x15b]             = 1;
    fr.c4                   = 2;
    r                       = func_02046880(0x1f5f, 3, 4);
    fr.c8                   = (s32) r;
    *(u8 **) (arg0 + 0x144) = r;
    z                       = 0;
    t                       = fr.c8 + 0x1f;
    fr.d0                   = 0x105d;
    fr.c8                   = t & ~0x1f;
    fr.cc                   = 0x1f40;
    fr.d4                   = 1;
    fr.d8                   = z;
    fr.dc                   = z;
    func_02101d74(&fr.c4);
    func_021023e8(1);
    func_021023d0(1);
    z                       = 0;
    arg0[0x162]             = z;
    arg0[0x163]             = 1;
    arg0[0x164]             = z;
    *(u16 *) (arg0 + 0x160) = z;
    *(s32 *) (arg0 + 0x168) = z;
    *(s32 *) (arg0 + 0x150) = z;
    *(s32 *) (arg0 + 0x154) = 1;
    arg0[0x170]             = z;
    *(s32 *) (arg0 + 0x16c) = z;
    o                       = func_0204688c(0x74, z, 4);
    if (o != 0) {
        o = func_020170c4(o, 0);
    }
    *(u8 **) (arg0 + 0x148) = o;
    func_020499a8(*(u8 **) (arg0 + 0x148), data_ov017_0214c610);
    func_02016708(*(u8 **) (arg0 + 0x148), data_ov017_0214c614);
    fr.v[0]                                   = 0x7f000;
    fr.v[12]                                  = 0x7f000;
    *(s32 *) (*(u8 **) (arg0 + 0x148) + 0x50) = 0x7f000;
    fr.v[1]                                   = 0xa3000;
    fr.v[13]                                  = 0xa3000;
    *(s32 *) (*(u8 **) (arg0 + 0x148) + 0x54) = 0xa3000;
    func_020168a4(*(u8 **) (arg0 + 0x148), 2);
    o                = *(u8 **) (arg0 + 0x148);
    *(u32 *) (o + 4) = *(u32 *) (o + 4) | 0x10;
    func_02016688(*(u8 **) (arg0 + 0x148), data_ov017_0214c4a0.v, 0);
    o = func_0204688c(0x74, 0, 4);
    if (o != 0) {
        o = func_020170c4(o, 0);
    }
    *(u8 **) (arg0 + 0x14c) = o;
    func_020499a8(*(u8 **) (arg0 + 0x14c), data_ov017_0214c600);
    func_02016708(*(u8 **) (arg0 + 0x14c), data_ov017_0214c62c);
    fr.v[2]                                   = 0xf000;
    fr.v[14]                                  = 0xf000;
    *(s32 *) (*(u8 **) (arg0 + 0x14c) + 0x50) = 0xf000;
    fr.v[3]                                   = 0xaf000;
    fr.v[15]                                  = 0xaf000;
    *(s32 *) (*(u8 **) (arg0 + 0x14c) + 0x54) = 0xaf000;
    func_020168a4(*(u8 **) (arg0 + 0x14c), 0);
    o                = *(u8 **) (arg0 + 0x14c);
    *(u32 *) (o + 4) = *(u32 *) (o + 4) & ~1;
    o                = *(u8 **) (arg0 + 0x14c);
    *(u32 *) (o + 4) = *(u32 *) (o + 4) | 0x10;
    o                = func_0204688c(0x74, 0, 4);
    if (o != 0) {
        o = func_020170c4(o, 0);
    }
    *(u8 **) (arg0 + 0x174) = o;
    func_020499a8(*(u8 **) (arg0 + 0x174), data_ov017_0214c60c);
    func_02016708(*(u8 **) (arg0 + 0x174), data_ov017_0214c61c);
    fr.v[4]                                   = 0xe0000;
    fr.v[16]                                  = 0xe0000;
    *(s32 *) (*(u8 **) (arg0 + 0x174) + 0x50) = 0xe0000;
    fr.v[5]                                   = 0x4000;
    fr.v[17]                                  = 0x4000;
    *(s32 *) (*(u8 **) (arg0 + 0x174) + 0x54) = 0x4000;
    func_020168a4(*(u8 **) (arg0 + 0x174), 2);
    o = func_0204688c(0x74, 0, 4);
    if (o != 0) {
        o = func_020170c4(o, 0);
    }
    *(u8 **) (arg0 + 0x178) = o;
    func_020499a8(*(u8 **) (arg0 + 0x178), data_ov017_0214c608);
    func_02016708(*(u8 **) (arg0 + 0x178), data_ov017_0214c624);
    fr.v[6]                                   = 0xe0000;
    fr.v[18]                                  = 0xe0000;
    *(s32 *) (*(u8 **) (arg0 + 0x178) + 0x50) = 0xe0000;
    fr.v[7]                                   = 0x4000;
    fr.v[19]                                  = 0x4000;
    *(s32 *) (*(u8 **) (arg0 + 0x178) + 0x54) = 0x4000;
    func_020168a4(*(u8 **) (arg0 + 0x178), 3);
    func_02051d90(0, fr.buf90);
    func_02050ab4(fr.buf90);
    fr.p18                  = (s32) func_02052258(0x1c);
    *(u8 **) (arg0 + 0x17c) = func_02018578(&fr.p18);
    func_020168a4(*(u8 **) (arg0 + 0x17c), 1);
    fr.v[8]                                   = 0x8000;
    fr.v[20]                                  = 0x8000;
    *(s32 *) (*(u8 **) (arg0 + 0x17c) + 0x50) = 0x8000;
    fr.v[9]                                   = 0x4000;
    fr.v[21]                                  = 0x4000;
    *(s32 *) (*(u8 **) (arg0 + 0x17c) + 0x54) = 0x4000;
    func_02051d90(0, fr.buf90);
    fr.p1c                  = (s32) fr.buf90;
    *(u8 **) (arg0 + 0x180) = func_02018578(&fr.p1c);
    func_020168a4(*(u8 **) (arg0 + 0x180), 0);
    fr.v[10]                                  = 0x68000;
    fr.v[22]                                  = 0x68000;
    *(s32 *) (*(u8 **) (arg0 + 0x180) + 0x50) = 0x68000;
    fr.v[11]                                  = 0xb0000;
    fr.v[23]                                  = 0xb0000;
    *(s32 *) (*(u8 **) (arg0 + 0x180) + 0x54) = 0xb0000;
    o                                         = *(u8 **) (arg0 + 0x180);
    *(u32 *) (o + 4)                          = *(u32 *) (o + 4) & ~1;
    arg0[0x190]                               = 1;
    arg0[0x188]                               = 0;
}
}
