/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0210476c();                            /* extern */
M2C_UNK func_020fbde0();                            /* extern */
extern s32 data_02148940;
extern s32 (*data_02148944)();

void func_021047bc(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0        = 1;
        data_02148940 = 1;
        if (data_02148944 != NULL) {
            var_r0 = data_02148944();
        }
        if (var_r0 == 0) {
            return;
        }
        func_0210476c();
        return;
    }
    func_020fbde0();
}
