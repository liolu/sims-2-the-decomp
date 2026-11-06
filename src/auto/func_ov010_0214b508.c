/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_0204688c(s32, s32, s32);
void func_0201716c(void *, u16);
void func_02046384(void *, s32, s32);
extern u8 data_ov010_02152e74;
extern u8 data_ov010_02152b6c;
typedef struct {
    u16 a;
    u16 b;
    u16 c;
    u16 d;
} H4;
typedef struct {
    s32 x;
    s32 y;
} Vec;
extern H4 data_ov010_02152dc8;
extern u8 func_ov010_02149d18;

void *func_ov010_0214b508(s32 arg0, s32 arg1) {
    u8 *p;
    u8 *q;
    s32 r4;
    s32 a1[2];
    s32 b1[2];
    H4 hh;
    s32 a2[2];
    s32 b2[2];
    u8 *o;
    H4 *ph;
    s32 v;
    s32 t;

    p = func_0204688c(0xa4, 3, 4);
    if (p != NULL) {
        func_0201716c(p, (u16) (arg1 + 0x2b));
        *(void **) (p + 0x0) = &data_ov010_02152e74;
        *(s32 *) (p + 0x74)  = 0;
        *(s32 *) (p + 0x78)  = 0;
        *(s32 *) (p + 0x7c)  = 0;
        *(s32 *) (p + 0x88)  = 0;
        *(s32 *) (p + 0x8c)  = 0;
        *(s32 *) (p + 0x90)  = arg0;
        p[0x9c]              = 0;
        p[0x9d]              = 0;
        p[0x9e]              = 0;
        p[0x9f]              = 0;
        p[0xa0]              = 0;
        p[0xa1]              = 0;
        p[0xa2]              = 0;
        p[0xa3]              = 0;
        func_02046384(p + 0x80, 0, 8);
        *(s32 *) (p + 0x4) = *(s32 *) (p + 0x4) & ~1;
        *(u16 *) (p + 0xc) = 0x12;
    }
    *(s32 *) (p + 0x4)  = *(s32 *) (p + 0x4) | 0x200000;
    *(s32 *) (p + 0x14) = (*(s32 *) (p + 0x14) & ~0xc00) | 0xc00;
    t                   = (&data_ov010_02152b6c)[arg1];
    ((Vec *) &a1[0])->y = 0x89000;
    r4                  = (t + 8) << 12;
    ((Vec *) &a2[0])->y = 0x89000;
    ((Vec *) &a1[0])->x = r4;
    ((Vec *) &a2[0])->x = r4;
    *(s32 *) (p + 0x50) = r4;
    v                   = ((Vec *) &a2[0])->y;
    *(s32 *) (p + 0x54) = v;
    q                   = func_0204688c(0xa4, 3, 4);
    if (q != NULL) {
        func_0201716c(q, (u16) (arg1 + 0x2b));
        *(void **) (q + 0x0) = &data_ov010_02152e74;
        *(s32 *) (q + 0x74)  = 0;
        *(s32 *) (q + 0x78)  = 0;
        *(s32 *) (q + 0x7c)  = 0;
        *(s32 *) (q + 0x88)  = 0;
        *(s32 *) (q + 0x8c)  = 0;
        *(s32 *) (q + 0x90)  = arg0;
        q[0x9c]              = 0;
        q[0x9d]              = 0;
        q[0x9e]              = 0;
        q[0x9f]              = 0;
        q[0xa0]              = 0;
        q[0xa1]              = 0;
        q[0xa2]              = 0;
        q[0xa3]              = 0;
        func_02046384(q + 0x80, 0, 8);
        *(s32 *) (q + 0x4) = *(s32 *) (q + 0x4) & ~1;
        *(u16 *) (q + 0xc) = 0x12;
    }
    *(u8 **) (p + 0x74)                   = q;
    *(s32 *) (*(u8 **) (p + 0x74) + 0x14) = (*(s32 *) (*(u8 **) (p + 0x74) + 0x14) & ~0xc00) | 0x800;
    ((Vec *) &b1[0])->y                   = 0x89000;
    ((Vec *) &b2[0])->y                   = 0x89000;
    ((Vec *) &b1[0])->x                   = r4;
    ((Vec *) &b2[0])->x                   = r4;
    o                                     = *(u8 **) (p + 0x74);
    *(s32 *) (o + 0x50)                   = r4;
    *(s32 *) (o + 0x54)                   = ((Vec *) &b2[0])->y;
    o                                     = *(u8 **) (p + 0x74);
    *(s32 *) (o + 4) |= 0x200008;
    *(void **) (p + 0x7c) = &func_ov010_02149d18;
    hh                    = data_ov010_02152dc8;
    hh.a                  = *(s32 *) (p + 0x50) >> 12;
    hh.b                  = *(s32 *) (p + 0x54) >> 12;
    *(H4 *) (p + 0x94)    = hh;
    return p;
}
