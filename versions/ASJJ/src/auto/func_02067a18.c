/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0206b060(s32, s32);

void func_02067a18(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x64) != 0) {
        return;
    }
    func_0206b060(M2C_FIELD(arg0, s32 *, 0x34), arg1);
}
