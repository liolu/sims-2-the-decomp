/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0208b148(M2C_UNK, M2C_UNK);
void func_0208b4fc(M2C_UNK, M2C_UNK);

void func_02091060(s32 arg0, s32 arg1) {
    if (M2C_FIELD((arg0 + arg1), u8 *, 0x10) == 0xD) {
        func_0208b148(arg0, arg1);
        return;
    }
    func_0208b4fc(arg0, arg1);
}
