/* compiler: 1.2/sp3 */
#include "m2c.h"
s32 func_0210ee1c(s32);
s32 func_0210ee64(s32, s32);
s32 func_0210f124(s32, s32);
extern u8 data_021382c4;

s32 func_020dfe6c(s32 arg0) {
    s32 a;
    s32 v;

    a = func_0210ee1c((u32) (arg0 & ~0x10000000) >> 5);
    v = func_0210ee64(a, ((s32 *) &data_021382c4)[arg0 & 31]);
    if ((arg0 & 0x10000000) != 0) {
        v = func_0210f124(0, v);
    }
    return v;
}
