/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
} V2;

extern void *func_02046814(s32, s32, s32);
extern void func_0201716c(void *, s32);
extern void func_0204630c(void *, s32, s32);
extern void func_02049a88(void *, s32);
extern void func_02016708(void *, void *, s32);
extern u8 data_ov010_02152d34[];
extern u8 data_ov010_02152b3c[];
extern u8 data_ov010_02152acc[];
extern void func_ov010_0214bf80();

void *func_ov010_0214bfdc(void *arg0, s32 arg1) {
    u8 *o;
    V2 a;
    V2 b;
    s32 t3;
    s32 v;
    s32 k;

    o = (u8 *) func_02046814(0xA4, 3, 4);
    if (o != NULL) {
        func_0201716c(o, 6);
        *(void **) o        = data_ov010_02152d34;
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
        func_0204630c(o + 0x80, 0, 8);
        *(s32 *) (o + 4) &= ~1;
        *(u16 *) (o + 0xC) = 0x12;
    }
    *(s32 *) (o + 0x14) = (*(s32 *) (o + 0x14) & ~0xC00) | 0x400;
    func_02049a88(o, 0xB);
    *(s32 *) (o + 4)    = *(s32 *) (o + 4) | 0x200011;
    a.y                 = 0x58000;
    a.x                 = (data_ov010_02152b3c[arg1 * 8] + 8) << 12;
    b                   = a;
    *(s32 *) (o + 0x50) = b.x;
    *(s32 *) (o + 0x54) = b.y;
    func_02016708(o, data_ov010_02152acc, b.y);
    *(void **) (o + 0x78) = (void *) func_ov010_0214bf80;
    *(u16 *) (o + 0x84)   = 0x28;
    o[0x9C]               = (u8) arg1;
    return o;
}
