/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020fad58(s32 a, s32 b);
void func_020fc4c0(u32 a, const void *b, void *c, u32 d);
void func_020fcc90(void);
void func_020fcd68(void);
void func_020fce40(void);
void func_01ff8000(void *a, void *b, void *c);

typedef struct {
    u32 lo : 4;
    u32 ty : 4;
    u32 sz : 24;
} HD2;

u32 func_02042a64(u8 *arg0, u16 *arg1) {
    HD2 *hd = (HD2 *) arg0;
    u32 i;
    u32 n;
    s32 sp0;
    u32 t;

    t   = hd->ty & ~8;
    sp0 = hd->sz;
    switch (t) {
        case 0:
            func_020fad58((s32) arg0, sp0 + 4);
            func_020fad58((s32) arg1, sp0);
            func_020fc4c0(3, arg0 + 4, arg1, sp0);
            break;
        case 1:
            func_020fcc90();
            break;
        case 2:
            func_020fcd68();
            break;
        case 3:
            func_020fce40();
            break;
        case 6:
            func_01ff8000(arg0 + 4, arg1, &sp0);
            break;
        case 8:
            break;
    }
    if (hd->ty & 8) {
        i = 1;
        n = (u32) sp0 >> 1;
        if (n > 1) {
            do {
                arg1[i] = (u16) (arg1[i] + arg1[i - 1]);
                i++;
            } while (i < n);
        }
    }
    return hd->sz;
}
