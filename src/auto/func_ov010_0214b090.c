/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020d59bc(s32);
s32 func_0204cbb4(s32, s32);
M2C_UNK func_ov010_0214c11c(void *, s32);

void func_ov010_0214b090(u8 *arg0) {
    s32 i  = 0;
    u8 *p  = arg0;
    s32 r6 = i;
    s32 n;

    for (; i < 6; i++) {
        n = p[0x56];
        if (n > 0) {
            u8 *q   = (u8 *) ((u32) p + (u32) (n - 1));
            s32 v   = func_0204cbb4(0, 6);
            q[0x48] = (u8) (v + r6);
            func_ov010_0214c11c(arg0, i);
        }
        p += 0x2C;
        r6 += 8;
    }
    func_020d59bc(0x262);
}
