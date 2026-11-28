/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 data_027e0000;
void func_0203d02c(s32 arg0) {
    u32 *p;
    enum {
        K = 0x100
    } k = K;
    p   = (u32 *) (0x04000000 + (data_027e0000 << 0xC));
    *p  = *p | (k << arg0);
}
