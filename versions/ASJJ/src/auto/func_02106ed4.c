/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02106eb4();                            /* extern */
M2C_UNK func_020fba08();                            /* extern */
extern s32 (*data_0214904c)();

void func_02106ed4(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0 = 0;
        if (data_0214904c != NULL) {
            var_r0 = data_0214904c();
        }
        if (var_r0 == 0) {
            return;
        }
        func_02106eb4();
        return;
    }
    func_020fba08();
}
