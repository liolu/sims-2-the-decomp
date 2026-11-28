/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s16 data_02138be4;
extern s16 data_02145de4;

void func_020f6450(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_02138be4       = 0;
    data_02145de4       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}
