/* compiler: 1.2/sp2p3  */
/* func_0204ad98 from sims-2-the/src/auto/func_0204ad98.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
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
    Fx32 &operator-=(Fx32 b) {
        v -= b.v;
        return *this;
    }
    bool operator==(Fx32 b) const {
        return v == b.v;
    }
};
struct Range {
    u8 pad[0x2C];
    s32 min;
    s32 max;
};
struct Obj {
    u8 pad0[4];
    Fx32 x4;
    u8 pad8[0x28 - 0x8];
    Fx32 x28;
    u8 pad2c[4];
    Fx32 x30;
    Fx32 x34;
    u8 pad38[8];
    Range *x40;
};
struct Global {
    u8 pad[0x10];
    Fx32 x10;
};
extern "C" {
extern Global data_02139e74;
extern s32 func_0204ca90(s32, s32);
}
extern "C" s32 func_0204ad20(Obj *o) {
    if (o->x34 == Fx32(0)) {
        o->x34 = Fx32(func_0204ca90(o->x40->min, o->x40->max));
    }
    o->x4 -= o->x34;
    o->x30 -= Fx32(0x1000);
    o->x28 = data_02139e74.x10;
    return (o->x30.v >> 12) <= 0;
}
