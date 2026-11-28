/* compiler: 1.2/sp2p3  */
/* func_02087b84 from sims-2-the/src/auto/func_02087b84.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
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
    bool operator!=(Fx32 b) const {
        return v != b.v;
    }
};
struct Vec3 {
    Fx32 x, y, z;
    Vec3() {}
    Vec3(s32 a, s32 b, s32 c) :
        x(a),
        y(b),
        z(c) {}
    Vec3 &operator=(const Vec3 &b) {
        x.v = b.x.v;
        y   = b.y;
        z   = b.z;
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
extern s8 data_02121c58[];
extern s8 data_02121c64[];
extern s32 data_0213df5c;
extern s32 data_0213e0a8;
extern s32 func_020646f8(s32 a, s32 b);
extern s32 func_020468a0(s32 a, s32 b, s32 c);
extern s32 func_02014c28(s32 a, s32 b);
extern void func_020872cc(s32 a, Thing *b);
void func_02087a6c(u8 *o) {
    s32 id;
    s32 n;
    s8 *tbl;
    s32 i;
    s32 t;

    tbl = data_02121c58;
    n   = 3;
    id  = 0x4a;
    if (*(s32 *) (o + 0xf4) == 3) {
        tbl = data_02121c64;
        n   = 4;
        id  = 0x4d;
    }
    for (i = 0; i < n; i++) {
        if (func_020646f8(data_0213df5c, id) == 0) {
            Thing *th = (Thing *) func_020468a0(0x214, 0, 4);
            if (th != 0) {
                th = (Thing *) func_02014c28((s32) th, 0x17);
            }
            Vec3 p(tbl[0] << 12, tbl[1] << 12, tbl[2] << 12);
            if (p != th->pos) {
                th->pos   = p;
                th->dirty = 1;
            }
            func_020872cc(data_0213e0a8, th);
        }
        tbl += 3;
        id++;
    }
}
}
