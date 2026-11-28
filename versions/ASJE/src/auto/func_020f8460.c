/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020f6fac(M2C_UNK);
void func_020fc1c8(M2C_UNK);

extern s32 data_02138be8;
extern s32 data_02145e08;
extern s32 data_02145e0c;

void func_020f8460(void) {
    if (data_02138be8 != -1) {
        func_020fc1c8(data_02138be8);
    }
    func_020f6fac(data_02145e0c);
    data_02145e0c = 0;
    data_02145e08 = 0;
}
