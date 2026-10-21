/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02043230(void **, M2C_UNK, s16 *);     /* extern */

void func_02042c1c(M2C_UNK arg0, s16 arg1, s32 arg2) {
    void *sp4;
    s16 sp0;

    sp0 = arg1;
    func_02043230(&sp4, arg0, &sp0);
    M2C_FIELD(M2C_FIELD(sp4, void **, 0x10), s32 *, 4) = arg2;
}
