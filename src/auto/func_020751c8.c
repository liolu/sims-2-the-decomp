/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046844();                            /* extern */
extern M2C_UNK data_0212f9c4;
extern M2C_UNK data_021327f0;

M2C_UNK **func_020751c8(M2C_UNK **arg0) {
    *arg0 = &data_021327f0;
    *arg0 = &data_0212f9c4;
    func_02046844(arg0);
    return arg0;
}
