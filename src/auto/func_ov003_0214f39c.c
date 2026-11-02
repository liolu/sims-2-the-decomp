/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046844(void *);                      /* extern */
M2C_UNK func_02046a58(void *);                      /* extern */
M2C_UNK func_ov003_0214ea68(void *, u8);            /* extern */
extern M2C_UNK data_ov003_021509cc;
extern M2C_UNK data_ov003_02150bf4;

void *func_ov003_0214f39c(void *arg0) {
    u8 temp_r1_2;
    void *temp_ip;
    void *temp_r1;
    void *temp_r2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov003_02150bf4;
    temp_r1                        = M2C_FIELD(arg0, void **, 4);
    if ((M2C_FIELD(temp_r1, u8 *, 0x40) != 0xFE) && (M2C_FIELD(temp_r1, u16 *, 0x74) != 7)) {
        if (M2C_FIELD(arg0, u8 *, 0x21) == 1) {
            M2C_FIELD(arg0, u8 *, 0x21) = 0U;
        }
        temp_r2   = M2C_FIELD(arg0, void **, 4);
        temp_r1_2 = M2C_FIELD(arg0, u8 *, 0x21);
        if (temp_r1_2 != M2C_FIELD(temp_r2, u8 *, 0x40)) {
            M2C_FIELD(temp_r2, u8 *, 0x40) = temp_r1_2;
            M2C_FIELD(arg0, u16 *, 0x14)   = (u16) M2C_FIELD(arg0, u8 *, 0x21);
            temp_ip                        = M2C_FIELD(arg0, void **, 4);
            func_ov003_0214ea68(
                arg0, M2C_FIELD(((M2C_FIELD(temp_ip, u16 *, 0x76) * 0xC) + (s32) temp_ip + (M2C_FIELD(arg0, u16 *, 0x14) * 2)),
                                u8 *, 0x29));
        }
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov003_021509cc;
    func_02046a58(arg0 + 8);
    func_02046844(arg0);
    return arg0;
}
