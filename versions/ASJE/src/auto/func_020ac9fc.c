/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020467cc(void *);                      /* extern */
M2C_UNK func_020469e0(void *);                      /* extern */
M2C_UNK func_02089cdc(void *);                      /* extern */
extern M2C_UNK data_0212f884;
extern M2C_UNK data_02134e60;
extern M2C_UNK data_02134e80;

void *func_020ac9fc(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02134e60;
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &data_02134e80;
    func_020469e0(arg0 + 0xF4);
    func_02089cdc(arg0 + 0x2C);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212f884;
    func_020467cc(arg0);
    return arg0;
}
