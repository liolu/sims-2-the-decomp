/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern "C" s32 func_020f5938(s32);

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
};

static inline Fx32 Sqrt(Fx32 a) {
    return Fx32(func_020f5938(a.v));
}

struct Vec2 {
    Fx32 x, y;
};

extern "C" Fx32 func_020ae06c(const Vec2 *v) {
    return Sqrt(v->x * v->x + v->y * v->y);
}
