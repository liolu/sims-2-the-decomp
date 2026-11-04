/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_027e0000;
extern s32 data_027e0004;
extern u8 data_027e0014;
extern s32 data_02139fa4;
extern void *data_0213e434;
extern void *data_0213e580;

void func_02064180(void *a);
void func_020269b4(void *a);
void *func_0204561c(void *a);
void func_020117e8(void *a, s32 b, void *c, s32 d);
void func_020f7f94(s32 a, s32 b, s32 c, s32 d);
s8 func_0203d048(s32 a);
void func_0203d078(s32 a);
void func_02085df8(void *a, s32 b);
void func_0205871c(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_02018acc(void *a);

void func_02066a44(u8 *arg0) {
    u8 fr[0x4C];
    u8 *r5;
    u8 *p;
    u8 *it;

    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    func_02064180(data_0213e434);
    r5 = (u8 *) &data_027e0014 + data_027e0000 * 0x34;
    func_020269b4(fr);
    p = func_0204561c(r5);
    while (p != NULL) {
        it = *(u8 **) p;
        if ((*(volatile s32 *) (it + 4) & 1) == 1) {
            *(volatile s32 *) (it + 4) = *(volatile s32 *) (it + 4) | 0x2000000;
            *(volatile s32 *) (it + 4) = *(volatile s32 *) (it + 4) & ~1;
        }
        p = *(u8 **) (p + 4);
    }

    *(s32 *) (*(u8 **) ((u8 *) data_0213e580 + 0xF8) + 4) &= ~0x2000000;
    *(s32 *) (*(u8 **) ((u8 *) data_0213e580 + 0xF8) + 4) |= 1;
    arg0[0x10B]          = (*(u16 *) (*(u8 **) ((u8 *) data_0213e580 + 0xF8) + 0x1FE) == 0xAC);
    *(u16 *) (fr + 0x30) = 0xAC;
    *(u16 *) (fr + 0x32) = 0xAD;
    *(u16 *) (fr + 0x1C) = 0;
    func_020117e8(*(void **) ((u8 *) data_0213e580 + 0xF8), 8, fr, 0);
    func_020f7f94(0, 0, 4, 0);
    arg0[0x10A] = (u8) func_0203d048(3);
    func_0203d078(3);
    if (*(s32 *) ((u8 *) data_0213e434 + 0x44C0) > 0) {
        func_02085df8((u8 *) data_0213e580 + 0x100, 0x22);
    }
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    *(s32 *) (arg0 + 0x68) = 3;
    data_027e0004          = data_027e0004 | 8;
    func_0205871c(data_02139fa4, 0x17, 0x16, 0, 0, 1);
    func_02018acc(fr);
}
