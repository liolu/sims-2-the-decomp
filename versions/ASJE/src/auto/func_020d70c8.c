/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_020d6394(u32 a);
extern u8 data_021427b4[];
void func_020d70c8(u32 arg0, u32 *arg1) {
    volatile s32 fr[3];
    u8 *p;
    u8 idx;
    s32 ok;
    s32 v;
    if (arg0 != 0xFFFFFFFFU && (idx = arg0, p = data_021427b4 + idx * 0x44, idx < 0x10) && *(s32 *) p != 0 &&
        *(u16 *) (p + 8) == (arg0 >> 8) && (((u32) (p[11] << 25)) >> 26) <= 1) {
        ok = 1;
    } else {
        ok = 0;
    }
    if (ok == 0) {
        return;
    }
    idx = arg0;
    p   = data_021427b4 + idx * 0x44;
    if (arg1 == 0) {
        p[0xB] &= ~0x80;
    } else {
        v                   = arg1[0];
        fr[0]               = v;
        *(s32 *) (p + 0x38) = v;
        v                   = arg1[1];
        fr[1]               = v;
        *(s32 *) (p + 0x3c) = v;
        v                   = arg1[2];
        fr[2]               = v;
        *(s32 *) (p + 0x40) = v;
        p[0xB] |= 0x80;
    }
    func_020d6394(arg0);
}
