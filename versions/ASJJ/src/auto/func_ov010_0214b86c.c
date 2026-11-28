/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *func_020468a0(s32, s32, s32);
extern void func_02017164(void *, s32);
extern void func_02046398(void *, s32, s32);
extern void func_02049b14(void *, s32);
extern void func_02016700(void *, s32);
extern void func_02016614(void *, s32, u16, s32);
extern u8 data_ov010_02152994;
extern s32 data_ov010_0215276c[];
extern u16 data_ov010_0215262c;
extern u8 func_ov010_0214b7a4;

typedef struct {
    s32 x;
    s32 y;
} Vec;

u8 *func_ov010_0214b86c(s32 arg0, u8 arg1) {
    s32 xa[2];
    s32 xb[2];
    u8 *o;
    s32 k;
    s32 v;
    s32 w;
    s32 z;

    o = (u8 *) func_020468a0(0xA4, 3, 4);
    if (o != 0) {
        func_02017164(o, 2);
        z                   = 0;
        *(u8 **) o          = &data_ov010_02152994;
        *(s32 *) (o + 0x74) = z;
        *(s32 *) (o + 0x78) = z;
        *(s32 *) (o + 0x7C) = z;
        *(s32 *) (o + 0x88) = z;
        *(s32 *) (o + 0x8C) = z;
        *(s32 *) (o + 0x90) = arg0;
        o[0x9C]             = z;
        o[0x9D]             = z;
        o[0x9E]             = z;
        o[0x9F]             = z;
        o[0xA0]             = z;
        o[0xA1]             = z;
        o[0xA2]             = z;
        o[0xA3]             = z;
        func_02046398(o + 0x80, 0, 8);
        *(s32 *) (o + 4)   = *(s32 *) (o + 4) & ~1;
        *(u16 *) (o + 0xC) = 0x12;
    }
    o[0x87]             = arg1;
    *(s32 *) (o + 0x14) = (*(s32 *) (o + 0x14) & ~0xC00) | 0x800;
    if (o[0x87] == 0) {
        func_02049b14(o, 8);
    } else {
        func_02049b14(o, 7);
    }
    v                   = (arg1 * 0xD + 0x84) << 12;
    k                   = 0xF000;
    ((Vec *) xa)->y     = v;
    ((Vec *) xb)->y     = v;
    ((Vec *) xa)->x     = k;
    ((Vec *) xb)->x     = k;
    *(s32 *) (o + 0x50) = k;
    *(s32 *) (o + 0x54) = ((Vec *) xb)->y;
    w                   = data_ov010_0215276c[arg1];
    func_02016700(o, w);
    func_02016614(o, w, data_ov010_0215262c, 0);
    *(s32 *) (o + 4)    = *(s32 *) (o + 4) | 0x200011;
    *(u8 **) (o + 0x78) = &func_ov010_0214b7a4;
    return o;
}
