/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208b014();                            /* extern */
extern M2C_UNK data_021335a8;
extern M2C_UNK data_021335d4;

M2C_UNK **func_0208b464(M2C_UNK **arg0) {
    *arg0 = &data_021335d4;
    *arg0 = &data_021335a8;
    func_0208b014(arg0);
    return arg0;
}
