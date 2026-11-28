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
extern s8 data_0212212c[];
extern s8 data_02122138[];
extern s32 data_0213e434;
extern s32 data_0213e580;
s32 func_02064644(s32 a, s32 b);
s32 func_0204688c(s32 a, s32 b, s32 c);
s32 func_02014c30(s32 a, s32 b);
void func_020873e4(s32 a, Thing *b);

void func_02087b84(u8 *o) {
    s32 id;
    s32 n;
    s8 *tbl;
    s32 i;
    s32 t;

    tbl = data_0212212c;
    n   = 3;
    id  = 0x4a;
    if (*(s32 *) (o + 0xf4) == 3) {
        tbl = data_02122138;
        n   = 4;
        id  = 0x4d;
    }
    for (i = 0; i < n; i++) {
        if (func_02064644(data_0213e434, id) == 0) {
            Thing *th = (Thing *) func_0204688c(0x214, 0, 4);
            if (th != 0) {
                th = (Thing *) func_02014c30((s32) th, 0x17);
            }
            Vec3 p(tbl[0] << 12, tbl[1] << 12, tbl[2] << 12);
            if (p != th->pos) {
                th->pos   = p;
                th->dirty = 1;
            }
            func_020873e4(data_0213e580, th);
        }
        tbl += 3;
        id++;
    }
}
}
