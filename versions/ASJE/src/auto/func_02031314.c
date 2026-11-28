/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02031314(u8 *p) {
    volatile s32 fr[4];
    s32 k;
    u8 t = p[0x2C];

    switch (t) {
        case 0:
            return;
        case 1:
            k                                     = 0x2AA;
            fr[0]                                 = k;
            fr[2]                                 = k;
            *(s32 *) (*(u8 **) (p + 0x28) + 0x14) = k;
            p[0x2D]                               = (u8) (p[0x2D] - 1);
            if (p[0x2D] == 0) {
                p[0x2C] = 0;
            }
            return;
        case 2:
            k                                     = -0x2AA;
            fr[1]                                 = k;
            fr[3]                                 = k;
            *(s32 *) (*(u8 **) (p + 0x28) + 0x14) = k;
            p[0x2D]                               = (u8) (p[0x2D] - 1);
            if (p[0x2D] == 0) {
                p[0x2C] = 0;
            }
            return;
    }
}
