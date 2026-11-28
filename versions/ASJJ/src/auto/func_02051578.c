/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_02051464(s32, M2C_UNK, s32, M2C_UNK, u8 **, s32, s32 *);
extern M2C_UNK data_0213d698;
extern s32 data_027e0000;
void func_02051578(s32 arg0, M2C_UNK arg1, s32 *arg2, M2C_UNK arg3, u8 *arg4, s32 arg5) {
    s32 spC;
    s32 var_r0;
    u8 **pa;
    s32 *ps;
    u8 *tbl;
    s32 *idx;
    var_r0 = arg0;
    spC    = 0x7FFFFFFF;
    if (*arg4 == 0) {
        return;
    }
    pa  = &arg4;
    ps  = &spC;
    idx = &data_027e0000;
    tbl = (u8 *) &data_0213d698;
    do {
        var_r0 = func_02051464(var_r0, arg1, *arg2, arg3, pa, arg5, ps);
        *arg2 += *(s32 *) (tbl + *idx * 0x44 + 0x1C);
    } while (*arg4 != 0);
}
