/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046384(s32 *, M2C_UNK, M2C_UNK);     /* extern */
s32 *func_02046880(M2C_UNK, M2C_UNK, M2C_UNK);      /* extern */
s32 *func_0204688c(M2C_UNK, M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_020bbcf0(s32, M2C_UNK, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_02124b0c;
extern s32 *data_0213e6c4;
extern s32 *data_0213e6c8;

void func_0209e870(s32 arg0) {
    s32 *temp_r0;
    s32 *temp_r0_2;

    temp_r0       = func_0204688c(4, 3, 4);
    data_0213e6c8 = temp_r0;
    func_02046384(temp_r0, 0, 4);
    temp_r0_2     = func_02046880(0x1000, 3, 4);
    data_0213e6c4 = temp_r0_2;
    func_02046384(temp_r0_2, 0, 0x1000);
    *data_0213e6c8 = arg0;
    func_020bbcf0(*data_0213e6c8 + 0x1A4, 1, &data_02124b0c, 8, 0, 0);
}
