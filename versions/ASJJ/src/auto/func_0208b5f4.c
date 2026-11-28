/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_02050970(s32);
M2C_UNK func_020524a8(s32);
void *func_0208aebc(u16);
void func_0208b5f4(void *arg0, s32 arg1) {
    u8 *p;
    p = (u8 *) arg0 + 0x10 + arg1;
    if (*p == 0x5E) {
        func_02050970((s32) M2C_FIELD(func_0208aebc(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0xA)), s16 *, 0xE) << 1);
    }
    func_020524a8(*p + 0x735);
}
