/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
} V2;

extern void *func_020468a0(s32, s32, s32);
extern void func_02017164(void *, s32);
extern void func_02046398(void *, s32, s32);
extern void func_02049b14(void *, s32);
extern void func_02016700(void *, void *, s32);
extern u8 data_ov010_02152994[];
extern u8 data_ov010_0215279c[];
extern u8 data_ov010_0215272c[];
extern void func_ov010_0214bbe0();

void *func_ov010_0214bc3c(void *arg0, s32 arg1) {
    u8 *o;
    V2 a;
    V2 b;
    s32 t3;
    s32 v;
    s32 k;

    o = (u8 *) func_020468a0(0xA4, 3, 4);
    if (o != NULL) {
        func_02017164(o, 6);
        *(void **) o        = data_ov010_02152994;
        *(s32 *) (o + 0x74) = 0;
        *(s32 *) (o + 0x78) = 0;
        *(s32 *) (o + 0x7C) = 0;
        *(s32 *) (o + 0x88) = 0;
        *(s32 *) (o + 0x8C) = 0;
        *(s32 *) (o + 0x90) = (s32) arg0;
        o[0x9C]             = 0;
        o[0x9D]             = 0;
        o[0x9E]             = 0;
        o[0x9F]             = 0;
        o[0xA0]             = 0;
        o[0xA1]             = 0;
        o[0xA2]             = 0;
        o[0xA3]             = 0;
        func_02046398(o + 0x80, 0, 8);
        *(s32 *) (o + 4) &= ~1;
        *(u16 *) (o + 0xC) = 0x12;
    }
    *(s32 *) (o + 0x14) = (*(s32 *) (o + 0x14) & ~0xC00) | 0x400;
    func_02049b14(o, 0xB);
    *(s32 *) (o + 4)    = *(s32 *) (o + 4) | 0x200011;
    a.y                 = 0x58000;
    a.x                 = (data_ov010_0215279c[arg1 * 8] + 8) << 12;
    b                   = a;
    *(s32 *) (o + 0x50) = b.x;
    *(s32 *) (o + 0x54) = b.y;
    func_02016700(o, data_ov010_0215272c, b.y);
    *(void **) (o + 0x78) = (void *) func_ov010_0214bbe0;
    *(u16 *) (o + 0x84)   = 0x28;
    o[0x9C]               = (u8) arg1;
    return o;
}
