/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_01ffabc8();       /* extern */
s32 func_01ffaf28();           /* extern */
M2C_UNK func_02018664();                      /* extern */
M2C_UNK func_02018ac4();                      /* extern */
M2C_UNK func_02046830();                            /* extern */
extern M2C_UNK data_0212fe90;

void *func_0201c960(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212fe90;
    if (M2C_FIELD(arg0, s32 *, 0x60) != 0) {
        func_02046830();
        M2C_FIELD(arg0, s32 *, 0x60) = 0;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x4B) == 0) && (func_01ffaf28(M2C_FIELD(arg0, void **, 0x38) + 0xE0, 0x46, 0) != 0)) {
        func_01ffabc8(M2C_FIELD(arg0, void **, 0x38) + 0xE0, 0x46, 0);
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), s8 *, 0x210) = 0x1F;
    func_02018ac4(arg0 + 0x18);
    func_02018664(arg0);
    return arg0;
}
