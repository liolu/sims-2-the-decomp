/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct Fx32 {
    s32 v;
    Fx32() {}
    Fx32(s32 x) :
        v(x) {}
    Fx32 operator+(Fx32 b) const {
        return Fx32(v + b.v);
    }
    Fx32 operator-(Fx32 b) const {
        return Fx32(v - b.v);
    }
    bool operator<(Fx32 b) const {
        return v < b.v;
    }
};

struct Vec3 {
    Fx32 x, y, z;
    Vec3() {}
    Vec3(const Fx32 &ax, const Fx32 &ay, const Fx32 &az) :
        x(ax),
        y(ay),
        z(az) {}
    Vec3 operator-(const Vec3 &b) const {
        return Vec3(x - b.x, y - b.y, z - b.z);
    }
};

struct Obj {
    void *vt;
    Vec3 pos;
    u8 pad10[8];
    Fx32 r;
};

/* squared length of v, shifted right by (12 + sh) */
extern "C" Fx32 func_01ffc1ac(const Vec3 *v, s32 sh);

static inline Fx32 MulSh(Fx32 a, Fx32 b, s32 sh) {
    return Fx32((s32) (((s64) a.v * b.v) >> (12 + sh)));
}

extern "C" bool func_0200db84(Obj *a, Obj *b) {
    Vec3 d = a->pos - b->pos;
    Fx32 s = a->r + b->r;
    return func_01ffc1ac(&d, 1) < MulSh(s, s, 1);
}
