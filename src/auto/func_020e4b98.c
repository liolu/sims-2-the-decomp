/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_020e4b98(s32 *p) {
    s32 a = p[0] + p[4];
    s32 c = p[1] + p[5];
    s32 e = p[0] - p[4];
    s32 g = p[1] - p[5];
    s32 b = p[2] + p[6];
    s32 h = p[2] - p[6];
    s32 d = p[3] + p[7];
    s32 f = p[3] - p[7];
    p[0]  = a + b;
    p[1]  = c + d;
    p[4]  = a - b;
    p[5]  = c - d;
    p[2]  = e + f;
    p[3]  = g - h;
    p[6]  = e - f;
    p[7]  = g + h;
}
