/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
};

extern "C" void func_0200bbbc(void *a, u8 b);

extern "C" void func_01ffb0d8(u8 *arg0, VA *arg1) {
    func_0200bbbc((u8 *) arg1 + 0x24, arg0[0xa]);
    arg1->f5();
}
