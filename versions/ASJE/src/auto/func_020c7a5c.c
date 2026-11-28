/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_02140044;
extern s32 data_0214006c;
extern volatile u32 data_02140050;

void func_020fbdd4(u32 arg0);

s32 func_020c7a5c(u32 arg0) {
    s32 n = data_02140044;

    while (data_02140050 != arg0 && data_0214006c == 0 && n > 0) {
        func_020fbdd4(0x101D0);
        data_02140050;
        n--;
    }
    if (data_0214006c != 0 || n == 0) {
        return 0;
    }
    return 1;
}
