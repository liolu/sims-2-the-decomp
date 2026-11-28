/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046858(M2C_UNK **);                  /* extern */
M2C_UNK func_0201188c();                            /* extern */
extern M2C_UNK data_0212f844;

M2C_UNK **func_02014bd8(M2C_UNK **arg0) {
    *arg0 = &data_0212f844;
    func_0201188c();
    func_02046858(arg0);
    return arg0;
}
