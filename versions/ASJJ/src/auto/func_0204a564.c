/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204a700(s32);                         /* extern */
M2C_UNK func_0204a7a8();                            /* extern */
M2C_UNK func_02111a0c(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_020b9588;

s32 func_0204a564(s32 arg0) {
    func_0204a7a8();
    func_0204a700(arg0);
    func_02111a0c(arg0 + 0x48, 2, 0xC0, &func_020b9588);
    return arg0;
}
