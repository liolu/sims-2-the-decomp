/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0208272c(void *, s32, s32, s32);
M2C_UNK func_02079ce0(void *, void *);
extern u8 *data_0213e2f4;

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 f12;
    s32 f16;
    s32 f20;
    s32 f24;
    u8 b28;
    u8 b29;
    u8 b30;
    u8 b31;
    s32 f32;
    s16 f36;
    u8 b38;
    u8 b39;
    s32 f40;
    s32 f44;
    s16 f48;
    s16 f50;
    u8 b52;
    u8 b53;
    u8 b54;
    s32 f56;
    s16 f60;
    u8 pad62[2];
    s32 pad64;
    u8 b68;
    u8 pad69[3];
    s32 f72;
} A11Blk2;

void func_02062364(s32 arg0) {
    A11Blk2 s;
    u8 *p;
    u8 *slot;

    p     = data_0213e2f4;
    slot  = p + 0x21DC + arg0 * 0x2C;
    s.f0  = 0x80000000;
    s.f4  = 0x80000000;
    s.f8  = 0x80000000;
    s.f32 = 0;
    s.f36 = 0;
    s.b38 = 1;
    s.b39 = 0;
    s.f40 = 0x47;
    s.f72 = -1;
    s.f12 = 0;
    s.f16 = 0;
    s.f20 = 0;
    s.f24 = 0;
    s.b29 = 0;
    s.b28 = 0;
    s.b30 = 0;
    s.b31 = 0;
    s.b68 = 0;
    s.f60 = 0;
    s.f44 = 0;
    s.f48 = 0;
    s.f50 = 0;
    s.b52 = 0;
    s.b53 = 1;
    s.b54 = 0;
    s.f56 = 0;
    s.f0  = *(s32 *) (p + 0x480C) + 0xE10;
    s.b54 = 1;
    s.b53 = 1;
    s.f44 = 0x8B8;
    s.b52 = 1;
    s.f50 = 9;
    s.f48 = arg0;
    s.f56 = 2;
    s.f72 = 0x845;
    s.f40 = func_0208272c(slot, 5, 1, 0x845);
    s.f32 = 0x91F;
    s.f36 = arg0;
    func_02079ce0(data_0213e2f4 + 0x21DC, &s);
}
