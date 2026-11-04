/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fc;
    s32 f10;
    s32 f14;
    s32 f18;
    s8 c1c;
    s8 c1d;
    s8 c1e;
    s8 c1f;
    s32 f20;
    s16 h24;
    s8 c26;
    s8 c27;
    s32 f28;
    s32 f2c;
    s16 h30;
    s16 h32;
    s8 c34;
    s8 c35;
    s8 c36;
    u8 p37;
    s32 f38;
    s16 h3c;
    u8 p3e[2];
    u8 p40[4];
    s8 c44;
    u8 p45[3];
    s32 f48;
} Blk;

s32 *func_02077db4(void *, s16);
M2C_UNK func_02079d58(void *, Blk *);
s32 func_020827a4(s32, M2C_UNK);
extern u8 *data_0213e434;

void func_02061834(s16 arg0) {
    Blk b;
    u8 *base;
    s32 *r;

    base  = data_0213e434;
    b.f0  = 0x80000000;
    b.f4  = 0x80000000;
    b.f8  = 0x80000000;
    b.f20 = 0;
    b.h24 = 0;
    b.c26 = 1;
    b.c27 = 0;
    b.f28 = 0x47;
    b.fc  = 0;
    b.f10 = 0;
    b.f14 = 0;
    b.f18 = 0;
    b.c1d = 0;
    b.c1c = 0;
    b.c1e = 0;
    b.c1f = 0;
    b.c44 = 0;
    b.h3c = 0;
    b.f2c = 0;
    b.h30 = 0;
    b.h32 = 0;
    b.c34 = 0;
    b.c35 = 1;
    b.c36 = 0;
    b.f38 = 0;
    b.f48 = -1;
    b.f0  = *(s32 *) (base + 0x480C) + 0x15180;
    b.c36 = 1;
    b.c35 = 1;
    b.c34 = 1;
    b.f2c = 0x863;
    b.f48 = 0x846;
    b.h30 = arg0;
    r     = func_02077db4(base + 0x21DC, arg0);
    b.h32 = (s16) *r;
    b.f28 = func_020827a4((s32) (data_0213e434 + 0x21DC) + arg0 * (u32) 0x2C, 7);
    b.f20 = 0x920;
    b.h24 = arg0;
    func_02079d58(data_0213e434 + 0x21DC, &b);
}
