/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020f52f4();              /* extern */
s32 func_020f79f0();                             /* extern */
s32 func_020f7a38();                       /* extern */
M2C_UNK func_020f0688();                            /* extern */

void func_020f0788(s32 arg0, s32 arg1) {
    u8 sp0[64];

    func_020f0688();
    *(s32 *) 0x04000440 = 0;
    *(s32 *) 0x04000444 = 0;
    *(s32 *) 0x04000454 = 0;
    if (arg0 != 0) {
        do {

        } while (func_020f7a38(sp0) != 0);
        func_020f52f4(sp0, arg0);
    }
    if (arg1 != 0) {
        do {

        } while (func_020f79f0(arg1) != 0);
    }
    *(s32 *) 0x04000448     = 1;
    *(M2C_UNK *) 0x04000440 = 2;
}
