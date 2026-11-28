/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_0213d048;
extern s32 data_027e0000;

u32 func_020497c4(u16 *arg0) {
    u32 var_r6;
    s32 var_r5;
    u32 var_r4;
    s32 var_lr;

    var_lr = (data_027e0000 * 0xC4) + (s32) &data_0213d048;
    var_r4 = 0xFF;
    var_r6 = 0;
loop_1:
    if (!(M2C_FIELD(var_lr, u8 *, 9) & 2)) {
        if (M2C_FIELD(var_lr, u16 *, 4) == 0xFF) {
            if (var_r4 == 0xFF) {
                var_r4 = var_r6;
            }
            goto block_10;
        }
        var_r5 = 0;
        if (*arg0 == *M2C_FIELD(var_lr, u16 **, 0xC)) {
            var_r5 += 1;
        }
        if (var_r5 == 1) {
            var_r4 = var_r6;
        } else {
            goto block_10;
        }
    } else {
    block_10:
        var_r6 += 1;
        var_lr += 0xC;
        if (var_r6 <= 0xFU) {
            goto loop_1;
        }
    }
    return var_r4;
}
