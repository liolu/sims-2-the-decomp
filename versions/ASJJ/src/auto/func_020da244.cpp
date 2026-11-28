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
    Fx32 operator-(Fx32 b) const {
        return Fx32(v - b.v);
    }
};

struct Vec3 {
    Fx32 x, y, z;
    Vec3() {}
    Vec3(const Fx32 &ax, const Fx32 &ay, const Fx32 &az) :
        x(ax),
        y(ay),
        z(az) {}
    Vec3 operator*(Fx32 s) const {
        Vec3 r;
        r.x = x * s;
        r.y = y * s;
        r.z = z * s;
        return r;
    }
    Vec3 operator-(const Vec3 &b) const {
        return Vec3(x - b.x, y - b.y, z - b.z);
    }
};

extern "C" Fx32 func_01ffc4fc(const Vec3 *a, const Vec3 *b);

extern "C" Vec3 func_020da244(const Vec3 *a, const Vec3 *n) {
    Fx32 d = func_01ffc4fc(a, n);
    return *a - *n * d;
}
