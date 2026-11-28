/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020467cc(M2C_UNK **);                  /* extern */
M2C_UNK func_02017640();                            /* extern */
extern M2C_UNK data_02134cf8;

M2C_UNK **func_0209e3e0(M2C_UNK **arg0) {
    *arg0 = &data_02134cf8;
    func_02017640();
    func_020467cc(arg0);
    return arg0;
}
