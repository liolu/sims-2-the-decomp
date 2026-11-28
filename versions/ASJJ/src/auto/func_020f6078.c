/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s16 data_02138810;
extern s16 data_02145a44;

void func_020f6078(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_02138810       = 0;
    data_02145a44       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}
