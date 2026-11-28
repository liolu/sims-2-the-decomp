/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov003_0214a324(void *, M2C_UNK);       /* extern */
M2C_UNK func_ov003_0214e3ac(void *, s32);           /* extern */
extern u8 data_ov003_021500fc;
extern u8 data_ov003_02150108;
extern u8 data_ov003_02150174;
extern u8 data_ov003_02150180;

void func_ov003_0214dfc0(void *arg0, s32 arg1) {
    s32 var_r4;
    u32 var_r6;
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 4);
    var_r4  = arg1;
    if (M2C_FIELD(temp_r0, u16 *, 0x76) == 0) {
        if ((u8 *) var_r4 == &data_ov003_02150174) {
            func_ov003_0214a324(temp_r0, 1);
            return;
        }
        if ((u8 *) var_r4 == &data_ov003_02150180) {
            func_ov003_0214a324(temp_r0, 2);
            return;
        }
        goto block_9;
    }
    if ((u8 *) var_r4 == &data_ov003_021500fc) {
        func_ov003_0214a324(temp_r0, 1);
        return;
    }
    if ((u8 *) var_r4 == &data_ov003_02150108) {
        func_ov003_0214a324(temp_r0, 2);
        return;
    }
block_9:
    var_r6 = 0;
    do {
        func_ov003_0214e3ac(arg0, var_r4);
        var_r6 += 1;
        var_r4 += 6;
    } while (var_r6 < 2U);
}
