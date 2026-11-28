/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020847e4(s32, u8);                     /* extern */
M2C_UNK func_020847fc(s32, u8);                     /* extern */
extern void *data_0213e440;

void func_02028924(void *arg0) {
    func_020847e4(M2C_FIELD(data_0213e440, s32 *, 0xFC), M2C_FIELD(arg0, u8 *, 0x28));
    func_020847fc(M2C_FIELD(data_0213e440, s32 *, 0xFC), M2C_FIELD(arg0, u8 *, 0x29));
    M2C_FIELD(arg0, s8 *, 0x13) = 1;
}
