/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 data_027e0000;
s32 func_0203cf38(void) {
    if (*(u32 *) (0x04000000 + (data_027e0000 << 0xC)) & 0x40000000) {
        return 1;
    }
    return 0;
}
