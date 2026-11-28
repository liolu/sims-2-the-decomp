/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046858();                            /* extern */
extern M2C_UNK data_02131c50;

M2C_UNK **func_02067cc4(M2C_UNK **arg0) {
    *arg0 = &data_02131c50;
    func_02046858();
    return arg0;
}
