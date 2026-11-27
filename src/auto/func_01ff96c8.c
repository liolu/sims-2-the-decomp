/* compiler: 1.2/sp2p3 -inline auto,depth=5 */
#include "m2c.h"

typedef struct N {
    u8 p[0xc];
    struct N *parent;
} N;

s32 func_01ff96c8(void *arg0, N *n, N *t) {
    if (n == 0 || t == 0 || (n = n->parent) == 0) {
        return 0;
    }
    if (n == t) {
        return 1;
    }
    return func_01ff96c8(arg0, n, t);
}
