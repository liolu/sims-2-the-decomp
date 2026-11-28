/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020467cc();                            /* extern */
extern M2C_UNK data_0212fe5c;
extern M2C_UNK data_0212fdfc;

M2C_UNK **func_02017804(M2C_UNK **arg0) {
    *arg0 = &data_0212fdfc;
    *arg0 = &data_0212fe5c;
    func_020467cc(arg0);
    return arg0;
}
