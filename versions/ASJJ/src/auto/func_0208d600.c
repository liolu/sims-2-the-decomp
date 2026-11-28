/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020524a8(s32);                         /* extern */
extern s32 data_0213df5c;

void func_0208d600(void *arg0) {
    if ((u32) M2C_FIELD((data_0213df5c + M2C_FIELD(arg0, s32 *, 0x20)), u8 *, 0x24) < 0xFAU) {
        func_020524a8(0x736);
        return;
    }
    func_020524a8(0x737);
}
