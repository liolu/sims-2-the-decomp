/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
};

extern "C" void func_02018644(void *arg0);
extern "C" void func_01ffac40(void *arg0, void *arg1);

extern "C" s32 func_01ff90f4(u8 *arg0, VA *arg1) {
    u8 *p;
    s32 a;

    p = (u8 *) arg1;
    if (*(void **) (arg0 + 0x4C) == 0) {
        return 0;
    }
    a = (p[0x13] != 0) || ((p[0x12] & 1) != 0);
    if (a == 0) {
        if (p[0x15] == 0) {
            func_02018644(arg1);
            arg1->f6();
            p[0x15] = 1;
        }
        arg1->f2();
    }
    a = (p[0x13] != 0) || ((p[0x12] & 1) != 0);
    if (a != 0) {
        func_01ffac40(arg0, arg1);
        arg1->f5();
        p[0x15] = 0;
        p[0x12] = p[0x12] | 1;
    }
    a = (p[0x13] != 0) || ((p[0x12] & 1) != 0);
    return a == 0;
}
