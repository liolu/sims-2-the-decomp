/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02051338(M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 func_0205166c(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_02051a50(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_02052258(s32);                             /* extern */
extern u8 data_0213e434;

void func_ov014_0214a4b4(void *unused0, s32 arg1) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r5_2;
    u8 *p = *(u8 **) &data_0213e434;

    temp_r4 = *(s32 *) (p + 0x68);
    func_02051a50(4, 0, 0);
    temp_r5 = func_02051338(arg1, 0x4B, 0x28, func_02052258(temp_r4 + 0x7CA), 0);
    func_02051a50(3, 0, 0);
    temp_r5_2 = func_0205166c(temp_r5, 0x14, 0x5B, 0xD7, func_02052258(temp_r4 + 0x7CE), 0);
    func_0205166c(temp_r5_2, 0x14, 0x89, 0xD7, func_02052258(temp_r4 + 0x7D2), 0);
}
