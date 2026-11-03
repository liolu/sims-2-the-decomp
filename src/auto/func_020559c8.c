/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020f5cc0(s32, s32);                            /* extern */
u8 *func_02052258(s32);                                 /* extern */
void func_02051a50(s32, s32, s32);                      /* extern */
void func_02050b9c(s32, s32, s32, s32);                 /* extern */
void func_02051338(s32, s32, s32, u8 *, s32);           /* extern */

void func_020559c8(s32 arg0, s32 arg1) {
    u8 *var_r5;
    s32 temp_r4;
    s32 var_r0;
    s32 temp_r6;
    s32 temp_r7;

    temp_r4 = arg1;
    var_r0  = func_020f5cc0(temp_r4 - 1, 0x1B4);
    if (var_r0 < 0) {
        var_r0 += 0x1B4;
    }
    var_r5  = func_02052258(var_r0 + 0xA69);
    temp_r6 = temp_r4 & 0xF;
    temp_r4 = (temp_r6 << 6) + 1;
    if (var_r5[0] == 0x5E) {
        if (var_r5[1] == 0x31) {
            func_02051a50(3, 9, 0);
        } else {
            func_02051a50(3, 3, 0);
        }
        var_r5 += 2;
    } else {
        func_02051a50(3, 0, 0);
    }
    temp_r6 = (temp_r6 - 3) & 0xF;
    temp_r7 = temp_r6 << 1;
    func_02050b9c(0, temp_r7, 0x20, 0);
    func_02050b9c(0, temp_r7 + 1, 0x20, 0);
    if (var_r5[0] == 0) {
        return;
    }
    if (var_r5[0] == 0x7E) {
        return;
    }
    func_02051338(temp_r4, 0x80, temp_r6 << 4, var_r5, 1);
}
