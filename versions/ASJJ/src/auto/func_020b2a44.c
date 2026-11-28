/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern M2C_UNK func_02046a6c();
extern M2C_UNK data_0212f4c4;
extern M2C_UNK data_02134af0;
M2C_UNK **func_020b2a44(M2C_UNK **arg0) {
    *arg0 = &data_02134af0;
    func_02046a6c((u8 *) arg0 + 0x24);
    *arg0 = &data_0212f4c4;
    return arg0;
}
