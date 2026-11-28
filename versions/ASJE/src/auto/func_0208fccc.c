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

extern s32 data_02139e64;
extern u8 *data_0213e440;
extern u8 *data_0213e2f4;
extern s32 func_02048090(...);
extern s32 func_0204cb3c(s32, s32);
extern s32 func_02082df0(u8 *, s32);
extern s32 func_0208b35c(u8 *, s32);
extern s32 func_02082ad4(u8 *, s32);

s32 func_0208fccc(u8 *arg0, s32 arg1) {
    Fr f;
    u8 k;

    k = arg0[arg1 + 0x10];
    switch (k) {
        case 0x47:
            func_02048090(data_02139e64, 0x29, 1, 1, 0, 0);
            break;
        case 4:
            f.B.s.c = f.B.s.c & ~1;
            f.B.s.c = f.B.s.c & ~2;
            f.B.s.b = 0x2D;
            f.B.s.a = 0x58;
            f.B.s.c = f.B.s.c | 4;
            f.A.s.a = func_0204cb3c(0x9A6, 0x9B8);
            f.A.s.b = 0;
            f.A.s.c = 0;
            func_02048090(data_02139e64, 0xE, 1, *(s32 *) (data_0213e440 + 0xF8), f.A, f.B);
            break;
        case 6:
            if (func_02082df0(data_0213e2f4 + 0x2FA4, *(u16 *) (*(u8 **) (arg0 + 4) + 0xA)) == 0) {
                func_0208b35c(arg0, 6);
            }
            func_02082ad4(data_0213e2f4 + 0x2FA4, *(u16 *) (*(u8 **) (arg0 + 4) + 0xA));
            return 5;
    }
    return 2;
}
