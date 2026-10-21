/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020f69a8();                                /* extern */
extern M2C_UNK data_0212f464;
extern s32 data_02145f68;
extern s32 data_02145f6c;

void func_020f9528(void) {
    s32 temp_r0;

    temp_r0       = func_020f69a8();
    data_02145f6c = temp_r0;
    data_02145f68 = *((u16 *) ((s8 *) &data_0212f464 + ((temp_r0 >> 4) * 2))) << 0xC;
}
