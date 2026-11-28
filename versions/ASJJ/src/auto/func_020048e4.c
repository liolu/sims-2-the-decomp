/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef void (*Fn)(void);
extern u8 *data_02138d30;
extern Fn data_021171c0[];
void func_0200591c(u8 *, u8 *);
void func_02005620(u8 *);
void func_020048e4(void) {
    u8 *p = data_02138d30;
    if (p[0x2f4] == 0) {
        if (p[0x2f1] == 0) {
            func_0200591c(p, p + 0xc0);
            return;
        }
        data_021171c0[p[0x2f2]]();
        return;
    }
    if ((p[0x2f1] == 0 && p[0x2f4] == 1) || (p[0x2f1] == 1 && p[0x2f4] == 2)) {
        func_02005620(p);
    }
}
