/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void (*data_0213e41c)(s32);
extern u8 data_027e0000[];

void func_020717e0(void) {
    s32 vcount = *(volatile u16 *) 0x04000006;
    if (vcount < 0xC0) {
        data_0213e41c(vcount);
    }
    *(volatile u32 *) ((u32) data_027e0000 + 0x3FF8) |= 2;
}
