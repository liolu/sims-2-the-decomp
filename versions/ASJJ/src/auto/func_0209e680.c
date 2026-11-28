/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046398(s32 *, M2C_UNK, M2C_UNK);     /* extern */
s32 *func_02046894(M2C_UNK, M2C_UNK, M2C_UNK);      /* extern */
s32 *func_020468a0(M2C_UNK, M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_020bb824(s32, M2C_UNK, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_02124638;
extern s32 *data_0213e1ec;
extern s32 *data_0213e1f0;

void func_0209e680(s32 arg0) {
    s32 *temp_r0;
    s32 *temp_r0_2;

    temp_r0       = func_020468a0(4, 3, 4);
    data_0213e1f0 = temp_r0;
    func_02046398(temp_r0, 0, 4);
    temp_r0_2     = func_02046894(0x1000, 3, 4);
    data_0213e1ec = temp_r0_2;
    func_02046398(temp_r0_2, 0, 0x1000);
    *data_0213e1f0 = arg0;
    func_020bb824(*data_0213e1f0 + 0x1A4, 1, &data_02124638, 8, 0, 0);
}
