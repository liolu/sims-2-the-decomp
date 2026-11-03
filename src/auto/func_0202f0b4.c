/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_01ffabc8(void *p, s32 a, s32 b);
extern void func_02026be8(void *p);
extern void func_020117e8(void *o, s32 id, void *buf, void *x);
extern void func_0201cc34(void *p);
extern void func_0201d124(void *p);
extern void func_0202873c(void *p);
extern void func_02018acc(void *p);

void func_0202f0b4(u8 *arg0, u8 *arg1) {
    u8 a[0x1C];
    u8 b[0x1C];
    u8 c[0x3C];
    u8 d[0x28];

    func_01ffabc8(arg1 + 0xE0, 8, 1);
    func_02026be8(a);
    *(s32 *) (a + 0x10) = 0;
    func_020117e8(arg1, 0x26, a, arg0);
    func_0201cc34(b);
    *(s32 *) (b + 0x14) = 0x800000;
    func_020117e8(arg1, 0x36, b, 0);
    func_0201d124(c);
    *(u16 *) (c + 0x30) = 0x27;
    *(s32 *) (c + 0x20) = *(s32 *) (arg0 + 4);
    c[0x33]             = 0;
    func_020117e8(arg1, 3, c, 0);
    *(u16 *) (c + 0x30) = 0x3B;
    *(s32 *) (c + 0x20) = 0;
    c[0x33]             = 0;
    func_020117e8(arg1, 3, c, 0);
    func_0202873c(d);
    *(u16 *) (d + 0x12) = 0xDB;
    func_020117e8(arg1, 0x2D, d, 0);
    *(u16 *) (d + 0x12) = 0x2A0;
    *(u8 **) (d + 0x24) = arg0 + 0x28;
    func_020117e8(arg1, 0x2D, d, 0);
    *(u16 *) (c + 0x30) = 0x2A;
    *(s32 *) (c + 0x20) = *(s32 *) (arg0 + 4);
    c[0x33]             = 1;
    func_020117e8(arg1, 3, c, 0);
    func_02018acc(d);
    func_02018acc(c);
    func_02018acc(b);
    func_02018acc(a);
}
