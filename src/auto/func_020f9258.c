/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020f6cb0(M2C_UNK);
void func_020fc304(M2C_UNK);

extern s32 data_02138d28;
extern s32 data_02145f60;
extern s32 data_02145f70;

void func_020f9258(void) {
    if (data_02138d28 != -1) {
        func_020fc304(data_02138d28);
    }
    func_020f6cb0(data_02145f60);
    data_02145f60 = 0;
    data_02145f70 = 0;
}
