/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02017640();
M2C_UNK func_02046844();
extern M2C_UNK data_0212fff8;
extern M2C_UNK data_ov010_02152e28;

M2C_UNK **func_ov010_021526e0(M2C_UNK **arg0) {
    void *a;
    void *b;

    a     = &data_ov010_02152e28;
    b     = &data_0212fff8;
    *arg0 = a;
    *arg0 = b;
    func_02017640(arg0);
    func_02046844(arg0);
    return arg0;
}
