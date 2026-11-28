/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0211fa2c;
extern u8 data_0211fa34;
extern u8 data_0213e2f4;

s32 func_02077834(u8 *arg0) {
    s32 type;
    s32 ip;
    s32 lim;
    s32 bound;
    s32 cur;

    type = arg0[0];
    if (type == 4) {
        return 0;
    }
    if (type == 0 && (arg0[1] & 1) != 1) {
        return 1;
    }
    lim = ((u8 *) &data_0211fa2c)[type * 0x114];
    ip  = arg0[0x24] + 1;
    if (ip >= lim) {
        if (type == 3) {
            return 1;
        }
        type = type + 1;
        ip   = 0;
    }
    bound = *(s32 *) ((u8 *) &data_0211fa34 + type * 0x114 + ip * 8);
    cur   = *(s32 *) (*(u8 **) &data_0213e2f4 + 0x4000 + 0x80c);
    cur   = (s32) ((s64) cur - *(s32 *) (arg0 + 0x28));
    return cur >= bound;
}
