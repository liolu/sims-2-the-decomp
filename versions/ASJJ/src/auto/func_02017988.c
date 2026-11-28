/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046858(M2C_UNK **);                  /* extern */
M2C_UNK func_02017638();                            /* extern */
extern M2C_UNK data_0212faf8;

M2C_UNK **func_02017988(M2C_UNK **arg0) {
    *arg0 = &data_0212faf8;
    func_02017638();
    func_02046858(arg0);
    return arg0;
}
