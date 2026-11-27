/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213e6f8[];
extern u8 data_0213e434[];
extern u8 data_0212558c[];
extern u8 data_021424e0[];
extern u8 data_021424d4[];
extern u8 func_020a7850[];

u8 *func_0204688c();
void func_02046384(void *, s32, s32);
void func_0203d6ac(void *);
void func_020d4fe8();
void func_0203d5f8(void *, s32, s32);
u8 *func_020462cc(u8 *, u8 *, u32);
s32 func_0203d3e0(void *, s32);
s32 func_02046880(s32, s32, s32);
void func_020abad4(void *, s32, void *);
void func_0203d5c4(void *);
void func_020d5268(s32);
void func_020d62f0();
void func_020a93d8(void *, s32);
void func_020d4d08(s32);
void func_020d62a0();
void func_0203d674(void *);
void func_020d05c8(s32);

typedef struct {
    s32 a, b, c, d;
} FRS;

void func_020a7e8c(u8 *arg0) {
    FRS f;
    s32 idx;
    u8 *r5;
    u8 *r4;
    s32 r6;
    s32 i;

    idx = (s32) arg0;
    func_0203d6ac(&f);
    func_020d4fe8();
    r5                           = func_0204688c(0xc4, 3, 4);
    *(u8 **) (data_0213e6f8 + 8) = r5;
    func_02046384(r5, 0, 0xc4);
    r5[0xc0] = 2;
    func_0203d5f8(&f, 0x200, 3);
    func_020462cc((u8 *) f.c, *(u8 **) data_0213e434 + 0x46dc + (idx << 6), 0x40);
    f.a                  = 0x80;
    *(s32 *) (r5 + 0xbc) = func_0203d3e0(&f, 0x10);
    f.a                  = f.a - 0x10;
    *(s32 *) (r5 + 0xac) = func_02046880(*(s32 *) (r5 + 0xbc) * 2, 3, 4);
    func_020abad4(&f, *(s32 *) (r5 + 0xac), r5 + 0xbc);
    *(s32 *) (r5 + 0xb4) = *(s32 *) (r5 + 0xac);
    func_0203d5c4(&f);
    func_020d5268(*(u16 *) (data_0212558c + 0x20));
    func_020d62f0();
    r4                     = *(u8 **) (data_021424e0 + r5[0xc0] * 4);
    *(u8 **) data_021424d4 = r4;
    r6                     = r4[0x26];
    while (r6 < 0x40) {
        func_020d05c8(r6 & 0xff);
        r6++;
    }
    r4[0x26] = 0x40;
    for (i = 0; i < 3; i++) {
        *(u8 *) ((u8 *) (r4 + (i + 0x20) * (u32) 0x24) + 0x42) = 0x40;
    }
    *(u16 *) (*(u8 **) (r4 + 4) + 0x24) = 0x80;
    (*(u8 **) (r4 + 4))[0x29]           = 0x20;
    r5[7]                               = 1;
    func_020a93d8(r5 + 0xa4, 1);
    r5[0xd]              = 0;
    *(s32 *) (r4 + 0x14) = *(s32 *) (*(u8 **) (r5 + 0xa4) + 0x10);
    *(u16 *) r5          = (u16) (*(u8 *) *(u8 **) (r4 + 0x14) + 1);
    *(s32 *) (r4 + 0x14) = *(s32 *) (r4 + 0x14) + 1;
    *(u16 *) (r4 + 0x22) = 0x100;
    func_020d4d08((s32) func_020a7850);
    func_020d62a0();
    func_0203d674(&f);
}
