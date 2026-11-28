/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0210728c();                            /* extern */
M2C_UNK func_020fbde0();                            /* extern */
extern s32 (*data_021493ec)();

void func_021072ac(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0 = 0;
        if (data_021493ec != NULL) {
            var_r0 = data_021493ec();
        }
        if (var_r0 == 0) {
            return;
        }
        func_0210728c();
        return;
    }
    func_020fbde0();
}
