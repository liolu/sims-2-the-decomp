/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046858(M2C_UNK **);                  /* extern */
M2C_UNK func_0205355c();                            /* extern */
extern M2C_UNK data_02131894;

M2C_UNK **func_020574ac(M2C_UNK **arg0) {
    *arg0 = &data_02131894;
    func_0205355c();
    func_02046858(arg0);
    return arg0;
}
