/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern "C" {
void func_020d5c80(u8);
void func_020d54c8(s32);
s32 func_020d56d8(s32, s32);
extern s32 data_021319d8;
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

extern "C" void func_020560ac(Obj *o, Fx32 a, s32 flag) {
    func_020d5c80((u8) (a * Fx32(0x7f000)).toInt());
    o->vol = a;
    if (flag != 0) {
        func_020d54c8(data_021319d8);
        if (a < Fx32(0x1000)) {
            data_021319d8 = func_020d56d8(0x47, data_021319d8);
        } else {
            data_021319d8 = func_020d56d8(0x48, data_021319d8);
        }
    }
}
