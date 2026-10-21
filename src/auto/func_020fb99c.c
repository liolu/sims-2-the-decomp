/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020f99b0(M2C_UNK);                     /* extern */
M2C_UNK func_020f9b40(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020fb848(M2C_UNK);                     /* extern */
extern u16 data_021462f4;
extern s32 data_021462f8;
extern M2C_UNK data_021462fc;
extern M2C_UNK func_020fb914;

void func_020fb99c(void) {
    if (data_021462f4 != 0) {
        return;
    }
    data_021462f4 = 1;
    func_020fb848(0);
    M2C_FIELD(&data_021462fc, s32 *, 0) = 0;
    M2C_FIELD(&data_021462fc, s32 *, 4) = 0;
    *(s16 *) 0x04000102                 = 0;
    *(s16 *) 0x04000100                 = 0;
    *(s16 *) 0x04000102                 = 0xC1;
    func_020f9b40(8, &func_020fb914);
    func_020f99b0(8);
    data_021462f8 = 0;
}
