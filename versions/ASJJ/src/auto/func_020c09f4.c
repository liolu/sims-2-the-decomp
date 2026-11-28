/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02016700(void *, M2C_UNK *);           /* extern */
M2C_UNK func_020d54a8(M2C_UNK);                     /* extern */
extern M2C_UNK data_021273c8;

void func_020c09f4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x94) == 0) {
        func_020d54a8(0x160);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) ((M2C_FIELD(arg0, s32 *, 0x14) & ~0xF000) | 0xE000);
    func_02016700(arg0, &data_021273c8);
}
