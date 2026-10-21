/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020fbea0(void);
void func_020fbeb4(M2C_UNK);

extern s32 data_0214638c;
extern s32 data_02146390;
extern s32 data_021463a8;

s32 func_020fd6f4(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_020fbea0();
    if (data_02146390 == 0) {
        var_r4 = data_0214638c;
    } else {
        var_r4 = data_021463a8;
    }
    func_020fbeb4(temp_r0);
    return var_r4;
}
