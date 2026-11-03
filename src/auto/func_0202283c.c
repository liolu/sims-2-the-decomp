/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_0201d124(void *);
extern void func_0201d56c(void *);
extern void func_0201d844(void *);
extern void func_02019684(void *);
extern void func_020117e8(s32, s32, void *, void *);
extern s32 func_02021fd4(void *, s32);
extern void func_02018acc(void *);

void func_0202283c(u8 *arg0) {
    u8 a[0x3C];
    u8 b[0x24];
    u8 c[0x18];
    u8 d[0x18];

    arg0[0x40] = 1;
    func_0201d124(a);
    func_0201d56c(b);
    func_0201d844(c);
    func_02019684(d);
    func_020117e8(*(s32 *) (arg0 + 4), 0x1E, d, arg0);
    func_020117e8(*(s32 *) (arg0 + 4), 0x22, b, arg0);
    *(u16 *) (a + 0x30) = 0x7E;
    *(s32 *) (a + 0x10) = func_02021fd4(arg0, 2);
    *(s32 *) (a + 0x20) = *(s32 *) (arg0 + 4);
    func_020117e8(*(s32 *) (arg0 + 4), 3, a, arg0);
    c[0x14]             = 1;
    *(u16 *) (c + 0x12) = 0x7E;
    func_020117e8(*(s32 *) (arg0 + 4), 0x23, c, arg0);
    c[0x14]             = 1;
    *(u16 *) (c + 0x12) = 0xC9;
    func_020117e8(*(s32 *) (arg0 + 4), 0x23, c, arg0);
    *(s32 *) (a + 0x10) = -1;
    *(u16 *) (a + 0x30) = 0x7D;
    func_020117e8(*(s32 *) (arg0 + 4), 3, a, arg0);
    *(u16 *) (c + 0x12) = 0xC8;
    c[0x14]             = 0;
    func_020117e8(*(s32 *) (arg0 + 4), 0x23, c, arg0);
    *(u16 *) (b + 0x10) = 0x11B;
    *(u16 *) (b + 0x1C) = 0x7D;
    func_020117e8(*(s32 *) (arg0 + 4), 0x22, b, arg0);
    *(s32 *) (a + 0x10) = -1;
    *(u16 *) (a + 0x30) = 0x7A;
    func_020117e8(*(s32 *) (arg0 + 4), 3, a, arg0);
    *(s32 *) (a + 0x10) = func_02021fd4(arg0, 3);
    *(u16 *) (a + 0x30) = 0x79;
    func_020117e8(*(s32 *) (arg0 + 4), 3, a, arg0);
    func_02018acc(d);
    func_02018acc(c);
    func_02018acc(b);
    func_02018acc(a);
}
