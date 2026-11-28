/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020666b0(s32);                             /* extern */
M2C_UNK func_0206c9ac(s32);                         /* extern */
extern s32 data_0213e2f4;

void func_0206c178(void *arg0) {
    if (func_020666b0(M2C_FIELD((data_0213e2f4 + (M2C_FIELD(arg0, u16 *, 0xA) * 4)), s32 *, 0x4670)) == 0) {
        return;
    }
    func_0206c9ac(M2C_FIELD(arg0, s32 *, 0x90));
}
