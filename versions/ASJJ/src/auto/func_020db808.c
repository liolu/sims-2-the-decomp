/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 pad[0x54];
    u8 f54[0xb0 - 0x54];
    void *volatile fb0;
} S;

s32 func_020ff3a0(void *);

void func_020db808(S *s) {
    void *p;
    if (s->fb0 != NULL) {
        return;
    }
    p = s->fb0 ? s->fb0 : s->f54;
    func_020ff3a0(p);
}
