/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204d384();
M2C_UNK func_020586a4(void *, s32, s32, M2C_UNK, s32, s32);
extern void *data_02139e64;
extern M2C_UNK data_0213d670;
extern s32 data_027e0004;
extern s32 data_ov008_0214b0cc;

void func_ov008_0214a258(s32 arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 != 0) {
        var_r0 += 0x24;
    }
    M2C_FIELD(data_02139e64, s32 *, 0x28) = var_r0;
    func_020586a4(data_02139e64, 0x97B, 0x979, 3, 0, 1);
    data_027e0004 |= 0x200000;
    func_0204d384();
    M2C_FIELD(&data_0213d670, s32 *, 0xA4) = arg1;
    data_ov008_0214b0cc                    = 0;
}
