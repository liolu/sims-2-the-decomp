/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020521e0(s32);                         /* extern */
extern s32 data_0213e2f4;

void func_0208d6d8(void *arg0) {
    if ((u32) M2C_FIELD((data_0213e2f4 + M2C_FIELD(arg0, s32 *, 0x20)), u8 *, 0x24) < 0xFAU) {
        func_020521e0(0x736);
        return;
    }
    func_020521e0(0x737);
}
