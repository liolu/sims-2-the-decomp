/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02045764(s32, M2C_UNK **);             /* extern */
M2C_UNK func_02046858(M2C_UNK **);                  /* extern */
extern M2C_UNK data_0212f4f0;
extern s32 data_027e0000;
extern M2C_UNK data_027e0014;

M2C_UNK **func_0200a9c4(M2C_UNK **arg0) {
    *arg0 = &data_0212f4f0;
    func_02045764((data_027e0000 * 0x34) + (s32) &data_027e0014, arg0);
    func_02046858(arg0);
    return arg0;
}
