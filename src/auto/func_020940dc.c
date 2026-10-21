/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_02124790;

M2C_UNK *func_020940dc(void *arg0) {
    u8 temp_r1;

    temp_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 *, 0x300);
    if (!(temp_r1 & 1)) {
        return &data_02124790;
    }
    return (M2C_UNK *) (((((s32) temp_r1 >> 3) + 1) * 0x12) + (s32) &data_02124790);
}
