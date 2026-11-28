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

extern u16 data_ov016_0214aa04;
extern u16 data_ov016_0214aa08;
extern u16 data_ov016_0214aa0c;
extern u16 data_ov016_0214aa14;
extern u16 data_ov016_0214aa18;
extern u16 data_ov016_0214aa50[6];
extern s32 data_0213f84c;
extern s32 data_027e0000;
extern s32 data_027e0004;
extern u8 data_027e0014[];

extern void func_020bc930(s32, s32, s32);
extern void func_0203c4c8(void);
extern void func_020105d0(u8 *);
extern void func_0203cf38(s32);
extern void func_0203d190(s32, U16One);
extern s32 func_02052210(void);
extern void func_0203e1c4(s32, s32, s32, s32, s32, s32, U16Pair, U8Quad, s32);
extern void func_020d5310(s32);
extern void func_020519d8(s32, s32, s32);
extern void func_0203ce4c(s32);
extern void func_02051b08(U16One);
extern void func_0203cb90(s32, s32);
extern s32 func_020521e0(s32);
extern void func_020512c0(s32, s32, s32, s32, s32);

void func_ov016_0214a518(u8 *arg0) {
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
    a14.v  = data_ov016_0214aa08;
    a16.v  = data_ov016_0214aa0c;
    a18.v  = data_ov016_0214aa14;
    a1a.v  = data_ov016_0214aa04;
    a1c.v  = data_ov016_0214aa18;
    tbl[0] = data_ov016_0214aa50[0];
    tbl[1] = data_ov016_0214aa50[1];
    tbl[2] = data_ov016_0214aa50[2];
    tbl[3] = data_ov016_0214aa50[3];
    tbl[4] = data_ov016_0214aa50[4];
    tbl[5] = data_ov016_0214aa50[5];
    func_020bc930(data_0213f84c, 4, 0);
    func_0203c4c8();
    func_020105d0(data_027e0014 + data_027e0000 * 0x34);
    func_0203cf38(0);
    func_0203d190(0, a16);
    pp    = (u8 *) &q22;
    pp[0] = 0;
    pp[1] = 0;
    pp[2] = 0;
    pp[3] = 0;
    ph    = (u16 *) &p1e;
    ph[0] = 0;
    ph[1] = 0;
    func_0203e1c4(0, tbl[func_02052210()], 1, 0, 0, 0x100, p1e, q22, 1);
    func_0203d190(1, a14);
    pp    = (u8 *) &q2a;
    pp[0] = 0;
    pp[1] = 0;
    pp[2] = 0;
    pp[3] = 0;
    ph    = (u16 *) &p26;
    ph[0] = 0;
    ph[1] = 0;
    func_0203e1c4(1, 0x1ec7, 0x28, 0, 0, 0x100, p26, q2a, 0);
    func_020d5310(0);
    func_020519d8(3, 0, 0);
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    func_0203c4c8();
    func_020105d0(data_027e0014 + data_027e0000 * 0x34);
    func_0203ce4c(0x1000);
    func_0203cf38(0);
    func_0203d190(2, a18);
    pp    = (u8 *) &q32;
    pp[0] = 0;
    pp[1] = 0;
    pp[2] = 0;
    pp[3] = 0;
    ph    = (u16 *) &p2e;
    ph[0] = 0;
    ph[1] = 0;
    func_0203e1c4(2, 0x1ebe, 1, 0, 0, 0x100, p2e, q32, 0);
    func_0203d190(1, a1a);
    pp    = (u8 *) &q3a;
    pp[0] = 0;
    pp[1] = 0;
    pp[2] = 0;
    pp[3] = 0;
    ph    = (u16 *) &p36;
    ph[0] = 0;
    ph[1] = 0;
    func_0203e1c4(1, 0x1ebf, 1, 0, 0, 0x100, p36, q3a, 0);
    func_0203d190(0, a1c);
    func_02051b08(a1c);
    func_0203cb90(0, 0);
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
    func_020519d8(3, 0, 0);
    func_020512c0(1, 0x80, 0xaf, func_020521e0(5), 1);
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
}
