/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213e42c;
extern u8 data_0213e2f4;
extern s32 func_020832d0(s32, s32);
extern void func_0208327c(s32, s32, void *, s32);
extern void func_02063e10(void *);

void func_0202bb30(void *arg0) {
    s32 sp[0x14];
    u8 *o;
    u8 *P;
    s32 v;
    s32 flag;
    s32 r0;

    o = (u8 *) arg0;
    if (*(s8 *) (*(u8 **) (o + 4) + 0x148) == 1 && *(s16 *) (o + 0x28) == -1) {
        r0 = func_020832d0(*(s32 *) &data_0213e42c, 1);
        if (r0 == 2) {
            sp[0] = *(s32 *) (o + 4);
            sp[1] = 0x64;
            func_0208327c(*(s32 *) &data_0213e42c, 1, (void *) sp, 0x64);
        }
        func_02063e10(*(u8 **) &data_0213e2f4 + 0x4620);
        *(s16 *) (o + 0x28) = 0x64;
    }
    if (*(s16 *) (o + 0x28) == -1) {
        return;
    }
    *(s16 *) (o + 0x28) = *(s16 *) (o + 0x28) - 1;
    sp[2]               = 0x28;
    sp[4]               = 0x28;
    *(s32 *) (o + 0x2c) = *(s32 *) (o + 0x2c) - 0x28;
    P                   = *(u8 **) (o + 4);
    v                   = *(s32 *) (o + 0x2c);
    sp[15]              = v;
    sp[8]               = v;
    sp[7]               = v;
    sp[6]               = v;
    sp[16]              = v;
    sp[17]              = v;
    sp[18]              = v;
    if (v != (sp[9] = *(s32 *) (P + 0x90)) || v != (sp[10] = *(s32 *) (P + 0x94)) || v != (sp[11] = *(s32 *) (P + 0x98))) {
        flag = 1;
    } else {
        flag = 0;
    }
    if (flag != 0) {
        sp[12]              = sp[16];
        *(s32 *) (P + 0x90) = sp[12];
        sp[13]              = sp[17];
        *(s32 *) (P + 0x94) = sp[13];
        sp[14]              = sp[18];
        *(s32 *) (P + 0x98) = sp[14];
        P[0xdc]             = 1;
    }
    if (*(s16 *) (o + 0x28) != 0) {
        return;
    }
    P                   = *(u8 **) (o + 4);
    *(u32 *) (P + 4)    = *(u32 *) (P + 4) | 0x82;
    sp[3]               = 0x1000;
    sp[5]               = 0x1000;
    *(s32 *) (o + 0x2c) = 0x1000;
    *(s16 *) (o + 0x28) = -1;
    o[0x13]             = 1;
}
