#include "m2c.h"

M2C_UNK func_02016700(void *, M2C_UNK *);           /* extern */
extern M2C_UNK data_0211e368;

void func_020572f4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) ((M2C_FIELD(arg0, s32 *, 0x14) & ~0xF000) | 0x4000);
    func_02016700(arg0, &data_0211e368);
}
