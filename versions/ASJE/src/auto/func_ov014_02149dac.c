/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020503d0(void);
M2C_UNK func_020519d8(s32, s32, s32);
s32 func_020521e0(s32);
s32 func_020512c0(s32, s32, s32, s32, s32);
M2C_UNK func_02050318(void);

s32 func_ov014_02149dac(s32 arg0, s32 arg1) {
    s32 r9 = arg1;
    s32 i;
    s32 v;

    func_020503d0();
    func_020519d8(3, 0, -1);
    for (i = 0; i < 5; i++) {
        v  = func_020521e0(i + 0x95F);
        r9 = func_020512c0(r9, 0x37, 0x17 + i * 0x20, v, 0);
    }
    func_02050318();
    return r9;
}
