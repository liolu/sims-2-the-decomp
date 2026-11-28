/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VObj02036424 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32);
};
extern "C" void func_02018734(void *, void *, void *);
extern "C" void func_02018ad0(void *);
extern "C" void func_02018aa0(void *, s32);
extern u8 data_021313e0[];

extern "C" u8 *func_020363ac(u8 *obj, u8 *params) {
    u8 *sub;
    func_02018734(obj, params, obj + 0x18);
    sub            = obj + 0x18;
    *(void **) obj = data_021313e0;
    func_02018ad0(sub);
    func_02018aa0(sub, 0x32);
    *(s32 *) (sub + 0x10) = 0;
    *(u16 *) (obj + 0x10) = 0x32;
    ((VObj02036424 *) obj)->f3(*(s32 *) (params + 4));
    obj[0x2D] = 0;
    obj[0x2F] = 1;
    obj[0x2E] = 0;
    {
        u8 i;
        for (i = 0; i < 4; i++) {
            *(s32 *) (obj + 0x34 + i * 8) = 0;
            *(u16 *) (obj + 0x38 + i * 8) = 0;
        }
    }
    return obj;
}
