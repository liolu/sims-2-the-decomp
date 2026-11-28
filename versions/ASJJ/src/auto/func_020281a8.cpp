/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VObj02028168 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7(s32, void *);
};

typedef struct Vec3_02028168 {
    s32 x;
    s32 y;
    s32 z;
} Vec3_02028168;

extern "C" void func_02018aa0(void *, void *);

extern "C" void func_020281a8(u8 *obj, u8 *params) {
    volatile Vec3_02028168 pos;
    s32 value;
    func_02018aa0(obj + 0x18, params);
    *(s32 *) (obj + 0x34) = *(s32 *) (params + 0x1C);
    value                 = *(s32 *) (params + 0x10);
    pos.x                 = value;
    *(s32 *) (obj + 0x28) = value;
    value                 = *(s32 *) (params + 0x14);
    pos.y                 = value;
    *(s32 *) (obj + 0x2C) = value;
    value                 = *(s32 *) (params + 0x18);
    pos.z                 = value;
    *(s32 *) (obj + 0x30) = value;
    obj[0x3A]             = params[0x22];
    obj[0x3B]             = params[0x23];
    ((VObj02028168 *) obj)->f7(0x3E, obj + 0x18);
}
