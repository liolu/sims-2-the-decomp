/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046844(M2C_UNK **);                  /* extern */
M2C_UNK func_0208b014();                            /* extern */
extern M2C_UNK data_021339f0;

M2C_UNK **func_0208ee20(M2C_UNK **arg0) {
    *arg0 = &data_021339f0;
    func_0208b014();
    func_02046844(arg0);
    return arg0;
}
