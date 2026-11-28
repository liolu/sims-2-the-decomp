/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void *func_020525ec(s32, s32);
M2C_UNK func_02082764(s32, u8, s32);
extern s32 data_0213df5c;
extern void *data_0213e0a8;

void func_020419a0(u8 *arg0, u8 *arg1) {
    u8 temp_r2;
    u8 *var_r0;
    s32 base;
    u8 t1;

    temp_r2 = arg1[0];
    t1      = arg1[1];
    if (temp_r2 == 0xFF) {
        var_r0 = *(u8 **) ((u8 *) data_0213e0a8 + 0xF8);
    } else {
        var_r0 = func_020525ec(*(s32 *) (*(u8 **) (arg0 + 4) + 0x28) + (temp_r2 * 8), t1);
    }
    if (var_r0 == NULL) {
        return;
    }
    base = data_0213df5c + 0x21E4;
    func_02082764((*(u16 *) (var_r0 + 0xA) * 0x2C) + base, arg1[2], 0);
}
