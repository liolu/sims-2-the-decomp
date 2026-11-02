/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_01ffb98c(s32 *, void *, void *);
M2C_UNK func_01ffba84(void *, void *);
M2C_UNK func_020f57b4(void *);
M2C_UNK func_020f5b94(void *, void *, s32, s32, s32);

void func_0200bdb0(u8 *arg0, s32 dummy, u8 *arg2, u8 *arg3) {
    volatile s32 tmp[8];
    s32 v;
    u8 *p;

    if (M2C_FIELD(arg3, u8 *, 0x64) == 1) {
        M2C_FIELD(arg3, u8 *, 0x64) = (u8) 0;
        func_020f57b4(arg3 + 0x24);
        p = arg3 + 0x18;
        v = M2C_FIELD(p, s32 *, 8);
        func_020f5b94(arg3 + 0x24, arg3 + 0x24, M2C_FIELD(arg3, s32 *, 0x18), M2C_FIELD(p, s32 *, 4), v);
        func_01ffba84(arg3 + 0x24, arg3 + 0xC);
        M2C_FIELD(arg3, s32 *, 0x54) = (s32) M2C_FIELD(arg3, s32 *, 0);
        M2C_FIELD(arg3, s32 *, 0x58) = (s32) M2C_FIELD(arg3, s32 *, 4);
        M2C_FIELD(arg3, s32 *, 0x5C) = (s32) M2C_FIELD(arg3, s32 *, 8);
    }
    func_01ffb98c((s32 *) &tmp[5], arg3 + 0x24, arg2 + 4);
    v                            = tmp[5];
    tmp[2]                       = v;
    M2C_FIELD(arg0, s32 *, 4)    = v;
    v                            = tmp[6];
    tmp[3]                       = v;
    M2C_FIELD(arg0, s32 *, 8)    = v;
    v                            = tmp[7];
    tmp[4]                       = v;
    M2C_FIELD(arg0, s32 *, 12)   = v;
    v                            = M2C_FIELD(arg2, s32 *, 0x18);
    tmp[0]                       = v;
    M2C_FIELD(arg0, s32 *, 0x1C) = v;
    v                            = M2C_FIELD(arg2, s32 *, 0x1C);
    tmp[1]                       = v;
    M2C_FIELD(arg0, s32 *, 0x18) = v;
}
