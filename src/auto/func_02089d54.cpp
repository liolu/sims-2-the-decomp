/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
};

extern "C" u8 *func_02089d54(u8 *arg0) {
    VA *o;
    s32 i;

    if (arg0[0xC4] != 0) {
        o = *(VA **) (arg0 + 0x58);
        if (o != 0) {
            o->f1();
        }
        for (i = 0; i < 16; i++) {
            o = ((VA **) (arg0 + 0x18))[i];
            if (o != 0) {
                o->f1();
            }
        }
    }
    return arg0;
}
