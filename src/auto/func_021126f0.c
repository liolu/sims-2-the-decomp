/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046844(M2C_UNK **);                  /* extern */
M2C_UNK func_02112784();                            /* extern */
extern M2C_UNK data_021391a0;

M2C_UNK **func_021126f0(M2C_UNK **arg0) {
    *arg0 = &data_021391a0;
    func_02112784();
    func_02046844(arg0);
    return arg0;
}
