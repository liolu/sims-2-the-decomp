/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02018664(void *);                      /* extern */
M2C_UNK func_02018ac4(void *);                      /* extern */
M2C_UNK func_02046858(void *);                      /* extern */
M2C_UNK func_020d50f0();                            /* extern */
extern M2C_UNK data_02130e4c;

void *func_02030d50(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02130e4c;
    if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
        func_020d50f0();
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    }
    func_02018ac4(arg0 + 0x18);
    func_02018664(arg0);
    func_02046858(arg0);
    return arg0;
}
