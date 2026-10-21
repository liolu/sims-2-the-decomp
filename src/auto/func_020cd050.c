/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020462cc(void *, u32, s32);            /* extern */
M2C_UNK func_02048108(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern s32 data_02139fa4;
extern void *data_0213e434;

void func_020cd050(void *arg0) {
    s32 var_r4;
    u32 temp_r1;
    u32 temp_r2;
    void *temp_r2_2;
    void *temp_r3;

    temp_r3 = M2C_FIELD(data_0213e434, void **, 0x479C);
    if (M2C_FIELD(temp_r3, s32 *, 0x228) == 0xB) {
        func_02048108(data_02139fa4, 0x2E, 0, 0, 0, 0);
        func_02048108(data_02139fa4, 0x30, 1, 8, 0, 0);
        return;
    }
    temp_r2 = M2C_FIELD(arg0, u32 *, 0xB8);
    temp_r1 = M2C_FIELD(arg0, u32 *, 0xB4);
    if (temp_r1 >= temp_r2) {
        M2C_FIELD(temp_r3, s32 *, 0x428) = 0xB;
        return;
    }
    if ((u32) (temp_r1 + 0x10) <= temp_r2) {
        var_r4 = 0x10;
    } else {
        var_r4 = temp_r2 - temp_r1;
        if (var_r4 < 0) {
            var_r4 = 0;
        }
    }
    if (var_r4 > 0) {
        func_020462cc(temp_r3 + 0x453, temp_r1, var_r4);
    }
    temp_r2_2                                                         = M2C_FIELD(data_0213e434, void **, 0x479C);
    M2C_FIELD(temp_r2_2, u8 *, 0x451)                                 = (u8) (M2C_FIELD(temp_r2_2, u8 *, 0x451) + 1);
    M2C_FIELD(M2C_FIELD(data_0213e434, void **, 0x479C), s8 *, 0x452) = (s8) var_r4;
    M2C_FIELD(arg0, u32 *, 0xB4)                                      = (u32) (M2C_FIELD(arg0, u32 *, 0xB4) + var_r4);
}
