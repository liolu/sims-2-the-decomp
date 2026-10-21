/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200a980();                            /* extern */
M2C_UNK func_02046844(M2C_UNK **);                  /* extern */
extern M2C_UNK data_0212fe88;

M2C_UNK **func_02015744(M2C_UNK **arg0) {
    *arg0 = &data_0212fe88;
    func_0200a980();
    func_02046844(arg0);
    return arg0;
}
