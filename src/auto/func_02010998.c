/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02014bbc();                            /* extern */
M2C_UNK func_02046844(M2C_UNK **);                  /* extern */
extern M2C_UNK data_0212fc90;

M2C_UNK **func_02010998(M2C_UNK **arg0) {
    *arg0 = &data_0212fc90;
    func_02014bbc();
    func_02046844(arg0);
    return arg0;
}
