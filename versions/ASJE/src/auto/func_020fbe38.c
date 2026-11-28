/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fddd0();                            /* extern */
s32 func_020fdfb4(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020fdfdc(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_021461e4;
extern M2C_UNK func_020fbdf4;

void func_020fbe38(void) {
    if (data_021461e4 != 0) {
        return;
    }
    data_021461e4 = 1;
    func_020fddd0();
    do {

    } while (func_020fdfb4(0xC, 1) == 0);
    func_020fdfdc(0xC, &func_020fbdf4);
}
