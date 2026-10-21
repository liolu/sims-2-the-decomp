/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020461e8(M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
extern M2C_UNK data_0213dc60;
extern s32 data_027e0000;

void func_02050b30(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 > arg2) {
        return;
    }
    func_020461e8(3, 0, *((M2C_UNK *) ((s8 *) &data_0213dc60 + (data_027e0000 * 0x44))) + ((arg0 + (arg1 << 5)) * 2),
                  ((arg2 - arg0) + 1) * 2, 0x10);
}
