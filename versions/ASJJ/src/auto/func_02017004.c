/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200a980(void *);                      /* extern */
M2C_UNK func_020156a8(void *);                      /* extern */
M2C_UNK func_02016350();                            /* extern */
M2C_UNK func_02046858(void *);                      /* extern */
M2C_UNK func_02049858(void *);                      /* extern */
extern M2C_UNK data_0212f9d8;

void *func_02017004(void *arg0) {
    u32 temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212f9d8;
    func_02016350();
    func_02049858(arg0);
    temp_r0 = (u32) (M2C_FIELD(arg0, s32 *, 0x10) << 0x16) >> 0x1E;
    if ((temp_r0 == 1) || (temp_r0 == 3)) {
        func_020156a8(arg0);
    }
    func_0200a980(arg0);
    func_02046858(arg0);
    return arg0;
}
