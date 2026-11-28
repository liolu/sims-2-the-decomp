/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02018664(void *);                      /* extern */
M2C_UNK func_02018ac4(void *);                      /* extern */
M2C_UNK func_02046830(s32);                         /* extern */
M2C_UNK func_02046858(s32);                         /* extern */
extern M2C_UNK data_021307c4;

void *func_0202a794(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021307c4;
    func_02046858(M2C_FIELD(arg0, s32 *, 0x30));
    func_02046830(M2C_FIELD(arg0, s32 *, 0x34));
    func_02018ac4(arg0 + 0x18);
    func_02018664(arg0);
    return arg0;
}
