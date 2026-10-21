/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046844(void *);                      /* extern */
M2C_UNK func_0208b014();                            /* extern */
extern M2C_UNK data_0212fd64;
extern M2C_UNK data_0212fd8c;
extern M2C_UNK data_0212fdf8;
extern M2C_UNK data_02133600;

void *func_02014d90(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_0212fd64;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &data_0212fd8c;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &data_02133600;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_0212fdf8;
    func_0208b014(arg0);
    func_02046844(arg0);
    return arg0;
}
