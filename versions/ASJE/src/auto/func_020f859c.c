/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020f7064(M2C_UNK);
void func_020fc1c8(M2C_UNK);

extern s32 data_02138be8;
extern s32 data_02145e10;
extern s32 data_02145e14;
extern s32 data_02145e18;

void func_020f859c(void) {
    if (data_02138be8 != -1) {
        func_020fc1c8(data_02138be8);
    }
    func_020f7064(data_02145e18);
    data_02145e18 = 0;
    data_02145e14 = 0;
    data_02145e10 = 0;
}
