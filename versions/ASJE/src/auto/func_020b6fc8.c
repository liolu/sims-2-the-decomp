/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204630c(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_02046808(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
void *func_02046814(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_020bbc28(s32, M2C_UNK, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_021260e8;
extern void *data_0213e2f4;
extern void *data_0213f828;
extern void *data_0213f82c;

void func_020b6fc8(s32 arg0, s8 arg1) {
    void *temp_r0;
    void *temp_r0_2;

    temp_r0       = func_02046814(0x4C, 3, 4);
    data_0213f828 = temp_r0;
    func_0204630c(temp_r0, 0, 0x4C);
    temp_r0_2     = func_02046808(0x1000, 3, 4);
    data_0213f82c = temp_r0_2;
    func_0204630c(temp_r0_2, 0, 0x1000);
    M2C_FIELD(data_0213f828, s32 *, 0) = arg0;
    func_020bbc28(M2C_FIELD(data_0213f828, s32 *, 0) + 0x1A4, 1, &data_021260e8, 8, 0, 0);
    M2C_FIELD(data_0213f828, s8 *, 0x48)  = arg1;
    M2C_FIELD(data_0213f828, s32 *, 0x1C) = (s32) M2C_FIELD(data_0213e2f4, s32 *, 0x4690);
    M2C_FIELD(data_0213f828, s32 *, 0x34) = 0;
    M2C_FIELD(data_0213f828, s32 *, 0x38) = 0;
    M2C_FIELD(data_0213f828, s32 *, 0x40) = 0;
    M2C_FIELD(data_0213f828, s32 *, 0x3C) = 4;
    M2C_FIELD(data_0213f828, s32 *, 0x10) = 0xA;
    M2C_FIELD(data_0213f828, s32 *, 0xC)  = (s32) M2C_FIELD(data_0213f828, s32 *, 0x10);
    M2C_FIELD(data_0213f828, s32 *, 0x40) = 0;
    M2C_FIELD(data_0213f828, s32 *, 8)    = 0x10;
    M2C_FIELD(data_0213f828, s32 *, 0x14) = 0;
    M2C_FIELD(data_0213f828, s32 *, 0x10) = 5;
    M2C_FIELD(data_0213f828, s32 *, 0xC)  = (s32) M2C_FIELD(data_0213f828, s32 *, 0x10);
    M2C_FIELD(data_0213f828, s32 *, 0x18) = 1;
    M2C_FIELD(data_0213f828, s32 *, 0x20) = 0;
    M2C_FIELD(data_0213f828, s32 *, 0x44) = 0xA;
}
