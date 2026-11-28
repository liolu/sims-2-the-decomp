/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020503e4(void);
M2C_UNK func_02051b54(s32, s32, s32);
s32 func_020524a8(s32);
s32 func_0205134c(s32, s32, s32, s32, s32);
M2C_UNK func_0205032c(void);

s32 func_ov014_02149a0c(s32 arg0, s32 arg1) {
    s32 r9 = arg1;
    s32 i;
    s32 v;

    func_020503e4();
    func_02051b54(3, 0, -1);
    for (i = 0; i < 5; i++) {
        v  = func_020524a8(i + 0x95F);
        r9 = func_0205134c(r9, 0x37, 0x17 + i * 0x20, v, 0);
    }
    func_0205032c();
    return r9;
}
