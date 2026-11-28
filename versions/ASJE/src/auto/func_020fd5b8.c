/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020fbd64(void);
void func_020fbd78(M2C_UNK);

extern s32 data_0214624c;
extern s32 data_02146250;
extern s32 data_02146268;

s32 func_020fd5b8(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_020fbd64();
    if (data_02146250 == 0) {
        var_r4 = data_0214624c;
    } else {
        var_r4 = data_02146268;
    }
    func_020fbd78(temp_r0);
    return var_r4;
}
