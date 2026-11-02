/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213a278;
extern u8 data_027e0000;
void func_020482f8(void *);
void func_0203cee8(s32);

void func_ov009_0214b90c(void) {
    s32 t;
    func_020482f8(&data_0213a278);
    func_0203cee8(0xA000);
    t                         = *(s32 *) &data_027e0000 << 12;
    *(s32 *) (0x04000000 + t) = *(s32 *) (0x04000000 + t) & ~0x800000;
    *(s16 *) 0x04001050       = 0;
}
