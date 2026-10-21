/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046384(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_02046880(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
void *func_0204688c(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_020bbcf0(s32, M2C_UNK, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_02126224;
extern void *data_0213e434;
extern void *data_0213f968;
extern void *data_0213f96c;

void func_020b7090(s32 arg0, s8 arg1) {
    void *temp_r0;
    void *temp_r0_2;

    temp_r0       = func_0204688c(0x4C, 3, 4);
    data_0213f968 = temp_r0;
    func_02046384(temp_r0, 0, 0x4C);
    temp_r0_2     = func_02046880(0x1000, 3, 4);
    data_0213f96c = temp_r0_2;
    func_02046384(temp_r0_2, 0, 0x1000);
    M2C_FIELD(data_0213f968, s32 *, 0) = arg0;
    func_020bbcf0(M2C_FIELD(data_0213f968, s32 *, 0) + 0x1A4, 1, &data_02126224, 8, 0, 0);
    M2C_FIELD(data_0213f968, s8 *, 0x48)  = arg1;
    M2C_FIELD(data_0213f968, s32 *, 0x1C) = (s32) M2C_FIELD(data_0213e434, s32 *, 0x4690);
    M2C_FIELD(data_0213f968, s32 *, 0x34) = 0;
    M2C_FIELD(data_0213f968, s32 *, 0x38) = 0;
    M2C_FIELD(data_0213f968, s32 *, 0x40) = 0;
    M2C_FIELD(data_0213f968, s32 *, 0x3C) = 4;
    M2C_FIELD(data_0213f968, s32 *, 0x10) = 0xA;
    M2C_FIELD(data_0213f968, s32 *, 0xC)  = (s32) M2C_FIELD(data_0213f968, s32 *, 0x10);
    M2C_FIELD(data_0213f968, s32 *, 0x40) = 0;
    M2C_FIELD(data_0213f968, s32 *, 8)    = 0x10;
    M2C_FIELD(data_0213f968, s32 *, 0x14) = 0;
    M2C_FIELD(data_0213f968, s32 *, 0x10) = 5;
    M2C_FIELD(data_0213f968, s32 *, 0xC)  = (s32) M2C_FIELD(data_0213f968, s32 *, 0x10);
    M2C_FIELD(data_0213f968, s32 *, 0x18) = 1;
    M2C_FIELD(data_0213f968, s32 *, 0x20) = 0;
    M2C_FIELD(data_0213f968, s32 *, 0x44) = 0xA;
}
