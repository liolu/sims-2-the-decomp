/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02139438;
extern volatile s32 data_027e0000;

void func_0203c58c(s32 arg0, s32 arg1, s32 arg2, s16 arg3) {
    volatile s32 tmp[4];
    u8 *temp_r4;
    temp_r4                   = (u8 *) &data_02139438 + data_027e0000 * 0x1D8 + 8 + arg0 * 0x74;
    tmp[0]                    = arg1;
    tmp[2]                    = arg1;
    *(s32 *) (temp_r4 + 0x30) = arg1;
    tmp[1]                    = arg2;
    tmp[3]                    = arg2;
    *(s32 *) (temp_r4 + 0x34) = arg2;
    *(s16 *) (temp_r4 + 0x38) = arg3;
    *(s32 *) (temp_r4 + 0x14) = *(s32 *) (temp_r4 + 0x14) | 1;
}
