/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02046808(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_020b89e8(void *, M2C_UNK);             /* extern */
s32 func_02111fd4(s32, u8, M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */
extern M2C_UNK func_020b8bd4;

void func_020b8b50(void *arg0) {
    u8 temp_r5;
    void *temp_ip;

    temp_ip = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x5C);
    temp_r5 = M2C_FIELD((temp_ip + M2C_FIELD((temp_ip + M2C_FIELD(temp_ip, u16 *, 0xE)), s32 *, 0xC)), u8 *, 0x17);
    M2C_FIELD(arg0, s32 *, 4) = func_02111fd4(func_02046808((temp_r5 * 0x14) + 8, 3, 4), temp_r5, 0x14, 8, &func_020b8bd4, 0);
    M2C_FIELD(arg0, u8 *, 9)  = temp_r5;
    func_020b89e8(arg0, 1);
}
