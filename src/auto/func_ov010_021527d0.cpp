/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual ~VA();
    virtual void f1();
};

extern "C" void func_ov010_021527d0(u8 *arg0) {
    VA *o = *(VA **) (arg0 + 0x24);
    if (o != 0) {
        delete o;
    }
    *(VA **) (arg0 + 0x24) = 0;
}
