/* compiler: 1.2/sp3 */
#include "m2c.h"
s32 func_020de7a8(s32);
extern s32 data_02142f74;
extern u32 data_02142f78;
extern s32 **data_02138924;
extern s32 *data_02138920;
s32 func_020e3a70(s32 arg0) {
    u32 i;
    s32 r;
    s32 q;
    arg0          = (arg0 + 0x1F) & ~0x1F;
    r             = func_020de7a8(data_02142f74 + arg0);
    i             = 0;
    data_02142f74 = i;
    if (r != 0) {
        q = r + arg0;
        for (; i < data_02142f78; i++) {
            *data_02138924[i] = q;
            q += data_02138920[i];
        }
    }
    data_02142f78 = 0;
    return r;
}
