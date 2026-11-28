/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual ~VA();
    virtual void f1();
};

extern "C" u8 data_ov003_02150870[];
extern "C" u8 data_0212f884[];
extern "C" void func_020467cc(void *arg0);

extern "C" u8 *func_ov003_0214b688(u8 *arg0) {
    VA *o;

    *(u8 **) arg0 = data_ov003_02150870;
    o             = *(VA **) (arg0 + 0x58);
    if (o != 0) {
        delete o;
        *(VA **) (arg0 + 0x58) = 0;
    }
    *(u8 **) arg0 = data_0212f884;
    func_020467cc(arg0);
    return arg0;
}
