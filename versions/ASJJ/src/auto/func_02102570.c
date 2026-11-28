/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020fb98c(void);
void func_020fb9a0(M2C_UNK);

extern s32 data_02147b5c;

s32 func_02102570(void) {
    s32 temp_r0;

    temp_r0 = func_020fb98c();
    if (data_02147b5c != 0) {
        func_020fb9a0(temp_r0);
        return 0;
    }
    data_02147b5c = 1;
    func_020fb9a0(temp_r0);
    return 1;
}
