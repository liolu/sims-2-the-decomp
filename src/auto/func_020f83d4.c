/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020f6a50(M2C_UNK);
void func_020fc304(M2C_UNK);

extern s32 data_02138d28;
extern s32 data_02145f5c;

void func_020f83d4(void) {
    if (data_02138d28 != -1) {
        func_020fc304(data_02138d28);
    }
    func_020f6a50(data_02145f5c);
    data_02145f5c = 0;
}
