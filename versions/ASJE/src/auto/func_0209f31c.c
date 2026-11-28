/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204630c(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_02046808(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
void *func_02046814(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_0209f020();                            /* extern */
M2C_UNK func_020bbc28(s32, M2C_UNK, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_021249e8;
extern void *data_0213e2f4;
extern void *data_0213e58c;
extern void *data_0213e590;

void func_0209f31c(s32 arg0, s8 arg1) {
    void *temp_r0;
    void *temp_r0_2;

    temp_r0       = func_02046814(0xAC, 3, 4);
    data_0213e590 = temp_r0;
    func_0204630c(temp_r0, 0, 0xAC);
    temp_r0_2     = func_02046808(0x1000, 3, 4);
    data_0213e58c = temp_r0_2;
    func_0204630c(temp_r0_2, 0, 0x1000);
    M2C_FIELD(data_0213e590, s32 *, 0x94) = arg0;
    func_020bbc28(M2C_FIELD(data_0213e590, s32 *, 0x94) + 0x1A4, 1, &data_021249e8, 8, 0, 0);
    M2C_FIELD(data_0213e590, s8 *, 0x98)  = arg1;
    M2C_FIELD(data_0213e590, s32 *, 0x84) = (s32) M2C_FIELD(data_0213e2f4, s32 *, 0x4688);
    func_0209f020();
    M2C_FIELD(data_0213e590, s16 *, 0x88) = 0x3C;
    M2C_FIELD(data_0213e590, s8 *, 0x8A)  = 0;
    M2C_FIELD(data_0213e590, s32 *, 0x80) = 0;
    M2C_FIELD(data_0213e590, s16 *, 0x8C) = 0x3C;
    M2C_FIELD(data_0213e590, s16 *, 0x8E) = 0x70;
    M2C_FIELD(data_0213e590, s8 *, 0x90)  = 0;
    M2C_FIELD(data_0213e590, s8 *, 0x91)  = 0;
    M2C_FIELD(data_0213e590, s8 *, 0x92)  = 1;
}
