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
    bool operator==(Fx32 b) const {
        return v == b.v;
    }
};

struct Vec3 {
    Fx32 x, y, z;
    Vec3() {}
    Vec3(const Fx32 &ax, const Fx32 &ay, const Fx32 &az) {
        x = ax;
        y = ay;
        z = az;
    }
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
    bool operator==(const Vec3 &b) const {
        return x == b.x && y == b.y && z == b.z;
    }
};

struct Thing {
    u8 pad[0x78];
    Vec3 pos;
    Vec3 rot;
    u8 pad2[0xdc - 0x90];
    u8 dirty;
};

struct Cam {
    u8 pad[0x2130];
    Vec3 pos;
    Fx32 yaw;
};

static inline void Rot(Cam *c, Thing *t) {
    Vec3 r(t->rot.x, c->yaw, t->rot.z);
    if (r == t->rot) {
        return;
    }
    t->rot   = r;
    t->dirty = 1;
}

extern "C" void func_020834b0(Cam *c, Thing *t) {
    if (c->pos != t->pos) {
        t->pos   = c->pos;
        t->dirty = 1;
    }
    Rot(c, t);
}
