/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_0203b740(u8 *, s32, u8 *);

u16 func_0204da70(u8 *arg0, s32 arg1) {
    u8 buf[0x400];
    s32 hw;
    u16 acc;
    s32 cnt;
    s32 q;
    u8 *src;
    s32 n;
    u16 *p;

    hw  = arg1;
    cnt = (hw - 1) / 1024 + 1;
    src = arg0;
    hw  = hw >> 1;
    q   = cnt - 1;
    acc = 0;
    if (cnt != 0) {
        do {
            func_0203b740(src, 0x400, buf);
            n = 0x200;
            p = (u16 *) buf;
            while (n-- != 0 && hw-- != 0) {
                acc = (u16) (acc + *p++);
            }
            src += 0x400;
        } while (q-- != 0);
    }
    return (u16) (0 - acc);
}
