/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern M2C_UNK data_0212fe5c;
M2C_UNK func_0200a980();
M2C_UNK func_0200bcd0();
M2C_UNK func_02044788();
M2C_UNK **func_02015284(M2C_UNK **arg0) {
    *arg0 = &data_0212fe5c;
    func_02044788((u8 *) arg0 + 0x68);
    func_0200bcd0((u8 *) arg0 + 0x24);
    func_0200a980(arg0);
    return arg0;
}
