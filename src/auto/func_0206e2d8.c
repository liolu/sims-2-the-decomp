/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_0206e2d8(s32 *arg0, s32 *arg1) {
    volatile s32 tmp[2];
    s32 a;
    s32 b;
    a       = arg1[0];
    tmp[0]  = a;
    arg0[0] = a;
    b       = arg1[1];
    tmp[1]  = b;
    arg0[1] = b;
}
