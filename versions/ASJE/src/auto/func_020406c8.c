#include "m2c.h"

M2C_UNK func_0208444c(s32);                         /* extern */
extern void *data_0213e2f4;
extern void *data_0213e440;

void func_020406c8(s32 arg0, u8 *arg1) {
    M2C_FIELD(data_0213e2f4, u8 *, 0x4650) = (u8) *arg1;
    func_0208444c(M2C_FIELD(data_0213e440, s32 *, 0xFC));
}
