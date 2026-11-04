/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e434;

u32 func_0200aac4(u8 *arg0, s32 arg1) {
    u16 ip;
    u16 t;
    u8 *p;
    u32 r2;
    u32 rr;

    ip = *(u16 *) (arg0 + 0xa);
    if (ip <= 0x38) {
        p  = (u8 *) ((s32) data_0213e434 + 0x21dc) + ip * 0x2c;
        r2 = p[0x1a];
        if (r2 != 0) {
            return (u16) (arg1 + 0xdd + (r2 << 2));
        }
    }
    t = (u16) (ip + 0xffc5);
    if (t <= 1) {
        switch (arg1) {
            case 0:
                return 0x96;
            case 1:
            case 2:
            case 3:
                return 0x95;
            case 5:
                return 0x97;
            case 4:
            default:
                return 0x95;
        }
    }
    switch (arg1) {
        case 0:
            return 3;
        case 1:
            return 0;
        case 2:
        case 3:
            return 1;
        case 5:
            rr = 0x3f;
            if (ip != 0x39) {
                return rr;
            }
            if (data_0213e434[0x4000 + 0x7ca] == 0xd) {
                rr = 0xae;
            }
            return rr;
        case 4:
        default:
            return 0;
    }
}
