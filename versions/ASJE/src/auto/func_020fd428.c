/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fbdd4(M2C_UNK);                     /* extern */
s32 func_020fdfb4(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020fdfdc(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020fd354();                                /* extern */
extern M2C_UNK func_020fd494;

void func_020fd428(void) {
    func_020fdfdc(7, &func_020fd494);
    if (func_020fd354() == 0) {
        return;
    }
    if (func_020fdfb4(7, 1) != 0) {
        return;
    }
    do {
        func_020fbdd4(0x64);
    } while (func_020fdfb4(7, 1) == 0);
}
