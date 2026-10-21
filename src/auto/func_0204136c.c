/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b9e8c(M2C_UNK *, u16, u16, u8, s32); /* extern */
extern M2C_UNK data_02139fb4;

void func_0204136c(s32 arg0, void *arg1) {
    func_020b9e8c(&data_02139fb4, (u16) (M2C_FIELD(arg1, u16 *, 0) * 0x3C), M2C_FIELD(arg1, u16 *, 2),
                  M2C_FIELD(arg1, u8 *, 4), (s32) M2C_FIELD(arg1, u8 *, 5));
}
