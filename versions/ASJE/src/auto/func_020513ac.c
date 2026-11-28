/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 pad[8];
    u8 h;
} Fnt;

u8 *func_020516f8(u8 *, s32);
s32 func_0205182c(u8 *);
s32 func_02050b90(s32, s32, s32, u8 *);
extern Fnt *data_0213db08[][0x11];
extern s32 data_027e0000;

s32 func_020513ac(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 **arg4, s32 arg5, s32 *arg6) {
    u8 buf[0x64];
    u8 *e;
    u8 *s;
    u8 *d;
    u8 c;
    s32 h;
    s32 t;

    e = func_020516f8(*arg4, arg3);
    if (e != 0) {
        s = *arg4;
        d = buf;
        while (s != e && *arg6 != 0) {
            c = *s;
            if (c == 0x40) {
                s += 1;
                *d++ = c;
            }
            c    = *s++;
            *d++ = c;
            *arg6 -= 1;
        }
        *d    = 0;
        *arg4 = s;
        if (arg5 == 1) {
            t = func_0205182c(buf) + 1;
            arg1 -= t / 2;
        } else if (arg5 == 2) {
            arg1 -= func_0205182c(buf);
        }
        if (arg5 == 4) {
            h = 0;
            if (buf[0] != 0) {
                h = ((Fnt **) data_0213db08)[data_027e0000 * 0x11]->h;
            }
            t = h + 1;
            arg2 -= t / 2;
        } else if (arg5 == 8) {
            h = 0;
            if (buf[0] != 0) {
                h = ((Fnt **) data_0213db08)[data_027e0000 * 0x11]->h;
            }
            arg2 -= h;
        }
        arg0 = func_02050b90(arg0, arg1, arg2, buf);
        s    = *arg4;
        if (*s == 0xa) {
            *arg4 = s + 1;
        }
        if (**arg4 == 0x20) {
            do {
                *arg4 += 1;
            } while (**arg4 == 0x20);
        }
    }
    return arg0;
}
