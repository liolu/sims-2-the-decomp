/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020f949c(M2C_UNK);                     /* extern */
M2C_UNK func_020f962c(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020fb978(M2C_UNK, u16);                /* extern */
extern M2C_UNK func_01ffb234;

void func_020452bc(void) {
    u16 temp_r1;

    func_020f962c(1, &func_01ffb234);
    func_020f949c(1);
    temp_r1             = *(u16 *) 0x04000208;
    *(u16 *) 0x04000208 = 1;
    func_020fb978(1, temp_r1);
    *(s16 *) 0x04000004 = 8;
}
