/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e2f4;

typedef struct {
    s32 v;
} W;
typedef struct {
    s32 x, y;
} V2;
typedef struct {
    W w1;
    W w2;
    W w3;
    s32 v;
    V2 e;
    V2 p;
    V2 q;
    V2 e2;
} FR;

void func_020be6d8(u8 *a, s32 b, s32 c);
void func_02017380(u8 *a, W b, W c, W d, s32 e);
void func_020bf0b0(u8 *a, V2 *b);
void func_020c1dec(s32 a, s32 b, s32 c, s32 d, s32 e);

void func_020bf3ec(u8 *arg0) {
    FR f;
    s32 a;
    s32 b;
    s32 x;
    s32 y;
    u8 *blk;
    s32 *pp;

    a                       = *(s32 *) (arg0 + 0x108);
    b                       = *(s32 *) (arg0 + 0x10c);
    x                       = (*(s32 *) (arg0 + 0x14c) + ((a << 1) >> 1) - ((b << 1) >> 1)) << 12;
    f.p.x                   = x;
    f.q.x                   = x;
    y                       = (*(s32 *) (arg0 + 0x150) + ((b << 1) >> 1) - ((a << 1) >> 1)) << 12;
    f.p.y                   = y;
    f.q.y                   = y;
    *(u8 *) (arg0 + 0x168)  = (u8) ((*(u8 *) (arg0 + 0x168) + 1) & 3);
    *(s32 *) (arg0 + 0x14c) = f.q.x >> 12;
    *(s32 *) (arg0 + 0x150) = f.q.y >> 12;
    blk                     = data_0213e2f4 + 0x41f8;
    blk                     = blk + *(s32 *) (blk + 0x2e0) * 0x58 + (*(u16 *) (arg0 + 0xa) << 2);
    blk[1]                  = (u8) * (s32 *) (arg0 + 0x14c);
    blk[2]                  = (u8) * (s32 *) (arg0 + 0x150);
    blk[3]                  = *(u8 *) (arg0 + 0x168);
    if ((*(u8 *) (arg0 + 0x168) & 1) != 0) {
        func_020be6d8(arg0 + 0x90, *(s32 *) (*(s32 *) (arg0 + 0x130) + 0x24), *(s32 *) (*(s32 *) (arg0 + 0x130) + 0x20));
    } else {
        func_020be6d8(arg0 + 0x90, *(s32 *) (*(s32 *) (arg0 + 0x130) + 0x20), *(s32 *) (*(s32 *) (arg0 + 0x130) + 0x24));
    }
    if (*(s32 *) (arg0 + 0x108) != *(s32 *) (arg0 + 0x10c)) {
        s32 r2 = *(s32 *) (arg0 + 0x10c);
        s32 r1 = *(s32 *) (arg0 + 0x108);
        f.v    = r2 << 15;
        f.w3.v = r1 << 15;
        r2     = f.v;
        f.w2.v = 0;
        f.w1.v = 0;
        func_02017380(arg0, f.w1, f.w2, f.w3, r2);
    }
    if (*(u8 *) (*(s32 *) (arg0 + 0x128) + 0x58) != 0) {
        pp = (s32 *) (*(s32 *) (arg0 + 0x128) + 0x50);
    } else {
        pp = (s32 *) (*(s32 *) (arg0 + 0x128) + 0x48);
    }
    x      = pp[0];
    f.e2.x = x;
    f.e.x  = x;
    y      = pp[1];
    f.e2.y = y;
    f.e.y  = y;
    func_020bf0b0(arg0, &f.e);
    func_020c1dec(*(s32 *) (arg0 + 0x12c), *(s32 *) (arg0 + 0x14c), *(s32 *) (arg0 + 0x150), *(u8 *) (arg0 + 0x168),
                  *(s32 *) (*(s32 *) (arg0 + 0x128) + 0x140));
}
