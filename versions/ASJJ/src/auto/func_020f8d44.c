/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020f679c(M2C_UNK);
void func_020fbdf0(M2C_UNK);

extern s32 data_02138814;
extern s32 data_02145a90;
extern s32 data_02145a80;

void func_020f8d44(void) {
    if (data_02138814 != -1) {
        func_020fbdf0(data_02138814);
    }
    func_020f679c(data_02145a80);
    data_02145a80 = 0;
    data_02145a90 = 0;
}
