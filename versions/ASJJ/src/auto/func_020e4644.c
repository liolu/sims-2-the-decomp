/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_020e4644(s32 *p) {
    s32 e = p[0] - p[2];
    s32 g = p[1] - p[3];
    p[0]  = p[0] + p[2];
    p[1]  = p[1] + p[3];
    p[2]  = e;
    p[3]  = g;
}
