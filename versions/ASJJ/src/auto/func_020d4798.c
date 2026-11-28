/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_020d3ed8(s32);                         /* extern */
extern void *data_02141ff4;
extern M2C_UNK data_02141ff8;

void func_020d4798(void) {
    s32 var_r6;
    void *temp_r1;

    var_r6 = 2;
    do {
        temp_r1 = M2C_FIELD(((M2C_UNK *) ((s8 *) &data_02141ff8 + (var_r6 * 4))), void **, 8);
        if ((temp_r1 != NULL) && (M2C_FIELD(temp_r1, u8 *, 0x28) == 0)) {
            data_02141ff4 = temp_r1;
            func_020d3ed8(var_r6);
        }
        var_r6 -= 1;
    } while (var_r6 >= 0);
    data_02141ff4 = NULL;
}
