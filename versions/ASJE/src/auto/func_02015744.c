/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020467cc(M2C_UNK **);                  /* extern */
M2C_UNK func_0200a980();                            /* extern */
extern M2C_UNK data_0212fd48;

M2C_UNK **func_02015744(M2C_UNK **arg0) {
    *arg0 = &data_0212fd48;
    func_0200a980();
    func_020467cc(arg0);
    return arg0;
}
