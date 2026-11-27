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

M2C_UNK func_0203cfb0(s32);
M2C_UNK func_0203cec4(s32);
M2C_UNK func_0203d208(s32, U16One);
M2C_UNK func_0203cc08(s32, s32);
M2C_UNK func_0203e23c(s32, s32, s32, s32, s32, s32, U16Pair, U8Quad, s32);
u32 func_02052288();
M2C_UNK func_02049c08(s32, void *);
M2C_UNK func_0203f0c8(s32, s32, s32, s32);
void *func_0204688c(s32, s32, s32);
void *func_02046acc(void *, s32);
M2C_UNK func_02046944(void *, void *, s32);
M2C_UNK func_020168a4(void *, s32);

extern u8 data_0212555c;
extern u8 data_02125564;
extern u8 data_02125784;

void func_020a746c(void *arg0) {
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

    func_0203cfb0(0);
    func_0203cec4(0x1000);
    func_0203d208(0, *(U16One *) &data_0212555c);
    func_0203cc08(0, 0);
    func_0203d208(1, *(U16One *) (&data_0212555c + 2));
    zb    = (u8 *) &q28;
    zb[0] = 0;
    zb[1] = 0;
    zb[2] = 0;
    zb[3] = 0;
    zh    = (u16 *) &p24;
    zh[0] = 0;
    zh[1] = 0;
    func_0203e23c(1, 0x142A, 1, 0, 0, 0, p24, q28, 3);
    func_0203cc08(1, 0);
    func_0203d208(2, *(U16One *) (&data_0212555c + 4));
    zb    = (u8 *) &q30;
    zb[0] = 0;
    zb[1] = 0;
    zb[2] = 0;
    zb[3] = 0;
    zh    = (u16 *) &p2c;
    zh[0] = 0;
    zh[1] = 0;
    func_0203e23c(2, 0x13C8, 0xA, 0, 0, 0, p2c, q30, 0);
    switch (func_02052288()) {
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
    func_0203e23c(2, 0x13C8, 0xA, 0, 0, 0, p14, q18, 5);
    q20.a = 0xE;
    q20.b = v;
    q20.c = 4;
    q20.d = 2;
    p1c.a = 0;
    p1c.b = 0xF;
    func_0203e23c(2, 0x13C8, 0xA, 0, 0, 0, p1c, q20, 5);
    p = &data_02125564;
    i = 0;
    do {
        func_02049c08(i, p);
        i++;
        p += 2;
    } while (i < 8);
    func_0203f0c8(0x13CE, 2, 0x61, 2);
    t = func_0204688c(8, 3, 4);
    if (t != 0) {
        t = func_02046acc(t, 0x2A);
    }
    *(void **) ((u8 *) arg0 + 0x24) = t;
    func_02046944(*(void **) ((u8 *) arg0 + 0x24), &data_02125784, 0x2A);
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
