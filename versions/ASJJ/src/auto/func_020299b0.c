/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_0211dcf0;
extern u8 data_0211dcf4;
void func_020d4950(s32 a, u8 *b);

typedef void (*Fn)(void);

void func_020299b0(u8 *arg0) {
    u8 m;
    s32 f;
    u8 *p;
    if (*(s32 *) (arg0 + 0x9c) != -1) {
        func_020d4950(*(s32 *) (arg0 + 0x9c), *(u8 **) (arg0 + 4) + 0x78);
    }
    switch (arg0[0x2c]) {
        case 1:
            return;
        case 0:
            m = arg0[0x28];
            if (m == 3 || (f = 5, m == f) || (f = 6, m == f)) {
                f = 1;
            } else {
                f = 0;
            }
            if (f != 0) {
                (*(Fn *) (&data_0211dcf0 + m * 12))();
                return;
            }
            if (arg0[0x98] == 0) {
                return;
            }
            (*(Fn *) (&data_0211dcf4 + m * 12))();
            arg0[0x98] = 0;
            return;
        case 2:
            (*(Fn *) (&data_0211dcf0 + arg0[0x28] * 12))();
            return;
    }
}
