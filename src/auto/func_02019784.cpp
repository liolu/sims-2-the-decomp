/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a);
};

extern "C" void func_02018734(void *, void *, void *);
extern "C" void func_02018ad0(void *);
extern "C" void func_02018aa0(void *, s32);
extern "C" u8 data_02130260;

extern "C" void *func_02019784(void *arg0, void *arg1) {
    void *temp_r4;
    func_02018734(arg0, arg1, (u8 *) arg0 + 0x18);
    temp_r4         = (u8 *) arg0 + 0x18;
    *(void **) arg0 = (void *) &data_02130260;
    func_02018ad0(temp_r4);
    func_02018aa0(temp_r4, 4);
    *(s32 *) ((u8 *) temp_r4 + 0x10) = 0;
    *(u16 *) ((u8 *) arg0 + 0x10)    = 4;
    ((VA *) arg0)->f3(*(s32 *) ((u8 *) arg1 + 4));
    return arg0;
}
