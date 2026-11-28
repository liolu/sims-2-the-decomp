/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020456d8(s32, M2C_UNK **);             /* extern */
extern M2C_UNK data_0212f8b0;
extern s32 data_027e0000;
extern M2C_UNK data_027e0014;

M2C_UNK **func_0200a980(M2C_UNK **arg0) {
    *arg0 = &data_0212f8b0;
    func_020456d8((data_027e0000 * 0x34) + (s32) &data_027e0014, arg0);
    return arg0;
}
