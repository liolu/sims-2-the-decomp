/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046858(M2C_UNK **);                  /* extern */
M2C_UNK func_02046134();                            /* extern */
extern M2C_UNK data_0212fc18;

M2C_UNK **func_02018a08(M2C_UNK **arg0) {
    *arg0 = &data_0212fc18;
    func_02046134();
    func_02046858(arg0);
    return arg0;
}
