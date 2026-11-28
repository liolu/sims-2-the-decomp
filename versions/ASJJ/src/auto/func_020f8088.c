/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020f6bd4(M2C_UNK);
void func_020fbdf0(M2C_UNK);

extern s32 data_02138814;
extern s32 data_02145a68;
extern s32 data_02145a6c;

void func_020f8088(void) {
    if (data_02138814 != -1) {
        func_020fbdf0(data_02138814);
    }
    func_020f6bd4(data_02145a6c);
    data_02145a6c = 0;
    data_02145a68 = 0;
}
