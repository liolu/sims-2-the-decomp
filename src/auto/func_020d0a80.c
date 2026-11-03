/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

void func_020d0e9c(u8 a, s32 b);

extern void *data_021424d4;
extern u8 data_02142848;

void func_020d0a80(void) {
    s32 var_r5;
    u8 *var_r4;

    var_r5 = *(u8 *) (&data_02142848 + 0x10) - 1;
    if (var_r5 >= 0) {
        var_r4 = &data_02142848 + var_r5;
        do {
            if (*(u8 *) ((u8 *) data_021424d4 + 0x3B) == *(u8 *) (var_r4 + 0x634)) {
                func_020d0e9c((u8) var_r5, 0);
            }
            var_r4 -= 1;
            var_r5 -= 1;
        } while (var_r5 >= 0);
    }
}
