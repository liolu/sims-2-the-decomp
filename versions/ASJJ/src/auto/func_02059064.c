/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046858();                            /* extern */
extern M2C_UNK data_0212f4c4;
extern M2C_UNK data_02131910;

M2C_UNK **func_02059064(M2C_UNK **arg0) {
    *arg0 = &data_02131910;
    *arg0 = &data_0212f4c4;
    func_02046858(arg0);
    return arg0;
}
