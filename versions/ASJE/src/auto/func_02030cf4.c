/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0201866c(void *);                      /* extern */
M2C_UNK func_02018acc(void *);                      /* extern */
M2C_UNK func_020d54c8();                            /* extern */
extern M2C_UNK data_0213120c;

void *func_02030cf4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213120c;
    if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
        func_020d54c8();
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    }
    func_02018acc(arg0 + 0x18);
    func_0201866c(arg0);
    return arg0;
}
