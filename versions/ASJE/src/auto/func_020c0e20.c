/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02016708(void *, M2C_UNK *);           /* extern */
M2C_UNK func_020d5880(M2C_UNK);                     /* extern */
extern M2C_UNK data_02127760;

void func_020c0e20(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x94) == 0) {
        func_020d5880(0x160);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) ((M2C_FIELD(arg0, s32 *, 0x14) & ~0xF000) | 0xE000);
    func_02016708(arg0, &data_02127760);
}
