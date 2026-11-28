/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 pad[0x40];
    s32 f40;
    s32 f44;
    s32 f48;
    s32 f4c;
    s32 f50;
    s32 f54;
} Ctx;

extern Ctx data_02142ee0;

s32 func_020df6f4(s32, s32, s32, s32, s32, s32, s32, s32);

void func_020df62c(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    if (func_020df6f4(a0, a1, a2, a3, a4, a5, a6, a7) == 0) {
        return;
    }
    data_02142ee0.f40 = ((1 << a5) >> 1) << 16;
    data_02142ee0.f48 = ((1 << a6) >> 1) << 16;
    data_02142ee0.f50 = ((1 << a7) >> 1) << 16;
    data_02142ee0.f44 = ((1 << a5) >> 2) | ((((1 << a5) * 3) >> 2) << 16);
    data_02142ee0.f4c = ((1 << a6) >> 2) | ((((1 << a6) * 3) >> 2) << 16);
    data_02142ee0.f54 = ((1 << a7) >> 2) | ((((1 << a7) * 3) >> 2) << 16);
}
