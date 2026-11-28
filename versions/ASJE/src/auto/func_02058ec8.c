/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020467cc();                            /* extern */
extern M2C_UNK data_0212f884;
extern M2C_UNK data_02131ce0;

M2C_UNK **func_02058ec8(M2C_UNK **arg0) {
    *arg0 = &data_02131ce0;
    *arg0 = &data_0212f884;
    func_020467cc(arg0);
    return arg0;
}
