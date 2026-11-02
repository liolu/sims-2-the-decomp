/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
};

extern "C" void func_020557bc(u8 *arg0) {
    u32 *q;
    VA *obj;
    s32 i;

    i    = 0;
    q    = *(u32 **) (arg0 + 8);
    q[1] = q[1] & ~1u;
    do {
        obj = ((VA **) (arg0 + 0xC))[i];
        if (obj != 0) {
            obj->f1();
        }
        ((VA **) (arg0 + 0xC))[i] = 0;
        i++;
    } while (i < 12);
}
