/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020c8c24(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_02135a44;
extern M2C_UNK data_02135b2c;
extern M2C_UNK data_02135b34;
extern s32 data_0214005c;

void func_020c712c(s32 arg0) {
    func_020c8c24(&data_02135b2c, *((M2C_UNK *) ((s8 *) &data_02135a44 + (data_0214005c * 4))));
    data_0214005c = arg0;
    func_020c8c24(&data_02135b34, *((M2C_UNK *) ((s8 *) &data_02135a44 + (arg0 * 4))));
}
