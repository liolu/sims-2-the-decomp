/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_0203f878(s32);                         /* extern */
M2C_UNK func_020444f8(s32);                         /* extern */
M2C_UNK func_02046844(s32);                         /* extern */

void func_020701f0(void *arg0) {
    s32 temp_r4;
    s32 var_r5;
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;
    void **temp_r0_5;

    var_r5 = 0;
    do {
        temp_r0 = M2C_FIELD((arg0 + (var_r5 * 4)), void ***, 0x8C);
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        var_r5 += 1;
    } while (var_r5 < 4);
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x9C);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0xA0);
    if (temp_r0_3 != NULL) {
        M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 4)(temp_r0_3);
    }
    temp_r0_4 = M2C_FIELD(arg0, void ***, 0xA4);
    if (temp_r0_4 != NULL) {
        M2C_FIELD(*temp_r0_4, M2C_UNK(**)(), 4)(temp_r0_4);
    }
    temp_r0_5 = M2C_FIELD(arg0, void ***, 0xA8);
    if (temp_r0_5 != NULL) {
        M2C_FIELD(*temp_r0_5, M2C_UNK(**)(), 4)(temp_r0_5);
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xAC);
    if (temp_r4 != 0) {
        func_0203f878(temp_r4);
        func_02046844(temp_r4);
    }
    func_020444f8(0x1C1B);
}
