/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046844();
extern M2C_UNK data_0212f9c4;
extern M2C_UNK data_ov000_0214ebc4;

void **func_ov000_0214e804(void **arg0) {
    void *a;
    void *b;

    a     = &data_ov000_0214ebc4;
    b     = &data_0212f9c4;
    *arg0 = a;
    *arg0 = b;
    func_02046844(arg0);
    return arg0;
}
