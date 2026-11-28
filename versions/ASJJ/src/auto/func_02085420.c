/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0208476c(void *);
M2C_UNK func_020fc578(s32, void *, M2C_UNK);

extern u8 data_02132884;

void *func_02085420(void *arg0, s32 arg1) {
    volatile s32 tmp[2];
    *(u8 **) arg0                 = &data_02132884;
    *(s32 *) ((u8 *) arg0 + 4)    = arg1;
    *(s32 *) ((u8 *) arg0 + 0x38) = 0;
    *(s32 *) ((u8 *) arg0 + 0x3C) = 0;
    tmp[0]                        = 0;
    func_020fc578(tmp[0], (u8 *) arg0 + 8, 0x18);
    tmp[1] = 0;
    func_020fc578(tmp[1], (u8 *) arg0 + 0x20, 0x18);
    func_0208476c(arg0);
    return arg0;
}
