/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020505cc(s32, M2C_UNK, s32);           /* extern */

void func_02050718(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg0 != 0x2E) {
        func_020505cc(arg0, 0, arg4);
    }
    if (arg1 != 0x2E) {
        func_020505cc(arg1, 3, arg4);
    }
    if (arg2 != 0x2E) {
        func_020505cc(arg2, 6, arg4);
    }
    if (arg3 == 0x2E) {
        return;
    }
    func_020505cc(arg3, 9, arg4);
}
