/* compiler: 1.2/sp3 */
#include "m2c.h"
s32 func_020de3d0(s32);
extern s32 data_02142bd4;
extern u32 data_02142bd8;
extern s32 **data_02138550;
extern s32 *data_0213854c;
s32 func_020e3698(s32 arg0) {
    u32 i;
    s32 r;
    s32 q;
    arg0          = (arg0 + 0x1F) & ~0x1F;
    r             = func_020de3d0(data_02142bd4 + arg0);
    i             = 0;
    data_02142bd4 = i;
    if (r != 0) {
        q = r + arg0;
        for (; i < data_02142bd8; i++) {
            *data_02138550[i] = q;
            q += data_0213854c[i];
        }
    }
    data_02142bd8 = 0;
    return r;
}
