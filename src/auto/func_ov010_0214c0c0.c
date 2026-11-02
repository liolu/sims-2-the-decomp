/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov010_0214b3a4(void *, s32, u8, void *);

void func_ov010_0214c0c0(void *arg0) {
    u16 c;
    u8 *base;
    u8 *q;
    s32 idx;
    c                             = *(u16 *) ((u8 *) arg0 + 0x84);
    *(u16 *) ((u8 *) arg0 + 0x84) = (u16) (c - 1);
    if (c != 0) {
        return;
    }
    base = *(u8 **) ((u8 *) arg0 + 0x90);
    q    = base + *(u8 *) ((u8 *) arg0 + 0x9C) * 44;
    idx  = q[0x56] - 1;
    func_ov010_0214b3a4(base, *(s32 *) (q + 0x34), q[idx + 0x48], q);
    *(s32 *) ((u8 *) arg0 + 4) |= 130;
}
