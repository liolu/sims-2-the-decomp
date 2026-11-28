/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0203c574();                            /* extern */
M2C_UNK func_0203d0ac(M2C_UNK);                     /* extern */
M2C_UNK func_0204830c(M2C_UNK *);                   /* extern */
M2C_UNK func_0205032c();                            /* extern */
M2C_UNK func_0205049c();                            /* extern */
extern M2C_UNK data_02139d58;

void func_02054d70(void) {
    func_0204830c(&data_02139d58);
    *(s32 *) 0x04001000 &= ~0x2000;
    func_0203d0ac(3);
    func_0205049c();
    func_0205032c();
    func_0203c574();
}
