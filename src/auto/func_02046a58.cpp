/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual ~VA();
    virtual void f1();
};

extern "C" void func_02046844(void *arg0);

extern "C" u8 *func_02046a58(u8 *arg0) {
    u32 i;
    VA *obj;

    for (i = 0; i < *(u16 *) (arg0 + 4); i++) {
        obj = ((VA **) (*(u8 ***) arg0))[i];
        if (obj != 0) {
            delete obj;
            ((VA **) (*(u8 ***) arg0))[i] = 0;
        }
    }
    func_02046844(*(void **) arg0);
    *(void **) arg0 = 0;
    return arg0;
}
