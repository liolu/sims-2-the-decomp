/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02106e74();                            /* extern */
M2C_UNK func_02106f70();                            /* extern */
M2C_UNK func_020fd9f8();                            /* extern */
s32 func_020fdbdc(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020fdc04(M2C_UNK, M2C_UNK *);          /* extern */
extern s32 data_02149048;
extern s32 data_0214904c;
extern M2C_UNK func_02106ed4;
extern M2C_UNK func_02106f34;

void func_0210713c(void) {
    if (data_02149048 != 0) {
        return;
    }
    data_02149048 = 1;
    func_02106e74();
    func_020fd9f8();
    do {

    } while (func_020fdbdc(0xD, 1) == 0);
    func_020fdc04(0xD, &func_02106f34);
    func_02106f70();
    func_020fdc04(0xD, NULL);
    func_020fdc04(0xD, &func_02106ed4);
    data_0214904c = 0;
}
