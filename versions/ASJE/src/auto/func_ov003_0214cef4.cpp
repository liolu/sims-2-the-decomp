/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
};

extern "C" u8 data_ov003_021509d0[];
extern "C" u8 data_ov003_0215088c[];
extern "C" void func_020469e0(void *arg0);
extern "C" void func_020467cc(void *arg0);

extern "C" u8 *func_ov003_0214cef4(u8 *arg0) {
    VA *o;
    s32 i;

    *(u8 **) arg0 = data_ov003_021509d0;
    for (i = 0; i < 8; i++) {
        o = ((VA **) (arg0 + 0x10))[i];
        if (o != 0) {
            o->f1();
        }
        ((VA **) (arg0 + 0x10))[i] = 0;
    }
    *(u8 **) arg0 = data_ov003_0215088c;
    func_020469e0(arg0 + 8);
    func_020467cc(arg0);
    return arg0;
}
