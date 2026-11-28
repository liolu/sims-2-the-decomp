/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020f6b74(M2C_UNK);
void func_020fc1c8(M2C_UNK);

extern s32 data_02138be8;
extern s32 data_02145e30;
extern s32 data_02145e20;

void func_020f911c(void) {
    if (data_02138be8 != -1) {
        func_020fc1c8(data_02138be8);
    }
    func_020f6b74(data_02145e20);
    data_02145e20 = 0;
    data_02145e30 = 0;
}
