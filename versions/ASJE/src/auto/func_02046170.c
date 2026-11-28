/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020fad58(M2C_UNK, M2C_UNK);
void func_020fc430(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020fc53c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_02046170(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_020fad58(arg2, arg3);
    if (arg4 == 0x20) {
        func_020fc53c(arg0, arg2, arg1, arg3);
        return;
    }
    func_020fc430(arg0, arg2, (s32) (u16) arg1, arg3);
}
