/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u32 data_027e0000;
void func_0203cec4(u32 arg0) {
    u32 *p = (u32 *) ((data_027e0000 << 12) + 0x4000000);
    arg0 |= *p;
    *p = arg0;
}
