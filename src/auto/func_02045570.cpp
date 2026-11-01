/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VC0 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual s32 f8(s32, s32);
};

extern "C" s32 func_02045570(void *arg0, u32 arg1) {
    s32 var_r1;
    u32 var_r5;

    var_r5 = 0;
    var_r1 = M2C_FIELD(arg0, s32 *, 4);
    for (; var_r1 != 0 && var_r5 < arg1;) {
        var_r5 += 1;
        var_r1 = ((VC0 *) (arg0))->f8(var_r1, 0);
    }
    return var_r1;
}
