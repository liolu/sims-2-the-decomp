/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

extern void func_020ee610(s32, u16);
extern void func_020ee624(s32, s16, s16, s16);

void func_020bc3a0(s32 arg0) {
    s32 var_r5;
    u16 *var_r4;
    void *temp_r3;

    var_r4 = (u16 *) (arg0 + 0x1CC);
    var_r5 = 0;
    do {
        temp_r3 = (void *) (arg0 + (var_r5 * 0x10));
        if (*(u8 *) ((char *) temp_r3 + 0x1CE) == 1) {
            func_020ee624(var_r5, (s16) * (s32 *) ((char *) temp_r3 + 0x1C0), (s16) * (s32 *) ((char *) temp_r3 + 0x1C4),
                          (s16) * (s32 *) ((char *) temp_r3 + 0x1C8));
            func_020ee610(var_r5, *var_r4);
        }
        var_r5 += 1;
        var_r4 = (u16 *) ((char *) var_r4 + 0x10);
    } while (var_r5 < 4);
}
