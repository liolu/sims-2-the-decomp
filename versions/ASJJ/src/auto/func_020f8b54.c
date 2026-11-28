/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020fc0e8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020fc58c(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_02138814;

void func_020f8b54(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_02138814 != -1) && ((u32) arg2 > 0x30U)) {
        func_020fc0e8(data_02138814, arg0, arg1 + 0x07000000, arg2);
        return;
    }
    func_020fc58c(arg0, arg1 + 0x07000000, arg2);
}
