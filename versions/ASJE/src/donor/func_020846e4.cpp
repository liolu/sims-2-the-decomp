/* compiler: 1.2/sp2p3 -pragma "opt_common_subs off" */
/* func_0208475c from sims-2-the/src/auto/func_0208475c.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
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
struct Mesh {
    u8 pad[0x12];
    u16 count;
};
struct Obj {
    u8 pad[0x3c];
    Mesh *mesh;
};
extern "C" {
extern s16 **func_02052c58(Mesh *, u16);
extern Fx32 func_01ffc22c(const Vec3 &);
u16 func_020846e4(Obj *o, const Vec3 *pos) {
    Fx32 best = Fx32(0x7FFFFFFF);
    s32 idx   = -1;
    s32 i;

    for (i = 0; i < o->mesh->count; i++) {
        s16 *s = *func_02052c58(o->mesh, (u16) i);
        Fx32 d = func_01ffc22c(*pos - Vec3(Fx32(s[0] << 12), Fx32(s[1] << 12), Fx32(s[2] << 12)));
        if (d < best) {
            best = d;
            idx  = i;
        }
    }
    return idx;
}
}
