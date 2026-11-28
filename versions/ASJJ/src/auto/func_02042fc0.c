/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02045a10(void *, M2C_UNK);             /* extern */
extern void *data_02139784;

void *func_02042fc0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0)   = 0;
    M2C_FIELD(arg0, s32 *, 4)   = 0;
    M2C_FIELD(arg0, void **, 8) = (void *) (arg0 + 4);
    func_02045a10(arg0 + 0xC, 0x32);
    data_02139784 = arg0;
    return arg0;
}
