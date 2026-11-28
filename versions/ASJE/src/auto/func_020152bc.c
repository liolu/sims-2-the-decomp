/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_0200a980();
M2C_UNK func_0200bcd0();
M2C_UNK func_02044710();
M2C_UNK func_020467cc();
extern M2C_UNK data_0212fd1c;
M2C_UNK **func_020152bc(M2C_UNK **arg0) {
    *arg0 = &data_0212fd1c;
    func_02044710((u8 *) arg0 + 0x68);
    func_0200bcd0((u8 *) arg0 + 0x24);
    func_0200a980(arg0);
    func_020467cc(arg0);
    return arg0;
}
