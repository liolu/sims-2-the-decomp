/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_02125510;
extern u8 data_02125548;
void func_0203d548(void *, u8, s32);
void func_0203d5b8(void *, u8);

void func_020ac080(u8 *arg0, void *arg1) {
    u8 idx  = arg0[0];
    u8 kind = *(&data_02125510 + idx);
    u8 r6;
    switch (kind) {
        case 0:
            func_0203d548(arg1, arg0[1], 3);
            break;
        case 2:
        case 3:
            func_0203d548(arg1, arg0[1], 5);
            break;
        case 4:
            r6 = *(&data_02125548 + idx);
            func_0203d548(arg1, r6, 2);
            if (r6 == 1) {
                func_0203d548(arg1, arg0[1], 1);
            } else if (r6 == 2) {
                func_0203d548(arg1, arg0[1], 2);
            } else if (r6 == 3) {
                func_0203d5b8(arg1, arg0[1]);
            }
            break;
    }
}
