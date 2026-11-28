/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VObj020250ec {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32);
};
typedef struct Vec2_020250ec {
    s32 x;
    s32 y;
} Vec2_020250ec;
extern "C" void func_0201872c(void *, void *, void *);
extern "C" void func_02018ac8(void *);
extern "C" void func_02018a98(void *, s32);
typedef struct Params020250ec {
    u8 unk0[0x20];
    s32 unk20;
    u8 unk24;
    u8 unk25[3];
} Params020250ec;
extern "C" void func_0201b020(Params020250ec *);
extern "C" void func_02018ac4(Params020250ec *);
extern "C" void func_020117d8(s32, s32, Params020250ec *, void *);
extern u8 data_02130190[];
extern "C" u8 *func_02025134(u8 *obj, u8 *params) {
    u8 *sub;
    Params020250ec p;
    volatile Vec2_020250ec v;
    func_0201872c(obj, params, obj + 0x18);
    sub            = obj + 0x18;
    *(void **) obj = data_02130190;
    func_02018ac8(sub);
    func_02018a98(sub, 0x2A);
    sub[0x10]             = 1;
    *(s32 *) (sub + 0x18) = 9;
    *(s32 *) (sub + 0x14) = *(s32 *) (sub + 0x18);
    *(u16 *) (obj + 0x10) = 0x2A;
    ((VObj020250ec *) obj)->f3(*(s32 *) (params + 4));
    obj[0x34]             = 0;
    obj[0x35]             = 0;
    *(s32 *) (obj + 0x38) = 0;
    obj[0x46]             = 0;
    func_0201b020(&p);
    p.unk24 = 0;
    v.x     = 0x4CC;
    v.y     = 0x4CC;
    p.unk20 = 0x4CC;
    func_020117d8(*(s32 *) (obj + 4), 10, &p, obj);
    *(s32 *) (obj + 0x40) = 0;
    obj[0x45]             = 0;
    func_02018ac4(&p);
    return obj;
}
