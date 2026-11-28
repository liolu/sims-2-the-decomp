/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046858(M2C_UNK **);                  /* extern */
M2C_UNK func_0200ac14();                            /* extern */
extern M2C_UNK data_0212f730;

M2C_UNK **func_0200fb6c(M2C_UNK **arg0) {
    *arg0 = &data_0212f730;
    func_0200ac14();
    func_02046858(arg0);
    return arg0;
}
