/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VC {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4(s32 a);
};
extern "C" void func_020b9348(void *p, s32 a, s32 b, s32 c, u8 d);
extern "C" void func_02011090(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4) {
    func_020b9348(arg0 + 0x14C, arg1, arg2, arg3, arg4);
    ((VC *) arg0)->f4(*(u16 *) (arg0 + 0x1FC));
}
