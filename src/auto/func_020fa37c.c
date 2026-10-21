/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020fa160();                            /* extern */
M2C_UNK func_020fa2a0(void *);                      /* extern */
M2C_UNK func_020fa660(void *);                      /* extern */
M2C_UNK func_020facc8(void *);                      /* extern */
M2C_UNK func_020fbea0();                            /* extern */
M2C_UNK func_020fbf1c();                            /* extern */
extern void **data_02145fe8;
extern M2C_UNK data_02146008;

void func_020fa37c(void) {
    void *temp_r4;

    func_020fbea0();
    temp_r4 = *data_02145fe8;
    func_020facc8(temp_r4);
    func_020fa660(temp_r4);
    *((M2C_UNK *) ((s8 *) &data_02146008 + (M2C_FIELD(temp_r4, s32 *, 0x6C) * 4))) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x64)                                                = 2;
    func_020fa2a0(temp_r4 + 0x90);
    func_020fa160();
    func_020fbf1c();
}
