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

extern u16 data_ov016_0214ab44;
extern u16 data_ov016_0214ab48;
extern u16 data_ov016_0214ab4c;
extern u16 data_ov016_0214ab54;
extern u16 data_ov016_0214ab58;
extern u16 data_ov016_0214ab90[6];
extern s32 data_0213f98c;
extern s32 data_027e0000;
extern s32 data_027e0004;
extern u8 data_027e0014[];

extern void func_020bc9f8(s32, s32, s32);
extern void func_0203c540(void);
extern void func_020105d0(u8 *);
extern void func_0203cfb0(s32);
extern void func_0203d208(s32, U16One);
extern s32 func_02052288(void);
extern void func_0203e23c(s32, s32, s32, s32, s32, s32, U16Pair, U8Quad, s32);
extern void func_020d544c(s32);
extern void func_02051a50(s32, s32, s32);
extern void func_0203cec4(s32);
extern void func_02051b80(U16One);
extern void func_0203cc08(s32, s32);
extern s32 func_02052258(s32);
extern void func_02051338(s32, s32, s32, s32, s32);

void func_ov016_0214a658(u8 *arg0) {
    U16One a14, a16, a18, a1a, a1c;
    U16Pair p1e;
    U8Quad q22;
    U16Pair p26;
    U8Quad q2a;
    U16Pair p2e;
    U8Quad q32;
    U16Pair p36;
    U8Quad q3a;
    u16 tbl[6];
    u8 *pp;
    u16 *ph;
    u8 i;

    data_027e0004 |= 0x400000;
    a14.v  = data_ov016_0214ab48;
    a16.v  = data_ov016_0214ab4c;
    a18.v  = data_ov016_0214ab54;
    a1a.v  = data_ov016_0214ab44;
    a1c.v  = data_ov016_0214ab58;
    tbl[0] = data_ov016_0214ab90[0];
    tbl[1] = data_ov016_0214ab90[1];
    tbl[2] = data_ov016_0214ab90[2];
    tbl[3] = data_ov016_0214ab90[3];
    tbl[4] = data_ov016_0214ab90[4];
    tbl[5] = data_ov016_0214ab90[5];
    func_020bc9f8(data_0213f98c, 4, 0);
    func_0203c540();
    func_020105d0(data_027e0014 + data_027e0000 * 0x34);
    func_0203cfb0(0);
    func_0203d208(0, a16);
    pp    = (u8 *) &q22;
    pp[0] = 0;
    pp[1] = 0;
    pp[2] = 0;
    pp[3] = 0;
    ph    = (u16 *) &p1e;
    ph[0] = 0;
    ph[1] = 0;
    func_0203e23c(0, tbl[func_02052288()], 1, 0, 0, 0x100, p1e, q22, 1);
    func_0203d208(1, a14);
    pp    = (u8 *) &q2a;
    pp[0] = 0;
    pp[1] = 0;
    pp[2] = 0;
    pp[3] = 0;
    ph    = (u16 *) &p26;
    ph[0] = 0;
    ph[1] = 0;
    func_0203e23c(1, 0x1ec7, 0x28, 0, 0, 0x100, p26, q2a, 0);
    func_020d544c(0);
    func_02051a50(3, 0, 0);
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    func_0203c540();
    func_020105d0(data_027e0014 + data_027e0000 * 0x34);
    func_0203cec4(0x1000);
    func_0203cfb0(0);
    func_0203d208(2, a18);
    pp    = (u8 *) &q32;
    pp[0] = 0;
    pp[1] = 0;
    pp[2] = 0;
    pp[3] = 0;
    ph    = (u16 *) &p2e;
    ph[0] = 0;
    ph[1] = 0;
    func_0203e23c(2, 0x1ebe, 1, 0, 0, 0x100, p2e, q32, 0);
    func_0203d208(1, a1a);
    pp    = (u8 *) &q3a;
    pp[0] = 0;
    pp[1] = 0;
    pp[2] = 0;
    pp[3] = 0;
    ph    = (u16 *) &p36;
    ph[0] = 0;
    ph[1] = 0;
    func_0203e23c(1, 0x1ebf, 1, 0, 0, 0x100, p36, q3a, 0);
    func_0203d208(0, a1c);
    func_02051b80(a1c);
    func_0203cc08(0, 0);
    i = 0;
    do {
        u8 *t = arg0 + i * 4;
        i++;
        *(s32 *) (t + 0x28) = 0;
        *(s32 *) (t + 0x38) = 0;
    } while (i < 4);
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    *(s8 *) (arg0 + 0x26) = -1;
    arg0[0x24]            = 0;
    arg0[0x25]            = 0;
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    func_02051a50(3, 0, 0);
    func_02051338(1, 0x80, 0xaf, func_02052258(5), 1);
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
}
