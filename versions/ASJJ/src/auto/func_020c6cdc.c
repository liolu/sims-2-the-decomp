/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020c87d4(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_02135670;
extern M2C_UNK data_02135758;
extern M2C_UNK data_02135760;
extern s32 data_0213fcc4;

void func_020c6cdc(s32 arg0) {
    func_020c87d4(&data_02135758, *((M2C_UNK *) ((s8 *) &data_02135670 + (data_0213fcc4 * 4))));
    data_0213fcc4 = arg0;
    func_020c87d4(&data_02135760, *((M2C_UNK *) ((s8 *) &data_02135670 + (arg0 * 4))));
}
