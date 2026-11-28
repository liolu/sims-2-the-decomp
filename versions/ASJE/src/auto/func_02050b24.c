/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046170(M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
extern M2C_UNK data_0213db20;
extern s32 data_027e0000;

void func_02050b24(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    if (arg0 > arg2) {
        return;
    }
    func_02046170(3, arg3, *((M2C_UNK *) ((s8 *) &data_0213db20 + (data_027e0000 * 0x44))) + ((arg0 + (arg1 << 5)) * 2),
                  ((arg2 - arg0) + 1) * 2, 0x10);
}
