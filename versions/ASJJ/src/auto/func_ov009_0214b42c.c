/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02139d58;
extern u8 data_027e0000;
void func_0204830c(void *);
void func_0203cf1c(s32);

void func_ov009_0214b42c(void) {
    s32 t;
    func_0204830c(&data_02139d58);
    func_0203cf1c(0xA000);
    t                         = *(s32 *) &data_027e0000 << 12;
    *(s32 *) (0x04000000 + t) = *(s32 *) (0x04000000 + t) & ~0x800000;
    *(s16 *) 0x04001050       = 0;
}
