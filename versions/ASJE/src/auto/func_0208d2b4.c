/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0208af9c();                            /* extern */
M2C_UNK func_020467cc(M2C_UNK **);                  /* extern */
extern M2C_UNK data_0212fcb8;
extern M2C_UNK data_02133630;

M2C_UNK **func_0208d2b4(M2C_UNK **arg0) {
    *arg0 = &data_02133630;
    *arg0 = &data_0212fcb8;
    func_0208af9c(arg0);
    func_020467cc(arg0);
    return arg0;
}
