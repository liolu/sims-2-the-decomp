/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0204cb3c(M2C_UNK, M2C_UNK);
void func_0209b0c8(M2C_UNK, M2C_UNK);
M2C_UNK func_0209b2b8(M2C_UNK, M2C_UNK);
M2C_UNK func_0209b318(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_0213e440;

void func_02082194(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_0209b2b8(data_0213e440, 0);
    if (temp_r0 <= 0) {
        return;
    }
    func_0209b0c8(func_0209b318(data_0213e440, 0, (s32) (u8) func_0204cb3c(0, (s32) (u8) (temp_r0 - 1))), arg0);
}
