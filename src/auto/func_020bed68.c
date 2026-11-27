/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020bf658(void *, s32);
void func_020bf818(u8 *);
void func_020bf8f0(u8 *);

void func_020bed68(u8 *arg0) {
    volatile s32 fr[5];
    s32 a, b, c, d, e;
    if (arg0[0x16d] == 0) {
        return;
    }
    if (arg0[0x16e] == 0) {
        return;
    }
    if (arg0[0x16f] == 0) {
        return;
    }
    if (arg0[0x16b] != 0) {
        a                       = *(s32 *) (arg0 + 0x148);
        fr[3]                   = a;
        b                       = *(s32 *) (arg0 + 0x144);
        fr[4]                   = b;
        c                       = *(s32 *) (arg0 + 0x80) + b;
        fr[0]                   = c;
        d                       = *(s32 *) (arg0 + 0x84) + a;
        fr[1]                   = d;
        *(s32 *) (arg0 + 0x50)  = c;
        e                       = fr[1];
        fr[2]                   = e;
        *(s32 *) (arg0 + 0x54)  = e;
        c                       = *(s32 *) (arg0 + 0x164);
        *(s32 *) (arg0 + 0x164) = c - 1;
        if (c != 0) {
            return;
        }
        func_020bf658(arg0, 0);
        return;
    }
    a = arg0[0x169];
    if ((a != 0 && arg0[0x16a] == 0) || (a == 0 && arg0[0x16a] != 0)) {
        func_020bf818(arg0);
        return;
    }
    func_020bf8f0(arg0);
}
