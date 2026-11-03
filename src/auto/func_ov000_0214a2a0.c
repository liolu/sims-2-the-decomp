/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov000_0214e96c[];

void func_02016688(u8 *arg0, u16 arg1, s32 arg2);
void func_020165bc(u8 *arg0, s32 arg1);

void func_ov000_0214a2a0(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *r4;
    volatile s32 pad[1];

    r4 = ((u8 **) *(u8 **) (*(u8 **) (arg0 + 0x24)))[arg1];
    switch (arg2) {
        case 0:
            func_02016688(r4, 0xFFFF, 0);
            *(u32 *) (r4 + 4) = *(u32 *) (r4 + 4) & ~0x10;
            func_020165bc(r4, 0);
            break;
        case 1:
            func_02016688(r4, 0xFFFF, 0);
            *(u32 *) (r4 + 4) = *(u32 *) (r4 + 4) & ~0x10;
            func_020165bc(r4, 1);
            break;
        case 2:
            func_02016688(r4, *(u16 *) &data_ov000_0214e96c, 0);
            *(u32 *) (r4 + 4) = *(u32 *) (r4 + 4) | 0x10;
            break;
    }
    ((u8 *) (arg0 + arg1 + 0xC000))[0x9F3] = (u8) arg2;
}
