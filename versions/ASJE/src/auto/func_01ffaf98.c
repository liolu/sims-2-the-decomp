/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 found;
    u8 val;
    u16 pad;
} S;
typedef struct {
    u8 pad[0x15];
    u8 val;
} N;

N *func_01ffae94(void *a, u32 b, void *c);

S func_01ffaf98(void *a, u32 b, void *c) {
    S s;
    N *n;
    s.found = 0;
    s.val   = 0;
    n       = func_01ffae94(a, b, c);
    if (n != 0) {
        s.val   = n->val;
        s.found = 1;
    }
    return s;
}
