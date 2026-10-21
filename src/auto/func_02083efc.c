/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02083e18(void *);                      /* extern */
M2C_UNK func_0210823c(void *, M2C_UNK *);           /* extern */
extern M2C_UNK data_02132d78;

void *func_02083efc(void *arg0) {
    void *var_lr;
    void *var_r2;

    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0x80000000;
    M2C_FIELD(arg0, s32 *, 0x28) = 0x80000000;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    var_lr                       = arg0 + 0x70;
    do {
        var_r2 = var_lr;
    loop_2:
        M2C_FIELD(var_r2, s32 *, 0) = 0;
        M2C_FIELD(var_r2, s32 *, 4) = 0;
        M2C_FIELD(var_r2, s32 *, 8) = 0;
        var_r2 += 0x10;
        if (var_r2 != (var_lr + 0xF0)) {
            goto loop_2;
        }
        M2C_FIELD(var_lr, s32 *, 0xF4) = 0x80000000;
        M2C_FIELD(var_lr, s8 *, 0xF8)  = 0;
        var_lr += 0xFC;
    } while (var_lr != (arg0 + 0x20EC));
    M2C_FIELD(arg0, s32 *, 0x2130) = 0;
    M2C_FIELD(arg0, s32 *, 0x2134) = 0;
    M2C_FIELD(arg0, s32 *, 0x2138) = 0;
    M2C_FIELD(arg0, s32 *, 0x2148) = 0x80000000;
    func_0210823c(arg0 + 0x3B, &data_02132d78);
    func_02083e18(arg0);
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    return arg0;
}
