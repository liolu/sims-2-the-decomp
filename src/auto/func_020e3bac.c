/* compiler: 1.2/sp3 */
#include "m2c.h"
s32 func_020de8e4(s32);
extern s32 data_021430b4;
extern u32 data_021430b8;
extern s32 **data_02138a64;
extern s32 *data_02138a60;
s32 func_020e3bac(s32 arg0) {
    u32 i;
    s32 r;
    s32 q;
    arg0          = (arg0 + 0x1F) & ~0x1F;
    r             = func_020de8e4(data_021430b4 + arg0);
    i             = 0;
    data_021430b4 = i;
    if (r != 0) {
        q = r + arg0;
        for (; i < data_021430b8; i++) {
            *data_02138a64[i] = q;
            q += data_02138a60[i];
        }
    }
    data_021430b8 = 0;
    return r;
}
