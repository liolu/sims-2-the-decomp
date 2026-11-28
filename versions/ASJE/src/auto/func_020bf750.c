/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_0213e2f4;
void func_020c0640(void *);

void func_020bf750(void *arg0) {
    volatile s32 sp0;
    volatile s32 sp4;
    volatile s32 sp8;
    volatile s32 spC;
    volatile s32 sp10;
    s32 a;
    s32 b;
    s32 x;
    s32 y;
    u8 *obj;

    s32 c;
    s32 d;
    s32 t;
    c                             = *(s32 *) ((u8 *) arg0 + 0x148);
    spC                           = c;
    d                             = *(s32 *) ((u8 *) arg0 + 0x144);
    sp10                          = d;
    a                             = *(s32 *) ((u8 *) arg0 + 0x80) + d;
    sp0                           = a;
    b                             = *(s32 *) ((u8 *) arg0 + 0x84) + c;
    sp4                           = b;
    *(s32 *) ((u8 *) arg0 + 0x50) = a;
    t                             = sp4;
    sp8                           = t;
    *(s32 *) ((u8 *) arg0 + 0x54) = t;
    x                             = *(s32 *) ((u8 *) arg0 + 0x80) >> 12;
    y                             = *(s32 *) ((u8 *) arg0 + 0x84) >> 12;
    obj                           = (u8 *) (data_0213e2f4 + 0x41f8);
    if (x < 0x30) {
        return;
    }
    if (x > 0xd0) {
        return;
    }
    if (y < 0x20) {
        return;
    }
    if (y > 0x8c) {
        return;
    }
    if (*(s32 *) (obj + *(s32 *) (obj + 0x2e0) * 0x58 + 0x54) >= 0xe) {
        return;
    }
    func_020c0640(arg0);
}
