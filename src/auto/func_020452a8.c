/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020f99b0(M2C_UNK);                     /* extern */
M2C_UNK func_020f9b40(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020fbe8c(M2C_UNK, u16);                /* extern */
extern M2C_UNK func_01ffb234;

void func_020452a8(void) {
    u16 temp_r1;

    func_020f9b40(1, &func_01ffb234);
    func_020f99b0(1);
    temp_r1             = *(u16 *) 0x04000208;
    *(u16 *) 0x04000208 = 1;
    func_020fbe8c(1, temp_r1);
    *(s16 *) 0x04000004 = 8;
}
