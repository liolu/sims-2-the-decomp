/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual ~VA();
    virtual void f1();
};

extern "C" u8 data_ov003_021504d0[];
extern "C" u8 data_0212f4c4[];

extern "C" u8 *func_ov003_0214b344(u8 *arg0) {
    VA *o;

    *(u8 **) arg0 = data_ov003_021504d0;
    o             = *(VA **) (arg0 + 0x58);
    if (o != 0) {
        delete o;
        *(VA **) (arg0 + 0x58) = 0;
    }
    *(u8 **) arg0 = data_0212f4c4;
    return arg0;
}
