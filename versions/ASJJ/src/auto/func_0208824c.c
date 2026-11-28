/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_0204ca7c(M2C_UNK);
M2C_UNK func_020bba14(s32, M2C_UNK *);
M2C_UNK func_020bd580(M2C_UNK *, u16);
M2C_UNK func_020bd658(M2C_UNK *);
M2C_UNK func_020bd6b8(M2C_UNK *, u16);
extern M2C_UNK data_021222f0;
extern M2C_UNK data_02122304;
extern M2C_UNK data_02122318;
extern M2C_UNK data_0212232c;
extern M2C_UNK data_02122348;
void func_0208824c(void *arg0) {
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
            var_r5 = (M2C_UNK *) ((s8 *) &data_0212232c + (M2C_FIELD(arg0, u16 *, 6) * 4));
            break;
        case 1:
            if ((u32) M2C_FIELD(arg0, u16 *, 0xA) <= 8U) {
                var_r5 = (M2C_UNK *) ((s8 *) &data_02122318 + (M2C_FIELD(arg0, u16 *, 6) * 4));
            } else {
                var_r5 = (M2C_UNK *) ((s8 *) &data_02122304 + (M2C_FIELD(arg0, u16 *, 6) * 4));
            }
            break;
        case 2:
            temp_r1 = M2C_FIELD(arg0, u16 *, 6);
            if (temp_r1 != 0x44) {
                var_r5 = (M2C_UNK *) ((s8 *) &data_02122348 + (temp_r1 * 4));
            } else {
                var_r5 = (M2C_UNK *) ((s8 *) &data_02122348 + (func_0204ca7c(0x43) * 4));
            }
            break;
        case 4:
            var_r5 = (M2C_UNK *) ((s8 *) &data_021222f0 + (M2C_FIELD(arg0, u16 *, 6) * 4));
            break;
    }
    if (var_r5 == NULL) {
        return;
    }
    func_020bd6b8(sp0, M2C_FIELD(var_r5, u16 *, 0));
    func_020bd580(sp0, M2C_FIELD(var_r5, u16 *, 2));
    func_020bba14(M2C_FIELD(arg0, s32 *, 0) + 0x1A4, sp0);
    func_020bd658(sp0);
}
