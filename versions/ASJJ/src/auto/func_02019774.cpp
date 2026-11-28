/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a);
};

extern "C" void func_0201872c(void *, void *, void *);
extern "C" void func_02018ac8(void *);
extern "C" void func_02018a98(void *, s32);
extern "C" u8 data_0212fd60;

extern "C" void *func_02019774(void *arg0, void *arg1) {
    void *temp_r4;
    func_0201872c(arg0, arg1, (u8 *) arg0 + 0x18);
    temp_r4         = (u8 *) arg0 + 0x18;
    *(void **) arg0 = (void *) &data_0212fd60;
    func_02018ac8(temp_r4);
    func_02018a98(temp_r4, 4);
    *(s32 *) ((u8 *) temp_r4 + 0x10) = 0;
    *(u16 *) ((u8 *) arg0 + 0x10)    = 4;
    ((VA *) arg0)->f3(*(s32 *) ((u8 *) arg1 + 4));
    return arg0;
}
