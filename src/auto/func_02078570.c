/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_0204d298(void *, s32);

void func_02078570(u8 *arg0) {
    s32 temp_r8;
    u8 *temp_r7;
    s32 temp_r7_2;
    s32 temp_r6;
    s32 temp_r5;
    s32 temp_r6_2;
    s32 temp_r4;
    u8 *temp_r6_3;
    u8 *temp_r5_2;

    temp_r7 = arg0;
    temp_r8 = 0;
    do {
        func_0204d298(temp_r7 + 0x1A, 1);
        func_0204d298(temp_r7 + 0x1B, 1);
        func_0204d298(temp_r7 + 0x1C, 1);
        func_0204d298(temp_r7 + 0x1D, 1);
        func_0204d298(temp_r7 + 0x14, 1);
        func_0204d298(temp_r7 + 0x20, 4);
        func_0204d298(temp_r7 + 0x4, 1);
        func_0204d298(temp_r7 + 0x8, 1);
        func_0204d298(temp_r7 + 0xC, 1);
        func_0204d298(temp_r7 + 0x10, 1);
        temp_r7 += 0x2C;
        temp_r8++;
    } while (temp_r8 < 0x39);
    func_0204d298(arg0 + 0x9DC, 4);
    func_0204d298(arg0 + 0x9E0, 4);
    temp_r7_2 = 0;
    temp_r6_3 = arg0 + 0x9E4;
    do {
        func_0204d298(temp_r6_3, 8);
        temp_r7_2++;
        temp_r6_3 += 8;
    } while (temp_r7_2 < 5);
    temp_r6   = 0;
    temp_r5_2 = arg0 + 0xA0C;
    do {
        func_0204d298(temp_r5_2, 0x4C);
        temp_r6++;
        temp_r5_2 += 0x4C;
    } while (temp_r6 < 10);
}
