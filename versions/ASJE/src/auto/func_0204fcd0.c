/* compiler: 1.2/sp2p3 */
#include "m2c.h"
u32 func_0204fcd0(u8 *arg0, s32 arg1, u32 arg2) {
    s32 var_r6;
    u32 var_r2;
    u32 var_r5;
    u32 r4;
    s32 lr;
    enum {
        ONE = 1
    } one;
    var_r2 = arg2;
    var_r6 = 1;
    one    = ONE;
    var_r5 = 0;
    goto check;
start:
    var_r5 = var_r2;
    var_r6 = arg1;
    if (arg1 <= 0) {
        goto check;
    }
loop_a:
    r4 = arg0[var_r2 >> 3];
    if (r4 == 0xFF) {
        var_r2 += 8;
        goto check;
    }
    if (r4 == 0) {
        var_r2 += 8;
        var_r6 -= 8;
        goto tail;
    }
    lr = var_r2 & 7;
loop_b:
    var_r2 += 1;
    if (r4 & (one << lr)) {
        goto check;
    }
    lr += 1;
    var_r6 -= 1;
    if ((u32) lr >= 8) {
        goto tail;
    }
    if (var_r6 > 0) {
        goto loop_b;
    }
tail:
    if (var_r6 > 0) {
        goto loop_a;
    }
check:
    if (var_r2 + arg1 <= 0x400 && var_r6 > 0) {
        goto start;
    }
    if (var_r6 <= 0) {
        return var_r5;
    }
    return 0xFFFF;
}
