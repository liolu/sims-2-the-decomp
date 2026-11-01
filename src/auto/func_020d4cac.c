/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_020d43ec(s32);                         /* extern */
extern void *data_021424d4;
extern M2C_UNK data_021424d8;

void func_020d4cac(void) {
    s32 var_r6;
    void *temp_r1;

    var_r6 = 2;
    do {
        temp_r1 = M2C_FIELD(((M2C_UNK *) ((s8 *) &data_021424d8 + (var_r6 * 4))), void **, 8);
        if ((temp_r1 != NULL) && (M2C_FIELD(temp_r1, u8 *, 0x28) == 0)) {
            data_021424d4 = temp_r1;
            func_020d43ec(var_r6);
        }
        var_r6 -= 1;
    } while (var_r6 >= 0);
    data_021424d4 = NULL;
}
