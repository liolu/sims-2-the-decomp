/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fd9f8();                            /* extern */
s32 func_020fdbdc(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020fdc04(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_02145e44;
extern M2C_UNK func_020fba1c;

void func_020fba60(void) {
    if (data_02145e44 != 0) {
        return;
    }
    data_02145e44 = 1;
    func_020fd9f8();
    do {

    } while (func_020fdbdc(0xC, 1) == 0);
    func_020fdc04(0xC, &func_020fba1c);
}
