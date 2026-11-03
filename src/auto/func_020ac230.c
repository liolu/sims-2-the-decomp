/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_021259e4;
extern u8 data_02125a1c;
void func_0203d514(void *, u8, s32);
void func_0203d584(void *, u8);

void func_020ac230(u8 *arg0, void *arg1) {
    u8 idx  = arg0[0];
    u8 kind = *(&data_021259e4 + idx);
    u8 r6;
    switch (kind) {
        case 0:
            func_0203d514(arg1, arg0[1], 3);
            break;
        case 2:
        case 3:
            func_0203d514(arg1, arg0[1], 5);
            break;
        case 4:
            r6 = *(&data_02125a1c + idx);
            func_0203d514(arg1, r6, 2);
            if (r6 == 1) {
                func_0203d514(arg1, arg0[1], 1);
            } else if (r6 == 2) {
                func_0203d514(arg1, arg0[1], 2);
            } else if (r6 == 3) {
                func_0203d584(arg1, arg0[1]);
            }
            break;
    }
}
