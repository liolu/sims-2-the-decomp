/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_0204688c(u32 a, u32 b, u32 c);
void *func_0204a1d8(void *a, void *b, void *c, s32 d);

typedef struct {
    u16 a;
    u16 pad;
    u32 b;
    u32 c;
    u32 d;
} Cfg;

void func_02082f74(void **arg0, u32 *arg1) {
    Cfg cfg;
    void *r;
    cfg.b = 0;
    cfg.c = 0;
    cfg.d = 0;
    cfg.a = 0x21d4;
    r     = func_0204688c(0x1d8, 3, 4);
    if (r != 0) {
        r = func_0204a1d8(r, &cfg.b, &cfg, 1);
    }
    *arg0                           = r;
    *(u32 *) ((u8 *) *arg0 + 0x1d0) = *arg1;
}
