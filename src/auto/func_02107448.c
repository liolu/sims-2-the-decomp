/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020fbf1c();                            /* extern */
extern s16 data_02149520;

void func_02107448(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_02149520 = 1;
        return;
    }
    func_020fbf1c();
}
