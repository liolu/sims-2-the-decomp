/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_04000060;
extern u8 data_04000050;
extern u8 data_04000540;
extern u8 data_04000580;
extern u8 data_04001000;
extern u8 data_027e11a0;
extern u8 data_027e1ec8;
typedef struct {
    u32 a[63];
    u32 f;
} S1E;
extern S1E data_027e1e0c;
extern u8 data_027e1148;
extern u8 data_027e1154;

void func_020f0c68(void);
void func_020f0b68(s32 a);
void func_020f7c6c(void *a);
void func_020f6540(void);
void func_020f0c48(void *a);
void func_020f9968(s32 a);
void func_020ed094(void *a, s32 b);
void _Z24EnableSpecificInterruptsj(s32 a);
void func_020bc9f8(void *a, s32 b, s32 c);
void func_020f507c(void *a);
void func_020eeb98(void *a);
void func_020eeb70(void *a);
void func_020eeb38(s32 a, s32 b, s32 c, s32 d);
void func_020eeb24(s32 a, s32 b);
void func_020f7ea8(s32 a, s32 b, s32 c, s32 d, s32 e);

void func_020bcd60(u8 *arg0) {
    u8 fr[0x204];
    u8 i;
    u8 *p;

    func_020f0c68();
    func_020f0b68(1);
    p = fr;
    i = 0;
    do {
        p[i] = (u8) (i * 2 + 1);
        i    = i + 1;
    } while (i < 0x7f);
    p[0x7f] = 0xff;
    func_020f7c6c(fr);

    {
        volatile u16 *r60            = (volatile u16 *) 0x04000060;
        *r60                         = *r60 & 0xFFFFCFFD;
        *r60                         = (*r60 & ~0x3000) | 0x10;
        *(volatile u16 *) 0x04000050 = 0;
        *(volatile u32 *) 0x04000540 = 3;
        *r60                         = *r60 & 0xCFFB;
        *r60                         = (*r60 & ~0x3000) | 0x8;
        *(volatile u32 *) 0x04000580 = 0xBFFF0000;
    }
    func_020f6540();
    *(volatile u32 *) 0x04001000 = *(volatile u32 *) 0x04001000 | 0x10000;
    func_020f0c48(&data_027e11a0);
    func_020f9968(1);
    func_020ed094(arg0 + 0x600, 0x18);
    _Z24EnableSpecificInterruptsj(1);
    func_020bc9f8(arg0, 4, 0);
    func_020f507c(&data_027e1ec8);
    data_027e1e0c.f = data_027e1e0c.f & 0xFFFFFF5B;
    func_020eeb98(&data_027e1148);
    func_020eeb70(&data_027e1154);
    func_020eeb38(0, 0, 0xFFFFF001, 0);
    func_020eeb24(0, 0x7C00);
    func_020eeb38(1, 0, 0, 0xFFF);
    func_020eeb24(1, 0x1F);
    func_020eeb38(2, -0xB50, 0, -0xB50);
    func_020eeb24(2, 0x3E0);
    func_020eeb38(3, 0xB50, 0, -0xB50);
    func_020eeb24(3, 0x13FF);
    func_020f7ea8(0, 0x1F, 0x7FFF, 0x3F, 1);
}
