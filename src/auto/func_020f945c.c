/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020f6df0(M2C_UNK);
void func_020fc304(M2C_UNK);

extern s32 data_02138d28;
extern s32 data_02145f68;
extern s32 data_02145f6c;

void func_020f945c(void) {
    if (data_02138d28 != -1) {
        func_020fc304(data_02138d28);
    }
    func_020f6df0(data_02145f6c);
    data_02145f6c = 0;
    data_02145f68 = 0;
}
