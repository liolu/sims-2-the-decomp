/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020f65c8(M2C_UNK);
void func_020fbdf0(M2C_UNK);

extern s32 data_02138814;
extern s32 data_02145a64;

void func_020f7fa4(void) {
    if (data_02138814 != -1) {
        func_020fbdf0(data_02138814);
    }
    func_020f65c8(data_02145a64);
    data_02145a64 = 0;
}
