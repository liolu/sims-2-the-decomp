/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020467cc();                            /* extern */
extern M2C_UNK data_021334c0;
extern M2C_UNK data_021334d8;

M2C_UNK **func_0208d234(M2C_UNK **arg0) {
    *arg0 = &data_021334d8;
    *arg0 = &data_021334c0;
    func_020467cc(arg0);
    return arg0;
}
