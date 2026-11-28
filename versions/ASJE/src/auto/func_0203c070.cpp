/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct Fx32 {
    s32 v;
    Fx32() {}
    Fx32(s32 x) :
        v(x) {}
    Fx32 &operator=(Fx32 b) {
        v = b.v;
        return *this;
    }
};

struct Vec2 {
    Fx32 x;
    Fx32 y;
};

struct Elem {
    u8 pad[0x14];
    u32 flags;
    Vec2 a;
    Vec2 b;
    Fx32 c;
    u8 pad2[0x74 - 0x2c];
};

struct Slot {
    u8 hdr[8];
    Elem e[4];
};

extern "C" {
extern s32 data_027e0000;
extern Slot data_021392f8[];
}

static inline Elem *GetElem(s32 cur, s32 i) {
    return &data_021392f8[cur].e[i];
}

extern "C" void func_0203c070(s32 i, s32 x) {
    s32 cur            = data_027e0000;
    GetElem(cur, i)->c = Fx32(x);
    data_021392f8[cur].e[i].flags |= 1;
}
