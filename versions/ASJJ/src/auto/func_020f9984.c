/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020f9764(void);
M2C_UNK func_020f9854(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_020f9984(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (func_020f9854(arg0, arg1, arg2, arg3) <= 0) {
        return;
    }
    do {
        func_020f9764();
    } while (func_020f9854(arg0, arg1, arg2, arg3) > 0);
}
