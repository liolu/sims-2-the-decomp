/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020467cc(M2C_UNK **);                  /* extern */
M2C_UNK func_02017640();                            /* extern */
extern M2C_UNK data_02133260;

M2C_UNK **func_02089108(M2C_UNK **arg0) {
    *arg0 = &data_02133260;
    func_02017640();
    func_020467cc(arg0);
    return arg0;
}
