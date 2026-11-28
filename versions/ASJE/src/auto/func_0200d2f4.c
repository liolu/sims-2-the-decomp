/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200d474(u8 *, u8 *);
s32 func_0200d564(s32, s32);
s32 func_0200d6e0(s32 *, s32 *);
s32 func_0200d800(s32, s32);
s32 func_0200d9cc(s32, s32);
s32 func_0200db84(s32, s32);

s32 func_0200d2f4(void *arg0, void *arg1) {
    s32 temp_r2;

    temp_r2 = (M2C_FIELD(arg0, s8 *, 0x13) * 6) + M2C_FIELD(arg1, s8 *, 0x13);
    switch (temp_r2) {
        case 0:
            return func_0200db84((s32) arg0, (s32) arg1);
        case 5:
            return func_0200d9cc((s32) arg0, (s32) arg1);
        case 3:
            return func_0200d800((s32) arg0, (s32) arg1);
        case 30:
            return func_0200d9cc((s32) arg1, (s32) arg0);
        case 35:
            return func_0200d6e0(arg0, arg1);
        case 33:
            return func_0200d564((s32) arg0, (s32) arg1);
        case 18:
            return func_0200d800((s32) arg1, (s32) arg0);
        case 23:
            return func_0200d564((s32) arg1, (s32) arg0);
        case 21:
            return func_0200d474(arg0, arg1);
        case 4:
        case 22:
        case 24:
        case 27:
        case 28:
        case 29:
        case 34:
            return 0;
        default:
        case 1:
        case 2:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 19:
        case 20:
        case 25:
        case 26:
        case 31:
        case 32:
            return 0;
    }
}
