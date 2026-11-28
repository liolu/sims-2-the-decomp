/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov003_02149f84(void *, M2C_UNK);       /* extern */
M2C_UNK func_ov003_0214e00c(void *, s32);           /* extern */
extern u8 data_ov003_0214fd5c;
extern u8 data_ov003_0214fd68;
extern u8 data_ov003_0214fdd4;
extern u8 data_ov003_0214fde0;

void func_ov003_0214dc20(void *arg0, s32 arg1) {
    s32 var_r4;
    u32 var_r6;
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 4);
    var_r4  = arg1;
    if (M2C_FIELD(temp_r0, u16 *, 0x76) == 0) {
        if ((u8 *) var_r4 == &data_ov003_0214fdd4) {
            func_ov003_02149f84(temp_r0, 1);
            return;
        }
        if ((u8 *) var_r4 == &data_ov003_0214fde0) {
            func_ov003_02149f84(temp_r0, 2);
            return;
        }
        goto block_9;
    }
    if ((u8 *) var_r4 == &data_ov003_0214fd5c) {
        func_ov003_02149f84(temp_r0, 1);
        return;
    }
    if ((u8 *) var_r4 == &data_ov003_0214fd68) {
        func_ov003_02149f84(temp_r0, 2);
        return;
    }
block_9:
    var_r6 = 0;
    do {
        func_ov003_0214e00c(arg0, var_r4);
        var_r6 += 1;
        var_r4 += 6;
    } while (var_r6 < 2U);
}
