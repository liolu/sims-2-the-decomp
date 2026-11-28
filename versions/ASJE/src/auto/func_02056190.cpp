/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern "C" {
void func_020d5c08(u8);
}

struct Fx32 {
    s32 v;
    Fx32() {}
    Fx32(s32 x) :
        v(x) {}
    Fx32 operator*(Fx32 b) const {
        return Fx32((s32) (((s64) v * b.v + 0x800) >> 12));
    }
    s32 toInt() const {
        return (v + 0x800) >> 12;
    }
};

static inline Fx32 id(Fx32 x) {
    return x;
}

extern "C" Fx32 func_02056190(Fx32 a) {
    func_020d5c08((u8) (a * Fx32(0x7f000)).toInt());
    return id(a);
}
