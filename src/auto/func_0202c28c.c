/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201866c(void *);                      /* extern */
M2C_UNK func_02018acc(void *);                      /* extern */
M2C_UNK func_02046844(void *);                      /* extern */
extern M2C_UNK data_02130ed0;

void *func_0202c28c(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02130ed0;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x2C);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_02018acc(arg0 + 0x18);
    func_0201866c(arg0);
    func_02046844(arg0);
    return arg0;
}
