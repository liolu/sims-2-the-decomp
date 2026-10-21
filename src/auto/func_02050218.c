/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046384(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_0213d9b8;
extern M2C_UNK data_0213dab8;
extern s32 data_027e0000;

void func_02050218(void) {
    func_02046384((M2C_UNK *) ((s8 *) &data_0213d9b8 + (data_027e0000 << 7)), 0, 0x80);
    func_02046384((M2C_UNK *) ((s8 *) &data_0213dab8 + (data_027e0000 << 7)), 0xFF, 0x80);
}
