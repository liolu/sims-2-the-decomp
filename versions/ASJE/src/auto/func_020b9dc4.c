/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020d5880(s32 n);

void func_020b9dc4(u8 *arg0, u16 arg1, s32 arg2, u8 arg3, u8 arg4) {
    volatile s32 t[2];
    s32 v;

    arg0[0x2BA]             = 1;
    *(u16 *) (arg0 + 0x2A8) = arg1;
    v                       = arg2 << 12;
    t[0]                    = v;
    t[1]                    = v;
    *(s32 *) (arg0 + 0x2AC) = v;
    arg0[0x2BC]             = arg3;
    arg0[0x2BB]             = arg4;
    *(s32 *) (arg0 + 0x2C0) = func_020d5880(9);
}
