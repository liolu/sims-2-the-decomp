/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020ff5d8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020ff738(void *);

s32 func_020ff50c(s32 arg0, s32 arg1) {
    u8 sp0[68];

    func_020ff738(sp0);
    if (func_020ff5d8((s32) sp0, arg1, arg0, 0) != 0) {
        return 1;
    }
    return 0;
}
