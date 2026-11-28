/* compiler: 1.2/sp2p3 */
#include "m2c.h"
u8 *func_0205219c(u8 *arg0, u8 *arg1) {
    u8 *p;
    u8 *s;
    u8 c;

    p = arg0;
    s = arg1;
    c = *p;
    while (c != 0) {
        p++;
        c = *p;
    }
    c = *s;
    while (c != 0) {
        *p = *s;
        p++;
        s++;
        c = *s;
    }
    *p = c;
    return arg0;
}
