/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 *buf;
    s32 a, b, c, d;
} DS;
extern u8 data_0211e71c;
extern u8 data_0213d8cc;
extern u8 data_0213d86c;
extern DS data_0213d87c;
extern u8 data_0213d8d0;
extern u8 data_0213d8c8;
extern void func_0204da58();

extern u16 *func_02046880(s32, s32, s32);
extern void func_0210a69c(void *, void *);
extern void func_020462cc(void *, void *, s32);
extern void func_0203b594(s32, s32, void *, void *, s32);
extern void func_0203b6b0(s32, s32, void *);
extern void func_0204681c(void *);
extern void func_0204db94(s32, s32);

void func_0204e3dc(s32 arg0, s32 arg1, u8 arg2, u8 arg3, u16 *arg4, s32 arg5) {
    u8 *e;
    s32 r6;
    u8 *obj;
    s32 r4;
    s32 g;
    s32 n;
    s32 k;
    u16 *p;
    u16 sum;

    r4                 = arg1 * 0x18;
    e                  = &data_0211e71c + r4;
    data_0213d87c.buf  = func_02046880(0x400, 3, 4);
    r6                 = *(s32 *) (&data_0213d8cc + r4);
    obj                = (u8 *) (*(s32 *) (&data_0213d86c + arg1 * 4) + r6 * 32);
    *(s32 *) (obj + 8) = *(s32 *) (&data_0213d8d0 + r4) + 1;
    obj[0xC]           = arg2;
    obj[0xD]           = arg3;
    *(s32 *) (obj + 4) = *(s32 *) (e + 4);
    func_0210a69c(obj, e);

    p   = arg4;
    n   = (*(s32 *) (e + 0xC) - 0x14) >> 1;
    k   = n - 1;
    sum = 0;
    if (n != 0) {
        do {
            sum = (u16) (sum + *p++);
        } while (k-- != 0);
    }
    *(u16 *) (obj + 0x10) = (u16) (0 - sum);
    obj[0x12]             = 0;
    *(u16 *) (obj + 0xE)  = 0;
    {
        enum {
            L14 = 0x14
        } len = L14;
        n     = len >> 1;
    }
    k   = n - 1;
    sum = 0;
    p   = (u16 *) obj;
    do {
        sum = (u16) (sum + *p++);
    } while (k-- != 0);
    *(u16 *) (obj + 0xE) = (u16) (0 - sum);

    g  = *(s32 *) (&data_0213d8c8 + r4);
    r4 = r6 * *(s32 *) (e + 0xC) + g;
    func_020462cc(data_0213d87c.buf, obj, 0x14);
    func_020462cc((u8 *) data_0213d87c.buf + 0x14, arg4, 0xEC);
    if (arg5 != 0) {
        data_0213d87c.d = arg5;
        data_0213d87c.a = r4 + 0x100;
        data_0213d87c.b = *(s32 *) (e + 0xC) - 0x100;
        data_0213d87c.c = (s32) arg4 + 0xEC;
        func_0203b594(r4, 0x100, data_0213d87c.buf, (void *) func_0204da58, 0);
    } else {
        func_0203b6b0(r4, 0x100, data_0213d87c.buf);
        func_0204681c(data_0213d87c.buf);
        g = *(s32 *) (e + 0xC) - 0x100;
        if (g > 0) {
            func_0203b6b0(r4 + 0x100, g, (u8 *) arg4 + 0xEC);
        }
    }
    obj[0x1F] = 1;
    obj[0x1E] = 1;
    obj[0x1D] = 1;
    func_0204db94(arg0, arg1);
}
