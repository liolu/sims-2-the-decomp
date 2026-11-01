/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern M2C_UNK data_027e0000;
void func_0204818c(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 *p                = arg0 + (*(s32 *) &data_027e0000 << 5);
    *(s32 *) (p + 0xDF0) = arg1;
    *(s32 *) (p + 0xDF4) = arg2;
    *(s32 *) (p + 0xDF8) = arg3;
    *(s32 *) (p + 0xDFC) = arg4;
}
