/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020f69d0(M2C_UNK);
void func_020fbdf0(M2C_UNK);

extern s32 data_02138814;
extern s32 data_02145a84;
extern s32 data_02145a94;
extern s32 data_02145a98;
extern s32 data_02145a9c;

void func_020f905c(void) {
    if (data_02138814 != -1) {
        func_020fbdf0(data_02138814);
    }
    func_020f69d0(data_02145a94);
    data_02145a9c = 0;
    data_02145a98 = 0;
    data_02145a84 = 0;
    data_02145a94 = 0;
}
