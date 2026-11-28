/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 data_0213e2f4;
void func_020407a8(void *arg0, u8 *arg1) {
    u16 var_ip;
    u8 c;
    s32 i;
    s32 j;
    u8 *b;
    c      = *arg1;
    var_ip = 0;
    switch (c) {
        case 0x4F:
            var_ip = 0x8A;
            break;
        case 0x50:
            var_ip = 0x8B;
            break;
        case 0x52:
            var_ip = 0x8D;
            break;
        case 0xFE:
            var_ip = 0x139;
            break;
    }
    if (var_ip == 0) {
        return;
    }
    b = (u8 *) data_0213e2f4;
    i = 0;
    do {
        if (var_ip == ((u16 *) (b + 0x47A0))[i]) {
            return;
        }
        i++;
    } while (i < 2);
    for (j = 0; j < 2; j++) {
        if (((u16 *) (b + 0x47A0))[j] == 0) {
            ((u16 *) (b + 0x47A0))[j] = var_ip;
            return;
        }
    }
}
