/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020467cc(M2C_UNK **);                  /* extern */
M2C_UNK func_0201814c();                            /* extern */
extern M2C_UNK data_02131bf0;

M2C_UNK **func_02056e6c(M2C_UNK **arg0) {
    *arg0 = &data_02131bf0;
    func_0201814c();
    func_020467cc(arg0);
    return arg0;
}
