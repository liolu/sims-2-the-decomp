/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fba08();                            /* extern */
extern s16 data_02149040;

void func_02106f34(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_02149040 = 1;
        return;
    }
    func_020fba08();
}
