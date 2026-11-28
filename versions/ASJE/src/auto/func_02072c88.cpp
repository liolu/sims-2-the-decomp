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
    Fx32 &operator=(Fx32 b) {
        v = b.v;
        return *this;
    }
    bool operator<(Fx32 b) const {
        return v < b.v;
    }
    bool operator>(Fx32 b) const {
        return v > b.v;
    }
};

struct Obj {
    u8 pad[8];
    u8 f8;
    u8 pad9[3];
    Fx32 c;
    Fx32 x10;
    Fx32 max;
};

extern "C" void func_02072c88(Obj *o, Fx32 a, s32 flag) {
    o->c = a * o->max;
    if (o->c < Fx32(0)) {
        o->c = Fx32(0);
    } else if (o->c > o->max) {
        o->c = o->max;
    }
    if (flag == 0) {
        o->x10 = o->c;
    }
    o->f8 |= 1;
}
