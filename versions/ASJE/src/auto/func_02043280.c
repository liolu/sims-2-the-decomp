/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020433e4(M2C_UNK *, s32);
M2C_UNK func_020467cc(M2C_UNK *);

void func_02043280(void *arg0, M2C_UNK *volatile arg1, ...) {
    M2C_UNK *n;
    M2C_UNK *p;
    M2C_UNK *c;
    M2C_UNK **hp;
    s32 t;
    s32 q;

    n = arg1;
    if (n == *(M2C_UNK **) ((u8 *) arg0 + 8)) {
        p  = *(M2C_UNK **) ((u8 *) n + 4);
        hp = (M2C_UNK **) ((u8 *) arg0 + 8);
        if (p != NULL) {
            c = *(M2C_UNK **) p;
            if (c != NULL) {
                do {
                    p = c;
                    c = *(M2C_UNK **) c;
                } while (c != NULL);
            }
            arg1 = p;
        } else {
            q = *(s32 *) ((u8 *) n + 8) & ~1;
            if (n != *(M2C_UNK **) q) {
                do {
                    arg1 = (M2C_UNK *) q;
                    t    = q;
                    q    = *(s32 *) ((u8 *) t + 8) & ~1;
                } while (t != *(s32 *) q);
            }
            arg1 = (M2C_UNK *) q;
        }
        *hp = arg1;
    }
    func_020433e4(n, *(s32 *) ((u8 *) arg0 + 4));
    func_020467cc(n);
    *(s32 *) ((u8 *) arg0 + 0) = *(s32 *) ((u8 *) arg0 + 0) - 1;
}
