/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020f6da8(M2C_UNK);
void func_020fc1c8(M2C_UNK);

extern s32 data_02138be8;
extern s32 data_02145e24;
extern s32 data_02145e34;
extern s32 data_02145e38;
extern s32 data_02145e3c;

void func_020f9434(void) {
    if (data_02138be8 != -1) {
        func_020fc1c8(data_02138be8);
    }
    func_020f6da8(data_02145e34);
    data_02145e3c = 0;
    data_02145e38 = 0;
    data_02145e24 = 0;
    data_02145e34 = 0;
}
