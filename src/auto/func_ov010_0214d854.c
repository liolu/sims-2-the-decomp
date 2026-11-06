/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    s32 x;
    s32 y;
} Vec;

void *func_0204688c(s32 a, s32 b, s32 c);
void func_0201716c(void *o, s32 v);
void func_02046384(void *p, s32 v, s32 n);
void func_02049b00(void *o, s32 v);
void func_02016708(void *o, void *d, ...);
extern u8 data_ov010_02152e74;
extern u8 data_ov010_02152c2c;
extern u8 data_ov010_02152b84;
extern u8 func_ov010_0214d18c;

void *func_ov010_0214d854(void *arg0) {
    u8 *r4;
    u8 *r6;
    u8 *obj;
    s32 a1[2];
    s32 b1[2];
    s32 a2[2];
    s32 b2[2];
    s32 v;
    s32 w;
    s32 x;

    r4 = func_0204688c(0xa4, 3, 4);
    if (r4 != 0) {
        func_0201716c(r4, 0);
        *(u32 *) (r4 + 0)    = (u32) &data_ov010_02152e74;
        *(u32 *) (r4 + 0x74) = 0;
        *(u32 *) (r4 + 0x78) = 0;
        *(u32 *) (r4 + 0x7c) = 0;
        *(u32 *) (r4 + 0x88) = 0;
        *(u32 *) (r4 + 0x8c) = 0;
        *(u32 *) (r4 + 0x90) = (u32) arg0;
        r4[0x9c]             = 0;
        r4[0x9d]             = 0;
        r4[0x9e]             = 0;
        r4[0x9f]             = 0;
        r4[0xa0]             = 0;
        r4[0xa1]             = 0;
        r4[0xa2]             = 0;
        r4[0xa3]             = 0;
        func_02046384(r4 + 0x80, 0, 8);
        *(u32 *) (r4 + 4) &= ~1;
        *(u16 *) (r4 + 0xc) = 0x12;
    }
    *(u32 *) (r4 + 0x14) = (*(u32 *) (r4 + 0x14) & ~0xc00) | 0x800;
    func_02049b00(r4, 0);
    *(u32 *) (r4 + 4) |= 0x200001;
    x                    = 0x1e000;
    w                    = 0xf000;
    ((Vec *) a1)->y      = x;
    ((Vec *) a2)->y      = x;
    ((Vec *) a1)->x      = w;
    ((Vec *) a2)->x      = w;
    *(u32 *) (r4 + 0x50) = w;
    v                    = ((Vec *) a2)->y;
    *(u32 *) (r4 + 0x54) = v;
    func_02016708(r4, &data_ov010_02152c2c, v);
    *(u32 *) (r4 + 0x78) = (u32) &func_ov010_0214d18c;
    r6                   = func_0204688c(0xa4, 3, 4);
    if (r6 != 0) {
        func_0201716c(r6, 0);
        *(u32 *) (r6 + 0)    = (u32) &data_ov010_02152e74;
        *(u32 *) (r6 + 0x74) = 0;
        *(u32 *) (r6 + 0x78) = 0;
        *(u32 *) (r6 + 0x7c) = 0;
        *(u32 *) (r6 + 0x88) = 0;
        *(u32 *) (r6 + 0x8c) = 0;
        *(u32 *) (r6 + 0x90) = (u32) arg0;
        r6[0x9c]             = 0;
        r6[0x9d]             = 0;
        r6[0x9e]             = 0;
        r6[0x9f]             = 0;
        r6[0xa0]             = 0;
        r6[0xa1]             = 0;
        r6[0xa2]             = 0;
        r6[0xa3]             = 0;
        func_02046384(r6 + 0x80, 0, 8);
        *(u32 *) (r6 + 4) &= ~1;
        *(u16 *) (r6 + 0xc) = 0x12;
    }
    *(u32 *) (r4 + 0x74) = (u32) r6;
    *(u32 *) (r4 + 4) |= 0x200000;
    obj                   = *(u8 **) (r4 + 0x74);
    *(u32 *) (obj + 0x14) = (*(u32 *) (obj + 0x14) & ~0xc00) | 0x400;
    func_02049b00(*(u8 **) (r4 + 0x74), 0);
    x                     = 0x1e000;
    w                     = 0xf000;
    ((Vec *) b1)->y       = x;
    ((Vec *) b2)->y       = x;
    ((Vec *) b1)->x       = w;
    ((Vec *) b2)->x       = w;
    obj                   = *(u8 **) (r4 + 0x74);
    *(u32 *) (obj + 0x50) = w;
    *(u32 *) (obj + 0x54) = ((Vec *) b2)->y;
    func_02016708(*(u8 **) (r4 + 0x74), &data_ov010_02152b84);
    return r4;
}
