/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02018664(void *);                      /* extern */
M2C_UNK func_02018ac4(void *);                      /* extern */
extern M2C_UNK data_02130fd8;

void *func_02034ebc(void *arg0) {
    void *temp_r1;

    M2C_FIELD(arg0, M2C_UNK **, 0)   = &data_02130fd8;
    temp_r1                          = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(temp_r1, u16 *, 0x1F8) = (u16) (M2C_FIELD(temp_r1, u16 *, 0x1F8) | 0x40);
    func_02018ac4(arg0 + 0x18);
    func_02018664(arg0);
    return arg0;
}
