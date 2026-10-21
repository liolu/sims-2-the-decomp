/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201814c(void *);                      /* extern */
M2C_UNK func_02046844(void *);                      /* extern */
extern M2C_UNK data_0213268c;

void *func_020709f4(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213268c;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0xB0);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_0201814c(arg0);
    func_02046844(arg0);
    return arg0;
}
