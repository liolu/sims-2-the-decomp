/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204630c(s32 *, M2C_UNK, M2C_UNK);     /* extern */
s32 *func_02046808(M2C_UNK, M2C_UNK, M2C_UNK);      /* extern */
s32 *func_02046814(M2C_UNK, M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_020bbc28(s32, M2C_UNK, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_021249d0;
extern s32 *data_0213e584;
extern s32 *data_0213e588;

void func_0209e7a8(s32 arg0) {
    s32 *temp_r0;
    s32 *temp_r0_2;

    temp_r0       = func_02046814(4, 3, 4);
    data_0213e588 = temp_r0;
    func_0204630c(temp_r0, 0, 4);
    temp_r0_2     = func_02046808(0x1000, 3, 4);
    data_0213e584 = temp_r0_2;
    func_0204630c(temp_r0_2, 0, 0x1000);
    *data_0213e588 = arg0;
    func_020bbc28(*data_0213e588 + 0x1A4, 1, &data_021249d0, 8, 0, 0);
}
