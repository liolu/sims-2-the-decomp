/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020f9c4c();                            /* extern */
M2C_UNK func_020f9d8c(void *);                      /* extern */
M2C_UNK func_020fa14c(void *);                      /* extern */
M2C_UNK func_020fa7b4(void *);                      /* extern */
M2C_UNK func_020fb98c();                            /* extern */
M2C_UNK func_020fba08();                            /* extern */
extern void **data_02145b08;
extern M2C_UNK data_02145b28;

void func_020f9e68(void) {
    void *temp_r4;

    func_020fb98c();
    temp_r4 = *data_02145b08;
    func_020fa7b4(temp_r4);
    func_020fa14c(temp_r4);
    *((M2C_UNK *) ((s8 *) &data_02145b28 + (M2C_FIELD(temp_r4, s32 *, 0x6C) * 4))) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x64)                                                = 2;
    func_020f9d8c(temp_r4 + 0x90);
    func_020f9c4c();
    func_020fba08();
}
