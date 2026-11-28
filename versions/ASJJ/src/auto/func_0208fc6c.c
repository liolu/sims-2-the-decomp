/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef union {
    s32 w;
    struct {
        u16 a;
        u8 b;
        u8 c;
    } s;
} U;

typedef struct {
    U A;
    U B;
} Fr;

extern s32 data_02139a84;
extern u8 *data_0213e0a8;
extern u8 *data_0213df5c;
extern s32 func_0204811c(...);
extern s32 func_0204cbc0(s32, s32);
extern s32 func_02082d20(u8 *, s32);
extern s32 func_0208b2c0(u8 *, s32);
extern s32 func_02082a04(u8 *, s32);

s32 func_0208fc6c(u8 *arg0, s32 arg1) {
    Fr f;
    u8 k;

    k = arg0[arg1 + 0x10];
    switch (k) {
        case 0x47:
            func_0204811c(data_02139a84, 0x29, 1, 1, 0, 0);
            break;
        case 4:
            f.B.s.c = f.B.s.c & ~1;
            f.B.s.c = f.B.s.c & ~2;
            f.B.s.b = 0x2D;
            f.B.s.a = 0x58;
            f.B.s.c = f.B.s.c | 4;
            f.A.s.a = func_0204cbc0(0x9A6, 0x9B8);
            f.A.s.b = 0;
            f.A.s.c = 0;
            func_0204811c(data_02139a84, 0xE, 1, *(s32 *) (data_0213e0a8 + 0xF8), f.A, f.B);
            break;
        case 6:
            if (func_02082d20(data_0213df5c + 0x2FAC, *(u16 *) (*(u8 **) (arg0 + 4) + 0xA)) == 0) {
                func_0208b2c0(arg0, 6);
            }
            func_02082a04(data_0213df5c + 0x2FAC, *(u16 *) (*(u8 **) (arg0 + 4) + 0xA));
            return 5;
    }
    return 2;
}
