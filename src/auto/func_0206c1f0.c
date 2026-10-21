/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02066728(s32);                             /* extern */
M2C_UNK func_0206ca24(s32);                         /* extern */
extern s32 data_0213e434;

void func_0206c1f0(void *arg0) {
    if (func_02066728(M2C_FIELD((data_0213e434 + (M2C_FIELD(arg0, u16 *, 0xA) * 4)), s32 *, 0x4670)) == 0) {
        return;
    }
    func_0206ca24(M2C_FIELD(arg0, s32 *, 0x90));
}
