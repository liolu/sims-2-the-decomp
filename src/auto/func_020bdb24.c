/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020bc480(void *);
M2C_UNK func_020bc508(void *);

void *func_020bdb24(void *arg0) {
    if (*(u8 *) ((u8 *) arg0 + 0x20) != 0) {
        func_020bc480((u8 *) arg0 + 4);
    }
    *(s16 *) ((u8 *) arg0 + 0x14) = 0;
    *(s16 *) ((u8 *) arg0 + 0x16) = 0;
    *(u8 *) ((u8 *) arg0 + 0x1A)  = 0;
    *(u8 *) ((u8 *) arg0 + 0x1B)  = 0;
    *(u8 *) ((u8 *) arg0 + 0x1E)  = 0;
    *(u8 *) ((u8 *) arg0 + 0x1F)  = 0;
    *(s32 *) arg0                 = 0;
    *(u16 *) ((u8 *) arg0 + 0x18) = 0xFFFF;
    *(u8 *) ((u8 *) arg0 + 0x20)  = 0;
    func_020bc508((u8 *) arg0 + 4);
    return arg0;
}
