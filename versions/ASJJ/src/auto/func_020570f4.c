/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046858(M2C_UNK **);                  /* extern */
M2C_UNK func_02018144();                            /* extern */
extern M2C_UNK data_02131830;

M2C_UNK **func_020570f4(M2C_UNK **arg0) {
    *arg0 = &data_02131830;
    func_02018144();
    func_02046858(arg0);
    return arg0;
}
