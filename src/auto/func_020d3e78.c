/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK func_020d0ac8(u8);
extern void *data_021424d4;
extern u8 data_021424e0[];
extern u8 data_02142548[];
extern u8 data_02142848[];

void func_020d3e78(s32 arg0) {
    s32 var_r4;
    void *temp_r2;
    u8 *var_r6;
    s32 *var_r5;

    if (arg0 == 4) {
        var_r4 = 0;
        do {
            func_020d3e78(var_r4);
            var_r4 += 1;
        } while (var_r4 < 3);
        return;
    }
    temp_r2 = *(void **) (data_021424e0 + arg0 * 4);
    if (temp_r2 == NULL) {
        return;
    }
    data_021424d4 = temp_r2;
    var_r4        = (s32) data_02142848[0x10] - 1;
    if (var_r4 < 0) {
        return;
    }
    var_r5 = (s32 *) (data_02142548 + var_r4 * 0x18);
    var_r6 = data_02142848 + var_r4;
    do {
        if ((*(u8 *) ((u8 *) data_021424d4 + 0x3B) == *(u8 *) (var_r6 + 0x634)) && (*var_r5 != 0)) {
            func_020d0ac8((u8) var_r4);
        }
        var_r6 -= 1;
        var_r5 -= 6;
        var_r4 -= 1;
    } while (var_r4 >= 0);
}
