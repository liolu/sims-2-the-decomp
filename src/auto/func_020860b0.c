/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0204561c(s32);                           /* extern */
extern s32 data_027e0000;
extern M2C_UNK data_027e0014;

s32 func_020860b0(void) {
    s32 var_r4;
    void *temp_r1;
    void *var_r0;

    var_r4 = 0;
    var_r0 = func_0204561c((data_027e0000 * 0x34) + (s32) &data_027e0014);
    if (var_r0 != NULL) {
        do {
            temp_r1 = M2C_FIELD(var_r0, void **, 0);
            var_r0  = M2C_FIELD(var_r0, void **, 4);
            if (M2C_FIELD(temp_r1, u16 *, 0xC) == 2) {
                var_r4 += 1;
            }
        } while (var_r0 != NULL);
    }
    return var_r4;
}
