/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *data_0213e580;

s32 func_01ffaf28(void *a, s32 b, s32 c, u8 d);
void func_01ffabc8(void *a, s32 b, s32 c);
void func_020117e8(void *a, s32 b, void *c, s32 d);
void func_02018acc(void *a);
void func_0201ca08(void *a);
void func_02028278(void *a);
void *func_020523dc(s32 a, s32 b);

typedef enum {
    MK = 0x3000
} MKE;
typedef enum {
    ONE = 1
} ONEE;

void func_02041a08(void *arg0, u8 *arg1) {
    u8 *a1 = arg1;
    u8 *r4;
    u8 fr[0x94];
    s32 cz;
    s32 cy;
    s32 cx;
    s32 k;
    u8 t7;
    u8 b8;
    ONEE one;

    t7 = a1[7];
    if (a1[6] == 0xFF) {
        r4 = *(u8 **) ((u8 *) data_0213e580 + 0xF8);
    } else {
        r4 = func_020523dc(*(s32 *) (*(u8 **) ((u8 *) arg0 + 4) + 0x28) + a1[6] * 8, t7);
    }
    if (r4 == NULL) {
        return;
    }
    *(s32 *) (fr + 0x30) = ((s16 *) a1)[0] << 12;
    *(s32 *) (fr + 0x34) = ((s16 *) a1)[1] << 12;
    *(s32 *) (fr + 0x38) = ((s16 *) a1)[2] << 12;

    if (*(u16 *) (r4 + 0xC) == 1) {
        func_0201ca08(fr + 0x3C);
        k                    = 0x8000;
        cx                   = *(s32 *) (fr + 0x30);
        cy                   = *(s32 *) (fr + 0x34);
        cz                   = *(s32 *) (fr + 0x38);
        *(s32 *) (fr + 0x14) = cx;
        *(s32 *) (fr + 0x4C) = cx;
        *(s32 *) (fr + 0x18) = cy;
        *(s32 *) (fr + 0x50) = cy;
        *(s32 *) (fr + 0x1C) = cz;
        *(s32 *) (fr + 0x54) = cz;
        *(s32 *) (fr + 0x00) = k;
        *(s32 *) (fr + 0x08) = k;
        *(s32 *) (fr + 0x60) = k;
        *(u8 *) (fr + 0x6C)  = a1[8];
        *(u16 *) (fr + 0x68) = a1[9];
        if (*(u16 *) (fr + 0x68) == 0x3F) {
            MKE m                = MK;
            s64 p                = (s64) (*(s32 *) (fr + 0x64)) * m + 0x800;
            s32 q                = (s32) (p >> 12);
            *(s32 *) (fr + 0x04) = m;
            *(s32 *) (fr + 0x0C) = m;
            *(s32 *) (fr + 0x10) = q;
            *(s32 *) (fr + 0x20) = q;
            *(s32 *) (fr + 0x64) = q;
        }
        func_020117e8(r4, 0x1B, fr + 0x3C, 0);
        func_02018acc(fr + 0x3C);
        return;
    }

    func_02028278(fr + 0x70);
    one                    = ONE;
    cx                     = *(s32 *) (fr + 0x30);
    cy                     = *(s32 *) (fr + 0x34);
    cz                     = *(s32 *) (fr + 0x38);
    *(u8 *) (fr + 0x92)    = one;
    *(s32 *) (fr + 0x24)   = cx;
    *(s32 *) (fr + 0x80)   = cx;
    *(s32 *) (fr + 0x28)   = cy;
    *(s32 *) (fr + 0x84)   = cy;
    *(s32 *) (fr + 0x2C)   = cz;
    *(s32 *) (fr + 0x88)   = cz;
    *(void **) (fr + 0x8C) = *(void **) ((u8 *) data_0213e580 + 0xF8);
    b8                     = a1[8];
    *(u8 *) (fr + 0x93)    = b8;
    if (func_01ffaf28(r4 + 0xE0, 0x18, 0, b8) != 0) {
        func_01ffabc8(r4 + 0xE0, 0x18, 1);
    }
    func_020117e8(r4, 0x18, fr + 0x70, 0);
    func_02018acc(fr + 0x70);
}
