/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_0203c4c8();                            /* extern */
M2C_UNK func_0203f800(s32);                         /* extern */
M2C_UNK func_02044480(M2C_UNK);                     /* extern */
M2C_UNK func_020467cc(s32);                         /* extern */
M2C_UNK func_0204eee8();                            /* extern */
extern s32 data_0213e5cc;

void func_020b2dc0(void *arg0) {
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
        func_0203f800(temp_r4);
        func_020467cc(temp_r4);
    }
    func_02044480(0x3F8);
    func_0203c4c8();
    func_0204eee8();
    func_020467cc(data_0213e5cc);
}
