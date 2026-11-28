/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020467cc(M2C_UNK **);                  /* extern */
M2C_UNK func_020532d4();                            /* extern */
extern M2C_UNK data_02131c54;

M2C_UNK **func_02057224(M2C_UNK **arg0) {
    *arg0 = &data_02131c54;
    func_020532d4();
    func_020467cc(arg0);
    return arg0;
}
