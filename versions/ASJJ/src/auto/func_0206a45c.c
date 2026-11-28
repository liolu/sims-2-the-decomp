/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02050a34();                            /* extern */
M2C_UNK func_02050a80();                            /* extern */
M2C_UNK func_02050b1c(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_0205134c(M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 func_020524a8(u16);                             /* extern */

void func_0206a45c(void *arg0) {
    s32 var_r7;
    void **temp_r0;
    void *temp_r1;

    func_02050b1c(5, 2, 0x1A);
    func_02050b1c(5, 3, 0x1A);
    var_r7 = 0;
    do {
        func_02050b1c(0xD, var_r7 + 8, 0x24);
        var_r7 += 1;
    } while (var_r7 < 6);
    if (M2C_FIELD(arg0, void **, 0x300) == NULL) {
        M2C_FIELD(arg0, s32 *, 0x90) = func_0205134c(1, 0x80, 0x10, func_020524a8(0x72BU), 1);
        return;
    }
    func_020524a8(0x72BU);
    func_02050a80();
    temp_r1 = M2C_FIELD(arg0, void **, 0x300);
    temp_r0 = M2C_FIELD(M2C_FIELD(temp_r1, void **, 0), void ***, 0x130);
    if ((temp_r0 == NULL) || (M2C_FIELD(temp_r1, s32 *, 4) == 2)) {
        func_020524a8(0x141U);
        func_02050a34();
    } else {
        func_020524a8(M2C_FIELD(M2C_FIELD(*temp_r0, void *(**) (), 0x1C)(temp_r0), u16 *, 8));
        func_02050a34();
    }
    M2C_FIELD(arg0, s32 *, 0x90) = func_0205134c(1, 0x80, 0x10, func_020524a8(0x730U), 1);
}
