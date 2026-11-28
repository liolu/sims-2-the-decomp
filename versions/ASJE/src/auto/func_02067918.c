/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0206c544(s32);                         /* extern */

void func_02067918(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x64) != 1) {
        return;
    }
    func_0206c544(M2C_FIELD(arg0, s32 *, 0x38));
}
