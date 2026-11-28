/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02084734(s32, u8);                     /* extern */
M2C_UNK func_0208474c(s32, u8);                     /* extern */
extern void *data_0213e0a8;

void func_020289d4(void *arg0) {
    func_02084734(M2C_FIELD(data_0213e0a8, s32 *, 0xFC), M2C_FIELD(arg0, u8 *, 0x28));
    func_0208474c(M2C_FIELD(data_0213e0a8, s32 *, 0xFC), M2C_FIELD(arg0, u8 *, 0x29));
    M2C_FIELD(arg0, s8 *, 0x13) = 1;
}
