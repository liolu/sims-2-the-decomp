/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02016fac();                            /* extern */
M2C_UNK func_02046858(M2C_UNK **);                  /* extern */
extern M2C_UNK data_ov010_02152994;

M2C_UNK **func_ov010_021521a4(M2C_UNK **arg0) {
    *arg0 = &data_ov010_02152994;
    func_02016fac();
    func_02046858(arg0);
    return arg0;
}
