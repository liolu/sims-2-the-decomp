/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046858(M2C_UNK **);                  /* extern */
M2C_UNK func_02017638();                            /* extern */
extern M2C_UNK data_02134cdc;

M2C_UNK **func_020be1bc(M2C_UNK **arg0) {
    *arg0 = &data_02134cdc;
    func_02017638();
    func_02046858(arg0);
    return arg0;
}
