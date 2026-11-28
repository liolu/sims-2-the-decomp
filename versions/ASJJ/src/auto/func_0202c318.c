/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02018664(void *);                      /* extern */
M2C_UNK func_02018ac4(void *);                      /* extern */
extern M2C_UNK data_021309d0;

void *func_0202c318(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021309d0;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x2C);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_02018ac4(arg0 + 0x18);
    func_02018664(arg0);
    return arg0;
}
