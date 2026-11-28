/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fb9fc(M2C_UNK);                     /* extern */
s32 func_020fdbdc(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020fdc04(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020fcf7c();                                /* extern */
extern M2C_UNK func_020fd0bc;

void func_020fd050(void) {
    func_020fdc04(7, &func_020fd0bc);
    if (func_020fcf7c() == 0) {
        return;
    }
    if (func_020fdbdc(7, 1) != 0) {
        return;
    }
    do {
        func_020fb9fc(0x64);
    } while (func_020fdbdc(7, 1) == 0);
}
