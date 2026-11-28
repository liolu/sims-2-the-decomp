/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02018a98(void *, M2C_UNK);             /* extern */
M2C_UNK func_02018ac8();                            /* extern */

void *func_0202755c(void *arg0) {
    func_02018ac8();
    func_02018a98(arg0, 0x37);
    M2C_FIELD(arg0, s32 *, 0x10) = 0xC;
    M2C_FIELD(arg0, s32 *, 0x14) = 1;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0x32;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    return arg0;
}
