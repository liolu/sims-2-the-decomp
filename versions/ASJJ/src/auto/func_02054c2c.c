/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046858();                            /* extern */
extern M2C_UNK data_0212f4c4;
extern M2C_UNK data_021315b0;

M2C_UNK **func_02054c2c(M2C_UNK **arg0) {
    *arg0 = &data_021315b0;
    *arg0 = &data_0212f4c4;
    func_02046858(arg0);
    return arg0;
}
