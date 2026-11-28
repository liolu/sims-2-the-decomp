/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_0213df5c;
extern u8 data_02121470;
extern u8 data_02121474;
void *func_020825a8(u8 *arg0, s32 x, s32 y) {
    u8 *ip;
    s32 off;
    if (x >= 15) {
        x = x % 3;
    }
    ip = *(u8 **) &data_0213df5c + 0x47F8;
    if (*(s32 *) (ip + 4) == 9) {
        if ((u16) * (s32 *) (ip + 8) == 0x13) {
            return *(u8 **) (&data_02121470 + 0x144) + (x << 4) + (y << 2);
        }
    }
    off = *(u16 *) (arg0 + 0x18) * 0x14;
    return *(u8 **) (&data_02121474 + off) + (x << 4) + (y << 2);
}
