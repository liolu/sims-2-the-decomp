/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020f9b3c(void);
M2C_UNK func_020f9c2c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_020f9d5c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (func_020f9c2c(arg0, arg1, arg2, arg3) <= 0) {
        return;
    }
    do {
        func_020f9b3c();
    } while (func_020f9c2c(arg0, arg1, arg2, arg3) > 0);
}
