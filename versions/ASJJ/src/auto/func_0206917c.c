/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_020459e4(void *);
extern M2C_UNK data_02131c50;
extern M2C_UNK data_02131cb4;
M2C_UNK **func_0206917c(M2C_UNK **arg0) {
    *arg0 = &data_02131cb4;
    func_020459e4((u8 *) arg0 + 0x2CC);
    func_020459e4((u8 *) arg0 + 0x298);
    *arg0 = &data_02131c50;
    return arg0;
}
