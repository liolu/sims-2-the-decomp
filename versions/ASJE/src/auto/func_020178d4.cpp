/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct Fx32 {
    s32 v;
    Fx32() {}
    Fx32(s32 x) :
        v(x) {}
    Fx32 operator*(Fx32 b) const {
        return Fx32((s32) (((s64) v * b.v + 0x800) >> 12));
    }
    Fx32 operator+(Fx32 b) const {
        return Fx32(v + b.v);
    }
    Fx32 operator-(Fx32 b) const {
        return Fx32(v - b.v);
    }
    bool operator<=(Fx32 b) const {
        return v <= b.v;
    }
};

struct Vec2 {
    Fx32 x, y;
};

struct A {
    u8 pad[8];
    Fx32 r;
};
struct B {
    u8 pad[0x50];
    Vec2 pos;
};

extern "C" bool func_020178d4(A *a, B *b, Vec2 pos) {
    Fx32 dx = pos.x - b->pos.x;
    Fx32 dy = pos.y - b->pos.y;
    return dx * dx + dy * dy <= a->r;
}
