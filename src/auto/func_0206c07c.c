/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02017640();                            /* extern */
M2C_UNK func_02046844(M2C_UNK **);                  /* extern */
extern M2C_UNK data_02132350;

M2C_UNK **func_0206c07c(M2C_UNK **arg0) {
    *arg0 = &data_02132350;
    func_02017640();
    func_02046844(arg0);
    return arg0;
}
