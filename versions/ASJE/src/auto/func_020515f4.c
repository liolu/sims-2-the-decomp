/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_020513ac(s32, M2C_UNK, s32, M2C_UNK, u8 **, s32, s32 *);
extern M2C_UNK data_0213db00;
extern s32 data_027e0000;
void func_020515f4(s32 arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3, u8 *arg4, s32 arg5) {
    s32 spC;
    s32 var_r0;
    s32 var_r9;
    u8 **pa;
    s32 *ps;
    u8 *tbl;
    s32 *idx;
    var_r0 = arg0;
    spC    = 0x7FFFFFFF;
    var_r9 = arg2;
    if (*arg4 == 0) {
        return;
    }
    pa  = &arg4;
    ps  = &spC;
    idx = &data_027e0000;
    tbl = (u8 *) &data_0213db00;
    do {
        var_r0 = func_020513ac(var_r0, arg1, var_r9, arg3, pa, arg5, ps);
        var_r9 += *(s32 *) (tbl + *idx * 0x44 + 0x1C);
    } while (*arg4 != 0);
}
