/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 data_027e0000;
u16 func_0203d020(void) {
    return (u16) (*(volatile u32 *) (0x04000000 + (data_027e0000 << 12)) & 7);
}
