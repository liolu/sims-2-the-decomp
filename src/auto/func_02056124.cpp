/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern "C" {
void func_020d5dbc(u8);
void func_020d5604(s32);
s32 func_020d5814(s32, s32);
extern s32 data_02131b18;
}

struct Fx32 {
    s32 v;
    Fx32() {}
    Fx32(s32 x) :
        v(x) {}
    Fx32 &operator=(Fx32 b) {
        v = b.v;
        return *this;
    }
    Fx32 operator*(Fx32 b) const {
        return Fx32((s32) (((s64) v * b.v + 0x800) >> 12));
    }
    bool operator<(Fx32 b) const {
        return v < b.v;
    }
    s32 toInt() const {
        return (v + 0x800) >> 12;
    }
};

struct Obj {
    s32 unk0;
    Fx32 vol;
};

extern "C" void func_02056124(Obj *o, Fx32 a, s32 flag) {
    func_020d5dbc((u8) (a * Fx32(0x7f000)).toInt());
    o->vol = a;
    if (flag != 0) {
        func_020d5604(data_02131b18);
        if (a < Fx32(0x1000)) {
            data_02131b18 = func_020d5814(0x47, data_02131b18);
        } else {
            data_02131b18 = func_020d5814(0x48, data_02131b18);
        }
    }
}
