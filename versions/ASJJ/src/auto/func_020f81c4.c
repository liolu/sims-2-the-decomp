/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020f6c8c(M2C_UNK);
void func_020fbdf0(M2C_UNK);

extern s32 data_02138814;
extern s32 data_02145a70;
extern s32 data_02145a74;
extern s32 data_02145a78;

void func_020f81c4(void) {
    if (data_02138814 != -1) {
        func_020fbdf0(data_02138814);
    }
    func_020f6c8c(data_02145a78);
    data_02145a78 = 0;
    data_02145a74 = 0;
    data_02145a70 = 0;
}
