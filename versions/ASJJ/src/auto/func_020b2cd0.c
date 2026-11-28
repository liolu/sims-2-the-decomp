/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_0203c574();                            /* extern */
M2C_UNK func_0203f8e0(s32);                         /* extern */
M2C_UNK func_0204450c(M2C_UNK);                     /* extern */
M2C_UNK func_02046858(s32);                         /* extern */
M2C_UNK func_0204eefc();                            /* extern */
extern s32 data_0213e234;

void func_020b2cd0(void *arg0) {
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
        func_0203f8e0(temp_r4);
        func_02046858(temp_r4);
    }
    func_0204450c(0x3F8);
    func_0203c574();
    func_0204eefc();
    func_02046858(data_0213e234);
}
