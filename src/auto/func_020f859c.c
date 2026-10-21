/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020f70e8(M2C_UNK);
void func_020fc304(M2C_UNK);

extern s32 data_02138d28;
extern s32 data_02145f48;
extern s32 data_02145f4c;

void func_020f859c(void) {
    if (data_02138d28 != -1) {
        func_020fc304(data_02138d28);
    }
    func_020f70e8(data_02145f4c);
    data_02145f4c = 0;
    data_02145f48 = 0;
}
