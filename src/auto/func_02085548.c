/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02084894(void *);
M2C_UNK func_020fca8c(s32, void *, M2C_UNK);

extern u8 data_02132d98;

void *func_02085548(void *arg0, s32 arg1) {
    volatile s32 tmp[2];
    *(u8 **) arg0                 = &data_02132d98;
    *(s32 *) ((u8 *) arg0 + 4)    = arg1;
    *(s32 *) ((u8 *) arg0 + 0x38) = 0;
    *(s32 *) ((u8 *) arg0 + 0x3C) = 0;
    tmp[0]                        = 0;
    func_020fca8c(tmp[0], (u8 *) arg0 + 8, 0x18);
    tmp[1] = 0;
    func_020fca8c(tmp[1], (u8 *) arg0 + 0x20, 0x18);
    func_02084894(arg0);
    return arg0;
}
