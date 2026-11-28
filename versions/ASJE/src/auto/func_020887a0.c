/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020467cc();                            /* extern */
extern M2C_UNK data_0212f884;
extern M2C_UNK data_02133244;

M2C_UNK **func_020887a0(M2C_UNK **arg0) {
    *arg0 = &data_02133244;
    *arg0 = &data_0212f884;
    func_020467cc(arg0);
    return arg0;
}
