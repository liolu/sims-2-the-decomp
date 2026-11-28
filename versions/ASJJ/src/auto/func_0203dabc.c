/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 p;
    u8 a;
    u8 b;
    s16 c;
    s16 d;
    s32 e;
} S;

void func_0203dabc(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, S s) {
    s32 e;
    s32 var_r4;
    s32 var_lr;
    s32 var_ip;
    s32 w;
    u16 *var_r2;
    s32 step;
    s32 temp_r6;
    s32 d;

    temp_r6 = 0x10 << arg3;
    d       = s.d;
    var_lr  = s.b;
    e       = s.e;
    var_ip  = (d * temp_r6) + arg2;
    var_ip += s.c;
    w = s.a;
    if (var_lr <= 0) {
        return;
    }
    step = temp_r6 - arg1;
    do {
        var_r4 = w;
        var_r2 = (u16 *) ((u32) var_ip & ~1);
        if (var_r4 > 0) {
            do {
                if (var_ip & 1) {
                    *var_r2 = (u16) ((*var_r2 & 0xFF) | (e + (*arg0 << 8)));
                } else if (var_r4 == 1) {
                    *var_r2 = (u16) ((*var_r2 & 0xFF00) | (*arg0 + e));
                } else {
                    var_ip += 1;
                    *var_r2 = (u16) ((*arg0 + e) | ((arg0[1] + e) << 8));
                    arg0 += 1;
                    var_r4 -= 1;
                }
                var_r4 -= 1;
                var_r2 += 1;
                var_ip += 1;
                arg0 += 1;
            } while (var_r4 > 0);
        }
        var_lr -= 1;
        var_ip += step;
    } while (var_lr > 0);
}
