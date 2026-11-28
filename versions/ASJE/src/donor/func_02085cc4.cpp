/* compiler: 1.2/sp2p3  */
/* func_02085d3c from sims-2-the/src/auto/func_02085d3c.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
extern "C" {
extern s32 func_020f5d7c(s32, s32);
extern u8 *data_0213e2f4;
}
struct Fx32 {
    s32 v;
    Fx32() {}
    Fx32(s32 x) :
        v(x) {}
    Fx32 operator/(Fx32 b) const {
        return Fx32(func_020f5d7c(v, b.v));
    }
    bool operator!=(Fx32 b) const {
        return v != b.v;
    }
    Fx32 &operator=(Fx32 b) {
        v = b.v;
        return *this;
    }
};
static inline Fx32 Id(Fx32 x) {
    return x;
}
struct Time {
    s32 h;
    s32 m;
    s32 s;
};
struct Sub {
    u8 pad[0x38];
};
struct Obj {
    void *arr[2];
    Sub subs[2];
    Fx32 t;
};
extern "C" {
extern void func_020858dc(Obj *, void *, Sub *, Fx32);
void func_02085cc4(Obj *o) {
    Time tm = *(Time *) (data_0213e2f4 + 0x4800);
    Fx32 r  = Fx32(Id(Fx32((tm.s + (tm.m * 60 + tm.h * 3600)) << 12) / Fx32(0x15180000)));
    s32 i;
    if (r != o->t) {
        o->t = r;
    }
    for (i = 0; i < 2; i++) {
        func_020858dc(o, o->arr[i], &o->subs[i], o->t);
    }
}
}
