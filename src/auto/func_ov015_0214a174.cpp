/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual ~VA();
    virtual void f1();
};

extern "C" void func_0203c540(void);

extern "C" void func_ov015_0214a174(u8 *arg0) {
    VA *o;

    o = *(VA **) (arg0 + 0x2C);
    if (o != 0) {
        delete o;
        *(VA **) (arg0 + 0x2C) = 0;
    }
    o = *(VA **) (arg0 + 0x30);
    if (o != 0) {
        delete o;
        *(VA **) (arg0 + 0x30) = 0;
    }
    func_0203c540();
}
