/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_027e0000;

u8 *func_0203b908(s32 block, s32 index) {
    return (u8 *) (0x06000000 + data_027e0000 * 0x200000) + block * 0x4000 + ((index << 5) & ~1);
}
