/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02050b30(s32 a, s32 b, s32 c);
void func_02051a50(s32 a, s32 b, s32 c);
void *func_02052258(s32 a);
s32 func_02051338(s32 a, s32 b, s32 c, void *d, s32 e);
s32 func_0205166c(s32 a, s32 b, s32 c, s32 d, void *e, s32 f);
void func_0203f144(s32 a, s32 b, s32 c);
void func_02016708(void *a, void *b);
extern u8 data_0211f8f0;

void func_0206c7a4(u8 *arg0, s32 arg1) {
    u8 fr[0x1C];
    s32 r7;
    s32 r6;
    void *ptr;
    void *ptr2;
    void *ptr3;
    u8 *o;
    u8 *p;

    r7 = arg1 + 0x482;
    r6 = arg1 + 0x34D;
    func_02050b30(4, 1, 0x1B);
    func_02050b30(4, 2, 0x1B);
    func_02050b30(4, 4, 0x1B);
    func_02050b30(4, 5, 0x1B);
    func_02050b30(4, 6, 0x1F);
    func_02050b30(4, 7, 0x1F);
    func_02050b30(4, 8, 0x1F);
    func_02051a50(3, 0, 0);

    if (r7 == 0) {
        ptr                    = func_02052258(0x72C);
        *(s32 *) (arg0 + 0x78) = func_02051338(1, 0x80, 0xB, ptr, 1);
    } else {
        ptr                    = func_02052258(0x72C);
        *(s32 *) (arg0 + 0x78) = func_02051338(1, 0x80, 0xB, ptr, 1);
        ptr2                   = func_02052258(r7);
        *(s32 *) (arg0 + 0x78) = func_02051338(*(s32 *) (arg0 + 0x78), 0x30, 0x22, ptr2, 0);
    }

    func_02051a50(0, 0, -1);
    ptr3                   = func_02052258(r6);
    *(s32 *) (arg0 + 0x78) = func_0205166c(*(s32 *) (arg0 + 0x78), 0x30, 0x30, 0xC7, ptr3, 0);

    *(s32 *) (fr + 0x04)                     = 0x1000;
    *(s32 *) (fr + 0x14)                     = 0x1000;
    o                                        = arg0 + arg1 * 4;
    o                                        = *(u8 **) (o + 0x9C);
    *(s32 *) (fr + 0x00)                     = *(s32 *) (o + 0x50) - 0x1000;
    *(s32 *) (fr + 0x0C)                     = *(s32 *) (fr + 0x00);
    *(s32 *) (*(u8 **) (arg0 + 0x34) + 0x50) = *(s32 *) (fr + 0x00);
    *(s32 *) (fr + 0x08)                     = 0xAA000;
    *(s32 *) (fr + 0x10)                     = 0xAA000;
    *(s32 *) (*(u8 **) (arg0 + 0x34) + 0x54) = 0xAA000;
    p                                        = *(u8 **) (arg0 + 0x30);
    *(s32 *) (p + 0x04)                      = *(s32 *) (p + 0x04) & ~1;
    p                                        = *(u8 **) (arg0 + 0x34);
    *(s32 *) (p + 0x04)                      = *(s32 *) (p + 0x04) | 1;
    func_0203f144(0x8A5, 0x50, 0x10);

    *(s32 *) (arg0 + 0x74) = -1;
    p                      = *(u8 **) (arg0 + 0x38);
    if (*(u8 *) (p + 0x94) != 0) {
        *(s32 *) (p + 0x14) = (*(s32 *) (p + 0x14) & ~0xF000) | 0x1000;
        func_02016708(p, (u8 *) &data_0211f8f0 + ((*(u16 *) (p + 0x0A) << 1) + 2) * 8);
        *(u8 *) (p + 0x94) = 0;
    }
    p = *(u8 **) (arg0 + 0x3C);
    if (*(u8 *) (p + 0x94) == 0) {
        return;
    }
    *(s32 *) (p + 0x14) = (*(s32 *) (p + 0x14) & ~0xF000) | 0x1000;
    func_02016708(p, (u8 *) &data_0211f8f0 + ((*(u16 *) (p + 0x0A) << 1) + 2) * 8);
    *(u8 *) (p + 0x94) = 0;
}
