/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046384(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0209e714(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020bbde8(s32, M2C_UNK, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK data_02124b14;
extern s32 data_0213e6c4;
extern s32 *data_0213e6c8;

void func_0209e7fc(void) {
    func_02046384(data_0213e6c4, 0, 0x1000);
    func_0209e714(0x19, 0x32, &data_02124b14, 1);
    func_020bbde8(*data_0213e6c8 + 0x1A4, 1, data_0213e6c4, 0x1000, 0);
}
