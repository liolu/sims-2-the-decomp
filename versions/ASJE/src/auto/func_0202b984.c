/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0201866c(void *);
M2C_UNK func_02018acc(void *);
M2C_UNK func_020d54c8(s32);
extern M2C_UNK data_02130cac;

void *func_0202b984(void *arg0) {
    *(void **) arg0 = &data_02130cac;
    {
        s32 v = *(s32 *) ((u8 *) arg0 + 0x28);
        if (v != -1) {
            func_020d54c8(v);
        }
    }
    func_02018acc((u8 *) arg0 + 0x18);
    func_0201866c(arg0);
    return arg0;
}
