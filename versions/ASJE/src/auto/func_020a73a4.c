/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 a;
    u16 b;
} U16Pair;
typedef struct {
    u8 a;
    u8 b;
    u8 c;
    u8 d;
} U8Quad;
typedef struct {
    u16 v;
} U16One;

M2C_UNK func_0203cf38(s32);
M2C_UNK func_0203ce4c(s32);
M2C_UNK func_0203d190(s32, U16One);
M2C_UNK func_0203cb90(s32, s32);
M2C_UNK func_0203e1c4(s32, s32, s32, s32, s32, s32, U16Pair, U8Quad, s32);
u32 func_02052210();
M2C_UNK func_02049b90(s32, void *);
M2C_UNK func_0203f050(s32, s32, s32, s32);
void *func_02046814(s32, s32, s32);
void *func_02046a54(void *, s32);
M2C_UNK func_020468cc(void *, void *, s32);
M2C_UNK func_020168a4(void *, s32);

extern u8 data_02125420;
extern u8 data_02125428;
extern u8 data_02125648;

void func_020a73a4(void *arg0) {
    U16Pair p14;
    U8Quad q18;
    U16Pair p1c;
    U8Quad q20;
    U16Pair p24;
    U8Quad q28;
    U16Pair p2c;
    U8Quad q30;
    u8 *zb;
    u16 *zh;
    s32 r5;
    s32 v;
    s32 i;
    u8 *p;
    void *t;

    func_0203cf38(0);
    func_0203ce4c(0x1000);
    func_0203d190(0, *(U16One *) &data_02125420);
    func_0203cb90(0, 0);
    func_0203d190(1, *(U16One *) (&data_02125420 + 2));
    zb    = (u8 *) &q28;
    zb[0] = 0;
    zb[1] = 0;
    zb[2] = 0;
    zb[3] = 0;
    zh    = (u16 *) &p24;
    zh[0] = 0;
    zh[1] = 0;
    func_0203e1c4(1, 0x142A, 1, 0, 0, 0, p24, q28, 3);
    func_0203cb90(1, 0);
    func_0203d190(2, *(U16One *) (&data_02125420 + 4));
    zb    = (u8 *) &q30;
    zb[0] = 0;
    zb[1] = 0;
    zb[2] = 0;
    zb[3] = 0;
    zh    = (u16 *) &p2c;
    zh[0] = 0;
    zh[1] = 0;
    func_0203e1c4(2, 0x13C8, 0xA, 0, 0, 0, p2c, q30, 0);
    switch (func_02052210()) {
        case 0:
            break;
        case 1:
            r5 = 0;
            break;
        case 2:
            r5 = 1;
            break;
        case 3:
            r5 = 2;
            break;
        case 4:
            r5 = 3;
            break;
        case 5:
            r5 = 5;
            break;
    }
    v     = r5 * 2 + 0x1B;
    q18.a = 0;
    q18.b = v;
    q18.c = 0xE;
    q18.d = 2;
    p14.a = 0x12;
    p14.b = 0;
    func_0203e1c4(2, 0x13C8, 0xA, 0, 0, 0, p14, q18, 5);
    q20.a = 0xE;
    q20.b = v;
    q20.c = 4;
    q20.d = 2;
    p1c.a = 0;
    p1c.b = 0xF;
    func_0203e1c4(2, 0x13C8, 0xA, 0, 0, 0, p1c, q20, 5);
    p = &data_02125428;
    i = 0;
    do {
        func_02049b90(i, p);
        i++;
        p += 2;
    } while (i < 8);
    func_0203f050(0x13CE, 2, 0x61, 2);
    t = func_02046814(8, 3, 4);
    if (t != 0) {
        t = func_02046a54(t, 0x2A);
    }
    *(void **) ((u8 *) arg0 + 0x24) = t;
    func_020468cc(*(void **) ((u8 *) arg0 + 0x24), &data_02125648, 0x2A);
    i = 0;
    do {
        switch (i - 0x1B) {
            case 0:
                v = 2;
                break;
            case 2:
                v = 2;
                break;
            case 5:
                v = 2;
                break;
            case 7:
                v = 2;
                break;
            case 9:
                v = 2;
                break;
            default:
                v = 3;
                break;
        }
        func_020168a4((*(void ***) *(void **) ((u8 *) arg0 + 0x24))[i], v);
        i++;
    } while (i < 0x2A);
}
