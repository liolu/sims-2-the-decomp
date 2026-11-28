/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02018664(void *);
M2C_UNK func_02018ac4(void *);
M2C_UNK func_020d50f0(s32);
extern M2C_UNK data_021308ec;

void *func_0202ba38(void *arg0) {
    *(void **) arg0 = &data_021308ec;
    {
        s32 v = *(s32 *) ((u8 *) arg0 + 0x28);
        if (v != -1) {
            func_020d50f0(v);
        }
    }
    func_02018ac4((u8 *) arg0 + 0x18);
    func_02018664(arg0);
    return arg0;
}
