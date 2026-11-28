/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fadf0(M2C_UNK, s32);                /* extern */
M2C_UNK func_020fae04(M2C_UNK, s32);                /* extern */
s32 func_020fae18(M2C_UNK);                         /* extern */
s32 func_020faf00(M2C_UNK);                         /* extern */
extern s32 data_021460f8;

void func_020fb0e8(void) {
    if (data_021460f8 != 0) {
        return;
    }
    data_021460f8 = 1;
    func_020fae04(0, func_020faf00(0));
    func_020fadf0(0, func_020fae18(0));
    func_020fadf0(2, 0);
    func_020fae04(2, 0);
    func_020fae04(3, func_020faf00(3));
    func_020fadf0(3, func_020fae18(3));
    func_020fae04(4, func_020faf00(4));
    func_020fadf0(4, func_020fae18(4));
    func_020fae04(5, func_020faf00(5));
    func_020fadf0(5, func_020fae18(5));
    func_020fae04(6, func_020faf00(6));
    func_020fadf0(6, func_020fae18(6));
}
