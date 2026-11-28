/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200a980(void *);                      /* extern */
M2C_UNK func_020156b0(void *);                      /* extern */
M2C_UNK func_02016358();                            /* extern */
M2C_UNK func_020497cc(void *);                      /* extern */
extern M2C_UNK data_0212fd98;

void *func_0201706c(void *arg0) {
    u32 temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212fd98;
    func_02016358();
    func_020497cc(arg0);
    temp_r0 = (u32) (M2C_FIELD(arg0, s32 *, 0x10) << 0x16) >> 0x1E;
    if ((temp_r0 == 1) || (temp_r0 == 3)) {
        func_020156b0(arg0);
    }
    func_0200a980(arg0);
    return arg0;
}
