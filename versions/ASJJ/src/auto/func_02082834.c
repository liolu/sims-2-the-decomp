/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02082834(u8 *arg0, u8 arg1, u16 arg2, u8 arg3) {
    u8 *ip;
    u32 i;

    ip = 0;
    for (i = 0; i < 2; i++) {
        if (arg1 == arg0[0x84 + i * 4]) {
            ip = arg0 + 0x84 + i * 4;
            break;
        }
    }
    if (ip == 0) {
        for (i = 0; i < 2; i++) {
            if (arg0[0x84 + i * 4] == 0x3F) {
                ip = arg0 + 0x84 + i * 4;
                break;
            }
        }
    }
    if (ip == 0) {
        return;
    }
    if (arg2 == 0x14B) {
        ip[0]             = 0x3F;
        *(u16 *) (ip + 2) = 0x14B;
        ip[1]             = 0;
        return;
    }
    ip[0]             = arg1;
    *(u16 *) (ip + 2) = arg2;
    ip[1]             = arg3;
}
