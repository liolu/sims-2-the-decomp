/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d59bc(M2C_UNK);                     /* extern */
extern void *data_0213e5a0;

void func_0209e588(void *arg0) {
    u16 temp_r4;
    void *temp_r1;
    void *temp_r2;
    void *temp_r5;

    temp_r5                      = M2C_FIELD(arg0, void **, 0x90);
    temp_r4                      = M2C_FIELD(arg0, u16 *, 0xA);
    temp_r2                      = M2C_FIELD((temp_r5 + (M2C_FIELD(temp_r5, s32 *, 0x38) * 4)), void **, 0xCA8);
    M2C_FIELD(temp_r2, s32 *, 4) = (s32) (M2C_FIELD(temp_r2, s32 *, 4) & ~1);
    temp_r1                      = M2C_FIELD((temp_r5 + (temp_r4 * 4)), void **, 0xCA8);
    M2C_FIELD(temp_r1, s32 *, 4) = (s32) (M2C_FIELD(temp_r1, s32 *, 4) | 1);
    if (M2C_FIELD(temp_r5, s32 *, 0x38) != temp_r4) {
        func_020d59bc(0xBD);
    }
    M2C_FIELD(temp_r5, s32 *, 0x38)        = (s32) temp_r4;
    M2C_FIELD(data_0213e5a0, s32 *, 0x600) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x38) + 1);
}
