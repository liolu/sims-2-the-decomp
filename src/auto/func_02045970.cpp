/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" {
extern M2C_UNK data_021318d0;
}
struct VD {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
};
extern "C" M2C_UNK **func_02045970(M2C_UNK **arg0) {
    *arg0 = (M2C_UNK *) &data_021318d0;
    ((VD *) arg0)->f7();
    return arg0;
}
