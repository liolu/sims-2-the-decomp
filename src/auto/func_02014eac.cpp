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
    Fx32 operator-(Fx32 b) const {
        return Fx32(v - b.v);
    }
    bool operator<(Fx32 b) const {
        return v < b.v;
    }
};

struct Vec3 {
    Fx32 x, y, z;
    Vec3() {}
    Vec3(const Fx32 &ax, const Fx32 &ay, const Fx32 &az) :
        x(ax),
        y(ay),
        z(az) {}
    Vec3 operator-(const Vec3 &b) const {
        return Vec3(x - b.x, y - b.y, z - b.z);
    }
};

struct Ent {
    u8 pad[4];
    Vec3 pos;
    u8 pad10[4];
    u8 type;
};

struct Mgr {
    u8 pad[0x24];
    u8 vm[5];
    u8 count;
};

extern "C" {
Ent *_ZN12ValueManager7GetByIdEl(void *vm, s32 id);
Fx32 func_01ffc22c(const Vec3 &);

Ent *func_02014eac(Mgr *m, const Vec3 *pos) {
    s32 i;
    Ent *best = 0;
    for (i = 0; i < m->count; i++) {
        Ent *e = _ZN12ValueManager7GetByIdEl(m->vm, i);
        if (e->type == 2) {
            if (best == 0 || func_01ffc22c(e->pos - *pos) < func_01ffc22c(best->pos - *pos)) {
                best = e;
            }
        }
    }
    return best;
}
}
