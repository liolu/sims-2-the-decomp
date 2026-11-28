/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020d79c0(M2C_UNK *, M2C_UNK *, u32);   /* extern */
M2C_UNK func_020fad58(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_02142708;
extern M2C_UNK data_02142bf8;
extern M2C_UNK data_02142c24;
extern M2C_UNK data_02142c54;

void func_020d8210(void) {
    u32 var_r4;

    var_r4 = (u32) M2C_FIELD(&data_02142708, u32 *, 0x580) >> 1;
    if (M2C_FIELD(&data_02142708, s32 *, 0x4EC) & 4) {
        var_r4 = var_r4 >> 1;
    }
    func_020d79c0(&data_02142bf8, &data_02142c24, var_r4);
    func_020d79c0(&data_02142bf8, &data_02142c54, var_r4);
    func_020fad58(M2C_FIELD(&data_02142708, s32 *, 0x57C), 0x2000);
}
