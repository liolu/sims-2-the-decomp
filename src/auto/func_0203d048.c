/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 data_027e0000;
s32 func_0203d048(s32 arg0) {
    if ((0x100 << arg0) & *(volatile u32 *) (0x04000000 + (data_027e0000 << 12))) {
        return 1;
    }
    return 0;
}
