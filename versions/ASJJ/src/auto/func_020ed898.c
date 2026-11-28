/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020ed708();                            /* extern */
extern M2C_UNK *data_0213855c;
extern M2C_UNK *data_02138560;
extern M2C_UNK data_02142d1c;
extern M2C_UNK func_020ed75c;
extern M2C_UNK func_020ed7b4;

void func_020ed898(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(&data_02142d1c, s32 *, 8)    = arg0;
    M2C_FIELD(&data_02142d1c, s32 *, 0xC)  = arg1;
    M2C_FIELD(&data_02142d1c, s32 *, 0x10) = arg2;
    func_020ed708();
    if (arg3 == 0) {
        return;
    }
    data_0213855c = &func_020ed7b4;
    data_02138560 = &func_020ed75c;
}
