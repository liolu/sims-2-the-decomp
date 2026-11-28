/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef unsigned char u8;

s32 func_02016614();
s32 func_02016700();
void func_02017164(u8 *, s32);
void func_02046398(u8 *, s32, s32);
u8 *func_020468a0(s32, s32, s32);
void func_02049b14(u8 *, s32);
extern u8 data_ov010_021526bc[];
extern u16 data_ov010_02152754;
extern u8 data_ov010_02152760[];
extern u8 data_ov010_02152994[];
extern u8 func_ov010_0214bfc4[];

u8 *func_ov010_0214cb64(u8 *arg0) {
    volatile s32 tmp[4];
    s32 temp_r2;
    u8 *p;

    p = func_020468a0(0xA4, 3, 4);
    if (p != 0) {
        func_02017164(p, 1);
        *(u8 **) (p + 0)    = data_ov010_02152994;
        *(s32 *) (p + 0x74) = 0;
        *(s32 *) (p + 0x78) = 0;
        *(s32 *) (p + 0x7C) = 0;
        *(s32 *) (p + 0x88) = 0;
        *(s32 *) (p + 0x8C) = 0;
        *(u8 **) (p + 0x90) = arg0;
        p[0x9C]             = 0;
        p[0x9D]             = 0;
        p[0x9E]             = 0;
        p[0x9F]             = 0;
        p[0xA0]             = 0;
        p[0xA1]             = 0;
        p[0xA2]             = 0;
        p[0xA3]             = 0;
        func_02046398(p + 0x80, 0, 8);
        *(s32 *) (p + 4)   = *(s32 *) (p + 4) & ~1;
        *(s16 *) (p + 0xC) = 0x12;
    }
    *(s32 *) (p + 0x14) = *(s32 *) (p + 0x14) & ~0xC00;
    p[0x9C]             = 6;
    func_02049b14(p, 0xD);
    tmp[1]              = 0x81000;
    tmp[3]              = 0x81000;
    temp_r2             = (data_ov010_02152760[p[0x9C]] + 8) << 0xC;
    tmp[0]              = temp_r2;
    tmp[2]              = temp_r2;
    *(s32 *) (p + 0x50) = temp_r2;
    *(s32 *) (p + 0x54) = tmp[3];
    func_02016700(p, data_ov010_021526bc);
    func_02016614(p, data_ov010_021526bc, data_ov010_02152754, 0);
    *(s32 *) (p + 4)    = *(s32 *) (p + 4) | 0x200010;
    *(u8 **) (p + 0x78) = func_ov010_0214bfc4;
    return p;
}
