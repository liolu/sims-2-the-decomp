/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020f9e00(M2C_UNK);                     /* extern */
M2C_UNK func_020fa980(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_020fa9a4();                            /* extern */
s32 func_020fb98c();                                /* extern */
M2C_UNK func_020fb9a0(s32);                         /* extern */
M2C_UNK func_020fb9fc(M2C_UNK);                     /* extern */
s32 func_020fdb28(M2C_UNK, s32 *, M2C_UNK);         /* extern */
s32 func_020fdbdc(M2C_UNK, M2C_UNK);                /* extern */

s32 func_021041f4(void *arg0, s32 *arg1, s32 arg2) {
    s32 *temp_r7;
    s32 temp_r0;
    s32 temp_r7_2;
    s32 var_r8;

    var_r8 = arg2;
    if (!(M2C_FIELD(arg0, volatile s32 *, 0x34) & 2)) {
        M2C_FIELD(arg0, volatile s32 *, 0x34) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x34) | 2);
        if (func_020fdbdc(0xB, 1) == 0) {
            do {
                func_020fb9fc(0x64);
            } while (func_020fdbdc(0xB, 1) == 0);
        }
        func_021041f4(arg0, NULL, 1);
    }
    func_020fa980(M2C_FIELD(arg0, s32 **, 0), 0x40);
    func_020fa9a4();
loop_6:
    M2C_FIELD(arg0, s32 **, 4)            = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0x34) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x34) | 0x20);
    do {

    } while (func_020fdb28(0xB, arg1, 1) < 0);
    if (arg1 == NULL) {
        temp_r7 = M2C_FIELD(arg0, s32 **, 0);
        do {

        } while (func_020fdb28(0xB, temp_r7, 1) < 0);
    }
    temp_r7_2 = func_020fb98c();
    if (M2C_FIELD(arg0, volatile s32 *, 0x34) & 0x20) {
        do {
            func_020f9e00(0);
        } while (M2C_FIELD(arg0, volatile s32 *, 0x34) & 0x20);
    }
    func_020fb9a0(temp_r7_2);
    temp_r0 = *M2C_FIELD(arg0, s32 **, 0);
    if (temp_r0 == 4) {
        var_r8 -= 1;
        if (var_r8 > 0) {
            goto loop_6;
        }
    }
    if (temp_r0 == 0) {
        return 1;
    }
    return 0;
}
