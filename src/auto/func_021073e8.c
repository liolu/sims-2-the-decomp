/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020fbf1c();                            /* extern */
M2C_UNK func_021073c8();                            /* extern */
extern s32 (*data_0214952c)();

void func_021073e8(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0 = 0;
        if (data_0214952c != NULL) {
            var_r0 = data_0214952c();
        }
        if (var_r0 == 0) {
            return;
        }
        func_021073c8();
        return;
    }
    func_020fbf1c();
}
