/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern "C" {
s32 func_020f59a4(s32, s32);
extern s16 data_0212ae60[];
}

struct Fx32 {
    s32 v;
    Fx32() {}
    Fx32(s32 x) :
        v(x) {}
    Fx32 operator/(Fx32 b) const {
        return Fx32(func_020f59a4(v, b.v));
    }
};

static inline s32 Idx(const Fx32 &a) {
    return (s32) (((u32) ((((s64) a.v * 0x28be60db9391LL) + 0x80000000000LL) >> 32) << 4) >> 16);
}
static inline Fx32 Sin(Fx32 a) {
    return Fx32(data_0212ae60[(Idx(a) >> 4) * 2]);
}
static inline Fx32 Cos(Fx32 a) {
    return Fx32(data_0212ae60[(u32) ((Idx(a) >> 4) * 2 + 1)]);
}
extern "C" Fx32 func_020bd82c(Fx32 a) {
    return Sin(a) / Cos(a);
}
