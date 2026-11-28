/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046398(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_0213d498;
extern M2C_UNK data_0213d598;
extern s32 data_027e0000;

void func_02050264(void) {
    func_02046398((M2C_UNK *) ((s8 *) &data_0213d498 + (data_027e0000 << 7)), 0, 0x80);
    func_02046398((M2C_UNK *) ((s8 *) &data_0213d598 + (data_027e0000 << 7)), 0xFF, 0x80);
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    func_02046398((M2C_UNK *) ((s8 *) &data_0213d498 + (data_027e0000 << 7)), 0, 0x80);
    func_02046398((M2C_UNK *) ((s8 *) &data_0213d598 + (data_027e0000 << 7)), 0xFF, 0x80);
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
        return;
    }
    data_027e0000 = 0;
}
