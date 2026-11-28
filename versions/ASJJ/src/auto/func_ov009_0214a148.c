/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02017638();                            /* extern */
M2C_UNK func_02046858(M2C_UNK **);                  /* extern */
extern M2C_UNK data_ov009_0214bcf4;

M2C_UNK **func_ov009_0214a148(M2C_UNK **arg0) {
    *arg0 = &data_ov009_0214bcf4;
    func_02017638();
    func_02046858(arg0);
    return arg0;
}
