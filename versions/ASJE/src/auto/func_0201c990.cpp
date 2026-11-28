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
    s32 f1c;
    s32 f20;
    Fx32 a;
    Fx32 b;
    u16 h2c;
    u8 c2e;
    u8 c2f;
    u8 c30;
    u8 c31;
    u8 c32;
    u8 c33;
};

extern "C" void func_02018ad0(void *);
extern "C" void func_02018aa0(void *, s32);

extern "C" Obj *func_0201c990(Obj *o) {
    func_02018ad0(o);
    o->pos.x.v = 0;
    o->pos.y.v = 0;
    o->pos.z.v = 0;
    func_02018aa0(o, 0x1b);
    o->pos = Vec3(Fx32(-0x1c000), Fx32(0), Fx32(0x8000));
    o->f1c = 0;
    o->a   = Fx32(0x5000);
    o->c2e = 0;
    o->h2c = 0x135;
    o->b   = Fx32(0x4cc);
    o->f20 = 0;
    o->c2f = 0;
    o->c30 = 0;
    o->c31 = 0;
    o->c32 = 1;
    o->c33 = 0;
    return o;
}
