/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 *data_02139a84;
extern s32 data_027e0004;
s32 func_02048104(u8 *);
s32 func_02064254(s32 *arg0) {
    u8 *p;
    u8 *q;
    s32 v;
    if (func_02048104(data_02139a84) != 0 || (p = data_02139a84, *(s32 *) (p + 8) != 0) || *(s32 *) (p + 0xE10) != 0x32 ||
        ((q = *(u8 **) (p + 0xDAC), v = (q != 0) ? *(s32 *) (q + 4) : 0x32) == 0x14) || (*arg0 & 0x80) != 0 ||
        (data_027e0004 & 0x40) == 0x40) {
        return 0;
    }
    return 1;
}
