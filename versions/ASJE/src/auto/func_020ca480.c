/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020512c0(M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 func_020521e0(s32);                             /* extern */
M2C_UNK func_020c5314(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_020c937c(void *);                      /* extern */
extern M2C_UNK data_02127790;

void func_020ca480(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x2E) = 0;
    func_020512c0(1, 0x7F, 0xC, func_020521e0(0x7F8), 1);
    func_020c5314(&data_02127790, 0);
    func_020c937c(arg0);
}
