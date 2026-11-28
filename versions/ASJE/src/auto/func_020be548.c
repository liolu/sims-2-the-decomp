/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020467cc(M2C_UNK **);                  /* extern */
M2C_UNK func_02016fb4();                            /* extern */
extern M2C_UNK data_0213504c;

M2C_UNK **func_020be548(M2C_UNK **arg0) {
    *arg0 = &data_0213504c;
    func_02016fb4();
    func_020467cc(arg0);
    return arg0;
}
