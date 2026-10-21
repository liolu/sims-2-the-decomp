/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208485c(s32, u8);                     /* extern */
M2C_UNK func_02084874(s32, u8);                     /* extern */
extern void *data_0213e580;

void func_0202899c(void *arg0) {
    func_0208485c(M2C_FIELD(data_0213e580, s32 *, 0xFC), M2C_FIELD(arg0, u8 *, 0x28));
    func_02084874(M2C_FIELD(data_0213e580, s32 *, 0xFC), M2C_FIELD(arg0, u8 *, 0x29));
    M2C_FIELD(arg0, s8 *, 0x13) = 1;
}
