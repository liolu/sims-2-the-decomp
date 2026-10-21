/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020ede08(M2C_UNK);
void func_020ede74(M2C_UNK, M2C_UNK);
void func_020eebc0(void);
void func_020f0690(M2C_UNK);
void func_020f078c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020f0e9c(M2C_UNK);

void func_020bd660(s32 arg0) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r2;

    if (M2C_FIELD(arg0, u16 *, 0x66) & 1) {
        temp_r0                         = (void *) func_020f0e9c(M2C_FIELD(arg0, s32 *, 0x58));
        temp_r2                         = M2C_FIELD(arg0, void **, 0x60);
        M2C_FIELD(temp_r0, s32 *, 8)    = (s32) M2C_FIELD(temp_r2, s32 *, 4);
        M2C_FIELD(temp_r0, s32 *, 0x18) = (s32) M2C_FIELD(temp_r2, s32 *, 8);
        M2C_FIELD(temp_r0, s32 *, 0x2C) = (s32) M2C_FIELD(temp_r2, s32 *, 0xC);
        func_020ede08(M2C_FIELD(arg0, s32 *, 0x5C));
        func_020ede74(M2C_FIELD(arg0, s32 *, 0x5C), func_020f0e9c(M2C_FIELD(arg0, s32 *, 0x58)));
    }
    func_020eebc0();
    if (M2C_FIELD(arg0, u8 *, 1) == 0) {
        func_020f0690(arg0 + 4);
        return;
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x5C);
    func_020f078c(temp_r4 + M2C_FIELD((temp_r4 + M2C_FIELD(temp_r4, u16 *, 0xE)), s32 *, 0xC), 0, 0, 1);
}
