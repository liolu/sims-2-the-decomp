/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_0204688c(s32, s32, s32);
void func_0201716c(void *, u16);
void func_02046384(void *, s32, s32);
extern u8 data_ov010_02152e74;
extern u8 data_ov010_02152c7c;
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
extern H4 data_ov010_02152dc0;
extern u8 func_ov010_02149b8c;

void *func_ov010_0214b754(s32 arg0, s32 arg1) {
    u8 *p;
    u8 *q;
    s32 r4;
    s32 fra[2];
    H4 hh;
    s32 frb[6];
    u8 *o;
    H4 *ph;
    s32 v;
    s32 t;

    p = func_0204688c(0xa4, 3, 4);
    if (p != NULL) {
        func_0201716c(p, (u16) (arg1 + 0x25));
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
    *(s32 *) (p + 0x14)   = (*(s32 *) (p + 0x14) & ~0xc00) | 0xc00;
    *(s32 *) (p + 0x4)    = *(s32 *) (p + 0x4) | 0x200008;
    t                     = (&data_ov010_02152c7c)[arg1 * 8];
    ((Vec *) &fra[0])->y  = 0x58000;
    r4                    = (t + 8) << 12;
    ((Vec *) &frb[2])->y  = 0x58000;
    ((Vec *) &fra[0])->x  = r4;
    ((Vec *) &frb[2])->x  = r4;
    *(s32 *) (p + 0x50)   = r4;
    v                     = ((Vec *) &frb[2])->y;
    *(s32 *) (p + 0x54)   = v;
    *(void **) (p + 0x7c) = &func_ov010_02149b8c;
    hh                    = data_ov010_02152dc0;
    hh.a                  = *(s32 *) (p + 0x50) >> 12;
    hh.b                  = *(s32 *) (p + 0x54) >> 12;
    *(H4 *) (p + 0x94)    = hh;
    q                     = func_0204688c(0xa4, 3, 4);
    if (q != NULL) {
        func_0201716c(q, (u16) (arg1 + 0x25));
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
    *(u8 **) (p + 0x74) = q;
    *(s32 *) (*(u8 **) (p + 0x74) + 4) |= 0x200000;
    *(s32 *) (*(u8 **) (p + 0x74) + 0x14) = (*(s32 *) (*(u8 **) (p + 0x74) + 0x14) & ~0xc00) | 0x800;
    ((Vec *) &frb[0])->y                  = 0x58000;
    ((Vec *) &frb[4])->y                  = 0x58000;
    ((Vec *) &frb[0])->x                  = r4;
    ((Vec *) &frb[4])->x                  = r4;
    o                                     = *(u8 **) (p + 0x74);
    *(s32 *) (o + 0x50)                   = r4;
    *(s32 *) (o + 0x54)                   = ((Vec *) &frb[4])->y;
    return p;
}
