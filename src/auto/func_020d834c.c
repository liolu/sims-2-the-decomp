/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d7afc(M2C_UNK *, M2C_UNK *, u32);   /* extern */
M2C_UNK func_020fae94(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_02142848;
extern M2C_UNK data_02142d38;
extern M2C_UNK data_02142d64;
extern M2C_UNK data_02142d94;

void func_020d834c(void) {
    u32 var_r4;

    var_r4 = (u32) M2C_FIELD(&data_02142848, u32 *, 0x580) >> 1;
    if (M2C_FIELD(&data_02142848, s32 *, 0x4EC) & 4) {
        var_r4 = var_r4 >> 1;
    }
    func_020d7afc(&data_02142d38, &data_02142d64, var_r4);
    func_020d7afc(&data_02142d38, &data_02142d94, var_r4);
    func_020fae94(M2C_FIELD(&data_02142848, s32 *, 0x57C), 0x2000);
}
