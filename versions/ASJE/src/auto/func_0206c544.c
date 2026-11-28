/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02016708(void *, void *);              /* extern */
M2C_UNK func_02050ab8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020512c0(M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020519d8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020521e0(s32);                             /* extern */
M2C_UNK func_0206c3cc();                            /* extern */
extern M2C_UNK data_0211f7b4;

void func_0206c544(void *arg0) {
    void *temp_r1;
    void *temp_r4;
    void *temp_r4_2;

    func_0206c3cc();
    M2C_FIELD(arg0, s32 *, 0x74) = -1;
    func_02050ab8(4, 1, 0x1B);
    func_02050ab8(4, 2, 0x1B);
    func_02050ab8(4, 4, 0x1B);
    func_02050ab8(4, 5, 0x1B);
    func_02050ab8(4, 6, 0x1F);
    func_02050ab8(4, 7, 0x1F);
    func_02050ab8(4, 8, 0x1F);
    func_020519d8(3, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x78) = func_020512c0(1, 0x80, 0xB, func_020521e0(0x72C), 1);
    func_020519d8(0, 0, -1);
    temp_r1                      = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(temp_r1, s32 *, 4) = (s32) (M2C_FIELD(temp_r1, s32 *, 4) & ~1);
    temp_r4                      = M2C_FIELD(arg0, void **, 0x38);
    if (M2C_FIELD(temp_r4, u8 *, 0x94) != 0) {
        M2C_FIELD(temp_r4, s32 *, 0x14) = (s32) ((M2C_FIELD(temp_r4, s32 *, 0x14) & ~0xF000) | 0x1000);
        func_02016708(temp_r4, (u8 *) &data_0211f7b4 + (((M2C_FIELD(temp_r4, u16 *, 0xA) * 2) + 2) * 8));
        M2C_FIELD(temp_r4, u8 *, 0x94) = 0U;
    }
    temp_r4_2 = M2C_FIELD(arg0, void **, 0x3C);
    if (M2C_FIELD(temp_r4_2, u8 *, 0x94) == 0) {
        return;
    }
    M2C_FIELD(temp_r4_2, s32 *, 0x14) = (s32) ((M2C_FIELD(temp_r4_2, s32 *, 0x14) & ~0xF000) | 0x1000);
    func_02016708(temp_r4_2, (u8 *) &data_0211f7b4 + (((M2C_FIELD(temp_r4_2, u16 *, 0xA) * 2) + 2) * 8));
    M2C_FIELD(temp_r4_2, u8 *, 0x94) = 0U;
}
