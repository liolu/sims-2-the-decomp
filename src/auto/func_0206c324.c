/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206d07c(s32);                         /* extern */

void func_0206c324(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 4) & 1) != 1) {
        return;
    }
    func_0206d07c(M2C_FIELD(arg0, s32 *, 0x90));
}
