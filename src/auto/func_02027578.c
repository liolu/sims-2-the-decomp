/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern M2C_UNK data_02130984;
M2C_UNK func_02018acc();
M2C_UNK func_0201866c();
M2C_UNK **func_02027578(M2C_UNK **arg0) {
    *arg0 = &data_02130984;
    func_02018acc((u8 *) arg0 + 0x18);
    func_0201866c(arg0);
    return arg0;
}
