/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c8cec(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_02135b84;
extern M2C_UNK data_02135c6c;
extern M2C_UNK data_02135c74;
extern s32 data_0214019c;

void func_020c71f4(s32 arg0) {
    func_020c8cec(&data_02135c6c, *((M2C_UNK *) ((s8 *) &data_02135b84 + (data_0214019c * 4))));
    data_0214019c = arg0;
    func_020c8cec(&data_02135c74, *((M2C_UNK *) ((s8 *) &data_02135b84 + (arg0 * 4))));
}
