/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fba08();                            /* extern */
extern s16 data_02145e48;

void func_020fba1c(s32 arg0, s32 arg1) {
    if (((u32) ((arg1 & 0x7F00) << 8) >> 0x10) == 0x10) {
        data_02145e48 = 1;
        return;
    }
    func_020fba08();
}
