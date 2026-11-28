/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_020467cc();
M2C_UNK func_020469e0();
extern M2C_UNK data_0212f884;
extern M2C_UNK data_02134ec4;
M2C_UNK **func_020b2b68(M2C_UNK **arg0) {
    *arg0 = &data_02134ec4;
    func_020469e0((u8 *) arg0 + 0x24);
    *arg0 = &data_0212f884;
    func_020467cc(arg0);
    return arg0;
}
