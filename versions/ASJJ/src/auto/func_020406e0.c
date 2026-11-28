/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_02139a84[];
extern u8 data_0211e3ec[];
s32 func_0205892c(u8 *a, u32 b, u32 c, u32 d, u32 e, u32 f);
s32 func_020406e0(s32 arg0, u8 *arg1) {
    u32 *ip;
    u8 *q;
    u32 m;
    u32 k;
    ip                             = (u32 *) (data_0211e3ec + arg1[0] * 8);
    (*(u8 **) data_02139a84)[0x18] = arg1[1];
    if (arg1[2] != 0) {
        m                    = ip[1];
        q                    = *(u8 **) data_02139a84;
        *(u32 *) (q + 0xe38) = ip[0];
        *(u32 *) (q + 0xe3c) = m;
        q[0xe40]             = 0;
        return 0;
    }
    return func_0205892c(*(u8 **) data_02139a84, ip[0], ip[1], 0, 0, 1);
}
