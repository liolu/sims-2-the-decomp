/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern "C" {
s32 func_020f59a4(s32, s32);
}

struct Fx32 {
    s32 v;
    Fx32() {}
    Fx32(s32 x) :
        v(x) {}
    Fx32 operator/(Fx32 b) const {
        return Fx32(func_020f59a4(v, b.v));
    }
    Fx32 &operator=(Fx32 b) {
        v = b.v;
        return *this;
    }
    Fx32 operator*(Fx32 b) const {
        return Fx32((s32) (((s64) v * b.v + 0x800) >> 12));
    }
};

struct Item {
    s32 a;
    s32 mode;
    s32 n;
};

extern "C" Fx32 func_02069564(void *self, Item *it) {
    Fx32 r;
    switch (it->mode) {
        case 0:
            r = Fx32((6 - it->n) << 12) / Fx32(0x6000) * Fx32(0x22000);
            break;
        case 1:
            r = Fx32(0x22000);
            break;
        case 2:
            r = Fx32(it->n << 12) / Fx32(0x6000) * Fx32(0x22000);
            break;
    }
    return r;
}
