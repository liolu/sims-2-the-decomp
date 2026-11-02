/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_0203c484(s32);
extern s32 data_027e0000;
void func_0203c540(void) {
    s32 temp_r0;
    s32 var_r4;
    s32 temp_r2;
    var_r4 = 0;
    do {
        func_0203c484(var_r4);
        temp_r0 = data_027e0000 << 0xC;
        temp_r2 = ~(0x100 << var_r4);
        var_r4 += 1;
        *(s32 *) (0x04000000 + temp_r0) = (s32) (temp_r2 & *(s32 *) (0x04000000 + temp_r0));
    } while (var_r4 < 4);
}
