/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0204cbc0(M2C_UNK, M2C_UNK);
void func_0209afa0(M2C_UNK, M2C_UNK);
M2C_UNK func_0209b190(M2C_UNK, M2C_UNK);
M2C_UNK func_0209b1f0(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_0213e0a8;

void func_020820c4(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_0209b190(data_0213e0a8, 0);
    if (temp_r0 <= 0) {
        return;
    }
    func_0209afa0(func_0209b1f0(data_0213e0a8, 0, (s32) (u8) func_0204cbc0(0, (s32) (u8) (temp_r0 - 1))), arg0);
}
