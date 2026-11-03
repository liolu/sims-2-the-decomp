/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020165bc(void *, s32);
extern u32 data_027e20d0;

void func_ov009_0214a8e4(u8 *arg0) {
    void *p;
    void *o;

    p = *(void **) (arg0 + 0x28);
    if (p != 0) {
        *(u32 *) ((u8 *) p + 4) &= ~1u;
    }
    data_027e20d0 = 0;
    if (arg0[0x12] == 1) {
        return;
    }
    o                          = *(void **) (arg0 + 0x38);
    *(u16 *) ((u8 *) o + 0x24) = 0xFFFF;
    o                          = *(void **) (arg0 + 0x38);
    *(u32 *) ((u8 *) o + 4) &= ~0x10u;
    func_020165bc(*(void **) (arg0 + 0x38), 0);
}
