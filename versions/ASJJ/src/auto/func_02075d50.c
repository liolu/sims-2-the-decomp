/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern M2C_UNK func_02072474();
extern M2C_UNK data_0212f4c4;
extern M2C_UNK data_02132340;
M2C_UNK **func_02075d50(M2C_UNK **arg0) {
    *arg0 = &data_02132340;
    func_02072474((u8 *) arg0 + 0x24);
    *arg0 = &data_0212f4c4;
    return arg0;
}
