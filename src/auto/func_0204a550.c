/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204a6ec(s32);                         /* extern */
M2C_UNK func_0204a794();                            /* extern */
M2C_UNK func_02111f20(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_020b9a54;

s32 func_0204a550(s32 arg0) {
    func_0204a794();
    func_0204a6ec(arg0);
    func_02111f20(arg0 + 0x48, 2, 0xC0, &func_020b9a54);
    return arg0;
}
