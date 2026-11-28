/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern "C" s32 func_020f5eb8(s32, s32);

struct Fx32 {
    s32 v;
    Fx32() {}
    Fx32(s32 x) :
        v(x) {}
    Fx32 &operator=(Fx32 b) {
        v = b.v;
        return *this;
    }
    Fx32 &operator+=(Fx32 b) {
        v += b.v;
        return *this;
    }
    Fx32 operator-(Fx32 b) const {
        return Fx32(v - b.v);
    }
    Fx32 operator/(Fx32 b) const {
        return Fx32(func_020f5eb8(v, b.v));
    }
};

struct Vec3 {
    Fx32 x, y, z;
    Vec3() {}
    Vec3(const Fx32 &ax, const Fx32 &ay, const Fx32 &az) :
        x(ax),
        y(ay),
        z(az) {}
    Vec3 &operator=(const Vec3 &b) {
        x = b.x;
        y = b.y;
        z = b.z;
        return *this;
    }
    Vec3 operator-(const Vec3 &b) const {
        return Vec3(x - b.x, y - b.y, z - b.z);
    }
};

struct G {
    u8 pad0[0x68];
    Vec3 *target;
    u8 pad6c[0x23c - 0x6c];
    Vec3 *src;
    u8 pad240[0x264 - 0x240];
    s32 state;
    s32 prev;
    u8 pad26c[0x270 - 0x26c];
    Fx32 yoff;
    u8 pad274[0x298 - 0x274];
    Vec3 pos;
    Fx32 speed;
    u8 pad2a8[0x2b8 - 0x2a8];
    u8 b2b8;
    u8 b2b9;
    u8 b2ba;
    u8 b2bb;
};

extern "C" {
Fx32 func_01ffc270(const Vec3 *);
void func_020bb50c(G *);

void func_020ba100(G *g, Vec3 *target, Fx32 w, u8 b) {
    g->b2b8   = 1;
    g->target = target;
    g->pos    = *g->src;
    g->pos.y += g->yoff;
    Vec3 dv  = g->pos - *g->target;
    g->speed = func_01ffc270(&dv) / w;
    g->b2bb  = b;
    g->prev  = g->state;
    g->state = 6;
    func_020bb50c(g);
}
}
