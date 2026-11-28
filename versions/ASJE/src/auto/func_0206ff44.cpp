/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct Fx32 {
    s32 v;
    Fx32() {}
    Fx32(s32 x) :
        v(x) {}
    Fx32 &operator=(Fx32 b) {
        v = b.v;
        return *this;
    }
};

struct Vec2 {
    Fx32 x, y;
    Vec2 &operator=(const Vec2 &b) {
        x = b.x;
        y = b.y;
        return *this;
    }
};

struct Spr {
    u8 pad0[4];
    u32 flags;
    u8 pad8[0x50 - 8];
    Vec2 pos;
};

struct Def {
    u8 pad[0x18];
    u16 id;
};

struct Obj {
    u8 pad0[0x1c];
    void *p1c;
    s32 start;
    s32 cur;
    u8 pad28[4];
    Def *defs[0x18];
    Spr *spr[4];
    u8 pad9c[8];
    Spr *main;
};

extern "C" {
s32 func_0208af70(s32);
void func_02016708(Spr *, s32);
extern Vec2 data_0213e3e0[];
}

static inline void Layout(Obj *o) {
    s32 i;
    for (i = 0; i < 4; i++) {
        o->spr[i]->pos = data_0213e3e0[(i - o->start) & 3];
    }
}

extern "C" void func_0206ff44(Obj *o) {
    s32 i;
    s32 c;
    if (o->p1c == 0) {
        return;
    }
    c = o->cur;
    if (c < o->start) {
        func_02016708(o->spr[c & 3], func_0208af70(o->defs[c]->id));
        o->start = o->cur;
    }
    c = o->cur;
    if (c >= o->start + 4) {
        func_02016708(o->spr[c & 3], func_0208af70(o->defs[c]->id));
        o->start = o->cur - 3;
    }
    Layout(o);
    o->main->flags |= 1;
    o->main->pos = o->spr[o->cur & 3]->pos;
}
