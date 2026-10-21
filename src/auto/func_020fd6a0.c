/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020fbea0(void);
void func_020fbeb4(M2C_UNK);

extern u32 data_0214638c;

s32 func_020fd6a0(s32 arg0) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_020fbea0();
    if ((u32) arg0 > (u32) data_0214638c) {
        if ((u32) (arg0 - data_0214638c) < 0x80000000U) {
            var_r4 = 0;
        } else {
            var_r4 = 1;
        }
    } else if ((u32) (data_0214638c - arg0) < 0x80000000U) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    func_020fbeb4(temp_r0);
    return var_r4;
}
