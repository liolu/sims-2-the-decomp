/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046858(M2C_UNK **);                  /* extern */
M2C_UNK func_0208af00();                            /* extern */
extern M2C_UNK data_021333ec;

M2C_UNK **func_0208e5ec(M2C_UNK **arg0) {
    *arg0 = &data_021333ec;
    func_0208af00();
    func_02046858(arg0);
    return arg0;
}
