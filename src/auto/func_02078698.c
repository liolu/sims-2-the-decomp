/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204d3a8(void *, M2C_UNK);             /* extern */

void func_02078698(void *arg0) {
    s32 var_r6_2;
    s32 var_r7;
    s32 var_r9;
    void *var_r5;
    void *var_r6;
    void *var_r8;

    var_r8 = arg0;
    var_r9 = 0;
    do {
        func_0204d3a8(var_r8 + 0x1A, 1);
        func_0204d3a8(var_r8 + 0x1B, 1);
        func_0204d3a8(var_r8 + 0x1C, 1);
        func_0204d3a8(var_r8 + 0x1D, 1);
        func_0204d3a8(var_r8 + 0x14, 1);
        func_0204d3a8(var_r8 + 0x20, 4);
        func_0204d3a8(var_r8 + 4, 1);
        func_0204d3a8(var_r8 + 8, 1);
        func_0204d3a8(var_r8 + 0xC, 1);
        func_0204d3a8(var_r8 + 0x10, 1);
        var_r9 += 1;
        if (M2C_FIELD(var_r8, s32 *, 0x10) == 0xA) {
            M2C_FIELD(var_r8, s32 *, 0x10) = 0;
        }
        var_r8 += 0x2C;
    } while (var_r9 < 0x39);
    M2C_FIELD(arg0, s8 *, 0xD04) = 0;
    func_0204d3a8(arg0 + 0x9DC, 4);
    func_0204d3a8(arg0 + 0x9E0, 4);
    var_r7 = 0;
    var_r6 = arg0 + 0x9E4;
    do {
        func_0204d3a8(var_r6, 8);
        var_r7 += 1;
        var_r6 += 8;
    } while (var_r7 < 5);
    var_r6_2 = 0;
    var_r5   = arg0 + 0xA0C;
    do {
        func_0204d3a8(var_r5, 0x4C);
        var_r6_2 += 1;
        var_r5 += 0x4C;
    } while (var_r6_2 < 0xA);
}
