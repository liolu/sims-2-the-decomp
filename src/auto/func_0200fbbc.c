/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200b5a8();                            /* extern */
M2C_UNK func_0200dfd0(M2C_UNK, void *);             /* extern */
M2C_UNK func_020b9030(void *);                      /* extern */
extern M2C_UNK data_0212fc30;

void *func_0200fbbc(void *arg0, M2C_UNK arg1) {
    func_0200b5a8();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212fc30;
    M2C_FIELD(arg0, s32 *, 0x238)  = 0x80000000;
    func_0200dfd0(arg1, arg0 + 0x220);
    func_020b9030(arg0 + 0x14C);
    return arg0;
}
