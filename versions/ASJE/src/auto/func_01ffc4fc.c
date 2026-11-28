/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_01ffc4fc(s32 *arg0, s32 *arg1, s32 *arg2) {
    s64 p1;
    s64 p2;
    s64 p3;
    s64 t;
    p1    = (s64) arg1[1] * arg2[1];
    p2    = (s64) arg1[0] * arg2[0];
    p3    = (s64) arg1[2] * arg2[2];
    t     = p2 + p1 + p3 + 0x800;
    *arg0 = (s32) (t >> 12);
}
