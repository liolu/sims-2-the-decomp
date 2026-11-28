/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fbde0();                            /* extern */
extern s16 data_021493e0;

void func_0210730c(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_021493e0 = 1;
        return;
    }
    func_020fbde0();
}
