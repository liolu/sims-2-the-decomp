/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern "C" s32 func_020f5eb8(s32, s32);

struct Fx32 {
    s32 v;
    Fx32() {}
    Fx32(s32 x) :
        v(x) {}
    Fx32 operator-() const {
        return Fx32(-v);
    }
    Fx32 operator*(Fx32 b) const {
        return Fx32((s32) (((s64) v * b.v + 0x800) >> 12));
    }
    Fx32 operator+(Fx32 b) const {
        return Fx32(v + b.v);
    }
    Fx32 operator+(s32 b) const {
        return Fx32(v + b);
    }
    Fx32 operator-(Fx32 b) const {
        return Fx32(v - b.v);
    }
    Fx32 operator/(Fx32 b) const {
        return Fx32(func_020f5eb8(v, b.v));
    }
    bool operator==(Fx32 b) const {
        return v == b.v;
    }
    bool operator>=(Fx32 b) const {
        return v >= b.v;
    }
};

struct Vec3 {
    Fx32 x, y, z;
    Vec3() {}
    Vec3(const Fx32 &ax, const Fx32 &ay, const Fx32 &az) :
        x(ax),
        y(ay),
        z(az) {}
};

struct Plane {
    Vec3 n;
    s32 d;
};

struct Box {
    Fx32 x[2];
    Fx32 y[2];
    Fx32 z[2];
    Vec3 Far(const Vec3 &n) const {
        return Vec3(x[-n.x >= Fx32(0)], y[-n.y >= Fx32(0)], z[-n.z >= Fx32(0)]);
    }
};

extern "C" Fx32 func_01ffc4fc(const Vec3 *a, const Vec3 *b);
static inline void Chk(const Vec3 &n, const Vec3 &q) {
    func_01ffc4fc(&n, &q);
}

extern "C" {
extern s32 data_02142eb0;
Fx32 func_020da048(const Box *b, const Plane *pl) {
    s32 d = pl->d - data_02142eb0;
    if (pl->n.y == Fx32(0)) {
        return Fx32(0);
    }
    Vec3 p = b->Far(pl->n);
    Fx32 y = (p.x * pl->n.x + p.z * pl->n.z + d) / -pl->n.y;
    Chk(pl->n, Vec3(p.x, y, p.z));
    return y - p.y;
}
}
