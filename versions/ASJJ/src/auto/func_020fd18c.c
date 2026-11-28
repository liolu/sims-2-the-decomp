/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020fb98c(void);
void func_020fb9a0(M2C_UNK);

extern u32 data_02145eac;

s32 func_020fd18c(s32 arg0) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_020fb98c();
    if ((u32) arg0 > (u32) data_02145eac) {
        if ((u32) (arg0 - data_02145eac) < 0x80000000U) {
            var_r4 = 0;
        } else {
            var_r4 = 1;
        }
    } else if ((u32) (data_02145eac - arg0) < 0x80000000U) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    func_020fb9a0(temp_r0);
    return var_r4;
}
