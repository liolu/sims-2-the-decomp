/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02017640();                            /* extern */
extern M2C_UNK data_ov010_02152ce8;
extern M2C_UNK data_0212feb8;

M2C_UNK **func_ov010_02152570(M2C_UNK **arg0) {
    *arg0 = &data_ov010_02152ce8;
    *arg0 = &data_0212feb8;
    func_02017640(arg0);
    return arg0;
}
