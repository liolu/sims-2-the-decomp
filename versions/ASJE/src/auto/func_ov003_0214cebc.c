/* compiler: 1.2/sp3 -O2,p */
#include "m2c.h"

M2C_UNK func_02046820();

void func_ov003_0214cebc(u8 *arg0) {
    s32 i;

    i = 0;
    do {
        s32 *p = *(s32 **) (arg0 + i * 4 + 16);
        i += 1;
        p[1] &= ~1;
    } while (i < 8);
    func_02046820(arg0 + 8, 0);
}
