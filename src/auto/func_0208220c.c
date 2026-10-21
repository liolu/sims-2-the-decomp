/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0204cbb4(M2C_UNK, M2C_UNK);
void func_0209b190(M2C_UNK, M2C_UNK);
M2C_UNK func_0209b380(M2C_UNK, M2C_UNK);
M2C_UNK func_0209b3e0(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_0213e580;

void func_0208220c(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_0209b380(data_0213e580, 0);
    if (temp_r0 <= 0) {
        return;
    }
    func_0209b190(func_0209b3e0(data_0213e580, 0, (s32) (u8) func_0204cbb4(0, (s32) (u8) (temp_r0 - 1))), arg0);
}
