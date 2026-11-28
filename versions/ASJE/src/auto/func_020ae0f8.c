/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    s32 v;
} Fx;
s32 func_020f5d7c(s32 a, s32 b);
void func_020ae0f8(s32 *arg0, s32 *arg1, Fx v) {
    *arg0 = func_020f5d7c(*arg1, v.v);
}
