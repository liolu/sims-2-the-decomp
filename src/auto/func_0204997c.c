/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020499a8(M2C_UNK, M2C_UNK);

void func_0204997c(s32 arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x4C);
    if (temp_r1 == 0) {
        return;
    }
    func_020499a8(arg0, temp_r1);
}
