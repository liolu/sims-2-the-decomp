/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02147d80;
extern u8 data_02148380;
void func_020fcb58(s32, s32, s32, s32);
void func_0210403c(u32, u32);

void func_02103fe4(void) {
    u8 *r4 = (u8 *) &data_02147d80;
    u32 v;

    func_020fcb58(*(s32 *) (r4 + 0x24), 0x04100010, *(s32 *) (r4 + 0x1C), 0x200);
    v = *(u32 *) (r4 + 0x18);
    func_0210403c((v >> 8) | 0xB7000000, v << 0x18);
    *(volatile u32 *) 0x040001A4 = *(u32 *) (&data_02148380 + 4);
}
