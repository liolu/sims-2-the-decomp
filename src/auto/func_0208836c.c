/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_0204ca70(M2C_UNK);
M2C_UNK func_020bbee0(s32, M2C_UNK *);
M2C_UNK func_020bda4c(M2C_UNK *, u16);
M2C_UNK func_020bdb24(M2C_UNK *);
M2C_UNK func_020bdb84(M2C_UNK *, u16);
extern M2C_UNK data_021227c4;
extern M2C_UNK data_021227d8;
extern M2C_UNK data_021227ec;
extern M2C_UNK data_02122800;
extern M2C_UNK data_0212281c;
void func_0208836c(void *arg0) {
    M2C_UNK sp0[8];
    u16 temp_r1;
    u32 temp_r0;
    void *var_r5;
    var_r5  = NULL;
    temp_r0 = (u32) (M2C_FIELD(arg0, u16 *, 4) << 0x1B) >> 0x1C;
    switch (temp_r0) {
        default:
            break;
        case 0:
            var_r5 = (M2C_UNK *) ((s8 *) &data_02122800 + (M2C_FIELD(arg0, u16 *, 6) * 4));
            break;
        case 1:
            if ((u32) M2C_FIELD(arg0, u16 *, 0xA) <= 8U) {
                var_r5 = (M2C_UNK *) ((s8 *) &data_021227ec + (M2C_FIELD(arg0, u16 *, 6) * 4));
            } else {
                var_r5 = (M2C_UNK *) ((s8 *) &data_021227d8 + (M2C_FIELD(arg0, u16 *, 6) * 4));
            }
            break;
        case 2:
            temp_r1 = M2C_FIELD(arg0, u16 *, 6);
            if (temp_r1 != 0x44) {
                var_r5 = (M2C_UNK *) ((s8 *) &data_0212281c + (temp_r1 * 4));
            } else {
                var_r5 = (M2C_UNK *) ((s8 *) &data_0212281c + (func_0204ca70(0x43) * 4));
            }
            break;
        case 4:
            var_r5 = (M2C_UNK *) ((s8 *) &data_021227c4 + (M2C_FIELD(arg0, u16 *, 6) * 4));
            break;
    }
    if (var_r5 == NULL) {
        return;
    }
    func_020bdb84(sp0, M2C_FIELD(var_r5, u16 *, 0));
    func_020bda4c(sp0, M2C_FIELD(var_r5, u16 *, 2));
    func_020bbee0(M2C_FIELD(arg0, s32 *, 0) + 0x1A4, sp0);
    func_020bdb24(sp0);
}
