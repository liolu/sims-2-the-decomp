/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02005198(void *, void *);
extern u8 *data_02138d30;
extern void (*data_021171a8[])(void);

void func_02004824(void) {
    u8 *p = data_02138d30;
    u8 s4 = p[0x2F4];

    if (s4 == 0) {
        if (p[0x2F1] == 0) {
            func_02005198(p, p + 0xC0);
            return;
        }
        data_021171a8[p[0x2F2]]();
        return;
    }
    if (p[0x2F1] == 0 && s4 == 1) {
        func_02005198(p, p + 0xC0);
        return;
    }
    if (p[0x2F1] != 1) {
        return;
    }
    if (p[0x2F4] != 2) {
        return;
    }
    func_02005198(p, p + 0x188);
}
