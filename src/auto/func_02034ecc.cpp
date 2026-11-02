/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a);
};
extern "C" void func_02018734(void *, s32, void *);
extern "C" void func_02018ad0(void *, void *);
extern "C" void func_02018aa0(void *, s32);
extern u8 data_021314d8;
extern "C" void *func_02034ecc(void *arg0, void *arg1) {
    void *self;
    void *a1;
    void *sub;
    self = arg0;
    a1   = arg1;
    func_02018734(self, (s32) a1, (u8 *) self + 0x18);
    sub             = (u8 *) self + 0x18;
    *(void **) self = &data_021314d8;
    func_02018ad0(sub, &data_021314d8);
    func_02018aa0(sub, 0x3d);
    *(s32 *) ((u8 *) sub + 0x10)  = 0;
    *(s32 *) ((u8 *) sub + 0x14)  = -1;
    *(s8 *) ((u8 *) sub + 0x18)   = 1;
    *(s8 *) ((u8 *) sub + 0x19)   = 0;
    *(u16 *) ((u8 *) self + 0x10) = 0x3d;
    ((VA *) self)->f3(*(s32 *) ((u8 *) a1 + 4));

    return self;
}
