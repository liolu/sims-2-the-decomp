/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_0210a69c(u8 *, void *);
s32 func_0210a774(void *);
extern u8 data_0213dcc8;
s32 func_02051980(u8 *arg0, u8 *arg1) {
    s32 var_r5;
    u8 *var_r6;
    u8 *var_r7;
    u8 var_r0;
    u8 *temp_r8;
    var_r7 = arg0;
    var_r0 = *var_r7;
    var_r6 = arg1;
    var_r5 = 0;
    if (var_r0 != 0) {
        do {
            if (var_r0 == 0x40) {
                func_0210a69c(var_r6, &data_0213dcc8 + ((M2C_FIELD(var_r7, u8 *, 1) - 0x31) << 6));
                temp_r8 = &data_0213dcc8 + ((M2C_FIELD(var_r7, u8 *, 1) - 0x31) << 6);
                var_r5 += func_0210a774(temp_r8);
                var_r6 = &var_r6[func_0210a774(temp_r8)];
                var_r7 += 2;
            } else {
                *var_r6 = var_r0;
                var_r5 += 1;
                if ((u32) M2C_FIELD(var_r7, u8 *, 0) >= 0xF0U) {
                    var_r7 += 1;
                    var_r6 += 1;
                    *var_r6 = *var_r7;
                }
                var_r7 += 1;
                var_r6 += 1;
            }
            var_r0 = *var_r7;
        } while (var_r0 != 0);
    }
    *var_r6 = 0;
    return var_r5;
}
