/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02018458(s32, s32, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_02018578(s32 *);                           /* extern */
M2C_UNK func_020509e8(s32, M2C_UNK);                /* extern */
s32 func_02052258(s32);                             /* extern */
s32 func_02064644(s32, M2C_UNK);                    /* extern */
s32 func_020733f0(s32);                             /* extern */
extern s32 data_0213e434;

void func_0206f0f0(void *arg0) {
    s32 sp4;
    s32 var_r0;

    if (func_02064644(data_0213e434, 0x11) == 0) {
        M2C_FIELD(arg0, s32 *, 0x4EC) = 0;
        M2C_FIELD(arg0, s32 *, 0x4F0) = 0;
        return;
    }
    if (func_020733f0(data_0213e434 + 0x41F8) == 0x64) {
        var_r0 = func_02052258(0x733);
    } else {
        var_r0 = func_02052258(0x731);
    }
    sp4                           = var_r0;
    M2C_FIELD(arg0, s32 *, 0x4EC) = func_02018578(&sp4);
    func_02018458(M2C_FIELD(arg0, s32 *, 0x4EC), sp4, 0x2F, 0xAD, 0);
    func_020509e8(func_020733f0(data_0213e434 + 0x41F8), 0);
    sp4                           = func_02052258(0x732);
    M2C_FIELD(arg0, s32 *, 0x4F0) = func_02018578(&sp4);
    sp4                           = func_02052258(0x732);
    func_02018458(M2C_FIELD(arg0, s32 *, 0x4F0), sp4, 0xF6, 0xAD, 2);
}
