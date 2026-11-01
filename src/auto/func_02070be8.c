/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_02016708(void *, void *);
extern M2C_UNK data_0211f97c;
void func_02070be8(void *arg0, u8 arg1) {
    s32 temp_lr;
    void *temp_ip;
    if (arg1 == M2C_FIELD(arg0, u8 *, 0xB4)) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0xB4)     = arg1;
    temp_lr                         = arg1 + 1;
    temp_ip                         = M2C_FIELD(arg0, void **, 0xB0);
    M2C_FIELD(temp_ip, s32 *, 0x14) = (s32) ((M2C_FIELD(temp_ip, s32 *, 0x14) & ~0xF000) | ((temp_lr & 0xF) << 0xC));
    func_02016708(M2C_FIELD(arg0, void **, 0xB0), (M2C_UNK *) ((s8 *) &data_0211f97c + (temp_lr * 8)));
}
