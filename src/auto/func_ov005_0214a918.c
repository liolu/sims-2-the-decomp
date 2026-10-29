/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046844(M2C_UNK **);                  /* extern */
M2C_UNK func_02017640();                            /* extern */
extern M2C_UNK data_ov005_0214ac34;

M2C_UNK **func_ov005_0214a918(M2C_UNK **arg0) {
    *arg0 = &data_ov005_0214ac34;
    func_02017640();
    func_02046844(arg0);
    return arg0;
}
