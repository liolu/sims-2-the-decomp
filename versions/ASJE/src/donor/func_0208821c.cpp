/* compiler: 1.2/sp2p3  */
/* func_02088294 from sims-2-the/src/auto/func_02088294.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
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
struct Snd {
    Thing *t;
    u16 flags;
};
extern "C" {
void func_0208821c(Snd *s, const Vec3 *v) {
    Vec3 p;
    Thing *t;
    p = *v;
    if (((u32) (s->flags << 0x1B) >> 0x1C) != 3) {
        p.y += Fx32(0xf000);
    }
    t = s->t;
    if (p != t->pos) {
        t->pos   = p;
        t->dirty = 1;
    }
}
}
