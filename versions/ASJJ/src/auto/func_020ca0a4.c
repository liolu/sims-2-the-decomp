/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0205134c(M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 func_020524a8(s32);                             /* extern */
M2C_UNK func_020c4ec4(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_020c8f2c(void *);                      /* extern */
extern M2C_UNK data_021273f8;

void func_020ca0a4(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x2E) = 0;
    func_0205134c(1, 0x7F, 0xC, func_020524a8(0x7F8), 1);
    func_020c4ec4(&data_021273f8, 0);
    func_020c8f2c(arg0);
}
