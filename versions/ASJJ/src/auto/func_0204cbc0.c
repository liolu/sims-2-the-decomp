/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s8 data_0213d270;
extern s32 data_0213d278;
extern u32 *data_0213d27c;
s8 func_0204c778(void);
s32 func_0204cbc0(s32 arg0, s32 arg1) {
    u32 r;
    u32 *p;
    u32 t;
    if (arg0 == arg1) {
        return arg0;
    }
    data_0213d278 = data_0213d278 - 1;
    if (data_0213d278 < 0) {
        r = func_0204c778();
    } else {
        p             = data_0213d27c;
        data_0213d27c = p + 1;
        t             = *p;
        t             = t ^ (t >> 11);
        t             = t ^ (0x9D2C5680 & (t << 7));
        t             = t ^ (0xEFC60000 & (t << 15));
        r             = t ^ (t >> 18);
        data_0213d270 = r;
    }
    return arg0 + (((s32) ((r & 0x7FFF) * ((arg1 - arg0) + 1))) >> 15);
}
