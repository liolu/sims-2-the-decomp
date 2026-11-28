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
    bool operator!=(Fx32 b) const {
        return v != b.v;
    }
};

struct Vec3 {
    Fx32 x, y, z;
    Vec3() {}

    Vec3 &operator=(const Vec3 &b) {
        x = b.x;
        y = b.y;
        z = b.z;
        return *this;
    }
    bool operator!=(const Vec3 &b) const {
        if (x != b.x || y != b.y || z != b.z) {
            return true;
        }
        return false;
    }
};

struct Thing {
    u8 pad[0x78];
    Vec3 pos;
    u8 pad2[0xdc - 0x84];
    u8 dirty;
};

extern "C" {
void func_02082268(Vec3 *, s32, s32);
u32 func_02086e18(u32, Thing *, u32, s32, Fx32, s32, s32);
void func_02010c28(void);
extern u32 data_0213e580;

void func_020824a4(Thing *t, s32 flag, s32 a2) {
    Vec3 p;
    p.x.v = 0;
    p.y.v = 0x5000;
    p.z.v = 0;
    func_02082268(&p, flag, a2);
    if (p != t->pos) {
        t->pos   = p;
        t->dirty = 1;
    }
    if (flag != 0) {
        return;
    }
    if (func_02086e18(data_0213e580, t, 0xf, -1, 0x190000, -1, 0)) {
        func_02010c28();
    }
}
}
