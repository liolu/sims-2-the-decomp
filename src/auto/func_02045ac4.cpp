/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VB {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual s32 f8(s32 a, s32 b);
};
extern "C" u16 func_02045ac4(void *arg0, s32 arg1) {
    s32 v = arg1;
    u16 n = 0;
    if (v != 0) {
        do {
            n += 1;
            v = ((VB *) arg0)->f8(v, 0);
        } while (v != 0);
    }
    return n;
}
