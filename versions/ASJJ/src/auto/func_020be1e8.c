/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02016fac();                            /* extern */
extern M2C_UNK data_02134c78;

M2C_UNK **func_020be1e8(M2C_UNK **arg0) {
    *arg0 = &data_02134c78;
    func_02016fac();
    return arg0;
}
