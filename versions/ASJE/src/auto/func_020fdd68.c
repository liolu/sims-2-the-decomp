/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020fad20(M2C_UNK, M2C_UNK);

extern s32 data_02147d80;

s32 func_020fdd68(void) {
    func_020fad20(data_02147d80, 0x280);
    return *(M2C_UNK *) data_02147d80;
}
