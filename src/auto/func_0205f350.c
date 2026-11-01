/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern M2C_UNK data_02131f34;
void func_0205f350(u8 *arg0) {
    s32 i = *(s32 *) arg0;
    u8 *p = (u8 *) &data_02131f34;
    u8 *q;
    if (p[i] == 0) {
        return;
    }
    q = arg0 + 8;
    if (q[i] != 0) {
        q[i] = q[i] - 1;
    }
}
