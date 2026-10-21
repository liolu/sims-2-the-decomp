/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020ffd44();                            /* extern */
extern s32 data_02147f58;

void func_020ffc74(s32 arg0) {
    if (data_02147f58 != 0) {
        return;
    }
    data_02147f58 = 1;
    func_020ffd44(arg0);
}
