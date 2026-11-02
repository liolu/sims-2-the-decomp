/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a);
};
extern "C" void func_02018734(void *, s32, void *);
extern "C" void func_02039810(void *, void *);
extern u8 data_021316a0;
extern "C" void *func_0203964c(void *arg0, void *arg1) {
    void *self;
    void *a1;
    void *sub;
    self = arg0;
    a1   = arg1;
    func_02018734(self, (s32) a1, (u8 *) self + 0x18);
    *(void **) self = &data_021316a0;
    func_02039810((u8 *) self + 0x18, &data_021316a0);
    *(s32 *) ((u8 *) self + 0x70) = 0;
    *(s32 *) ((u8 *) self + 0x74) = 0;
    *(s32 *) ((u8 *) self + 0x78) = 0;
    *(s32 *) ((u8 *) self + 0x7c) = 0;
    *(s32 *) ((u8 *) self + 0x80) = 0;
    *(s32 *) ((u8 *) self + 0x84) = 0;
    *(u16 *) ((u8 *) self + 0x10) = 0x14;
    ((VA *) self)->f3(*(s32 *) ((u8 *) a1 + 4));
    *(s32 *) ((u8 *) self + 0x8c) = -1;
    return self;
}
