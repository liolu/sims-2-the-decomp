/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046858();                            /* extern */
extern M2C_UNK data_02131c50;
extern M2C_UNK data_02131e1c;

M2C_UNK **func_0206bfc8(M2C_UNK **arg0) {
    *arg0 = &data_02131e1c;
    *arg0 = &data_02131c50;
    func_02046858(arg0);
    return arg0;
}
