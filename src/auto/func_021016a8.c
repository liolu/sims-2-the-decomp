/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020fdf0c();                            /* extern */
s32 func_020fe0f0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020fe118(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_02147fc8;
extern M2C_UNK data_02147fcc;
extern M2C_UNK func_02101738;

void func_021016a8(void) {
    if (data_02147fc8 != 0) {
        return;
    }
    data_02147fc8 = 1;
    func_020fdf0c();
    M2C_FIELD(&data_02147fcc, s16 *, 0x32) = 0;
    M2C_FIELD(&data_02147fcc, s16 *, 0x36) = 0;
    M2C_FIELD(&data_02147fcc, s16 *, 0xC)  = 0;
    M2C_FIELD(&data_02147fcc, s32 *, 0)    = 0;
    M2C_FIELD(&data_02147fcc, s32 *, 0x10) = 0;
    M2C_FIELD(&data_02147fcc, s16 *, 0x30) = 0;
    M2C_FIELD(&data_02147fcc, s16 *, 0x34) = 0;
    do {

    } while (func_020fe0f0(6, 1) == 0);
    func_020fe118(6, &func_02101738);
}
