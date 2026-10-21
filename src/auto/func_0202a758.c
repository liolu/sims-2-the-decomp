/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201866c(void *);                      /* extern */
M2C_UNK func_02018acc(void *);                      /* extern */
M2C_UNK func_0204681c(s32);                         /* extern */
M2C_UNK func_02046844(s32);                         /* extern */
extern M2C_UNK data_02130cc4;

void *func_0202a758(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02130cc4;
    func_02046844(M2C_FIELD(arg0, s32 *, 0x30));
    func_0204681c(M2C_FIELD(arg0, s32 *, 0x34));
    func_02018acc(arg0 + 0x18);
    func_0201866c(arg0);
    return arg0;
}
