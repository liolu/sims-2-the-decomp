/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02050a78();                            /* extern */
M2C_UNK func_02050ab4();                            /* extern */
M2C_UNK func_02050b30(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_02051338(M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 func_02052258(u16);                             /* extern */

void func_0206a448(void *arg0) {
    s32 var_r7;
    void **temp_r0;
    void *temp_r1;

    func_02050b30(5, 2, 0x1A);
    func_02050b30(5, 3, 0x1A);
    var_r7 = 0;
    do {
        func_02050b30(0xD, var_r7 + 8, 0x24);
        var_r7 += 1;
    } while (var_r7 < 6);
    if (M2C_FIELD(arg0, void **, 0x300) == NULL) {
        M2C_FIELD(arg0, s32 *, 0x90) = func_02051338(1, 0x80, 0x10, func_02052258(0x72BU), 1);
        return;
    }
    func_02052258(0x72BU);
    func_02050ab4();
    temp_r1 = M2C_FIELD(arg0, void **, 0x300);
    temp_r0 = M2C_FIELD(M2C_FIELD(temp_r1, void **, 0), void ***, 0x130);
    if ((temp_r0 == NULL) || (M2C_FIELD(temp_r1, s32 *, 4) == 2)) {
        func_02052258(0x141U);
        func_02050a78();
    } else {
        func_02052258(M2C_FIELD(M2C_FIELD(*temp_r0, void *(**) (), 0x1C)(temp_r0), u16 *, 8));
        func_02050a78();
    }
    M2C_FIELD(arg0, s32 *, 0x90) = func_02051338(1, 0x80, 0x10, func_02052258(0x730U), 1);
}
