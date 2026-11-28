/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern "C" {
void func_020d58a8(u8);
void func_020d50f0(s32);
s32 func_020d5300(s32, s32);
extern s32 data_02131618;
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

extern "C" void func_02056334(Obj *o, Fx32 a, s32 flag) {
    func_020d58a8((u8) (a * Fx32(0x7f000)).toInt());
    o->vol = a;
    if (flag != 0) {
        func_020d50f0(data_02131618);
        if (a < Fx32(0x1000)) {
            data_02131618 = func_020d5300(0x47, data_02131618);
        } else {
            data_02131618 = func_020d5300(0x48, data_02131618);
        }
    }
}
