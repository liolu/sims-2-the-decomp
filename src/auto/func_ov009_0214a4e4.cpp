/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VD {
    virtual ~VD();
    virtual void f1();
};
struct VA {
    virtual void f0();
    virtual void f1();
};

extern "C" u8 data_ov009_0214c124[];
extern "C" u8 data_0212f9c4[];
extern "C" void func_ov009_0214b90c(void *arg0);

extern "C" u8 *func_ov009_0214a4e4(u8 *arg0) {
    VD *d;
    VA *o;
    s32 i;

    *(u8 **) arg0 = data_ov009_0214c124;
    func_ov009_0214b90c(arg0 + 0x3C);
    d = *(VD **) (arg0 + 0x64);
    if (d != 0) {
        delete d;
    }
    i = 0;
    do {
        o = ((VA **) (arg0 + 0x68))[i];
        if (o != 0) {
            o->f1();
        }
        o = ((VA **) (arg0 + 0x78))[i];
        if (o != 0) {
            o->f1();
        }
        i++;
    } while (i < 4);
    *(u8 **) arg0 = data_0212f9c4;
    return arg0;
}
