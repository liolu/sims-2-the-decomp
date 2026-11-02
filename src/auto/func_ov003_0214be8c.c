/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046944(void *, M2C_UNK *, M2C_UNK);  /* extern */
M2C_UNK func_02046acc(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_ov003_0214f7b0;
extern M2C_UNK data_ov003_021509cc;
extern M2C_UNK data_ov003_02150a2c;

void *func_ov003_0214be8c(void *arg0, s32 arg1) {
    void *temp_r2;
    void *temp_r2_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov003_021509cc;
    M2C_FIELD(arg0, s32 *, 4)      = arg1;
    func_02046acc(arg0 + 8, 0x20);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov003_02150a2c;
    M2C_FIELD(arg0, s8 *, 0x10)    = 0;
    M2C_FIELD(arg0, s8 *, 0x11)    = 0;
    M2C_FIELD(arg0, s8 *, 0x12)    = 0x1E;
    M2C_FIELD(arg0, s8 *, 0x13)    = 0;
    M2C_FIELD(arg0, s8 *, 0x14)    = 1;
    func_02046944(arg0 + 8, &data_ov003_0214f7b0, 8);
    temp_r2                        = M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 0x18);
    M2C_FIELD(temp_r2, s32 *, 4)   = (s32) (M2C_FIELD(temp_r2, s32 *, 4) & ~1);
    temp_r2_2                      = M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 0x1C);
    M2C_FIELD(temp_r2_2, s32 *, 4) = (s32) (M2C_FIELD(temp_r2_2, s32 *, 4) & ~1);
    return arg0;
}
