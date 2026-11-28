/* compiler: 1.2/sp2p3 -pragma "opt_propagation off" */
#include "m2c.h"
extern s8 data_0213d270;
extern s32 data_0213d278;
extern u32 *data_0213d27c;
s8 func_0204c778(void);
s32 func_0204c934(u32 n) {
    u32 r;
    u32 *p;
    u32 t;
    u32 m;
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
    m = r & 0x7FFF;
    m *= 101;
    if (n < (m >> 15)) {
        return 0;
    }
    return 1;
}
