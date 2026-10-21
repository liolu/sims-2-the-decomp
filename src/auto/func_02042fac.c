/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020459fc(void *, M2C_UNK);             /* extern */
extern void *data_02139ca4;

void *func_02042fac(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0)   = 0;
    M2C_FIELD(arg0, s32 *, 4)   = 0;
    M2C_FIELD(arg0, void **, 8) = (void *) (arg0 + 4);
    func_020459fc(arg0 + 0xC, 0x32);
    data_02139ca4 = arg0;
    return arg0;
}
