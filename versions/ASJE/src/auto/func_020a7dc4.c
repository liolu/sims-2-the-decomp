/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213e5b8[];
extern u8 data_0213e2f4[];
extern u8 data_02125450[];
extern u8 data_021423a0[];
extern u8 data_02142394[];
extern u8 func_020a7788[];

u8 *func_02046814();
void func_0204630c(void *, s32, s32);
void func_0203d634(void *);
void func_020d4eac();
void func_0203d580(void *, s32, s32);
u8 *func_02046254(u8 *, u8 *, u32);
s32 func_0203d368(void *, s32);
s32 func_02046808(s32, s32, s32);
void func_020aba0c(void *, s32, void *);
void func_0203d54c(void *);
void func_020d512c(s32);
void func_020d61b4();
void func_020a9310(void *, s32);
void func_020d4bcc(s32);
void func_020d6164();
void func_0203d5fc(void *);
void func_020d048c(s32);

typedef struct {
    s32 a, b, c, d;
} FRS;

void func_020a7dc4(u8 *arg0) {
    FRS f;
    s32 idx;
    u8 *r5;
    u8 *r4;
    s32 r6;
    s32 i;

    idx = (s32) arg0;
    func_0203d634(&f);
    func_020d4eac();
    r5                           = func_02046814(0xc4, 3, 4);
    *(u8 **) (data_0213e5b8 + 8) = r5;
    func_0204630c(r5, 0, 0xc4);
    r5[0xc0] = 2;
    func_0203d580(&f, 0x200, 3);
    func_02046254((u8 *) f.c, *(u8 **) data_0213e2f4 + 0x46dc + (idx << 6), 0x40);
    f.a                  = 0x80;
    *(s32 *) (r5 + 0xbc) = func_0203d368(&f, 0x10);
    f.a                  = f.a - 0x10;
    *(s32 *) (r5 + 0xac) = func_02046808(*(s32 *) (r5 + 0xbc) * 2, 3, 4);
    func_020aba0c(&f, *(s32 *) (r5 + 0xac), r5 + 0xbc);
    *(s32 *) (r5 + 0xb4) = *(s32 *) (r5 + 0xac);
    func_0203d54c(&f);
    func_020d512c(*(u16 *) (data_02125450 + 0x20));
    func_020d61b4();
    r4                     = *(u8 **) (data_021423a0 + r5[0xc0] * 4);
    *(u8 **) data_02142394 = r4;
    r6                     = r4[0x26];
    while (r6 < 0x40) {
        func_020d048c(r6 & 0xff);
        r6++;
    }
    r4[0x26] = 0x40;
    for (i = 0; i < 3; i++) {
        *(u8 *) ((u8 *) (r4 + (i + 0x20) * (u32) 0x24) + 0x42) = 0x40;
    }
    *(u16 *) (*(u8 **) (r4 + 4) + 0x24) = 0x80;
    (*(u8 **) (r4 + 4))[0x29]           = 0x20;
    r5[7]                               = 1;
    func_020a9310(r5 + 0xa4, 1);
    r5[0xd]              = 0;
    *(s32 *) (r4 + 0x14) = *(s32 *) (*(u8 **) (r5 + 0xa4) + 0x10);
    *(u16 *) r5          = (u16) (*(u8 *) *(u8 **) (r4 + 0x14) + 1);
    *(s32 *) (r4 + 0x14) = *(s32 *) (r4 + 0x14) + 1;
    *(u16 *) (r4 + 0x22) = 0x100;
    func_020d4bcc((s32) func_020a7788);
    func_020d6164();
    func_0203d5fc(&f);
}
