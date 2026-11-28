/* compiler: 1.2/sp2p3 */
#include "m2c.h"

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
    S16 h14, h16, h18;
    volatile s32 z1c;
    s32 A[26];
    volatile s32 z88;
    s32 B[26];
    A16 af4;
    B8 bf8;
    A16 afc;
    B8 b100;
    A16 a104;
    B8 b108;
} Fr;

void func_0203cfe4(s32);
void func_0203c574(void);
void func_0203cef8(s32);
void func_0203d23c(s32, S16);
void func_0203e270(s32, s32, s32, s32, s32, s32, A16, B8, s32);
void func_02018af0(u8 *, s32, u8 *, s32);
u8 *func_020468a0(s32, s32, s32);
u8 *func_020170bc(u8 *, s32);
void func_02016700(u8 *, u8 *);
void func_0201689c(u8 *, s32);
void func_02049b14(u8 *, s32);
void func_0204eed8(s32, s32);
void func_0204ee8c(s32, s32);
extern S16 data_ov018_0214b360;
extern S16 data_ov018_0214b364;
extern S16 data_ov018_0214b368;
extern s32 data_027e0000;
extern u8 *data_0213e0a8;
extern u8 data_ov018_0214b394;
extern u8 data_ov018_0214b3ac;
extern u8 data_ov018_0214b39c;
extern u8 data_ov018_0214b3a4;
extern u8 data_ov018_0214b38c;
extern u8 data_ov018_0214b36c;
extern u8 data_ov018_0214b374;
extern u8 data_ov018_0214b37c;
extern u8 data_ov018_0214b384;

