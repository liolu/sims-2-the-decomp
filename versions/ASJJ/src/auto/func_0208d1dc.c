/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0208af00();                            /* extern */
M2C_UNK func_02046858(M2C_UNK **);                  /* extern */
extern M2C_UNK data_0212f8f8;
extern M2C_UNK data_0213325c;

M2C_UNK **func_0208d1dc(M2C_UNK **arg0) {
    *arg0 = &data_0213325c;
    *arg0 = &data_0212f8f8;
    func_0208af00(arg0);
    func_02046858(arg0);
    return arg0;
}
