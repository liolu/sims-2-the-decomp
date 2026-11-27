/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0201d124(void *);                      /* extern */
M2C_UNK func_0201d56c(void *);                      /* extern */
M2C_UNK func_020276c8(void *);                      /* extern */
M2C_UNK func_02018acc(void *);                      /* extern */
M2C_UNK func_020117e8(void *, s32, void *, s32);    /* extern */
M2C_UNK func_02018af8(void *, s32, void *, s32);    /* extern */
M2C_UNK func_01ffaf28(void *, s32, s32);            /* extern */
M2C_UNK func_01ffabc8(void *, s32, s32);            /* extern */
M2C_UNK func_02048108(void *, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_02037184(void *);                      /* extern */
M2C_UNK func_02036fb0(void *);                      /* extern */
M2C_UNK func_02036f04(void *);                      /* extern */
M2C_UNK func_0203734c(void *);                      /* extern */
extern u8 data_0211e478;
extern u8 data_0213e580;
extern u8 data_02139fa4;

void func_02037520(u8 *arg0) {
    struct {
        u8 f8;
        u8 pad[3];
        u8 sA[0x3C];
        u8 sC[0x3C];
        u8 sD[0x24];
        u8 sE[0x1C];
    } F;
    u8 *r5;
    u8 *gp;
    u8 *p1;
    s32 r0v;

    if (arg0[0x30] != 0) {
        func_0201d124(F.sA);
        *(volatile u16 *) (F.sA + 0x30) = ((u16 *) &data_0211e478)[*(s32 *) (arg0 + 0x28)];
        *(s32 *) (F.sA + 0x10)          = 0x266;
        if (*(volatile u16 *) (F.sA + 0x30) != 0x135) {
            func_020117e8(*(void **) (arg0 + 4), 3, F.sA, 0);
        }
        func_02018acc(F.sA);
        arg0[0x13] = 1;
        return;
    }
    *(s32 *) (arg0 + 0x34) = 0;
    F.f8                   = 1;
    gp                     = *(u8 **) &data_0213e580;
    r5                     = *(u8 **) (gp + 0xF8);
    func_02018af8(r5 + 0x128, 0x13, &F.f8, 2);
    if (func_01ffaf28(r5 + 0xE0, 0x12, 0) != 0 || func_01ffaf28(r5 + 0xE0, 0x11, 0) != 0 ||
        func_01ffaf28(r5 + 0xE0, 0x13, 0) != 0 || func_01ffaf28(r5 + 0xE0, 0x32, 0) != 0) {
        func_01ffabc8(r5 + 0xE0, 0x12, 0);
        func_01ffabc8(r5 + 0xE0, 0x11, 0);
        func_01ffabc8(r5 + 0xE0, 0x13, 0);
        func_01ffabc8(r5 + 0xE0, 0x32, 1);
        gp = *(u8 **) &data_02139fa4;
        func_02048108(gp, 0xC, 1, 1, *(s32 *) (arg0 + 0x28), *(s32 *) (arg0 + 0x2C));
        arg0[0x13] = 1;
        return;
    }
    gp = *(u8 **) &data_02139fa4;
    p1 = *(u8 **) (gp + 0xDAC);
    if (p1 != NULL) {
        r0v = *(s32 *) (p1 + 4);
    } else {
        r0v = 0x32;
    }
    if (r0v == 0xC) {
        *(s32 *) (p1 + 0x6C) = 2;
    }
    switch (*(s32 *) (arg0 + 0x28)) {
        case 0:
            func_02037184(arg0);
            return;
        case 2:
        case 3:
        case 4:
        case 6:
        case 9:
            func_0201d124(F.sC);
            func_0201d56c(F.sD);
            func_020276c8(F.sE);
            *(u16 *) (F.sE + 0x14)   = 0x4C;
            *(void **) (F.sE + 0x10) = *(void **) (arg0 + 4);
            func_020117e8(*(void **) (arg0 + 4), 0x21, F.sE, 0);
            func_0203734c(arg0);
            func_02018acc(F.sE);
            func_02018acc(F.sD);
            func_02018acc(F.sC);
            return;
        case 1:
        case 5:
        case 7:
            func_02036fb0(arg0);
            return;
        case 8:
            func_02036f04(arg0);
            return;
        default:
            return;
    }
}
