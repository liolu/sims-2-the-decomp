/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_02046808(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0204d75c(M2C_UNK);
extern u8 data_0211e5e8;
extern u8 data_0213d750;
extern u8 data_0213d790;
void func_0204df54(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_ip;
    M2C_FIELD(&data_0213d750, s32 *, 0)    = func_02046808(0x400, 3, 4);
    temp_ip                                = arg1 * 0x18;
    M2C_FIELD(&data_0213d750, s32 *, 4)    = arg1;
    M2C_FIELD(&data_0213d750, s32 *, 0xC)  = arg3;
    M2C_FIELD(&data_0213d750, s32 *, 8)    = arg2;
    M2C_FIELD(&data_0213d750, s32 *, 0x1C) = *(s32 *) (&data_0211e5e8 + temp_ip);
    M2C_FIELD(&data_0213d750, s32 *, 0x20) = arg4;
    M2C_FIELD(&data_0213d750, s32 *, 0x10) = *(s32 *) (&data_0213d790 + temp_ip) + 1;
    func_0204d75c(0);
}
