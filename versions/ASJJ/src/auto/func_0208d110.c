/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046858();                            /* extern */
extern M2C_UNK data_021330ec;
extern M2C_UNK data_02133144;

M2C_UNK **func_0208d110(M2C_UNK **arg0) {
    *arg0 = &data_02133144;
    *arg0 = &data_021330ec;
    func_02046858(arg0);
    return arg0;
}
