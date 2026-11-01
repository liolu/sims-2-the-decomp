/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_0203c540();                            /* extern */
M2C_UNK func_0203f878(s32);                         /* extern */
M2C_UNK func_020444f8(M2C_UNK);                     /* extern */
M2C_UNK func_02046844(s32);                         /* extern */
M2C_UNK func_0204ef60();                            /* extern */
extern s32 data_0213e70c;

void func_020b2e88(void *arg0) {
    s32 temp_r4;
    s32 var_r4;
    void **temp_r0;

    var_r4 = 0;
    do {
        temp_r0 = M2C_FIELD((arg0 + (var_r4 * 4)), void ***, 0x2C);
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        var_r4 += 1;
    } while (var_r4 < 3);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x38);
    if (temp_r4 != 0) {
        func_0203f878(temp_r4);
        func_02046844(temp_r4);
    }
    func_020444f8(0x3F8);
    func_0203c540();
    func_0204ef60();
    func_02046844(data_0213e70c);
}
