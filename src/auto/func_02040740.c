#include "m2c.h"

M2C_UNK func_020844c4(s32);                         /* extern */
extern void *data_0213e434;
extern void *data_0213e580;

void func_02040740(s32 arg0, u8 *arg1) {
    M2C_FIELD(data_0213e434, u8 *, 0x4650) = (u8) *arg1;
    func_020844c4(M2C_FIELD(data_0213e580, s32 *, 0xFC));
}
