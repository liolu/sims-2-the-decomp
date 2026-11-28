/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fddd0();                            /* extern */
s32 func_020fdfb4(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020fdfdc(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_02147e88;
extern M2C_UNK data_02147e8c;
extern M2C_UNK func_021015fc;

void func_0210156c(void) {
    if (data_02147e88 != 0) {
        return;
    }
    data_02147e88 = 1;
    func_020fddd0();
    M2C_FIELD(&data_02147e8c, s16 *, 0x32) = 0;
    M2C_FIELD(&data_02147e8c, s16 *, 0x36) = 0;
    M2C_FIELD(&data_02147e8c, s16 *, 0xC)  = 0;
    M2C_FIELD(&data_02147e8c, s32 *, 0)    = 0;
    M2C_FIELD(&data_02147e8c, s32 *, 0x10) = 0;
    M2C_FIELD(&data_02147e8c, s16 *, 0x30) = 0;
    M2C_FIELD(&data_02147e8c, s16 *, 0x34) = 0;
    do {

    } while (func_020fdfb4(6, 1) == 0);
    func_020fdfdc(6, &func_021015fc);
}
