/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02082b4c(s32, u16);                    /* extern */
s32 func_02082e68(s32, u16);                        /* extern */
M2C_UNK func_0208b3d4(void *, M2C_UNK);             /* extern */
extern s32 data_0213e434;

s32 func_020953b4(void *arg0) {
    if (func_02082e68(data_0213e434 + 0x2FA4, M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0xA)) == 0) {
        func_0208b3d4(arg0, 6);
    }
    func_02082b4c(data_0213e434 + 0x2FA4, M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0xA));
    return 6;
}
