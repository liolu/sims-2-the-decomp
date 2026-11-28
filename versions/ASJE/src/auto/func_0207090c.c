/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020467cc();                            /* extern */
extern M2C_UNK data_02132020;
extern M2C_UNK data_02132528;

M2C_UNK **func_0207090c(M2C_UNK **arg0) {
    *arg0 = &data_02132528;
    *arg0 = &data_02132020;
    func_020467cc(arg0);
    return arg0;
}
