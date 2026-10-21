/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020fa2a0();                            /* extern */
void *func_020fabe4(void *);                        /* extern */

void func_020facc8(void *arg0) {
    void *temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x7C) == 0) {
        return;
    }
    do {
        temp_r0                      = func_020fabe4(arg0);
        M2C_FIELD(temp_r0, s32 *, 8) = 0;
        M2C_FIELD(temp_r0, s32 *, 4) = 0;
        func_020fa2a0();
    } while (M2C_FIELD(arg0, s32 *, 0x7C) != 0);
}
