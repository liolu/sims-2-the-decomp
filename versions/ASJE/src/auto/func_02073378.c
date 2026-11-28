/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Entry0211f9ec {
    u8 unk0;
    u8 unk1;
    u8 value;
    u8 unk3;
} Entry0211f9ec;

extern Entry0211f9ec data_0211f8b0[];

s32 func_02073378(u8 *obj) {
    s32 i;
    s32 sum = 0;
    for (i = 0; i < 33; i++) {
        if ((1 << (i & 31)) & ((u32 *) (obj + 0x218))[i >> 5]) {
            sum += data_0211f8b0[i].value;
        }
    }
    return sum;
}
