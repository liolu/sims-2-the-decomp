/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204630c(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0209e64c(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020bbd20(s32, M2C_UNK, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK data_021249d8;
extern s32 data_0213e584;
extern s32 *data_0213e588;

void func_0209e734(void) {
    func_0204630c(data_0213e584, 0, 0x1000);
    func_0209e64c(0x19, 0x32, &data_021249d8, 1);
    func_020bbd20(*data_0213e588 + 0x1A4, 1, data_0213e584, 0x1000, 0);
}
