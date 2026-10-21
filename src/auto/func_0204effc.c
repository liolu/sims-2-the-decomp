/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046844(M2C_UNK **);                  /* extern */
M2C_UNK func_0205334c();                            /* extern */
extern M2C_UNK data_02131a10;

M2C_UNK **func_0204effc(M2C_UNK **arg0) {
    *arg0 = &data_02131a10;
    func_0205334c();
    func_02046844(arg0);
    return arg0;
}
