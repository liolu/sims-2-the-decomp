/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020fbd64(void);
void func_020fbd78(M2C_UNK);

extern s32 data_02147efc;

s32 func_02102948(void) {
    s32 temp_r0;

    temp_r0 = func_020fbd64();
    if (data_02147efc != 0) {
        func_020fbd78(temp_r0);
        return 0;
    }
    data_02147efc = 1;
    func_020fbd78(temp_r0);
    return 1;
}
