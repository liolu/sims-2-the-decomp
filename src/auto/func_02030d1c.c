/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201866c(void *);                      /* extern */
M2C_UNK func_02018acc(void *);                      /* extern */
M2C_UNK func_02046844(void *);                      /* extern */
M2C_UNK func_020d5604();                            /* extern */
extern M2C_UNK data_0213134c;

void *func_02030d1c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213134c;
    if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
        func_020d5604();
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    }
    func_02018acc(arg0 + 0x18);
    func_0201866c(arg0);
    func_02046844(arg0);
    return arg0;
}
