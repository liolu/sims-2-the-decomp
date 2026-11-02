/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_020f5eb8(s32, s32, s32);
extern M2C_UNK data_02121dd8;

void func_02083ba8(s32 *arg0, u8 *arg1) {
    volatile s32 tmp[2];
    s32 v;

    v      = ((s32 *) &data_02121dd8)[*(s32 *) (arg1 + 0x54)] << 12;
    tmp[0] = v;
    tmp[1] = v;
    *arg0  = func_020f5eb8(*(s32 *) (arg1 + 0x58) << 12, v, v);
}
