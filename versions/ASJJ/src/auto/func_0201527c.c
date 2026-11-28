/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern M2C_UNK data_0212f95c;
M2C_UNK func_0200a980();
M2C_UNK func_0200bcd0();
M2C_UNK func_0204479c();
M2C_UNK **func_0201527c(M2C_UNK **arg0) {
    *arg0 = &data_0212f95c;
    func_0204479c((u8 *) arg0 + 0x68);
    func_0200bcd0((u8 *) arg0 + 0x24);
    func_0200a980(arg0);
    return arg0;
}
