/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern "C" {
void func_020d5c80(u8);
void func_020d54c8(s32);
s32 func_020d56d8(s32, s32);
extern s32 data_021319d8;
extern u8 *data_0213e2f4;
extern char data_0211e6f8[];
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

struct Snd {
    s32 unk0;
    Fx32 vol;
};

struct Thing {
    u8 pad[0x14];
    u32 f14;
    u8 pad18[0x90 - 0x18];
    Fx32 x90;
    u8 pad94[0xb0 - 0x94];
    u8 b0;
};

extern "C" void func_02016708(Thing *o, const char *s);

static inline void SetVol(Snd *o, Fx32 a, s32 flag) {
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

extern "C" void func_02057114(Thing *t) {
    t->f14 = (t->f14 & ~0xf000) | 0x3000;
    func_02016708(t, data_0211e6f8);
    if (t->b0 != 0) {
        return;
    }
    Fx32 a = t->x90;
    SetVol((Snd *) (data_0213e2f4 + 0x2f70), a, 1);
}
