/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020fbf10(M2C_UNK);                     /* extern */
s32 func_020fd490();                                /* extern */
s32 func_020fe0f0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020fe118(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK func_020fd5d0;

void func_020fd564(void) {
    func_020fe118(7, &func_020fd5d0);
    if (func_020fd490() == 0) {
        return;
    }
    if (func_020fe0f0(7, 1) != 0) {
        return;
    }
    do {
        func_020fbf10(0x64);
    } while (func_020fe0f0(7, 1) == 0);
}
