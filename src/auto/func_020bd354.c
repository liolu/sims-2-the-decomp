/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020ecfa8(s32, u32, u8 *, u32);

void func_020bd354(u8 *arg0) {
    u8 *p;
    u32 c;
    u32 v;
    u32 w;
    u8 *q;

    p = *(u8 **) (arg0 + 0x14);
    c = *(u16 *) (p + 0xC) << 3;
    if (c != 0) {
        func_020ecfa8(0, (*(s32 *) (p + 0x8) & 0xFFFF) * 8, p + *(s32 *) (p + 0x14), c);
        p                   = *(u8 **) (arg0 + 0x14);
        *(u16 *) (p + 0x10) = *(u16 *) (p + 0x10) | 1;
    }
    p = *(u8 **) (arg0 + 0x14);
    c = *(u16 *) (p + 0x1C) << 3;
    if (c != 0) {
        v = *(s32 *) (p + 0x18) & 0xFFFF;
        w = v * 8;
        q = p + *(s32 *) (p + 0x28);
        func_020ecfa8(0, w, p + *(s32 *) (p + 0x24), c);
        func_020ecfa8(0, ((0x1FFFF & w) >> 1) + 0x20000 + ((w & 0x40000) >> 2), q, c >> 1);
        p                   = *(u8 **) (arg0 + 0x14);
        *(u16 *) (p + 0x20) = *(u16 *) (p + 0x20) | 1;
    }
    p = *(u8 **) (arg0 + 0x14);
    c = *(u16 *) (p + 0x30) << 3;
    if (c == 0) {
        return;
    }
    func_020ecfa8(1, (*(s32 *) (p + 0x2C) & 0xFFFF) * 8, p + *(s32 *) (p + 0x38), c);
    p                   = *(u8 **) (arg0 + 0x14);
    *(u16 *) (p + 0x32) = *(u16 *) (p + 0x32) | 1;
}
