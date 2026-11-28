/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020ffc08();                            /* extern */
extern s32 data_02147e18;

void func_020ffb38(s32 arg0) {
    if (data_02147e18 != 0) {
        return;
    }
    data_02147e18 = 1;
    func_020ffc08(arg0);
}
