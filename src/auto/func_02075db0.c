/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_02046844();
M2C_UNK func_02072484();
extern M2C_UNK data_0212f9c4;
extern M2C_UNK data_02132850;
M2C_UNK **func_02075db0(M2C_UNK **arg0) {
    *arg0 = &data_02132850;
    func_02072484((u8 *) arg0 + 0x24);
    *arg0 = &data_0212f9c4;
    func_02046844(arg0);
    return arg0;
}
