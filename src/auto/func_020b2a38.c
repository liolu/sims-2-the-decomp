/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    s32 v;
} Fx;
void func_020b2a38(s32 *arg0, Fx v) {
    volatile s32 tmp[2];
    s64 p;
    s32 w;
    p      = (s64) *arg0 * v.v;
    p      = p + 0x800;
    w      = (s32) (p >> 12);
    tmp[0] = w;
    tmp[1] = w;
    *arg0  = w;
}
