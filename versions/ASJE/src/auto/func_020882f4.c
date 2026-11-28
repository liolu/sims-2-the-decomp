/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_0204c9f8(M2C_UNK);
M2C_UNK func_020bbe18(s32, M2C_UNK *);
M2C_UNK func_020bd984(M2C_UNK *, u16);
M2C_UNK func_020bda5c(M2C_UNK *);
M2C_UNK func_020bdabc(M2C_UNK *, u16);
extern M2C_UNK data_02122688;
extern M2C_UNK data_0212269c;
extern M2C_UNK data_021226b0;
extern M2C_UNK data_021226c4;
extern M2C_UNK data_021226e0;
void func_020882f4(void *arg0) {
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
            var_r5 = (M2C_UNK *) ((s8 *) &data_021226c4 + (M2C_FIELD(arg0, u16 *, 6) * 4));
            break;
        case 1:
            if ((u32) M2C_FIELD(arg0, u16 *, 0xA) <= 8U) {
                var_r5 = (M2C_UNK *) ((s8 *) &data_021226b0 + (M2C_FIELD(arg0, u16 *, 6) * 4));
            } else {
                var_r5 = (M2C_UNK *) ((s8 *) &data_0212269c + (M2C_FIELD(arg0, u16 *, 6) * 4));
            }
            break;
        case 2:
            temp_r1 = M2C_FIELD(arg0, u16 *, 6);
            if (temp_r1 != 0x44) {
                var_r5 = (M2C_UNK *) ((s8 *) &data_021226e0 + (temp_r1 * 4));
            } else {
                var_r5 = (M2C_UNK *) ((s8 *) &data_021226e0 + (func_0204c9f8(0x43) * 4));
            }
            break;
        case 4:
            var_r5 = (M2C_UNK *) ((s8 *) &data_02122688 + (M2C_FIELD(arg0, u16 *, 6) * 4));
            break;
    }
    if (var_r5 == NULL) {
        return;
    }
    func_020bdabc(sp0, M2C_FIELD(var_r5, u16 *, 0));
    func_020bd984(sp0, M2C_FIELD(var_r5, u16 *, 2));
    func_020bbe18(M2C_FIELD(arg0, s32 *, 0) + 0x1A4, sp0);
    func_020bda5c(sp0);
}
