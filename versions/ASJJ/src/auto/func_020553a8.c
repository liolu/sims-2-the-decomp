/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u32 func_0203c574();                                /* extern */
M2C_UNK func_0204811c(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern void *data_02139a84;
extern u8 *data_0213d43c;

u32 func_020553a8(void) {
    u32 temp_r0;

    temp_r0 = (u32) (*data_0213d43c << 0x1B) >> 0x1F;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    if (M2C_FIELD(data_02139a84, s32 *, 0xE10) != 0x32) {
        return (u32) data_02139a84;
    }
    func_0204811c(data_02139a84, 0x18, 0, 0, 0, 0);
    func_0204811c(data_02139a84, 0, 1, 0, 0, 0);
    return func_0203c574();
}
