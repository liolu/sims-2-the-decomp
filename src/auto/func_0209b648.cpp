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
    virtual void f7();
};

extern "C" void *func_0204561c(void *arg0);
extern "C" void func_0209b29c(void *arg0);
extern "C" void func_02046844(void *arg0);

extern "C" void func_0209b648(VA *arg0) {
    u8 *p = (u8 *) arg0;
    void *it;
    void **m;
    void **n;
    void *item;

    if (p[0x68] == 0) {
        return;
    }
    n = (void **) func_0204561c(arg0);
    if (n != NULL) {
        do {
            item = n[0];
            if (item != NULL) {
                func_0209b29c(item);
                func_02046844(item);
            }
            n = (void **) n[1];
        } while (n != NULL);
    }
    m = (void **) func_0204561c(p + 0x34);
    if (m != NULL) {
        do {
            it = m[0];
            if (it != NULL) {
                func_0209b29c(it);
                func_02046844(it);
            }
            m = (void **) m[1];
        } while (m != NULL);
    }
    arg0->f7();
    ((VA *) (p + 0x34))->f7();
    p[0x68] = 0;
}
