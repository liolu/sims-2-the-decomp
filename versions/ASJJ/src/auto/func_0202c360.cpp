/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a);
};
extern "C" void func_0201872c(void *, s32, void *);
extern "C" void func_02018ac8(void *, void *);
extern "C" void func_02018a98(void *, s32);
extern "C" s32 func_0208c238(s32, s32);
extern u8 data_021309d0;
extern "C" void *func_0202c360(void *arg0, void *arg1) {
    void *self;
    void *a1;
    void *sub;
    self = arg0;
    a1   = arg1;
    func_0201872c(self, (s32) a1, (u8 *) self + 0x18);
    sub             = (u8 *) self + 0x18;
    *(void **) self = &data_021309d0;
    func_02018ac8(sub, &data_021309d0);
    func_02018a98(sub, 0x15);
    *(s32 *) ((u8 *) sub + 0x10)  = 0;
    *(s32 *) ((u8 *) self + 0x30) = 0;
    *(s8 *) ((u8 *) self + 0x34)  = 0;
    *(u16 *) ((u8 *) self + 0x10) = 0x15;
    ((VA *) self)->f3(*(s32 *) ((u8 *) a1 + 4));
    *(s32 *) ((u8 *) self + 0x2c) = func_0208c238(*(s32 *) ((u8 *) self + 0x28), 0);
    return self;
}
