/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020f6914(M2C_UNK);
void func_020fc1c8(M2C_UNK);

extern s32 data_02138be8;
extern s32 data_02145e1c;

void func_020f8298(void) {
    if (data_02138be8 != -1) {
        func_020fc1c8(data_02138be8);
    }
    func_020f6914(data_02145e1c);
    data_02145e1c = 0;
}
