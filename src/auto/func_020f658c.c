/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s16 data_02138d24;
extern s16 data_02145f24;

void func_020f658c(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_02138d24       = 0;
    data_02145f24       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}
