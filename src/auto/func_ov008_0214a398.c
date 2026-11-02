/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204d3fc();
M2C_UNK func_0205871c(void *, s32, s32, M2C_UNK, s32, s32);
extern void *data_02139fa4;
extern M2C_UNK data_0213d7b0;
extern s32 data_027e0004;
extern s32 data_ov008_0214b20c;

void func_ov008_0214a398(s32 arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 != 0) {
        var_r0 += 0x24;
    }
    M2C_FIELD(data_02139fa4, s32 *, 0x28) = var_r0;
    func_0205871c(data_02139fa4, 0x97B, 0x979, 3, 0, 1);
    data_027e0004 |= 0x200000;
    func_0204d3fc();
    M2C_FIELD(&data_0213d7b0, s32 *, 0xA4) = arg1;
    data_ov008_0214b20c                    = 0;
}
