/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 x, y, z;
} Vec;
void func_01ffc22c(s32 *arg0, Vec *v) {
    *arg0 = (s32) (((s64) v->x * v->x + (s64) v->y * v->y + (s64) v->z * v->z + 0x800) >> 12);
}
