/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020fa800();                                /* extern */
M2C_UNK func_020fadf0(M2C_UNK, s32);                /* extern */
M2C_UNK func_020fae04(M2C_UNK, s32);                /* extern */
s32 func_020fae18(M2C_UNK);                         /* extern */
s32 func_020faf00(M2C_UNK);                         /* extern */
M2C_UNK func_020fb4e0(s32);                         /* extern */
M2C_UNK func_020fb4e8(s32);                         /* extern */
extern s32 data_021460fc;

void func_020fb054(void) {
    func_020fae04(2, func_020faf00(2));
    func_020fadf0(2, func_020fae18(2));
    if ((data_021460fc != 0) && (*(u16 *) 0x027FFC40 != 2) && ((func_020fa800() & 3) != 1)) {
        return;
    }
    func_020fb4e0(0x0200002B);
    func_020fb4e8(0x023E0021);
}
