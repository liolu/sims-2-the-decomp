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

struct Vec3 {
    Fx32 x, y, z;
    Vec3() {}
    Vec3(s32 a, s32 b, s32 c) :
        x(a),
        y(b),
        z(c) {}
    Vec3 &operator=(const Vec3 &b) {
        x.v = b.x.v;
        y   = b.y;
        z   = b.z;
        return *this;
    }
};

struct Obj {
    u8 pad[0x20];
    s32 w;
    s32 h;
    Vec3 a;
    Vec3 b;
    Vec3 c;
};

extern "C" void func_02048a30(Obj *o) {
    s32 dx = 0x100 - o->w;
    if (dx < 0) {
        o->a.x = Fx32(-(dx / 2) << 12);
        o->b   = Vec3(0, 0, 0);
        o->c.x = Fx32(0x100000);
    } else {
        o->a.x = Fx32(0);
        o->b.x = Fx32((dx / 2 & ~3) << 12);
        o->c.x = Fx32(o->w << 12);
    }
    s32 dy = 0xc0 - o->h;
    if (dy < 0) {
        o->a.y = Fx32(-(dy / 2) << 12);
        o->b.y = Fx32(0);
        o->c.y = Fx32(0x100000);
    } else {
        o->a   = Vec3(0, 0, 0);
        o->b.y = Fx32((dy / 2 & ~3) << 12);
        o->c.y = Fx32(o->h << 12);
    }
}
