/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern M2C_UNK data_02130310;
M2C_UNK func_02018ac4();
M2C_UNK func_02018664();
M2C_UNK **func_02026a94(M2C_UNK **arg0) {
    *arg0 = &data_02130310;
    func_02018ac4((u8 *) arg0 + 0x18);
    func_02018664(arg0);
    return arg0;
}
