/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020f71a0(M2C_UNK);
void func_020fc304(M2C_UNK);

extern s32 data_02138d28;
extern s32 data_02145f50;
extern s32 data_02145f54;
extern s32 data_02145f58;

void func_020f86d8(void) {
    if (data_02138d28 != -1) {
        func_020fc304(data_02138d28);
    }
    func_020f71a0(data_02145f58);
    data_02145f58 = 0;
    data_02145f54 = 0;
    data_02145f50 = 0;
}
