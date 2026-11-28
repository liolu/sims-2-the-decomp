/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef unsigned char u8;

M2C_UNK func_ov008_0214aa2c();

void func_ov008_0214a16c(u8 *arg0) {
    s32 i;
    s32 *p;

    func_ov008_0214aa2c(arg0);
    i = 0;
    do {
        p = ((s32 **) arg0)[i + 10];
        i += 1;
        p[1] |= 1;
    } while (i < 3);
}
