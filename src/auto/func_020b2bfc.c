/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern M2C_UNK func_02046a58();
extern M2C_UNK data_0212f9c4;
extern M2C_UNK data_02135004;
M2C_UNK **func_020b2bfc(M2C_UNK **arg0) {
    *arg0 = &data_02135004;
    func_02046a58((u8 *) arg0 + 0x24);
    *arg0 = &data_0212f9c4;
    return arg0;
}
