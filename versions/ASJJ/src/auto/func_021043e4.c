/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02104394();                            /* extern */
M2C_UNK func_020fba08();                            /* extern */
extern s32 data_021485a0;
extern s32 (*data_021485a4)();

void func_021043e4(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0        = 1;
        data_021485a0 = 1;
        if (data_021485a4 != NULL) {
            var_r0 = data_021485a4();
        }
        if (var_r0 == 0) {
            return;
        }
        func_02104394();
        return;
    }
    func_020fba08();
}
