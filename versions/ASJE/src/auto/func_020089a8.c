/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02008b64(void *a, void *b, void *c);

void func_020089a8(u8 *arg0) {
    u8 c;

    switch (*(arg0 + 0x2F2)) {
        case 1:
            if (*(arg0 + 0x2F1) == 0) {
                func_02008b64(arg0, arg0 + 0x188, arg0 + 0xC0);
            } else {
                func_02008b64(arg0, arg0 + 0xC0, arg0 + 0x188);
            }
            break;
        case 2:
            c = *(arg0 + 0x2F4);
            if (c == 1) {
                func_02008b64(arg0, arg0 + 0xC0, arg0 + 0xC0);
            } else if (c == 2) {
                func_02008b64(arg0, arg0 + 0x188, arg0 + 0x188);
            }
            break;
    }
}
