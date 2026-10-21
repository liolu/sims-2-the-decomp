/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046844(M2C_UNK **);                  /* extern */
M2C_UNK func_021126cc();                            /* extern */
extern M2C_UNK data_02139190;

M2C_UNK **func_0211267c(M2C_UNK **arg0) {
    *arg0 = &data_02139190;
    func_021126cc();
    func_02046844(arg0);
    return arg0;
}
