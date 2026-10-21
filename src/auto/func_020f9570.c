/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020f6ee4(M2C_UNK);
void func_020fc304(M2C_UNK);

extern s32 data_02138d28;
extern s32 data_02145f64;
extern s32 data_02145f74;
extern s32 data_02145f78;
extern s32 data_02145f7c;

void func_020f9570(void) {
    if (data_02138d28 != -1) {
        func_020fc304(data_02138d28);
    }
    func_020f6ee4(data_02145f74);
    data_02145f7c = 0;
    data_02145f78 = 0;
    data_02145f64 = 0;
    data_02145f74 = 0;
}
