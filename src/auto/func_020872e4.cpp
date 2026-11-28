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
    Fx32 &operator+=(Fx32 b) {
        v += b.v;
        return *this;
    }
    Fx32 operator-(Fx32 b) const {
        return Fx32(v - b.v);
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
    Vec3 operator-(const Vec3 &b) const {
        return Vec3(x - b.x, y - b.y, z - b.z);
    }
};

struct Box {
    Fx32 v[6];
};

struct Tri;

struct Hit {
    Tri *tri;
    s32 f4;
    Fx32 dist;
};

struct Col {
    u8 pad[0x38];
    void *mesh;
};

struct Obj {
    u8 pad[0xfc];
    Col *col;
};

extern "C" {
void func_020d9b00(Box *out, const Vec3 *c, const Vec3 *h);
void func_01ffc54c(void *a, Box *b, const Vec3 *dir, Hit *hit);

Fx32 func_020872e4(Obj *o, const Vec3 *p, const Vec3 *q) {
    if (o->col != 0 && o->col->mesh != 0) {
        Vec3 d(q->x - p->x, q->y - p->y, q->z - p->z);
        Box box;
        Vec3 c;
        Hit hit;
        c = *p;
        c.y += Fx32(0x3000);
        Vec3 half(Fx32(0x2000), Fx32(0x1000), Fx32(0x2000));
        func_020d9b00(&box, &c, &half);
        func_01ffc54c(o->col->mesh, &box, &d, &hit);
        return hit.dist;
    }
    return Fx32(0);
}
}
