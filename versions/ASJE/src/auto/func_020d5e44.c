/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    s32 a;
    s32 b;
    s32 c;
} S12;
void func_0204630c(void *p, s32 c, s32 n);
void func_020d5e44(S12 *arg0) {
    S12 t;
    func_0204630c(&t, 0, 12);
    ((u8 *) &t)[0] = 7;
    *arg0          = t;
}
