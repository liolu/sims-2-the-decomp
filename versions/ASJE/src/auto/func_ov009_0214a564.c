/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020d5880(s32);
void func_ov009_0214b354(void *, s32);

void func_ov009_0214a564(void *arg0) {
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
    func_ov009_0214b354(p + 0x3C, *(s32 *) (p + 0x9C));
    func_020d5880(0x26F);
}
