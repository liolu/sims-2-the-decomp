/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020fc4f4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020fca70(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_02138d28;

void func_020f90c4(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_02138d28 != -1) && ((u32) arg2 > 0x1CU)) {
        func_020fc4f4(data_02138d28, arg0, arg1 + 0x05000600, arg2);
        return;
    }
    func_020fca70(arg0, arg1 + 0x05000600, arg2);
}
