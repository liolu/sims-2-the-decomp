/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020faa18(M2C_UNK, s32);                /* extern */
M2C_UNK func_020faa2c(M2C_UNK, s32);                /* extern */
s32 func_020faa40(M2C_UNK);                         /* extern */
s32 func_020fab28(M2C_UNK);                         /* extern */
extern s32 data_02145d58;

void func_020fad10(void) {
    if (data_02145d58 != 0) {
        return;
    }
    data_02145d58 = 1;
    func_020faa2c(0, func_020fab28(0));
    func_020faa18(0, func_020faa40(0));
    func_020faa18(2, 0);
    func_020faa2c(2, 0);
    func_020faa2c(3, func_020fab28(3));
    func_020faa18(3, func_020faa40(3));
    func_020faa2c(4, func_020fab28(4));
    func_020faa18(4, func_020faa40(4));
    func_020faa2c(5, func_020fab28(5));
    func_020faa18(5, func_020faa40(5));
    func_020faa2c(6, func_020fab28(6));
    func_020faa18(6, func_020faa40(6));
}
