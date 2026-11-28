/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern "C" {
void func_020d5c08(u8);
extern u8 *data_0213e2f4;
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

static inline Fx32 f(Fx32 a) {
    func_020d5c08((u8) (a * Fx32(0x7f000)).toInt());
    return id(a);
}

struct Obj {
    u8 pad[0x90];
    Fx32 x90;
    u8 pad2[0x1C];
    u8 b0;
};

extern "C" void func_02057090(Obj *o) {
    if (o->b0 != 0) {
        Fx32 a    = o->x90;
        Fx32 *dst = (Fx32 *) (data_0213e2f4 + 0x2F70);
        *dst      = f(a);
    }
}
