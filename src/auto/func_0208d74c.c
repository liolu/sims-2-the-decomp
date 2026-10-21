/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02052258(s32);                         /* extern */
extern s32 data_0213e434;

void func_0208d74c(void *arg0) {
    if ((u32) M2C_FIELD((data_0213e434 + M2C_FIELD(arg0, s32 *, 0x20)), u8 *, 0x24) < 0xFAU) {
        func_02052258(0x736);
        return;
    }
    func_02052258(0x737);
}
