/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_0209b458(M2C_UNK);

void func_0209b50c(s32 arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x68) != 0) {
        func_0209b458(arg0);
    }
    M2C_FIELD(arg0, u8 *, 0x68) = 1U;
}
