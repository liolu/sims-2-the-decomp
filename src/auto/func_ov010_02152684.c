/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046844(M2C_UNK **);                  /* extern */
M2C_UNK func_02016fb4();                            /* extern */
extern M2C_UNK data_ov010_02152e74;

M2C_UNK **func_ov010_02152684(M2C_UNK **arg0) {
    *arg0 = &data_ov010_02152e74;
    func_02016fb4();
    func_02046844(arg0);
    return arg0;
}
