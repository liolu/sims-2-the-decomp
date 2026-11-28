/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_02120074;
extern u8 *data_0213e2f4;

void func_020827b4(u8 *arg0, s32 arg1) {
    s32 var_r3;
    u8 *p;

    var_r3 = *(s8 *) (arg0 + 0x1C) + arg1;
    if (*(s32 *) (*(u8 **) &data_0213e2f4 + 0x68) == 2) {
        var_r3 += 1;
    }
    if (var_r3 < -0x64) {
        var_r3 = -0x64;
    } else if (var_r3 > 0x64) {
        var_r3 = 0x64;
    }
    *(s8 *) (arg0 + 0x1C) = (s8) var_r3;
    p                     = arg0 + 0x1B;
    *p                    = 0;
    while (arg0[0x1B] < 6 && *(s8 *) (arg0 + 0x1C) > ((s32 *) &data_02120074)[arg0[0x1B]]) {
        *p = *p + 1;
    }
}
