/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fd9f8();                            /* extern */
s32 func_020fdbdc(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020fdc04(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_02147ae8;
extern M2C_UNK data_02147aec;
extern M2C_UNK func_02101224;

void func_02101194(void) {
    if (data_02147ae8 != 0) {
        return;
    }
    data_02147ae8 = 1;
    func_020fd9f8();
    M2C_FIELD(&data_02147aec, s16 *, 0x32) = 0;
    M2C_FIELD(&data_02147aec, s16 *, 0x36) = 0;
    M2C_FIELD(&data_02147aec, s16 *, 0xC)  = 0;
    M2C_FIELD(&data_02147aec, s32 *, 0)    = 0;
    M2C_FIELD(&data_02147aec, s32 *, 0x10) = 0;
    M2C_FIELD(&data_02147aec, s16 *, 0x30) = 0;
    M2C_FIELD(&data_02147aec, s16 *, 0x34) = 0;
    do {

    } while (func_020fdbdc(6, 1) == 0);
    func_020fdc04(6, &func_02101224);
}
