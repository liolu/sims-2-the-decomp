/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_02018aa8(void *);
void func_0202ace0(u8 *arg0, u8 *arg1) {
    volatile s32 tmp[4];
    s32 *s;
    s32 *d;

    s = (s32 *) arg1;
    d = (s32 *) arg0;
    func_02018aa8(arg0 + 24);
    d[10]  = s[4];
    tmp[1] = s[5];
    d[11]  = s[5];
    tmp[2] = s[6];
    d[12]  = s[6];
    tmp[3] = s[7];
    d[13]  = s[7];
    tmp[0] = s[8];
    d[14]  = s[8];
}
