/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_020467cc();
M2C_UNK func_0207240c();
extern M2C_UNK data_0212f884;
extern M2C_UNK data_02132710;
M2C_UNK **func_02075d38(M2C_UNK **arg0) {
    *arg0 = &data_02132710;
    func_0207240c((u8 *) arg0 + 0x24);
    *arg0 = &data_0212f884;
    func_020467cc(arg0);
    return arg0;
}
