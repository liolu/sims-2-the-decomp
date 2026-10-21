/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046844();                            /* extern */
extern M2C_UNK data_02133600;
extern M2C_UNK data_02134158;

M2C_UNK **func_02093784(M2C_UNK **arg0) {
    *arg0 = &data_02134158;
    *arg0 = &data_02133600;
    func_02046844(arg0);
    return arg0;
}
