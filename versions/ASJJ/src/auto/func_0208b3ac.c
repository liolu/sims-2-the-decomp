/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0208af00();                            /* extern */
M2C_UNK func_02046858(M2C_UNK **);                  /* extern */
extern M2C_UNK data_02133094;
extern M2C_UNK data_021330c0;

M2C_UNK **func_0208b3ac(M2C_UNK **arg0) {
    *arg0 = &data_021330c0;
    *arg0 = &data_02133094;
    func_0208af00(arg0);
    func_02046858(arg0);
    return arg0;
}
