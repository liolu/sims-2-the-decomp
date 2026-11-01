/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern void func_020b8e94(void *, u16, void *, s32);
extern void func_020ee640(void *, s32);

u32 func_020b9030(void *arg0) {
    s32 i;
    u16 n;
    u8 *p;
    u8 *base;
    u16 c;
    u32 r;
    u32 flag;

    flag = (u32) (*(u16 *) ((u8 *) arg0 + 0xAC) << 0x1A) >> 0x1F;
    if (flag != 0) {
        return flag;
    }
    n = *(u16 *) ((u8 *) arg0 + 0xAE);
    i = 0;
    if ((s32) n <= 0) {
        return flag;
    }
    base = *(u8 **) ((u8 *) arg0 + 0x68);
    p    = base;
    do {
        c = *(u16 *) p;
        if (c == 0x74) {
            u8 *t = *(u8 **) ((u8 *) arg0 + 0x5C);
            func_020b8e94((u8 *) arg0 + 0x7C, *(u16 *) (base + i * 6 + 2), t + *(s32 *) (t + *(u16 *) (t + 0xE) + 0xC), 0);
            func_020ee640((u8 *) arg0 + 4, *(s32 *) ((u8 *) arg0 + 0x7C));
            r                             = *(u16 *) ((u8 *) arg0 + 0xAC) | 0x20;
            *(u16 *) ((u8 *) arg0 + 0xAC) = r;
            return r;
        }
        i += 1;
        p += 6;
    } while (i < (s32) n);
    return c;
}
