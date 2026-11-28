/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    s32 a;
    s32 b;
    s32 c;
} S12;
void func_02046398(void *p, s32 c, s32 n);
void func_020d5a6c(S12 *arg0) {
    S12 t;
    func_02046398(&t, 0, 12);
    ((u8 *) &t)[0] = 7;
    *arg0          = t;
}
