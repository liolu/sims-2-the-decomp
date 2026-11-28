/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020105d0(u8 *arg0);
void func_020467a4(u32 arg0);
extern s32 data_027e0000;
extern u8 data_027e0014;

void func_020cfbb0(u8 *arg0) {
    func_020105d0((u8 *) &data_027e0014 + data_027e0000 * 0x34);
    switch (*(u32 *) (arg0 + 0x28)) {
        case 3:
        case 4:
            func_020467a4(*(u32 *) (arg0 + 0xC4));
            return;
        case 6:
            func_020467a4(*(u32 *) (arg0 + 0xC8));
        case 7:
            func_020467a4(*(u32 *) (arg0 + 0xC4));
            return;
        case 2:
            func_020467a4(*(u32 *) (arg0 + 0xC4));
        default:
            return;
    }
}
