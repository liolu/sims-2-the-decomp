/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef unsigned char u8;

M2C_UNK func_02046858();
M2C_UNK func_02046a6c();
extern M2C_UNK data_ov003_021504ec;

M2C_UNK **func_ov003_0214a2b4(M2C_UNK **arg0) {
    *arg0 = &data_ov003_021504ec;
    func_02046a6c((u8 *) arg0 + 8);
    func_02046858(arg0);
    return arg0;
}
