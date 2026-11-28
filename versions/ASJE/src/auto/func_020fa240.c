/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fa024();                            /* extern */
M2C_UNK func_020fa164(void *);                      /* extern */
M2C_UNK func_020fa524(void *);                      /* extern */
M2C_UNK func_020fab8c(void *);                      /* extern */
M2C_UNK func_020fbd64();                            /* extern */
M2C_UNK func_020fbde0();                            /* extern */
extern void **data_02145ea8;
extern M2C_UNK data_02145ec8;

void func_020fa240(void) {
    void *temp_r4;

    func_020fbd64();
    temp_r4 = *data_02145ea8;
    func_020fab8c(temp_r4);
    func_020fa524(temp_r4);
    *((M2C_UNK *) ((s8 *) &data_02145ec8 + (M2C_FIELD(temp_r4, s32 *, 0x6C) * 4))) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x64)                                                = 2;
    func_020fa164(temp_r4 + 0x90);
    func_020fa024();
    func_020fbde0();
}
