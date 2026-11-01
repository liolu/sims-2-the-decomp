/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK _Z14DMAMemcpyAsyncijjjPFviEi(s32, M2C_UNK, s32, s32, s32, s32);
M2C_UNK func_020fcaa0(M2C_UNK, s32);
extern s32 data_02138d28;

void func_020f8420(M2C_UNK arg0, s32 arg1, s32 arg2) {
    if (data_02138d28 != -1) {
        _Z14DMAMemcpyAsyncijjjPFviEi(data_02138d28, arg0, arg1 + 0x068A0000, arg2, 0, 0);
        return;
    }
    func_020fcaa0(arg0, arg1 + 0x068A0000);
}
