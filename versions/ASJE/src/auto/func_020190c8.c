/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_02018aa8(void *);
void func_020190c8(void *arg0, void *arg1) {
    volatile s32 tmp;
    s32 v;
    func_02018aa8((u8 *) arg0 + 0x18);
    M2C_FIELD(arg0, s32 *, 0x28) = M2C_FIELD(arg1, s32 *, 0x10);
    v                            = M2C_FIELD(arg1, s32 *, 0x14);
    tmp                          = v;
    M2C_FIELD(arg0, s32 *, 0x2C) = v;
}
