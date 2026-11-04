/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_020f0e9c(void *a);
void func_020fae94(s32 a, s32 b);
void func_020f9744(void);
void func_020f95e0(s32 a, s32 b, s32 c);
void func_020f9570(void);
s32 func_020ecfa8(s32 a, s32 b, s32 c, s32 d);

s32 func_020bbde8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4) {
    u8 *p;
    u8 *q;
    u8 *s;
    u8 *o;
    u8 *pa;
    u8 *pq;
    s32 r3;
    s32 off;
    s32 r4;
    s32 r7;
    s32 w;

    if (*(u16 *) (arg0 + 0xe) & 1) {
        p                   = func_020f0e9c(*(void **) arg0);
        o                   = *(u8 **) (arg0 + 8);
        *(s32 *) (p + 8)    = *(s32 *) (o + 4);
        *(s32 *) (p + 0x18) = *(s32 *) (o + 8);
        *(s32 *) (p + 0x2c) = *(s32 *) (o + 0xc);
    }
    q   = func_020f0e9c(*(void **) arg0);
    r4  = (*(u32 *) (q + 8) & 0xffff) << 3;
    s   = func_020f0e9c(*(void **) arg0);
    off = *(u16 *) (s + 0x42);
    pa  = s + 0x3c;
    r3  = *(u16 *) (pa + off);
    pq  = pa + off;
    w   = *(s32 *) (pq + r3 * arg1 + 4);
    r7  = (w & 0xffff) << 3;
    func_020f0e9c(*(void **) arg0);
    if (arg4 != 0) {
        func_020fae94(arg2, arg3);
        func_020f9744();
        func_020f95e0(arg2, r4 + r7, arg3);
        func_020f9570();
        return 1;
    }
    return func_020ecfa8(0, r4 + r7, arg2, arg3) != 0;
}
