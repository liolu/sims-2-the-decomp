/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204a674(s32);                         /* extern */
M2C_UNK func_0204a71c();                            /* extern */
M2C_UNK func_02111de4(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_020b998c;

s32 func_0204a4d8(s32 arg0) {
    func_0204a71c();
    func_0204a674(arg0);
    func_02111de4(arg0 + 0x48, 2, 0xC0, &func_020b998c);
    return arg0;
}
