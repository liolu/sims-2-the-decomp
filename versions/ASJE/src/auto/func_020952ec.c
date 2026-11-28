/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02082ad4(s32, u16);                    /* extern */
s32 func_02082df0(s32, u16);                        /* extern */
M2C_UNK func_0208b35c(void *, M2C_UNK);             /* extern */
extern s32 data_0213e2f4;

s32 func_020952ec(void *arg0) {
    if (func_02082df0(data_0213e2f4 + 0x2FA4, M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0xA)) == 0) {
        func_0208b35c(arg0, 6);
    }
    func_02082ad4(data_0213e2f4 + 0x2FA4, M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0xA));
    return 6;
}
