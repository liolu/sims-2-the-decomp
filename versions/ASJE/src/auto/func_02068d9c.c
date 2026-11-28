/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02017640();                            /* extern */
extern M2C_UNK data_02131fd8;

M2C_UNK **func_02068d9c(M2C_UNK **arg0) {
    *arg0 = &data_02131fd8;
    func_02017640();
    return arg0;
}
