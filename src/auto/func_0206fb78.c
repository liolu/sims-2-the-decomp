/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046844();                            /* extern */
extern M2C_UNK data_02132160;
extern M2C_UNK data_02132580;

M2C_UNK **func_0206fb78(M2C_UNK **arg0) {
    *arg0 = &data_02132580;
    *arg0 = &data_02132160;
    func_02046844(arg0);
    return arg0;
}
