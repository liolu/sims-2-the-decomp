/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020467cc(M2C_UNK **);                  /* extern */
M2C_UNK func_0201188c();                            /* extern */
extern M2C_UNK data_0212fc04;

M2C_UNK **func_02014be0(M2C_UNK **arg0) {
    *arg0 = &data_0212fc04;
    func_0201188c();
    func_020467cc(arg0);
    return arg0;
}
