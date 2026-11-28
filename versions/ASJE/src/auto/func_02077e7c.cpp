/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" u8 *data_0213e2f4;

extern "C" s32 func_02077e7c(u8 *arg0, s32 arg1) {
    s32 res = 1;
    u32 idx;
    u8 *e;
    if (arg1 == 0x14) {
        u8 st = (data_0213e2f4 + 0x2000)[0xF78];
        if (st == 1) {
            return 0;
        }
        if (st == 2) {
            return 0;
        }
        if (st == 3) {
            return 0;
        }
    }
    idx = 0;
    do {
        e = arg0 + (idx * 8);
        if (e[0x9E8] != 0x3F) {
            if (arg1 == *(s32 *) (e + 0x9E4)) {
                res = 0;
                break;
            }
        }
        idx = (idx + 1) & 0xFF;
    } while (idx < 5);
    return res;
}
