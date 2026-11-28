/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 v;
} U16One;

extern s32 data_027e0000;
extern u8 data_027e0014;
extern void *data_0213996c;
extern void *data_0213e0a8;

void func_02001944(s32);
s32 func_020524a8(s32);
s32 func_02051a84(s32, void *);
void func_020462e0(void *, s32, s32);
void func_0203f300(s32, s32, s32);
void func_020505cc(s32, s32, s32);
void func_0203f220(s32, s32, s32);
void func_02050534(void);
void func_020503e4(void);
void func_02051dbc(U16One);
void func_02051b54(s32, s32, s32);
u8 func_0203d07c(s32);
u16 func_0203d164(s32);
void func_0203d190(s32, U16One);
void func_0203d0d8(s32);
void func_0203d0ac(s32);
void func_02057c24(void *);
void *func_02045630(s32);
void func_0203c460(s32, void *, void *);
void func_0203c368(s32, s32);
void func_02001914(void);
void func_0200fb30(s32, s32, s32);
void func_020d54a8(s32);

void func_0205892c(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5) {
    u8 *a = (u8 *) arg0;
    u16 sp0;
    s32 flag;
    u32 hv;
    void *p;

    func_02001944(1);
    *(s32 *) (a + 0x10)  = arg3;
    *(s32 *) (a + 0x14)  = arg4;
    *(s32 *) (a + 0x550) = 0xA0;
    *(s32 *) (a + 0x534) = func_02051a84(func_020524a8(arg1), a + 0x34);
    if (arg2 < 0) {
        *(s32 *) (a + 0x538) = 0;
    } else {
        *(s32 *) (a + 0x538) = func_02051a84(func_020524a8(arg2), a + 0x434);
    }
    if (*(u8 *) (a + 0xDA5) != 0) {
        func_020462e0(a + 0xD58, (data_027e0000 << 0xA) + 0x05000000 + (*(s32 *) (a + 0xDA0) << 5), 0x20);
    }
    func_0203f300(0x21E8, *(s32 *) (a + 0xDA0) << 4, 0x10);
    func_020505cc(0x20, 0, 0);
    func_0203f220((data_027e0000 << 0xA) + 0x05000000, *(s32 *) (a + 0xDA0) << 4, 4);
    func_02050534();
    func_020503e4();
    func_02051dbc(*(U16One *) (a + 6));
    func_02051b54(3, 0, -1);
    *(u8 *) (a + 0x1A) = func_0203d07c(0);
    sp0                = func_0203d164(0);
    func_0203d190(*(s32 *) (a + 0xD90), *(U16One *) &sp0);
    if (*(u8 *) (a + 0x1A) != 0) {
        func_0203d0d8(*(s32 *) (a + 0xD90));
    } else {
        func_0203d0ac(*(s32 *) (a + 0xD90));
    }
    func_0203d190(0, *(U16One *) (a + 6));
    func_0203d0ac(0);
    func_02057c24(arg0);
    p = func_02045630((s32) ((u8 *) &data_027e0014 + data_027e0000 * 0x34));
    while (p != 0) {
        u8 *q            = *(u8 **) p;
        *(u32 *) (q + 4) = *(u32 *) (q + 4) | 0x2000000;
        p                = *(void **) ((u8 *) p + 4);
    }
    if (arg5 != 0) {
        *(s32 *) (a + 0x8)  = 1;
        *(s32 *) (a + 0x1C) = 0;
        *(s32 *) (a + 0x20) = 8;
    } else {
        *(s32 *) (a + 0x8)  = 2;
        *(s32 *) (a + 0x1C) = 0;
        *(s32 *) (a + 0x20) = 0;
    }
    *(u8 *) (a + 0xD8C) = 0;
    *(u8 *) (a + 0x19)  = 0;
    hv                  = *(u16 *) ((u8 *) data_0213996c + 2);
    flag                = 0;
    if (hv & 1) {
        flag = 1;
    }
    if (flag == 0) {
        flag = (hv & 2) != 0;
    }
    *(u8 *) (a + 0xD8F) = flag == 0;
    *(u8 *) (a + 0xD8E) = 0;
    if (*(u8 *) (a + 0xDA4) != 0) {
        *(volatile u16 *) 0x04001050 = 0xDE;
        *(volatile u16 *) 0x04001054 = 0;
    }
    func_0203c460(0, a + 0xD78, a + 0xD7C);
    func_0203c368(0, (-(0x80 - (*(s32 *) (a + 0x550) >> 1))) << 16);
    if (arg3 == 3) {
        *(s32 *) (a + 0x30) = 0x5A;
    } else {
        *(s32 *) (a + 0x30) = 0;
    }
    func_02001914();
    *(u16 *) (a + 0xD80) = *(volatile u16 *) 0x04001048;
    *(u16 *) (a + 0xD82) = *(volatile u16 *) 0x0400104A;
    *(u16 *) (a + 0xD84) = *(u16 *) (a + 0xD80) | 0x101;
    if ((*(u16 *) (a + 0xD80) & 1) == 0) {
        *(u16 *) (a + 0xD84) = *(u16 *) (a + 0xD84) & ~(1 << *(s32 *) (a + 0xD90));
    }
    if ((*(u16 *) (a + 0xD80) & 0x100) == 0) {
        *(u16 *) (a + 0xD84) = *(u16 *) (a + 0xD84) & ~(1 << (*(s32 *) (a + 0xD90) + 8));
    }
    *(u16 *) (a + 0xD86) = *(u16 *) (a + 0xD82) | 0x101;
    if ((*(u16 *) (a + 0xD82) & 1) == 0) {
        *(u16 *) (a + 0xD86) = *(u16 *) (a + 0xD86) & ~(1 << *(s32 *) (a + 0xD90));
    }
    if ((*(u16 *) (a + 0xD82) & 0x100) == 0) {
        *(u16 *) (a + 0xD86) = *(u16 *) (a + 0xD86) & ~(1 << (*(s32 *) (a + 0xD90) + 8));
    }
    if (*(s32 *) ((u8 *) data_0213e0a8 + 0xF8) != 0) {
        func_0200fb30(*(s32 *) ((u8 *) data_0213e0a8 + 0xF8), 1, 0);
    }
    func_020d54a8(0x163);
}
