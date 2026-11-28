#include "m2c.h"

typedef struct Obj {
    s32 x;
    s32 f4;
    s32 f8;
    s32 fc;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1c;
    s32 f20;
    s32 f24;
    u8 pad[0x50 - 0x28];
    u32 f50;
} Obj;

typedef void (*DrawFn)(Obj *, u32, u32);

typedef struct {
    u8 pad[0x78];
    DrawFn fn;
} Ctx;

extern Ctx data_02142b40;

void func_020df0f8(Obj *o, u32 a, u32 b) {
    DrawFn fn;
    s32 fc;
    s32 f8;
    s32 f10;
    s32 f4;
    s32 n18;
    s32 x;
    s32 f18;
    s32 n14;
    s32 f14;
    s32 nx;
    fn  = data_02142b40.fn;
    f8  = o->f8;
    x   = o->x;
    f14 = o->f14;
    f18 = o->f18;
    f4  = o->f4;
    f10 = o->f10;
    fc  = o->fc;
    fn(o, a, b);
    nx     = o->x;
    n14    = o->f14;
    n18    = o->f18;
    o->x   = x + o->f24;
    o->f14 = f14 + (o->f50 >> 1);
    o->f18 = f18 + (o->f50 >> 1);
    o->f4  = f4;
    o->f10 = f10;
    o->f8  = f8;
    o->fc  = fc;
    data_02142b40.fn(o, a, b);
    o->x   = nx;
    o->f14 = n14;
    o->f18 = n18;
}
