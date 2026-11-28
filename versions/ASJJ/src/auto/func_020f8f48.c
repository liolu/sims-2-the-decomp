/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020f68dc(M2C_UNK);
void func_020fbdf0(M2C_UNK);

extern s32 data_02138814;
extern s32 data_02145a88;
extern s32 data_02145a8c;

void func_020f8f48(void) {
    if (data_02138814 != -1) {
        func_020fbdf0(data_02138814);
    }
    func_020f68dc(data_02145a8c);
    data_02145a8c = 0;
    data_02145a88 = 0;
}
