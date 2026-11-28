/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020fc4c0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020fc964(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_02138be8;

void func_020f8ec4(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_02138be8 != -1) && ((u32) arg2 > 0x30U)) {
        func_020fc4c0(data_02138be8, arg0, arg1 + 0x07000400, arg2);
        return;
    }
    func_020fc964(arg0, arg1 + 0x07000400, arg2);
}
