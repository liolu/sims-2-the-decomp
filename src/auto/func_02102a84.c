/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020fbea0(void);
void func_020fbeb4(M2C_UNK);

extern s32 data_0214803c;

s32 func_02102a84(void) {
    s32 temp_r0;

    temp_r0 = func_020fbea0();
    if (data_0214803c != 0) {
        func_020fbeb4(temp_r0);
        return 0;
    }
    data_0214803c = 1;
    func_020fbeb4(temp_r0);
    return 1;
}
