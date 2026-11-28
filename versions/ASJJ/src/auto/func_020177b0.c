/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046858();                            /* extern */
extern M2C_UNK data_0212fa9c;
extern M2C_UNK data_0212fa6c;

M2C_UNK **func_020177b0(M2C_UNK **arg0) {
    *arg0 = &data_0212fa6c;
    *arg0 = &data_0212fa9c;
    func_02046858(arg0);
    return arg0;
}
