/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_0201f164(void *, void *);
extern void func_0201f134(void *, void *);
extern void func_0201f128(void *, void *);
extern void func_020117e8(void *, s32, void *, void *);
extern void func_02018acc(void *);

s32 func_0201ef68(void *arg0, void *arg1) {
    u8 fr[0x70];
    u8 *o;
    u8 *src;
    u8 *L;
    u8 *vec;
    u8 *obj;
    u8 *t;
    u16 h;
    u16 h2;
    s32 t1;
    s32 t2;
    s32 t3;

    o   = (u8 *) arg0;
    src = (u8 *) arg1;
    L   = fr + 0x14;
    func_0201f164(L, src);
    func_0201f134(fr + 0x24, src + 0x10);
    func_0201f128(L + 0x1c, src + 0x1c);
    func_0201f128(L + 0x20, src + 0x20);
    *(u8 *) (L + 0x24)   = src[0x24];
    *(u8 *) (L + 0x25)   = src[0x25];
    *(u8 *) (L + 0x26)   = src[0x26];
    *(u8 *) (L + 0x27)   = src[0x27];
    *(u8 *) (L + 0x28)   = src[0x28];
    *(u8 *) (L + 0x29)   = src[0x29];
    *(u8 *) (L + 0x2a)   = *(s8 *) (src + 0x2a);
    *(s32 *) (L + 0x2c)  = *(s32 *) (src + 0x2c);
    *(s32 *) (L + 0x30)  = *(s32 *) (src + 0x30);
    *(u8 *) (L + 0x34)   = src[0x34];
    *(u8 *) (L + 0x35)   = *(s8 *) (src + 0x35);
    *(u16 *) (L + 0x36)  = *(u16 *) (src + 0x36);
    *(u16 *) (L + 0x38)  = *(u16 *) (src + 0x38);
    *(u16 *) (L + 0x3a)  = *(u16 *) (src + 0x3a);
    *(u16 *) (L + 0x3c)  = *(u16 *) (src + 0x3c);
    *(u16 *) (L + 0x3e)  = *(u16 *) (src + 0x3e);
    *(u16 *) (L + 0x40)  = *(u16 *) (src + 0x40);
    *(s32 *) (L + 0x44)  = *(s32 *) (src + 0x44);
    h                    = *(u16 *) (src + 0x48);
    h2                   = *(u16 *) (src + 0x4a);
    *(u16 *) (L + 0x48)  = h;
    *(u16 *) (L + 0x4a)  = h2;
    *(u16 *) (L + 0x4c)  = *(u16 *) (src + 0x4c);
    *(u16 *) (L + 0x4e)  = *(u16 *) (src + 0x4e);
    *(u16 *) (L + 0x50)  = *(u16 *) (src + 0x50);
    *(u16 *) (L + 0x52)  = *(u16 *) (src + 0x52);
    *(u16 *) (L + 0x54)  = *(u16 *) (src + 0x54);
    *(u8 *) (L + 0x56)   = src[0x56];
    *(u8 *) (L + 0x57)   = src[0x57];
    obj                  = *(u8 **) (o + 0x44);
    t1                   = *(s32 *) (obj + 0x78);
    vec                  = obj + 0x78;
    *(s32 *) (fr + 0x8)  = t1;
    *(s32 *) (fr + 0x24) = t1;
    t2                   = *(s32 *) (vec + 4);
    *(s32 *) (fr + 0xc)  = t2;
    *(s32 *) (fr + 0x28) = t2;
    t3                   = *(s32 *) (vec + 8);
    *(s32 *) (fr + 0x10) = t3;
    *(s32 *) (fr + 0x2c) = t3;
    *(s32 *) (fr + 0x0)  = 0;
    *(s32 *) (fr + 0x4)  = 0;
    *(s32 *) (fr + 0x30) = 0;
    *(u16 *) (fr + 0x4e) = 0;
    *(u16 *) (fr + 0x4c) = 0xc8;
    h                    = *(u16 *) (*(u8 **) (o + 0x44) + 0xa);
    if (h >= 0xd1 && h <= 0xe8) {
        t = *(u8 **) (o + 0x4);
        if (*(u16 *) (t + 0xa) == 0xe) {
            fr[0x38] = 1;
        }
    }
    func_020117e8(*(u8 **) (o + 0x4), 0x14, fr + 0x14, o);
    o[0x34] = 1;
    func_02018acc(fr + 0x14);
    return 0;
}
