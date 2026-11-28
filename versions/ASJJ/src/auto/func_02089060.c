/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046858(M2C_UNK **);                  /* extern */
M2C_UNK func_02017638();                            /* extern */
extern M2C_UNK data_02132e8c;

M2C_UNK **func_02089060(M2C_UNK **arg0) {
    *arg0 = &data_02132e8c;
    func_02017638();
    func_02046858(arg0);
    return arg0;
}
