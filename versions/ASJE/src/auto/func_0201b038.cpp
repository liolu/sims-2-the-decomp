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

struct Vec3 {
    Fx32 x, y, z;
    Vec3() {}
    Vec3(const Fx32 &ax, const Fx32 &ay, const Fx32 &az) :
        x(ax),
        y(ay),
        z(az) {}
    Vec3 &operator=(const Vec3 &b) {
        x = b.x;
        y = b.y;
        z = b.z;
        return *this;
    }
};

struct Obj {
    u8 base[0x10];
    Vec3 pos;
    Fx32 a;
    Fx32 b;
    u8 c24;
    u8 c25;
    u8 c26;
};

extern "C" void func_02018ad0(void *);
extern "C" void func_02018aa0(void *, s32);

extern "C" Obj *func_0201b038(Obj *o) {
    func_02018ad0(o);
    o->pos.x.v = 0;
    o->pos.y.v = 0;
    o->pos.z.v = 0;
    func_02018aa0(o, 10);
    o->pos = Vec3(Fx32(0x28000), Fx32(0), Fx32(0x28000));
    o->a   = Fx32(0);
    o->b   = Fx32(0x4cc);
    o->c26 = 0;
    o->c24 = 1;
    o->c25 = 1;
    return o;
}
