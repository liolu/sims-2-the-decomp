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

void func_020f0b2c(void);
void func_020f0a2c(s32 a);
void func_020f7b30(void *a);
void func_020f6404(void);
void func_020f0b0c(void *a);
void func_020f982c(s32 a);
void func_020ecf58(void *a, s32 b);
void func_020f9874(s32 a);
void func_020bc930(void *a, s32 b, s32 c);
void func_020f4f40(void *a);
void func_020eea5c(void *a);
void func_020eea34(void *a);
void func_020ee9fc(s32 a, s32 b, s32 c, s32 d);
void func_020ee9e8(s32 a, s32 b);
void func_020f7d6c(s32 a, s32 b, s32 c, s32 d, s32 e);

void func_020bcc98(u8 *arg0) {
    u8 fr[0x204];
    u8 i;
    u8 *p;

    func_020f0b2c();
    func_020f0a2c(1);
    p = fr;
    i = 0;
    do {
        p[i] = (u8) (i * 2 + 1);
        i    = i + 1;
    } while (i < 0x7f);
    p[0x7f] = 0xff;
    func_020f7b30(fr);

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
    func_020f6404();
    *(volatile u32 *) 0x04001000 = *(volatile u32 *) 0x04001000 | 0x10000;
    func_020f0b0c(&data_027e11a0);
    func_020f982c(1);
    func_020ecf58(arg0 + 0x600, 0x18);
    func_020f9874(1);
    func_020bc930(arg0, 4, 0);
    func_020f4f40(&data_027e1ec8);
    data_027e1e0c.f = data_027e1e0c.f & 0xFFFFFF5B;
    func_020eea5c(&data_027e1148);
    func_020eea34(&data_027e1154);
    func_020ee9fc(0, 0, 0xFFFFF001, 0);
    func_020ee9e8(0, 0x7C00);
    func_020ee9fc(1, 0, 0, 0xFFF);
    func_020ee9e8(1, 0x1F);
    func_020ee9fc(2, -0xB50, 0, -0xB50);
    func_020ee9e8(2, 0x3E0);
    func_020ee9fc(3, 0xB50, 0, -0xB50);
    func_020ee9e8(3, 0x13FF);
    func_020f7d6c(0, 0x1F, 0x7FFF, 0x3F, 1);
}
