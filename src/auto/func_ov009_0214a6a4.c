/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020d59bc(s32);
void func_ov009_0214b494(void *, s32);

void func_ov009_0214a6a4(void *arg0) {
    u8 *p;
    s32 v;
    p = *(u8 **) ((u8 *) arg0 + 0x90);
    if (*(s32 *) (p + 0x9C) == 3) {
        v = 4;
    } else {
        v = 2;
    }
    *(s32 *) (p + 0x9C) = v;
    if (*(s32 *) (p + 0x9C) == 2) {
        if (*(s32 *) (p + 0xD0) == 0) {
            *(s32 *) (p + 0x9C) = 0;
        }
    }
    func_ov009_0214b494(p + 0x3C, *(s32 *) (p + 0x9C));
    func_020d59bc(0x26F);
}
