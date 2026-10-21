/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046384(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_02046880(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
void *func_0204688c(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_0209f0e8();                            /* extern */
M2C_UNK func_020bbcf0(s32, M2C_UNK, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_02124b24;
extern void *data_0213e434;
extern void *data_0213e6cc;
extern void *data_0213e6d0;

void func_0209f3e4(s32 arg0, s8 arg1) {
    void *temp_r0;
    void *temp_r0_2;

    temp_r0       = func_0204688c(0xAC, 3, 4);
    data_0213e6d0 = temp_r0;
    func_02046384(temp_r0, 0, 0xAC);
    temp_r0_2     = func_02046880(0x1000, 3, 4);
    data_0213e6cc = temp_r0_2;
    func_02046384(temp_r0_2, 0, 0x1000);
    M2C_FIELD(data_0213e6d0, s32 *, 0x94) = arg0;
    func_020bbcf0(M2C_FIELD(data_0213e6d0, s32 *, 0x94) + 0x1A4, 1, &data_02124b24, 8, 0, 0);
    M2C_FIELD(data_0213e6d0, s8 *, 0x98)  = arg1;
    M2C_FIELD(data_0213e6d0, s32 *, 0x84) = (s32) M2C_FIELD(data_0213e434, s32 *, 0x4688);
    func_0209f0e8();
    M2C_FIELD(data_0213e6d0, s16 *, 0x88) = 0x3C;
    M2C_FIELD(data_0213e6d0, s8 *, 0x8A)  = 0;
    M2C_FIELD(data_0213e6d0, s32 *, 0x80) = 0;
    M2C_FIELD(data_0213e6d0, s16 *, 0x8C) = 0x3C;
    M2C_FIELD(data_0213e6d0, s16 *, 0x8E) = 0x70;
    M2C_FIELD(data_0213e6d0, s8 *, 0x90)  = 0;
    M2C_FIELD(data_0213e6d0, s8 *, 0x91)  = 0;
    M2C_FIELD(data_0213e6d0, s8 *, 0x92)  = 1;
}
