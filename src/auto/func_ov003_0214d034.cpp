/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
};

extern "C" u8 data_ov003_02150b10[];
extern "C" u8 data_ov003_021509cc[];
extern "C" void func_02046a58(void *arg0);
extern "C" void func_02046844(void *arg0);

extern "C" u8 *func_ov003_0214d034(u8 *arg0) {
    VA *o;
    s32 i;

    *(u8 **) arg0 = data_ov003_02150b10;
    for (i = 0; i < 8; i++) {
        o = ((VA **) (arg0 + 0x10))[i];
        if (o != 0) {
            o->f1();
        }
        ((VA **) (arg0 + 0x10))[i] = 0;
    }
    *(u8 **) arg0 = data_ov003_021509cc;
    func_02046a58(arg0 + 8);
    func_02046844(arg0);
    return arg0;
}
