/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef unsigned char u8;

M2C_UNK func_02046844();
M2C_UNK func_02046a58();
extern M2C_UNK data_ov003_021509cc;

M2C_UNK **func_ov003_0214a794(M2C_UNK **arg0) {
    *arg0 = &data_ov003_021509cc;
    func_02046a58((u8 *) arg0 + 8);
    func_02046844(arg0);
    return arg0;
}
