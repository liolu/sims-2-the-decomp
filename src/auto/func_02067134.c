/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    s32 v;
} Fx;
void func_02067134(s32 *arg0, s32 *arg1, Fx v) {
    s64 p;
    p     = (s64) *arg1 * v.v;
    p     = p + 0x800;
    *arg0 = (s32) (p >> 12);
}
