/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020fb98c(void);
void func_020fb9a0(M2C_UNK);

extern s32 data_02145eac;
extern s32 data_02145eb0;
extern s32 data_02145ec8;

s32 func_020fd1e0(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_020fb98c();
    if (data_02145eb0 == 0) {
        var_r4 = data_02145eac;
    } else {
        var_r4 = data_02145ec8;
    }
    func_020fb9a0(temp_r0);
    return var_r4;
}
