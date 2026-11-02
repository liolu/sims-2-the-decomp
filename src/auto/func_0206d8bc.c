/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_0203d0a4(M2C_UNK);
M2C_UNK func_0206c444(void *);
extern M2C_UNK data_0213e434;
void func_0206d8bc(void *arg0) {
    u8 *base;
    u8 *p;
    s32 flag;
    func_0203d0a4(3);
    base = *(u8 **) &data_0213e434;
    p    = base + 0x18;
    p    = p + 0x2000;
    if (p[0x141]) {
        p[0x141] = 0;
        flag     = 1;
    } else {
        flag = 0;
    }
    if (flag != 0) {
        func_0206c444(arg0);
    }
}
