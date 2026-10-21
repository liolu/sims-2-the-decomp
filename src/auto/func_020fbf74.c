/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020fdf0c();                            /* extern */
s32 func_020fe0f0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020fe118(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_02146324;
extern M2C_UNK func_020fbf30;

void func_020fbf74(void) {
    if (data_02146324 != 0) {
        return;
    }
    data_02146324 = 1;
    func_020fdf0c();
    do {

    } while (func_020fe0f0(0xC, 1) == 0);
    func_020fe118(0xC, &func_020fbf30);
}
