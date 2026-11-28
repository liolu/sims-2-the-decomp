/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0203d0ac(M2C_UNK);                     /* extern */
M2C_UNK func_0203d0d8(M2C_UNK);                     /* extern */
M2C_UNK func_0204830c(M2C_UNK *);                   /* extern */
M2C_UNK func_0205032c();                            /* extern */
M2C_UNK func_0205049c();                            /* extern */
extern M2C_UNK data_02139d58;

void func_02056130(void *arg0) {
    void *temp_r2;

    temp_r2                      = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(temp_r2, s32 *, 4) = (s32) (M2C_FIELD(temp_r2, s32 *, 4) & ~1);
    func_0204830c(&data_02139d58);
    *(s32 *) 0x04001000 &= ~0x2000;
    func_0203d0ac(3);
    func_0205049c();
    func_0205032c();
    func_0203d0d8(0);
}