void func_ov018_0214a9e0(u8 *arg0) {
    Fr fr;
    u8 *pb;
    u16 *pa;
    u8 *o;
    u8 *p;
    s32 i;
    s32 k;
    s32 l;

    fr.h14 = data_ov018_0214b364;
    fr.h16 = data_ov018_0214b360;
    fr.h18 = data_ov018_0214b368;
    func_0203cfe4(0);
    func_0203c574();
    func_0203cef8(0x1000);
    func_0203d23c(1, fr.h14);
    pb    = (u8 *) &fr.bf8;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    pa    = (u16 *) &fr.af4;
    pa[0] = 0;
    pa[1] = 0;
    func_0203e270(1, 0xac5, 1, 0, 0, 0x100, fr.af4, fr.bf8, 0);
    func_0203d23c(2, fr.h16);
    pb    = (u8 *) &fr.b100;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    pa    = (u16 *) &fr.afc;
    pa[0] = 0;
    pa[1] = 0;
    func_0203e270(2, 0xac6, 1, 0, 0, 0x100, fr.afc, fr.b100, 0);
    func_0203d23c(3, fr.h18);
    pb    = (u8 *) &fr.b108;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    pa    = (u16 *) &fr.a104;
    pa[0] = 0;
    pa[1] = 0;
    func_0203e270(3, 0xac7, 1, 0, 0, 0x100, fr.a104, fr.b108, 0);
    fr.z1c                 = 0;
    fr.z88                 = 0;
    *(s32 *) (arg0 + 0x24) = 0;
    *(u8 *) (arg0 + 0x35)  = 0;
    *(u8 *) (arg0 + 0x34)  = 0;
    *(u8 *) (arg0 + 0x36)  = 0;
    *(s32 *) (arg0 + 0x28) = -1;
    *(s32 *) (arg0 + 0x2c) = 0;
    *(s32 *) (arg0 + 0x30) = 0;
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    p = *(u8 **) (data_0213e0a8 + 0xf8);
    if (p != 0) {
        func_02018af0(p + 0x128, 0x1c, arg0 + 0x24, 2);
    }
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    o = func_020468a0(0x74, 0, 4);
    if (o != 0) {
        o = func_020170bc(o, 0);
    }
    *(u8 **) (arg0 + 0x38) = o;
    func_02016700(*(u8 **) (arg0 + 0x38), (u8 *) &data_ov018_0214b394);
    k                                        = 0x5e000;
    fr.A[0]                                  = k;
    fr.B[0]                                  = k;
    l                                        = 0x6000;
    *(s32 *) (*(u8 **) (arg0 + 0x38) + 0x50) = k;
    fr.A[1]                                  = l;
    fr.B[1]                                  = l;
    *(s32 *) (*(u8 **) (arg0 + 0x38) + 0x54) = l;
    func_0201689c(*(u8 **) (arg0 + 0x38), 3);
    p                = *(u8 **) (arg0 + 0x38);
    *(u32 *) (p + 4) = *(u32 *) (p + 4) | 0x10;
    o                = func_020468a0(0x74, 0, 4);
    if (o != 0) {
        o = func_020170bc(o, 0);
    }
    *(u8 **) (arg0 + 0x3c) = o;
    func_02016700(*(u8 **) (arg0 + 0x3c), (u8 *) &data_ov018_0214b3ac);
    k                                        = 0x21000;
    fr.A[2]                                  = k;
    fr.B[2]                                  = k;
    l                                        = 0x6000;
    *(s32 *) (*(u8 **) (arg0 + 0x3c) + 0x50) = k;
    fr.A[3]                                  = l;
    fr.B[3]                                  = l;
    *(s32 *) (*(u8 **) (arg0 + 0x3c) + 0x54) = l;
    func_0201689c(*(u8 **) (arg0 + 0x3c), 3);
    p                = *(u8 **) (arg0 + 0x3c);
    *(u32 *) (p + 4) = *(u32 *) (p + 4) | 0x10;
    l                = 0x42000;
    k                = 0xc3000;
    fr.A[5]          = l;
    fr.B[5]          = l;
    fr.A[4]          = k;
    fr.B[4]          = k;
    o                = func_020468a0(0x74, 0, 4);
    if (o != 0) {
        o = func_020170bc(o, 0);
    }
    *(u8 **) (arg0 + 0x40) = o;
    func_02049b14(*(u8 **) (arg0 + 0x40), 4);
    func_02016700(*(u8 **) (arg0 + 0x40), (u8 *) &data_ov018_0214b39c);
    k                                        = fr.B[4];
    *(s32 *) (*(u8 **) (arg0 + 0x40) + 0x50) = k;
    k                                        = fr.B[5];
    *(s32 *) (*(u8 **) (arg0 + 0x40) + 0x54) = k;
    func_0201689c(*(u8 **) (arg0 + 0x40), 2);
    p                = *(u8 **) (arg0 + 0x40);
    *(u32 *) (p + 4) = *(u32 *) (p + 4) & ~1;
    l                = 0xa000;
    k                = 0xda000;
    fr.A[7]          = l;
    fr.B[7]          = l;
    fr.A[6]          = k;
    fr.B[6]          = k;
    o                = func_020468a0(0x74, 0, 4);
    if (o != 0) {
        o = func_020170bc(o, 0);
    }
    *(u8 **) (arg0 + 0x44) = o;
    func_02049b14(*(u8 **) (arg0 + 0x44), 1);
    func_02016700(*(u8 **) (arg0 + 0x44), (u8 *) &data_ov018_0214b3a4);
    k                                        = fr.B[6];
    *(s32 *) (*(u8 **) (arg0 + 0x44) + 0x50) = k;
    k                                        = fr.B[7];
    *(s32 *) (*(u8 **) (arg0 + 0x44) + 0x54) = k;
    func_0201689c(*(u8 **) (arg0 + 0x44), 1);
    l       = 0xa000;
    k       = 0xda000;
    fr.A[9] = l;
    fr.B[9] = l;
    fr.A[8] = k;
    fr.B[8] = k;
    o       = func_020468a0(0x74, 0, 4);
    if (o != 0) {
        o = func_020170bc(o, 0);
    }
    *(u8 **) (arg0 + 0x48) = o;
    func_02049b14(*(u8 **) (arg0 + 0x48), 3);
    func_02016700(*(u8 **) (arg0 + 0x48), (u8 *) &data_ov018_0214b38c);
    k                                        = fr.B[8];
    *(s32 *) (*(u8 **) (arg0 + 0x48) + 0x50) = k;
    k                                        = fr.B[9];
    *(s32 *) (*(u8 **) (arg0 + 0x48) + 0x54) = k;
    func_0201689c(*(u8 **) (arg0 + 0x48), 1);
    l        = 0x9e000;
    k        = 0xda000;
    fr.A[11] = l;
    fr.B[11] = l;
    fr.A[10] = k;
    fr.B[10] = k;
    o        = func_020468a0(0x74, 0, 4);
    if (o != 0) {
        o = func_020170bc(o, 0);
    }
    *(u8 **) (arg0 + 0x4c) = o;
    func_02049b14(*(u8 **) (arg0 + 0x4c), 1);
    func_02016700(*(u8 **) (arg0 + 0x4c), (u8 *) &data_ov018_0214b36c);
    k                                        = fr.B[10];
    *(s32 *) (*(u8 **) (arg0 + 0x4c) + 0x50) = k;
    k                                        = fr.B[11];
    *(s32 *) (*(u8 **) (arg0 + 0x4c) + 0x54) = k;
    func_0201689c(*(u8 **) (arg0 + 0x4c), 1);
    l        = 0x9e000;
    k        = 0xda000;
    fr.A[13] = l;
    fr.B[13] = l;
    fr.A[12] = k;
    fr.B[12] = k;
    o        = func_020468a0(0x74, 0, 4);
    if (o != 0) {
        o = func_020170bc(o, 0);
    }
    *(u8 **) (arg0 + 0x50) = o;
    func_02049b14(*(u8 **) (arg0 + 0x50), 3);
    func_02016700(*(u8 **) (arg0 + 0x50), (u8 *) &data_ov018_0214b38c);
    k                                        = fr.B[12];
    *(s32 *) (*(u8 **) (arg0 + 0x50) + 0x50) = k;
    k                                        = fr.B[13];
    *(s32 *) (*(u8 **) (arg0 + 0x50) + 0x54) = k;
    func_0201689c(*(u8 **) (arg0 + 0x50), 1);
    l        = 0x9e000;
    k        = 0xc000;
    fr.A[15] = l;
    fr.B[15] = l;
    fr.A[14] = k;
    fr.B[14] = k;
    o        = func_020468a0(0x74, 0, 4);
    if (o != 0) {
        o = func_020170bc(o, 0);
    }
    *(u8 **) (arg0 + 0x54) = o;
    func_02049b14(*(u8 **) (arg0 + 0x54), 1);
    func_02016700(*(u8 **) (arg0 + 0x54), (u8 *) &data_ov018_0214b374);
    k                                        = fr.B[14];
    *(s32 *) (*(u8 **) (arg0 + 0x54) + 0x50) = k;
    k                                        = fr.B[15];
    *(s32 *) (*(u8 **) (arg0 + 0x54) + 0x54) = k;
    func_0201689c(*(u8 **) (arg0 + 0x54), 1);
    l        = 0x9e000;
    k        = 0xc000;
    fr.A[17] = l;
    fr.B[17] = l;
    fr.A[16] = k;
    fr.B[16] = k;
    o        = func_020468a0(0x74, 0, 4);
    if (o != 0) {
        o = func_020170bc(o, 0);
    }
    *(u8 **) (arg0 + 0x58) = o;
    func_02049b14(*(u8 **) (arg0 + 0x58), 3);
    func_02016700(*(u8 **) (arg0 + 0x58), (u8 *) &data_ov018_0214b38c);
    k                                        = fr.B[16];
    *(s32 *) (*(u8 **) (arg0 + 0x58) + 0x50) = k;
    k                                        = fr.B[17];
    *(s32 *) (*(u8 **) (arg0 + 0x58) + 0x54) = k;
    func_0201689c(*(u8 **) (arg0 + 0x58), 1);
    l        = 0x2d000;
    k        = 0x88000;
    fr.A[19] = l;
    fr.B[19] = l;
    fr.A[18] = k;
    fr.B[18] = k;
    o        = func_020468a0(0x74, 0, 4);
    if (o != 0) {
        o = func_020170bc(o, 0);
    }
    *(u8 **) (arg0 + 0x5c) = o;
    func_02049b14(*(u8 **) (arg0 + 0x5c), 1);
    func_02016700(*(u8 **) (arg0 + 0x5c), (u8 *) &data_ov018_0214b37c);
    k                                        = fr.B[18];
    *(s32 *) (*(u8 **) (arg0 + 0x5c) + 0x50) = k;
    k                                        = fr.B[19];
    *(s32 *) (*(u8 **) (arg0 + 0x5c) + 0x54) = k;
    func_0201689c(*(u8 **) (arg0 + 0x5c), 1);
    l        = 0x2d000;
    k        = 0x88000;
    fr.A[21] = l;
    fr.B[21] = l;
    fr.A[20] = k;
    fr.B[20] = k;
    o        = func_020468a0(0x74, 0, 4);
    if (o != 0) {
        o = func_020170bc(o, 0);
    }
    *(u8 **) (arg0 + 0x60) = o;
    func_02049b14(*(u8 **) (arg0 + 0x60), 3);
    func_02016700(*(u8 **) (arg0 + 0x60), (u8 *) &data_ov018_0214b38c);
    k                                        = fr.B[20];
    *(s32 *) (*(u8 **) (arg0 + 0x60) + 0x50) = k;
    k                                        = fr.B[21];
    *(s32 *) (*(u8 **) (arg0 + 0x60) + 0x54) = k;
    func_0201689c(*(u8 **) (arg0 + 0x60), 1);
    l        = 0x9e000;
    k        = 0x46000;
    fr.A[23] = l;
    fr.B[23] = l;
    fr.A[22] = k;
    fr.B[22] = k;
    o        = func_020468a0(0x74, 0, 4);
    if (o != 0) {
        o = func_020170bc(o, 0);
    }
    *(u8 **) (arg0 + 0x64) = o;
    func_02049b14(*(u8 **) (arg0 + 0x64), 1);
    func_02016700(*(u8 **) (arg0 + 0x64), (u8 *) &data_ov018_0214b384);
    k                                        = fr.B[22];
    *(s32 *) (*(u8 **) (arg0 + 0x64) + 0x50) = k;
    k                                        = fr.B[23];
    *(s32 *) (*(u8 **) (arg0 + 0x64) + 0x54) = k;
    func_0201689c(*(u8 **) (arg0 + 0x64), 1);
    l        = 0x9e000;
    k        = 0x46000;
    fr.A[25] = l;
    fr.B[25] = l;
    fr.A[24] = k;
    fr.B[24] = k;
    o        = func_020468a0(0x74, 0, 4);
    if (o != 0) {
        o = func_020170bc(o, 0);
    }
    *(u8 **) (arg0 + 0x68) = o;
    func_02049b14(*(u8 **) (arg0 + 0x68), 3);
    func_02016700(*(u8 **) (arg0 + 0x68), (u8 *) &data_ov018_0214b38c);
    k                                        = fr.B[24];
    *(s32 *) (*(u8 **) (arg0 + 0x68) + 0x50) = k;
    k                                        = fr.B[25];
    *(s32 *) (*(u8 **) (arg0 + 0x68) + 0x54) = k;
    func_0201689c(*(u8 **) (arg0 + 0x68), 1);
    *(s32 *) (arg0 + 0x6c) = 0;
    i                      = 0;
    do {
        *(s8 *) (arg0 + i + 0x89) = -1;
        i                         = (u8) (i + 1);
    } while ((u32) i < 5);
    func_0204eed8(4, 0x10);
    func_0204ee8c(8, 8);
    *(u8 *) (arg0 + 0x70)  = 0;
    *(u8 *) (arg0 + 0x78)  = 0;
    *(u8 *) (arg0 + 0x79)  = 0;
    *(u8 *) (arg0 + 0x7b)  = 0;
    *(u8 *) (arg0 + 0x7a)  = 0;
    *(s32 *) (arg0 + 0x74) = 0;
    *(u8 *) (arg0 + 0x88)  = 0;
    *(u8 *) (arg0 + 0x7c)  = 0;
    *(s32 *) (arg0 + 0x80) = 0;
    *(s32 *) (arg0 + 0x84) = 0;
}
