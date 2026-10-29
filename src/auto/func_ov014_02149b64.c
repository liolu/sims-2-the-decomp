/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046844(M2C_UNK **);                  /* extern */
M2C_UNK func_02017640();                            /* extern */
extern M2C_UNK data_ov014_0214b5e8;

M2C_UNK **func_ov014_02149b64(M2C_UNK **arg0) {
    *arg0 = &data_ov014_0214b5e8;
    func_02017640();
    func_02046844(arg0);
    return arg0;
}
