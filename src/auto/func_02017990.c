/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02017640();                            /* extern */
M2C_UNK func_02046844(M2C_UNK **);                  /* extern */
extern M2C_UNK data_0212fff8;

M2C_UNK **func_02017990(M2C_UNK **arg0) {
    *arg0 = &data_0212fff8;
    func_02017640();
    func_02046844(arg0);
    return arg0;
}
