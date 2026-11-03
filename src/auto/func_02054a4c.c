/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020f5cc0(s32, s32);
u8 *func_02052258(s32);
void func_02051a50(s32, s32, s32);
void func_02050b9c(s32, s32, s32, s32);
void func_02051338(s32, s32, s32, u8 *, s32);

void func_02054a4c(s32 dummy, s32 arg1) {
    s32 r;
    u8 *p;
    s32 t6;
    s32 idx;
    s32 t7;
    s32 t6_2;

    r = func_020f5cc0(arg1 - 1, 0x1B4);
    if (r < 0) {
        r += 0x1B4;
    }
    p   = func_02052258(r + 0xA69);
    t6  = arg1 & 0xF;
    idx = (t6 << 6) + 1;
    if (p[0] == 0x5E) {
        if (p[1] == 0x31) {
            func_02051a50(3, 9, 0);
        } else {
            func_02051a50(3, 3, 0);
        }
        p += 2;
    } else {
        func_02051a50(3, 0, 0);
    }
    t6_2 = (t6 - 3) & 0xF;
    t7   = t6_2 * 2;
    func_02050b9c(0, t7, 0x20, 0);
    func_02050b9c(0, t7 + 1, 0x20, 0);
    if (p[0] == 0 || p[0] == 0x7E) {
        return;
    }
    func_02051338(idx, 0x80, t6_2 * 0x10, p, 1);
}
