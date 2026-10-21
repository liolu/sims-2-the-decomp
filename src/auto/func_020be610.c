/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02016fb4();                            /* extern */
M2C_UNK func_02046844(M2C_UNK **);                  /* extern */
extern M2C_UNK data_0213518c;

M2C_UNK **func_020be610(M2C_UNK **arg0) {
    *arg0 = &data_0213518c;
    func_02016fb4();
    func_02046844(arg0);
    return arg0;
}
