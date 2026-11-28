/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020fa878(void);
M2C_UNK func_020fbd64(void);
void func_020fbd78(M2C_UNK);

s32 func_020fd354(void) {
    s32 temp_r0;
    s32 temp_r4;

    if (func_020fa878() == 0) {
        return 1;
    }
    temp_r0             = func_020fbd64();
    *(s32 *) 0x04FFF200 = 0x10;
    temp_r4             = *(s32 *) 0x04FFF200;
    func_020fbd78(temp_r0);
    if (temp_r4 != 0) {
        return 1;
    }
    return 0;
}
