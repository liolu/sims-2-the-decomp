/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02017640();                            /* extern */
extern M2C_UNK data_02131b30;

M2C_UNK **func_02056c98(M2C_UNK **arg0) {
    *arg0 = &data_02131b30;
    func_02017640();
    return arg0;
}
