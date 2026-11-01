/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_020fcb1c(u8 *, u8 *, s32);
u8 *func_020462cc(u8 *arg0, u8 *arg1, u32 arg2) {
    u32 i;
    u32 rem;
    u32 cnt;
    u32 base;
    u32 *d;
    u32 *s;
    if (((u32) arg0 & 3) != 0) {
        goto unaligned;
    }
    if (((u32) arg1 & 3) != 0) {
        goto unaligned;
    }
    if ((arg2 & 3) != 0) {
        goto unaligned;
    }
    func_020fcb1c(arg1, arg0, arg2);
    goto end;
unaligned:
    if (((u32) arg0 & 3) != 0) {
        goto bytes;
    }
    if (((u32) arg1 & 3) == 0) {
        goto words;
    }
bytes:
    for (i = 0; i < arg2; i++) {
        arg0[i] = arg1[i];
    }
    goto end;
words:
    d = (u32 *) arg0;
    s = (u32 *) arg1;
    for (i = 0; i < (arg2 >> 2); i++) {
        d[i] = s[i];
    }
    rem  = arg2 & 3;
    base = arg2 - rem;
    cnt  = rem - 1;
    if (rem != 0) {
        do {
            arg0[base] = arg1[base];
            base++;
        } while (cnt-- != 0);
    }
end:
    return arg0;
}
