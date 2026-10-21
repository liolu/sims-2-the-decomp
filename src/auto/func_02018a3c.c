/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046120();                            /* extern */
extern M2C_UNK data_02130118;

M2C_UNK **func_02018a3c(M2C_UNK **arg0) {
    *arg0 = &data_02130118;
    func_02046120();
    return arg0;
}
