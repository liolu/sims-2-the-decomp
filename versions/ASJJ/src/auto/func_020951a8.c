/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02082a04(s32, u16);                    /* extern */
s32 func_02082d20(s32, u16);                        /* extern */
M2C_UNK func_0208b2c0(void *, M2C_UNK);             /* extern */
extern s32 data_0213df5c;

s32 func_020951a8(void *arg0) {
    if (func_02082d20(data_0213df5c + 0x2FAC, M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0xA)) == 0) {
        func_0208b2c0(arg0, 6);
    }
    func_02082a04(data_0213df5c + 0x2FAC, M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0xA));
    return 6;
}
