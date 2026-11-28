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

struct Obj {
    s32 f0, f4, f8, fC, f10, f14, f18;
    s32 f1c;
    s32 f20, f24, f28, f2c;
    u8 pad30[0x170 - 0x30];
    s32 f170;
    s32 f174;
    s32 f178, f17c, f180, f184, f188, f18c, f190, f194, f198;
    s32 f19c;
    u8 pad1a0[8];
    s32 f1a8;
    u8 f1ac;
};

extern "C" {
extern s32 data_021350b0;
extern s32 data_021350ac;
extern s32 data_021350b8;
extern s32 data_021350b4;
extern s32 data_0213_k;
s64 func_0210f908(s64, s64);
s32 func_020f5eb8(s32, s32);
void func_020f57b4(void *);

Obj *func_020be1f8(Obj *o) {
    Fx32 a, b;
    s32 k   = 0x3243;
    o->f0   = 0;
    o->f4   = 0;
    o->f8   = 0;
    o->fC   = 0;
    o->f10  = 0;
    o->f14  = 0;
    o->f18  = 0;
    o->f1c  = 0x1000;
    o->f20  = 0;
    o->f24  = 0;
    o->f28  = 0;
    o->f2c  = 0;
    o->f170 = 0x1000;
    o->f174 = 0x2710000;
    a       = Fx32(0x2d000);
    o->f178 = func_0210f908((s64) a.v * k, 0xb4000);
    o->f17c = 0;
    o->f184 = 0;
    o->f188 = 0;
    o->f18c = 0;
    o->f190 = 0;
    o->f194 = 0;
    o->f198 = 0;
    b       = Fx32(0xc0000);
    o->f19c = func_020f5eb8(0x100000, b.v);
    o->f1a8 = 0;
    o->f1ac = 0;
    func_020f57b4((u8 *) o + 0x30);
    s32 p   = data_021350b0;
    s32 q   = data_021350ac;
    s32 r   = data_021350b8;
    s32 t   = data_021350b4;
    o->f184 = t;
    o->f188 = p;
    o->f18c = q;
    o->f190 = r;
    o->f180 = -1;
    return o;
}
}
