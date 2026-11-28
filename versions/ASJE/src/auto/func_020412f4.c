/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020b9dc4(M2C_UNK *, u16, u16, u8, s32); /* extern */
extern M2C_UNK data_02139e74;

void func_020412f4(s32 arg0, void *arg1) {
    func_020b9dc4(&data_02139e74, (u16) (M2C_FIELD(arg1, u16 *, 0) * 0x3C), M2C_FIELD(arg1, u16 *, 2),
                  M2C_FIELD(arg1, u8 *, 4), (s32) M2C_FIELD(arg1, u8 *, 5));
}
