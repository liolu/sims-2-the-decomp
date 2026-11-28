/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020d75e8(M2C_UNK *, M2C_UNK *, u32);   /* extern */
M2C_UNK func_020fa980(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_02142368;
extern M2C_UNK data_02142858;
extern M2C_UNK data_02142884;
extern M2C_UNK data_021428b4;

void func_020d7e38(void) {
    u32 var_r4;

    var_r4 = (u32) M2C_FIELD(&data_02142368, u32 *, 0x580) >> 1;
    if (M2C_FIELD(&data_02142368, s32 *, 0x4EC) & 4) {
        var_r4 = var_r4 >> 1;
    }
    func_020d75e8(&data_02142858, &data_02142884, var_r4);
    func_020d75e8(&data_02142858, &data_021428b4, var_r4);
    func_020fa980(M2C_FIELD(&data_02142368, s32 *, 0x57C), 0x2000);
}
